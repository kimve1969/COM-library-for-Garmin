// Application.cpp : Implementation of CApplication
#include "stdafx.h"
#include "Garmin.h"
#include "Application.h"

/////////////////////////////////////////////////////////////////////////////
// CApplication

STDMETHODIMP CApplication::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IApplication
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CApplication::FinalConstruct(void)
{
	// TODO: Add your implementation code here
	m_ptrCommunication	= NULL;
	m_ptrProductData	= NULL;
	m_ptrProtocolArray	= NULL;

	// FALSE - return types IBodyPacket, TRUE - IDXXX_Type
	m_bNative			= FALSE;

	return S_OK;
}

// 
STDMETHODIMP_(void) CApplication::FinalRelease()
{
	if(m_ptrCommunication)	m_ptrCommunication  = NULL;
	if(m_ptrProductData)	m_ptrProductData	= NULL;
	if(m_ptrProtocolArray)	m_ptrProtocolArray	= NULL;
}

STDMETHODIMP CApplication::putref_Communication(IDispatch* newVal)
{
	// TODO: Add your implementation code here
	HRESULT hr = newVal->QueryInterface(IID_ICommunication, (void**)&m_ptrCommunication);
	if(FAILED(hr)) return hr;
	
	// Info product		
	hr = _GetProduct();
	if(FAILED(hr)) return hr;
	
	return S_OK;
}

STDMETHODIMP CApplication::get_ProductData(IDispatch **pVal)
{
	// TODO: Add your implementation code here
	HRESULT hr;

	if(m_ptrCommunication == NULL){
		this->Error("Set Communication property befor read Product Data property!");
		return E_FAIL;
	}

	hr = m_ptrProductData->QueryInterface(IID_IDispatch, (void**)pVal);
	if(FAILED(hr)) return hr;

	return S_OK;
}

STDMETHODIMP CApplication::get_ProtocolArray(IDispatch **pVal)
{
	// TODO: Add your implementation code here
	HRESULT hr;

	if(m_ptrCommunication == NULL){
		this->Error("Set Communication property befor read Protocol Array property!");
		return E_FAIL;
	}

	hr = m_ptrProtocolArray->QueryInterface(IID_IDispatch, (void**)pVal);
	if(FAILED(hr)) return hr;


	return S_OK;
}

STDMETHODIMP CApplication::_GetProduct()
{
	// TODO: Add your implementation code here
	if(m_ptrCommunication == NULL){
		this->Error("Set Communication property befor read ProductData!");
		return E_FAIL;
	}

	HRESULT hr;
		
	IBodyPacketPtr ptrBodyPacketRequest = NULL;
	
	hr = ptrBodyPacketRequest.CreateInstance(CLSID_BodyPacket);
	if(FAILED(hr)) return hr;

	VARIANT var;
	VariantInit(&var);

	var.vt	 = VT_UI1;
	var.bVal = GARMIN_TYPES::L000::Pid_Product_Rqst;

	hr = ptrBodyPacketRequest->put_PacketID(var);
	if(FAILED(hr)) return hr;

	hr = m_ptrCommunication->Send(ptrBodyPacketRequest);
	if(FAILED(hr)) return hr;

	IBodyPacketPtr ptrBodyPacketResponse = NULL;

	/**************************** Get Product Data *******************************************/
	hr = m_ptrCommunication->Reciver((IDispatch**)&ptrBodyPacketResponse);
	if(FAILED(hr)) return hr;

	hr = ptrBodyPacketResponse->get_PacketID(&var);

	if(var.bVal != GARMIN_TYPES::L000::Pid_Product_Data){
		this->Error("expected packet Product Data, but its Packet ID not equal Pid_Product_Data!");
		return E_FAIL;
	}
	
	hr = m_ptrProductData.CreateInstance(CLSID_ProductData);
	if(FAILED(hr)) return hr;

	BYTE	two_bytes[2];

	VARIANT varIndex;
	VariantInit(&varIndex);

	varIndex.vt		= VT_UI1;
	// Product ID
	varIndex.bVal	= 0;
	hr = ptrBodyPacketResponse->Item(varIndex, &var);
	two_bytes[0] = var.bVal;

	varIndex.bVal	= 1;
	hr = ptrBodyPacketResponse->Item(varIndex, &var);
	two_bytes[1] = var.bVal;

	IHelperProductDataPtr ptrHelperProductData = NULL;

	hr = m_ptrProductData->QueryInterface(IID_IHelperProductData, (void**)&ptrHelperProductData);
	if(FAILED(hr)){
		this->Error("Not found IHelperProductData interface!");
		return hr;
	}
	hr = ptrHelperProductData->SetProductID(two_bytes[1]*256+two_bytes[0]);
	if(FAILED(hr)) return hr;

	// Software version
	varIndex.bVal	= 2;
	hr = ptrBodyPacketResponse->Item(varIndex, &var);
	two_bytes[0] = var.bVal;

	varIndex.bVal	= 3;
	hr = ptrBodyPacketResponse->Item(varIndex, &var);
	two_bytes[1] = var.bVal;

	hr = ptrHelperProductData->SetSoftwareVersion(two_bytes[1]*256+two_bytes[0]);
	if(FAILED(hr)) return hr;

	BYTE SizeDescr;
	hr = ptrBodyPacketResponse->get_Count(&var);

	SizeDescr = var.bVal-4;

	// Product description as multiline separated \n and terminated \0
	BYTE *pArrDescr = new BYTE[SizeDescr];

	for(long i=0; i<SizeDescr;i++){
		varIndex.bVal = i+4;
		hr = ptrBodyPacketResponse->Item(varIndex, &var);

		if(var.bVal == '\0'){
			pArrDescr[i] = '\n';
		}
		else{
			pArrDescr[i] = var.bVal;
		}
	}
	pArrDescr[SizeDescr-1] = '\0';

	hr = ptrHelperProductData->SetProductDescription(_bstr_t((const char*)pArrDescr));
	if(FAILED(hr)) return hr;

	delete[] pArrDescr;
	ptrBodyPacketResponse = NULL;

	/****************************** Get Protocol Array *******************************************/
	int		ProductID;
	int		GPSversion;	

	hr = m_ptrProductData->get_product_ID(&ProductID);
	if(FAILED(hr)) return hr;

	hr = m_ptrProductData->get_software_version(&GPSversion);
	if(FAILED(hr)) return hr;

	double	SoftVersion = GPSversion / 100.0;

	VARIANT varLookUpProductID;
	hr = _GetProductCapabilitiesFromTable(ProductID, SoftVersion, PRODUCT_ID, &varLookUpProductID);
	if(FAILED(hr)) return hr;
	
	hr = m_ptrProtocolArray.CreateInstance(CLSID_ProtocolArray);
	if(FAILED(hr)) return hr;

	IHelperProtocolArrayPtr ptrHelperProtocolArray = NULL;

	hr = m_ptrProtocolArray->QueryInterface(IID_IHelperProtocolArray, (void**)&ptrHelperProtocolArray);
	if(FAILED(hr)){
		this->Error("Not found IHelperProtocolArray interface!");
		return hr;
	}

	if(varLookUpProductID.vt != VT_EMPTY && ProductID == varLookUpProductID.iVal){
		// ------------- SET FROM LOOK UP STATIC TABLE 
		ptrHelperProtocolArray->Add(_bstr_t("P000"));
		
		// see PRODUCT_INFO_FIELD enum
		for(int i=(int)PRODUCT_LINK; i<=(int)PRODUCT_ALM_DATA_TYPE;i++){
			hr = _GetProductCapabilitiesFromTable(ProductID, SoftVersion, (PRODUCT_INFO_FIELD)i, &var);
			if(FAILED(hr)) return hr;

			if(var.bstrVal!=_bstr_t("")){
				ptrHelperProtocolArray->Add(_bstr_t(var.bstrVal));
			}
		}
		// A600 Date and Time Initialization Protocol
		ptrHelperProtocolArray->Add(_bstr_t("A600"));
		ptrHelperProtocolArray->Add(_bstr_t("D600"));
		// A700 Position Initialization Protocol
		ptrHelperProtocolArray->Add(_bstr_t("A700"));
		ptrHelperProtocolArray->Add(_bstr_t("D700"));

	}
	else{
		// ------------- REQUEST GPS 
		hr = m_ptrCommunication->Reciver((IDispatch**)&ptrBodyPacketResponse);
		if(FAILED(hr)) return hr;

		hr = ptrBodyPacketResponse->get_PacketID(&var);

		if(var.bVal != GARMIN_TYPES::L000::Pid_Protocol_Array){
			this->Error("expected packet Protocol Array, but its Packet ID not equal Pid_Protocol_Array!");
			return E_FAIL;
		}

		BYTE SizeProtocolData;
		hr = ptrBodyPacketResponse->get_Count(&var);

		SizeProtocolData = var.bVal/3;

		BYTE TagAndData[10]; // as null terminated string, example "L001" and etc

		for(i=0; i<SizeProtocolData ;i++){
			varIndex.bVal = i*3+0;
			hr = ptrBodyPacketResponse->Item(varIndex, &var);
			TagAndData[0] = var.bVal;

			varIndex.bVal = i*3+1;
			hr = ptrBodyPacketResponse->Item(varIndex, &var);
			two_bytes[0] = var.bVal;

			varIndex.bVal = i*3+2;
			hr = ptrBodyPacketResponse->Item(varIndex, &var);
			two_bytes[1] = var.bVal;

			sprintf((char*)&TagAndData[1],"%03d", two_bytes[1]*256+two_bytes[0]);
			ptrHelperProtocolArray->Add(_bstr_t((const char*)TagAndData));
		}

		ptrBodyPacketResponse = NULL;
	}

	/*************** Checking Phisical, Link and Command protocols **********************************/
	char	buff[255];
	BSTR	PhysicalProtocol, LinkProtocol, CommandProtocol;
	
	hr = m_ptrProtocolArray->get_Physical_Protocol(&PhysicalProtocol);
	if(FAILED(hr)) return hr;

	if(_bstr_t(PhysicalProtocol) != _bstr_t("P000")){
		sprintf(buff,"Phisical Protocol %s is unknown!", (char*)_bstr_t(PhysicalProtocol));
		this->Error(buff);
		return E_FAIL;
	}
	SysFreeString(PhysicalProtocol);

	hr = m_ptrProtocolArray->get_Link_Protocol(&LinkProtocol);
	if(FAILED(hr)) return hr;

	if((_bstr_t(LinkProtocol) != _bstr_t("L001")) && (_bstr_t(LinkProtocol) != _bstr_t("L002"))){
		sprintf(buff,"Link Protocol %s is unknown!",(char*)_bstr_t(LinkProtocol));
		this->Error(buff);
		return E_FAIL;
	}
	SysFreeString(LinkProtocol);

	hr = m_ptrProtocolArray->get_Device_Command_Protocol(&CommandProtocol);
	if(FAILED(hr)) return hr;

	if((_bstr_t(CommandProtocol) != _bstr_t("A010")) && (_bstr_t(CommandProtocol) != _bstr_t("A011"))){
		sprintf(buff,"Command Protocol %s is unknown!", (char*)_bstr_t(CommandProtocol));
		this->Error(buff);
		return E_FAIL;
	}
	SysFreeString(CommandProtocol);
		
	return S_OK;
}

/* Get Response as Records */
STDMETHODIMP CApplication::_GetResponseAsRecords(IBodyPacket *pCommand, IBodyPackets **ppBodyCollections){
	char buff[255];
	BYTE two_bytes[2];

	HRESULT		hr;
	_variant_t	varTemp;

	// ----------- Get Request Command Id
	hr = pCommand->Item(_variant_t((long)0), &varTemp);
	if(FAILED(hr)) return hr;
	two_bytes[0] = varTemp;

	hr = pCommand->Item(_variant_t((long)1), &varTemp);
	if(FAILED(hr)) return hr;
	two_bytes[1] = varTemp;

	INT Request_CommandId = two_bytes[1]*256 + two_bytes[0];

	IBodyPacketPtr  ptrBodyPacket = NULL;

	// --------- Get Packet Pid_Records
	hr = m_ptrCommunication->Reciver((IDispatch**)&ptrBodyPacket);
	if(FAILED(hr)) return hr;
	
	_variant_t varPidRecords, varPidXferCmplt;

	hr = ptrBodyPacket->get_PacketID(&varPidRecords);
	if(FAILED(hr)) return hr;
	
	BSTR LinkProtocol;

	hr = m_ptrProtocolArray->get_Link_Protocol(&LinkProtocol);
	if(FAILED(hr)) return hr;

	if( (_bstr_t(LinkProtocol)==_bstr_t("L001") && ((long)varPidRecords)!=GARMIN_TYPES::L001::Pid_Records) ||
		(_bstr_t(LinkProtocol)==_bstr_t("L002") && ((long)varPidRecords)!=GARMIN_TYPES::L002::Pid_Records)){
		this->Error("ERROR FORMAT RECORDS: First packet is not Pid_Records!");
		SysFreeString(LinkProtocol);
		return E_FAIL;
	}
	SysFreeString(LinkProtocol);

	hr = ptrBodyPacket->Item(_variant_t((long)0), &varTemp);
	if(FAILED(hr)) return hr;
	two_bytes[0] = varTemp;

	hr = ptrBodyPacket->Item(_variant_t((long)1), &varTemp);
	if(FAILED(hr)) return hr;
	two_bytes[1] = varTemp;

	INT NumRec = two_bytes[1]*256 + two_bytes[0];

	// --------- Get Records
	IBodyPacketsPtr ptrRecords(CLSID_BodyPackets);
	IDispatchPtr	ptrDispatch = NULL;
	IDispatchPtr	ptrIDXXX_Dispatch = NULL;

 	for(long i=0; i<NumRec ;i++){
 		hr = m_ptrCommunication->Reciver(&ptrDispatch);
 		if(FAILED(hr)) return hr;	
			
		hr = this->_Create_IDXXX_Data_Type(ptrDispatch, &ptrIDXXX_Dispatch);
		if(FAILED(hr)) return hr;			

 		hr = ptrRecords->Add(ptrIDXXX_Dispatch);
		if(FAILED(hr)) return hr;		
 	}
	// --------- Get Packet Pid_Xfer_Cmplt
	hr = m_ptrCommunication->Reciver((IDispatch**)&ptrBodyPacket);
	if(FAILED(hr)) return hr;

	hr = ptrBodyPacket->get_PacketID(&varPidXferCmplt);
	if(FAILED(hr)) return hr;

	hr = m_ptrProtocolArray->get_Link_Protocol(&LinkProtocol);
	if(FAILED(hr)) return hr;

	if( (_bstr_t(LinkProtocol)==_bstr_t("L001") && ((long)varPidXferCmplt)!=GARMIN_TYPES::L001::Pid_Xfer_Cmplt) ||
		(_bstr_t(LinkProtocol)==_bstr_t("L002") && ((long)varPidXferCmplt)!=GARMIN_TYPES::L002::Pid_Xfer_Cmplt)){
		this->Error("ERROR FORMAT RECORDS: Last packet is not Pid_Xfer_Cmplt!");
		SysFreeString(LinkProtocol);
		return E_FAIL;
	}
	SysFreeString(LinkProtocol);

	// --------- Check Response Command Id
	hr = ptrBodyPacket->Item(_variant_t((long)0), &varTemp);
	if(FAILED(hr)) return hr;
	two_bytes[0] = varTemp;

	hr = ptrBodyPacket->Item(_variant_t((long)1), &varTemp);
	if(FAILED(hr)) return hr;
	two_bytes[1] = varTemp;

	INT Response_CommandId = two_bytes[1]*256 + two_bytes[0];

	if(Request_CommandId != Response_CommandId){
		sprintf(buff,"ERROR FORMAT RECORDS: Request Command Id = %d, but Response Command Id = %d !",Request_CommandId, Response_CommandId);
		this->Error(buff);
		return E_FAIL;
	}

	// return 
	hr = ptrRecords->QueryInterface(IID_IBodyPackets, (void**)ppBodyCollections);
	if(FAILED(hr)) return hr;

	return S_OK;
}

STDMETHODIMP CApplication::_GetProductCapabilitiesFromTable(INT ProductID, DOUBLE SoftVersion, PRODUCT_INFO_FIELD field, VARIANT *pVal)
{
	VariantInit(pVal);

	ProductInfo2 ArrayProductInfo[] = {
				/*	ID	  Version	Link	Cmnd			Wpt						Rte						Trk						Prx						Alm		*/
					{7   , 9.99 ,  "L001",  "A010",  "A100",  "D100"   ,  "A200", "D200","D100"   ,   ""     ,   ""     ,   ""    ,   ""    ,  "A500", "D500"},
					{13  , 9.99 ,  "L001",  "A010",  "A100",  "D100"   ,  "A200", "D200","D100"   ,  "A300" , "D300"    ,  "A400", "D400"   ,  "A500", "D500"},
					{14  , 9.99 ,  "L001",  "A010",  "A100",  "D100"   ,  "A200", "D200","D100"   ,   ""     ,   ""     ,  "A400", "D400"   ,  "A500", "D500"},
					{15  , 9.99 ,  "L001",  "A010",  "A100",  "D151"   ,  "A200", "D200","D151"   ,   ""     ,   ""     ,  "A400", "D151"   ,  "A500", "D500"},
					{18  , 9.99 ,  "L001",  "A010",  "A100",  "D100"   ,  "A200", "D200","D100"   ,  "A300" , "D300"    ,  "A400", "D400"   ,  "A500", "D500"},
					{20  , 9.99 ,  "L002",  "A011",  "A100",  "D150"   ,  "A200", "D201","D150"    ,   ""    ,   ""     ,  "A400", "D450"   ,  "A500", "D550"},
					{22  , 9.99 ,  "L001",  "A010",  "A100",  "D152"   ,  "A200", "D200","D152"   ,  "A300" , "D300"    ,  "A400", "D152"   ,  "A500", "D500"},
					{23  , 9.99 ,  "L001",  "A010",  "A100",  "D100"   ,  "A200", "D200","D100"   ,  "A300" , "D300"    ,  "A400", "D400"   ,  "A500", "D500"},
					{24  , 9.99 ,  "L001",  "A010",  "A100",  "D100"   ,  "A200", "D200","D100"   ,  "A300" , "D300"    ,  "A400", "D400"   ,  "A500", "D500"},
					{25  , 9.99 ,  "L001",  "A010",  "A100",  "D100"   ,  "A200", "D200","D100"   ,  "A300" , "D300"    ,  "A400", "D400"   ,  "A500", "D500"},
/*< 4.00 */			{29  , 4.00 ,  "L001",  "A010",  "A100",  "D101"   ,  "A200", "D201","D101"   ,  "A300" , "D300"    ,  "A400", "D101"   ,  "A500", "D500"},
/*>= 4.00*/			{29  , 9.99 ,  "L001",  "A010",  "A100",  "D102"   ,  "A200", "D201","D102"   ,  "A300" , "D300"    ,  "A400", "D102"   ,  "A500", "D500"},
					{31  , 9.99 ,  "L001",  "A010",  "A100",  "D100"   ,  "A200", "D201","D100"   ,  "A300" , "D300"    ,   ""    ,   ""    ,  "A500", "D500"},
					{33  , 9.99 ,  "L002",  "A011",  "A100",  "D150"   ,  "A200", "D201","D150"   ,   ""     ,   ""     ,  "A400", "D450"   ,  "A500", "D550"},
					{34  , 9.99 ,  "L002",  "A011",  "A100",  "D150"   ,  "A200", "D201","D150"   ,   ""     ,   ""     ,  "A400", "D450"   ,  "A500", "D550"},
					{35  , 9.99 ,  "L001",  "A010",  "A100",  "D100"   ,  "A200", "D200","D100"   ,  "A300" , "D300"    ,  "A400", "D400"   ,  "A500", "D500"},
/*< 3.00*/			{36  , 3.00 ,  "L001",  "A010",  "A100",  "D152"   ,  "A200", "D200","D152"   ,  "A300" , "D300"    ,  "A400", "D152"   ,  "A500", "D500"},
/*>= 3.00*/			{36  , 9.99 ,  "L001",  "A010",  "A100",  "D152"   ,  "A200", "D200","D152"   ,  "A300" , "D300"    ,   ""    ,   ""    ,  "A500", "D500"},
					{39  , 9.99 ,  "L001",  "A010",  "A100",  "D151"   ,  "A200", "D201","D151"   ,  "A300" , "D300"    ,   ""    ,   ""    ,  "A500", "D500"},
					{41  , 9.99 ,  "L001",  "A010",  "A100",  "D100"   ,  "A200", "D201","D100"   ,  "A300" , "D300"    ,   ""    ,   ""    ,  "A500", "D500"},
					{42  , 9.99 ,  "L001",  "A010",  "A100",  "D100"   ,  "A200", "D200","D100"   ,  "A300" , "D300"    ,  "A400", "D400"   ,  "A500", "D500"},
					{44  , 9.99 ,  "L001",  "A010",  "A100",  "D101"   ,  "A200", "D201","D101"   ,  "A300" , "D300"    ,  "A400", "D101"   ,  "A500", "D500"},
					{45  , 9.99 ,  "L001",  "A010",  "A100",  "D152"   ,  "A200", "D201","D152"   ,  "A300" , "D300"    ,   ""    ,   ""    ,  "A500", "D500"},
					{47  , 9.99 ,  "L001",  "A010",  "A100",  "D100"   ,  "A200", "D201","D100"   ,  "A300" , "D300"    ,   ""    ,   ""    ,  "A500", "D500"},
					{48  , 9.99 ,  "L001",  "A010",  "A100",  "D154"   ,  "A200", "D201","D154"   ,  "A300" , "D300"    ,   ""    ,   ""    ,  "A500", "D501"},
					{49  , 9.99 ,  "L001",  "A010",  "A100",  "D102"   ,  "A200", "D201","D102"   ,  "A300" , "D300"    ,  "A400", "D102"   ,  "A500", "D501"},
					{50  , 9.99 ,  "L001",  "A010",  "A100",  "D152"   ,  "A200", "D201","D152"   ,  "A300" , "D300"    ,   ""    ,   ""    ,  "A500", "D501"},
					{52  , 9.99 ,  "L002",  "A011",  "A100",  "D150"   ,  "A200", "D201","D150"   ,   ""     ,   ""     ,  "A400", "D450"   ,  "A500", "D550"},
					{53  , 9.99 ,  "L001",  "A010",  "A100",  "D152"   ,  "A200", "D201","D152"   ,  "A300" , "D300"    ,   ""    ,   ""    ,  "A500", "D501"},
					{55  , 9.99 ,  "L001",  "A010",  "A100",  "D100"   ,  "A200", "D201","D100"   ,  "A300" , "D300"    ,   ""    ,   ""    ,  "A500", "D500"},
					{56  , 9.99 ,  "L001",  "A010",  "A100",  "D100"   ,  "A200", "D201","D100"   ,  "A300" , "D300"    ,   ""    ,   ""    ,  "A500", "D500"},
					{59  , 9.99 ,  "L001",  "A010",  "A100",  "D100"   ,  "A200", "D201","D100"   ,  "A300" , "D300"    ,   ""    ,   ""    ,  "A500", "D500"},
					{61  , 9.99 ,  "L001",  "A010",  "A100",  "D100"   ,  "A200", "D201","D100"   ,  "A300" , "D300"    ,   ""    ,   ""    ,  "A500", "D500"},
					{62  , 9.99 ,  "L001",  "A010",  "A100",  "D100"   ,  "A200", "D201","D100"   ,  "A300" , "D300"    ,   ""    ,   ""    ,  "A500", "D500"},
					{64  , 9.99 ,  "L002",  "A011",  "A100",  "D150"   ,  "A200", "D201","D150"   ,   ""     ,   ""     ,  "A400", "D450"   ,  "A500", "D551"},
					{71  , 9.99 ,  "L001",  "A010",  "A100",  "D155"   ,  "A200", "D201","D155"   ,  "A300" , "D300"    ,   ""    ,   ""    ,  "A500", "D501"},
					{72  , 9.99 ,  "L001",  "A010",  "A100",  "D104"   ,  "A200", "D201","D104"   ,  "A300" , "D300"    ,   ""    ,   ""    ,  "A500", "D501"},
					{73  , 9.99 ,  "L001",  "A010",  "A100",  "D103"   ,  "A200", "D201","D103"   ,  "A300" , "D300"    ,   ""    ,   ""    ,  "A500", "D501"},
					{74  , 9.99 ,  "L001",  "A010",  "A100",  "D100"   ,  "A200", "D201","D100"   ,  "A300" , "D300"    ,   ""    ,   ""    ,  "A500", "D500"},
					{76  , 9.99 ,  "L001",  "A010",  "A100",  "D102"   ,  "A200", "D201","D102"   ,  "A300" , "D300"    ,  "A400", "D102"   ,  "A500", "D501"},
/*< 3.01*/			{77  , 3.01 ,  "L001",  "A010",  "A100",  "D100"   ,  "A200", "D201","D100"   ,  "A300" , "D300"    ,  "A400", "D400"   ,  "A500", "D501"},
/*>= 3.01, < 3.50*/	{77  , 3.50 ,  "L001",  "A010",  "A100",  "D103"   ,  "A200", "D201","D103"   ,  "A300" , "D300"    ,  "A400", "D403"   ,  "A500", "D501"},
/*>= 3.50, < 3.61*/	{77  , 3.61 ,  "L001",  "A010",  "A100",  "D103"   ,  "A200", "D201","D103"   ,  "A300" , "D300"    ,   ""    ,   ""    ,  "A500", "D501"},
/*>= 3.61*/			{77  , 9.99 ,  "L001",  "A010",  "A100",  "D103"   ,  "A200", "D201","D103"   ,  "A300" , "D300"    ,  "A400", "D403"   ,  "A500", "D501"},
					{87  , 9.99 ,  "L001",  "A010",  "A100",  "D103"   ,  "A200", "D201","D103"   ,  "A300" , "D300"    ,  "A400", "D403"   ,  "A500", "D501"},
					{88  , 9.99 ,  "L001",  "A010",  "A100",  "D102"   ,  "A200", "D201","D102"   ,  "A300" , "D300"    ,  "A400", "D102"   ,  "A500", "D501"},
					{95  , 9.99 ,  "L001",  "A010",  "A100",  "D103"   ,  "A200", "D201","D103"   ,  "A300" , "D300"    ,  "A400", "D403"   ,  "A500", "D501"},
					{96  , 9.99 ,  "L001",  "A010",  "A100",  "D103"   ,  "A200", "D201","D103"   ,  "A300" , "D300"    ,  "A400", "D403"   ,  "A500", "D501"},
					{97  , 9.99 ,  "L001",  "A010",  "A100",  "D103"   ,  "A200", "D201","D103"   ,  "A300" , "D300"    ,   ""    ,   ""    ,  "A500", "D501"},
					{98  , 9.99 ,  "L002",  "A011",  "A100",  "D150"   ,  "A200", "D201","D150"   ,   ""     ,   ""     ,  "A400", "D450"   ,  "A500", "D551"},
					{100 , 9.99 ,  "L001",  "A010",  "A100",  "D103"   ,  "A200", "D201","D103"   ,  "A300" , "D300"    ,  "A400", "D403"   ,  "A500", "D501"},
					{103 , 9.99 ,  "L001",  "A010",  "A100",  "D103"   ,  "A200", "D201","D103"   ,  "A300" , "D300"    ,  "A400", "D403"   ,  "A500", "D501"},
					{105 , 9.99 ,  "L001",  "A010",  "A100",  "D103"   ,  "A200", "D201","D103"   ,  "A300" , "D300"    ,  "A400", "D403"   ,  "A500", "D501"},
					{106 , 9.99 ,  "L001",  "A010",  "A100",  "D103"   ,  "A200", "D201","D103"   ,  "A300" , "D300"    ,  "A400", "D403"   ,  "A500", "D501"},
					{112 , 9.99 ,  "L001",  "A010",  "A100",  "D152"   ,  "A200", "D201","D152"   ,  "A300" , "D300"    ,   ""    ,   ""    ,  "A500", "D501"}};

	int nElem = sizeof(ArrayProductInfo)/sizeof(ProductInfo2);
	for(int i=0; i<nElem; i++){
		if(ArrayProductInfo[i].ID == ProductID && SoftVersion<ArrayProductInfo[i].Version){
			switch(field){
			case PRODUCT_ID:
				pVal->vt		= VT_I2;
				pVal->iVal	= ArrayProductInfo[i].ID;
				break;
			case PRODUCT_LINK:
				pVal->vt		= VT_BSTR;
				pVal->bstrVal = _bstr_t(ArrayProductInfo[i].LinkProt).copy();
				break;
			case PRODUCT_COMMAND:
				pVal->vt		= VT_BSTR;
				pVal->bstrVal = _bstr_t(ArrayProductInfo[i].CmndProt).copy();
				break;
			case PRODUCT_WPT_PROTOCOL:
				pVal->vt		= VT_BSTR;
				pVal->bstrVal	= _bstr_t(ArrayProductInfo[i].WptProt).copy();
				break;
			case PRODUCT_WPT_DATA_TYPE:
				pVal->vt		= VT_BSTR;
				pVal->bstrVal	= _bstr_t(ArrayProductInfo[i].WptDType).copy();
				break;
			case PRODUCT_RTE_PROTOCOL:
				pVal->vt		= VT_BSTR;
				pVal->bstrVal	= _bstr_t(ArrayProductInfo[i].RteProt).copy();
				break;
			case PRODUCT_RTE_HDR_DATA_TYPE:
				pVal->vt		= VT_BSTR;
				pVal->bstrVal	= _bstr_t(ArrayProductInfo[i].RteHdrDType).copy();
				break;
			case PRODUCT_RTE_WPT_DATA_TYPE:
				pVal->vt		= VT_BSTR;
				pVal->bstrVal	= _bstr_t(ArrayProductInfo[i].RteWptDType).copy();
				break;
			case PRODUCT_TRK_PROTOCOL:
				pVal->vt		= VT_BSTR;
				pVal->bstrVal	= _bstr_t(ArrayProductInfo[i].TrkProt).copy();
				break;
			case PRODUCT_TRK_DATA_TYPE:
				pVal->vt		= VT_BSTR;
				pVal->bstrVal	= _bstr_t(ArrayProductInfo[i].TrkDType).copy();
				break;
			case PRODUCT_PRX_PROTOCOL:
				pVal->vt		= VT_BSTR;
				pVal->bstrVal	= _bstr_t(ArrayProductInfo[i].PrxProt).copy();
				break;
			case PRODUCT_PRX_DATA_TYPE:
				pVal->vt		= VT_BSTR;
				pVal->bstrVal	= _bstr_t(ArrayProductInfo[i].PrxDType).copy();
				break;
			case PRODUCT_ALM_PROTOCOL:
				pVal->vt		= VT_BSTR;
				pVal->bstrVal	= _bstr_t(ArrayProductInfo[i].AlmProt).copy();
				break;
			case PRODUCT_ALM_DATA_TYPE:
				pVal->vt		= VT_BSTR;
				pVal->bstrVal	= _bstr_t(ArrayProductInfo[i].AlmDType).copy();
				break;
			}
			// found and exit look up....
			break;
		}
	}

	// return EMPTY if not found....
	return S_OK;
}

STDMETHODIMP CApplication::_SetPacketAsCommand(IBodyPacket *pPacket){
	if(m_ptrCommunication == NULL ){
		this->Error("Communication property is not set!");
		return E_FAIL;
	}

	BSTR LinkProtocol;
	
	HRESULT hr = m_ptrProtocolArray->get_Link_Protocol(&LinkProtocol);
	if(FAILED(hr)) return hr;

	// Check Link protocol see GetProduct()...
	if(_bstr_t(LinkProtocol) == _bstr_t("L001")){
		SysFreeString(LinkProtocol);
		return pPacket->put_PacketID(_variant_t((BYTE)GARMIN_TYPES::L001::Pid_Command_Data) );
	}
	else if(_bstr_t(LinkProtocol) == _bstr_t("L002")){
		SysFreeString(LinkProtocol);
		return pPacket->put_PacketID(_variant_t((BYTE)GARMIN_TYPES::L002::Pid_Command_Data) );
	}
	SysFreeString(LinkProtocol);

	return S_OK;
}

STDMETHODIMP CApplication::Cmnd_Abort_Transfer()
{
	// TODO: Add your implementation code here
	HRESULT hr = _Cmnd_Get_Transfer(CMND_ABORT_TRANSFER);
	if(FAILED(hr)) return hr;

	return S_OK;
}

STDMETHODIMP CApplication::Cmnd_Turn_Off_Pwr()
{
	// TODO: Add your implementation code here	
	return _Cmnd_Get_Transfer(CMND_TURN_OFF_PWR);
}

STDMETHODIMP CApplication::Cmnd_Start_Pvt_Data()
{
	// TODO: Add your implementation code here
	return _Cmnd_Get_Transfer(CMND_START_PVT_DATA);
}

STDMETHODIMP CApplication::Cmnd_Stop_Pvt_Data()
{
	// TODO: Add your implementation code here
	return _Cmnd_Get_Transfer(CMND_STOP_PVT_DATA);
}

STDMETHODIMP CApplication::Cmnd_Get_Transfer_Alm(IDispatch **ppdisp)
{
	// TODO: Add your implementation code here
	return _Cmnd_Get_Transfer(CMND_TRANSFER_ALM ,ppdisp);
}

STDMETHODIMP CApplication::Cmnd_Get_Transfer_Posn(IDispatch **ppdisp)
{
	// TODO: Add your implementation code here
	return _Cmnd_Get_Transfer(CMND_TRANSFER_POSN ,ppdisp);
}

STDMETHODIMP CApplication::Cmnd_Get_Transfer_Prx(IDispatch **ppdisp)
{
	// TODO: Add your implementation code here
	return _Cmnd_Get_Transfer(CMND_TRANSFER_PRX ,ppdisp);
}

STDMETHODIMP CApplication::Cmnd_Get_Transfer_Rte(IDispatch **ppdisp)
{
	// TODO: Add your implementation code here
	return _Cmnd_Get_Transfer(CMND_TRANSFER_RTE ,ppdisp);
}

STDMETHODIMP CApplication::Cmnd_Get_Transfer_Time(IDispatch **ppdisp)
{
	// TODO: Add your implementation code here
	return _Cmnd_Get_Transfer(CMND_TRANSFER_TIME ,ppdisp);
}

STDMETHODIMP CApplication::Cmnd_Get_Transfer_Trk(IDispatch **ppdisp)
{
	// TODO: Add your implementation code here
	return _Cmnd_Get_Transfer(CMND_TRANSFER_TRK ,ppdisp);
}

STDMETHODIMP CApplication::Cmnd_Get_Transfer_Wpt(IDispatch **ppdisp)
{
	// TODO: Add your implementation code here	
	return _Cmnd_Get_Transfer(CMND_TRANSFER_WPT ,ppdisp);
}

STDMETHODIMP CApplication::Cmnd_Get_FlightBook_Transfer(IDispatch **ppdisp)
{
	// TODO: Add your implementation code here
	return _Cmnd_Get_Transfer(CMND_FLIGHTBOOK_TRANSFER ,ppdisp);
}

STDMETHODIMP CApplication::Cmnd_Get_Transfer_Laps(IDispatch **ppdisp)
{
	// TODO: Add your implementation code here
	return _Cmnd_Get_Transfer(CMND_TRANSFER_LAPS ,ppdisp);
}

STDMETHODIMP CApplication::_Cmnd_Get_Transfer(COMMAND_ID cmnd_id, IDispatch** ppdisp){
	if(m_ptrCommunication == NULL ){
		this->Error("Set Communication property befor call transfer method!");
		return E_FAIL;
	}

	IBodyPacketPtr	ptrCmndPacket(CLSID_BodyPacket);

	HRESULT hr = _SetPacketAsCommand(ptrCmndPacket);
	if(FAILED(hr)) return hr;
	
	BYTE			xCommand_Id;
	RESPONCE_TYPE	xResponseType;

	hr = this->_GetCommandId(cmnd_id, &xCommand_Id);
	if(FAILED(hr)) return hr;

	hr = ptrCmndPacket->Add(_variant_t(xCommand_Id));
	if(FAILED(hr)) return hr;

	hr = ptrCmndPacket->Add(_variant_t((BYTE)0));	
	if(FAILED(hr)) return hr;

	hr = this->_GetResponseType(cmnd_id, &xResponseType);
	if(FAILED(hr)) return hr;

	// send command
	switch(cmnd_id){
	case CMND_ABORT_TRANSFER:
	case CMND_TURN_OFF_PWR:
	case CMND_STOP_PVT_DATA:
		hr = m_ptrCommunication->WriteBodyPacket(ptrCmndPacket); 
		if(FAILED(hr)) return hr;

		// waiting 100 milliseconds
		Sleep(100);

		// clear input buffer
		hr = m_ptrCommunication->Clear();
		if(FAILED(hr)) return hr;

		break;
	default:
		// This used recursive call function!!! Abort befor call
		hr = this->Cmnd_Abort_Transfer();
		if(FAILED(hr)) return hr;

		// sent command
		hr = m_ptrCommunication->Send(ptrCmndPacket); 
		if(FAILED(hr)) return hr;
	}

	// how reciver....
	switch(xResponseType){
	case RESPONCE_UNKNOWN:
		this->Error("Unknown response !");
		return E_FAIL;
		break;
	case RESPONCE_NOT_RELEASE:
		this->Error("Not release method !");
		return E_FAIL;
		break;
	case RESPONCE_NO:
		break;
	case RESPONCE_ONE_BODYPACKET:
		{
			IDispatchPtr	ptrDispatch			= NULL;
			IDispatchPtr	ptrIDXXX_Dispatch	= NULL;
			IBodyPacketPtr	ptrBodyPacket		= NULL;

			// get one resonse packet
			hr = m_ptrCommunication->Reciver(&ptrDispatch);
			if(FAILED(hr)) return hr;

			hr = this->_Create_IDXXX_Data_Type(ptrDispatch, &ptrIDXXX_Dispatch);
			if(FAILED(hr)) return hr;
			
			hr = ptrIDXXX_Dispatch->QueryInterface(IID_IBodyPacket, (void**)&ptrBodyPacket);
			if(FAILED(hr)){
				this->Error("ERROR: IApplication::_Cmnd_Get_Transfer() - object must be have IBodyPacket interface!");
				return hr;
			}

			IHelperBodyPacketPtr ptrHelperBodyPacket = NULL;
			
			hr = ptrBodyPacket->QueryInterface(IID_IHelperBodyPacket, (void**)&ptrHelperBodyPacket);
			if(FAILED(hr)){
				this->Error("ERROR: IApplication::_Cmnd_Get_Transfer() - object must be have IHelperBodyPacket interface!");
				return hr;
			}

			hr = ptrHelperBodyPacket->_Exchange();
			if(FAILED(hr)) return hr;

			// set ACCESS ONLY READ!!!
			hr =ptrHelperBodyPacket->SetAccess(ACCESS_OR);
			if(FAILED(hr)) return hr;

			// return IBodyPacket or IDXXX_Type
			hr = ptrBodyPacket->QueryInterface(IID_IDispatch, (void**)ppdisp);
			if(FAILED(hr)) return hr;
		}
		break;
	case RESPONCE_RECORDS:
		{
			IBodyPacketsPtr ptrRecords = NULL;
			// reciver response records
			hr = this->_GetResponseAsRecords(ptrCmndPacket, &ptrRecords);
			if(FAILED(hr)) return hr;

			LONG xcount;

			ptrRecords->get_Count(&xcount);
			if(FAILED(hr)) return hr;
			
			IDispatchPtr			ptrDispatch			= NULL;
			IBodyPacketPtr			ptrBodyPacket		= NULL;
			IHelperBodyPacketPtr	ptrHelperBodyPacket = NULL;

			for(long i=0; i<xcount; i++){
				hr = ptrRecords->Item(_variant_t(i), &ptrDispatch);
				if(FAILED(hr)) return hr;
				
				hr = ptrDispatch->QueryInterface(IID_IBodyPacket, (void**)&ptrBodyPacket);
				if(FAILED(hr)){
					this->Error("ERROR: IApplication::_Cmnd_Get_Transfer() - object must be have IBodyPacket interface!");
					return hr;
				}

				IHelperBodyPacketPtr ptrHelperBodyPacket = NULL;
				
				hr = ptrBodyPacket->QueryInterface(IID_IHelperBodyPacket, (void**)&ptrHelperBodyPacket);
				if(FAILED(hr)){
					this->Error("ERROR: IApplication::_Cmnd_Get_Transfer() - object must be have IHelperBodyPacket interface!");
					return hr;
				}

				hr = ptrHelperBodyPacket->_Exchange();
				if(FAILED(hr)) return hr;

				// set ACCESS ONLY READ!!!
				hr =ptrHelperBodyPacket->SetAccess(ACCESS_OR);
				if(FAILED(hr)) return hr;
			}

			// return BodyPackets collection
			hr = ptrRecords->QueryInterface(IID_IDispatch, (void**)ppdisp);
			if(FAILED(hr)) return hr;
		}
		break;
	default:
		this->Error("Unknown response type!");
		return E_FAIL;
		break;
	}

	return S_OK;
}

STDMETHODIMP CApplication::_Cmnd_Set_Transfer(COMMAND_ID cmnd_id, IDispatch* pdisp)
{
	if(m_ptrCommunication == NULL){
		this->Error("Set Communication property befor call transfer method!");
		return E_FAIL;
	}

	RESPONCE_TYPE	xResponseType;

	HRESULT hr = this->_GetResponseType(cmnd_id, &xResponseType);
	if(FAILED(hr)) return hr;


	// how to send....
	switch(xResponseType){
	case RESPONCE_ONE_BODYPACKET:
		{
			IBodyPacketPtr ptrBodyPacket(pdisp);

			hr = m_ptrCommunication->Send(ptrBodyPacket);
			if(FAILED(hr)) return hr;
		}
		break;
	case RESPONCE_RECORDS:
		{			
			IBodyPacketsPtr ptrRecords(pdisp);

			//---------- create Pid_Records packet
			IBodyPacketPtr	ptrPid_Records(CLSID_BodyPacket);

			BYTE xPid_Records;
			hr = this->_GetPacketId(PID_RECORDS, &xPid_Records);
			if(FAILED(hr)) return hr;

			hr = ptrPid_Records->put_PacketID(_variant_t(xPid_Records));
			if(FAILED(hr)) return hr;

			LONG xsize;
			hr = ptrRecords->get_Count(&xsize);
			if(FAILED(hr)) return hr;

			IPrimitivePtr	ptrUtil(CLSID_Primitive);

			hr = ptrUtil->put_glong(xsize);
			if(FAILED(hr)) return hr;

			VARIANT varByte;

			ptrUtil->Item(0, &varByte);
			hr = ptrPid_Records->Add(varByte);

			ptrUtil->Item(1, &varByte);
			hr = ptrPid_Records->Add(varByte);

			//---------- create Pid_Xfer_Cmplt packet
			IBodyPacketPtr	ptrPid_Xfer_Cmplt(CLSID_BodyPacket);

			BYTE xPid_Xfer_Cmplt;
			hr = this->_GetPacketId(PID_XFER_CMPLT, &xPid_Xfer_Cmplt);
			if(FAILED(hr)) return hr;

			hr = ptrPid_Xfer_Cmplt->put_PacketID(_variant_t(xPid_Xfer_Cmplt));
			if(FAILED(hr)) return hr;

			BYTE xCommand_Id;
			
			hr = this->_GetCommandId(cmnd_id, &xCommand_Id);

			hr = ptrPid_Xfer_Cmplt->Add(_variant_t(xCommand_Id));
			if(FAILED(hr)) return hr;

			hr = ptrPid_Xfer_Cmplt->Add(_variant_t((BYTE)0));	
			if(FAILED(hr)) return hr;

			// send Pid_Records
			hr = m_ptrCommunication->Send(ptrPid_Records);
			if(FAILED(hr)) return hr;

			// send Collection
			IDispatchPtr ptrRec = NULL;
			for(long i=0; i<xsize ;i++){
				hr = ptrRecords->Item(_variant_t(i), &ptrRec);
				if(FAILED(hr)) return hr;

				hr = m_ptrCommunication->Send(ptrRec);
				if(FAILED(hr)) return hr;
			}

			// send Pid_Xfer_Cmplt
			hr = m_ptrCommunication->Send(ptrPid_Xfer_Cmplt);
			if(FAILED(hr)) return hr;
		}
		break;
	default:
		this->Error("Unknown request type!");
		return E_FAIL;
		break;
	}

	return S_OK;
}

STDMETHODIMP CApplication::Cmnd_Set_Transfer_Alm(IDispatch *pdisp)
{
	// TODO: Add your implementation code here	
	return _Cmnd_Set_Transfer(CMND_TRANSFER_ALM ,pdisp);
}

STDMETHODIMP CApplication::Cmnd_Set_Transfer_Posn(IDispatch *pdisp)
{
	// TODO: Add your implementation code here
	return _Cmnd_Set_Transfer(CMND_TRANSFER_POSN ,pdisp);
}

STDMETHODIMP CApplication::Cmnd_Set_Transfer_Prx(IDispatch *pdisp)
{
	// TODO: Add your implementation code here
	return _Cmnd_Set_Transfer(CMND_TRANSFER_PRX ,pdisp);
}

STDMETHODIMP CApplication::Cmnd_Set_Transfer_Rte(IDispatch *pdisp)
{
	// TODO: Add your implementation code here
	return _Cmnd_Set_Transfer(CMND_TRANSFER_RTE ,pdisp);
}

STDMETHODIMP CApplication::Cmnd_Set_Transfer_Time(IDispatch *pdisp)
{
	// TODO: Add your implementation code here
	return _Cmnd_Set_Transfer(CMND_TRANSFER_TIME ,pdisp);
}

STDMETHODIMP CApplication::Cmnd_Set_Transfer_Trk(IDispatch *pdisp)
{
	// TODO: Add your implementation code here
	return _Cmnd_Set_Transfer(CMND_TRANSFER_TRK ,pdisp);
}

STDMETHODIMP CApplication::Cmnd_Set_Transfer_Wpt(IDispatch *pdisp)
{
	// TODO: Add your implementation code here
	return _Cmnd_Set_Transfer(CMND_TRANSFER_WPT ,pdisp);
}

STDMETHODIMP CApplication::Cmnd_Set_FlightBook_Transfer(IDispatch *pdisp)
{
	// TODO: Add your implementation code here
	return _Cmnd_Set_Transfer(CMND_FLIGHTBOOK_TRANSFER ,pdisp);
}

STDMETHODIMP CApplication::Cmnd_Set_Transfer_Laps(IDispatch *pdisp)
{
	// TODO: Add your implementation code here
	return _Cmnd_Set_Transfer(CMND_TRANSFER_LAPS ,pdisp);
}



STDMETHODIMP CApplication::CreateBodyPacket(BSTR pid_name, IDispatch **ppdisp)
{
	// TODO: Add your implementation code here
	char	buff[255];
	BYTE	gPid_Packet;
	HRESULT hr;

	if(_bstr_t(pid_name)==_bstr_t("Pid_Date_Time_Data")){
		hr = _GetPacketId(PID_DATE_TIME_DATA,&gPid_Packet);
		if(FAILED(hr)) return hr;
	}
	else if(_bstr_t(pid_name)==_bstr_t("Pid_Position_Data")){
		hr = _GetPacketId(PID_POSITION_DATA,&gPid_Packet);
		if(FAILED(hr)) return hr;
	}
	else if(_bstr_t(pid_name)==_bstr_t("Pid_Prx_Wpt_Data")){
		hr = _GetPacketId(PID_PRX_WPT_DATA,&gPid_Packet);
		if(FAILED(hr)) return hr;
	}
	else if(_bstr_t(pid_name)==_bstr_t("Pid_Rte_Hdr")){
		hr = _GetPacketId(PID_RTE_HDR,&gPid_Packet);
		if(FAILED(hr)) return hr;
	}
	else if(_bstr_t(pid_name)==_bstr_t("Pid_Rte_Wpt_Data")){
		hr = _GetPacketId(PID_RTE_WPT_DATA,&gPid_Packet);
		if(FAILED(hr)) return hr;
	}
	else if(_bstr_t(pid_name)==_bstr_t("Pid_Almanac_Data")){
		hr = _GetPacketId(PID_ALMANAC_DATA,&gPid_Packet);
		if(FAILED(hr)) return hr;
	}
	else if(_bstr_t(pid_name)==_bstr_t("Pid_Trk_Data")){
		hr = _GetPacketId(PID_TRK_DATA,&gPid_Packet);
		if(FAILED(hr)) return hr;
	}
	else if(_bstr_t(pid_name)==_bstr_t("Pid_Wpt_Data")){
		hr = _GetPacketId(PID_WPT_DATA,&gPid_Packet);
		if(FAILED(hr)) return hr;
	}
	else if(_bstr_t(pid_name)==_bstr_t("Pid_Pvt_Data")){
		hr = _GetPacketId(PID_PVT_DATA,&gPid_Packet);
		if(FAILED(hr)) return hr;
	}
	else if(_bstr_t(pid_name)==_bstr_t("Pid_Rte_Link_Data")){
		hr = _GetPacketId(PID_RTE_LINK_DATA,&gPid_Packet);
		if(FAILED(hr)) return hr;
	}
	else if(_bstr_t(pid_name)==_bstr_t("Pid_Trk_Hdr")){
		hr = _GetPacketId(PID_TRK_HDR,&gPid_Packet);
		if(FAILED(hr)) return hr;
	}
	else if(_bstr_t(pid_name)==_bstr_t("Pid_FlightBook_Record")){
		hr = _GetPacketId(PID_FLIGHTBOOK_RECORD,&gPid_Packet);
		if(FAILED(hr)) return hr;
	}
	else{
		sprintf(buff,"Unknown pid_name = %s", _bstr_t(pid_name));
		this->Error(buff);
		return E_FAIL;
	}

	IBodyPacketPtr	ptrBodyPacket(CLSID_BodyPacket);

	hr = ptrBodyPacket->put_PacketID(_variant_t(gPid_Packet));
	if(FAILED(hr)) return hr;

	// return
	hr = ptrBodyPacket->QueryInterface(IID_IDispatch, (void**)ppdisp);
	if(FAILED(hr)) return hr;

	ptrBodyPacket = NULL;

	return S_OK;
}

STDMETHODIMP CApplication::_GetPacketId(PACKET_ID packet_id, BYTE* gPid_Packet /*Garmin Pid_Packet*/)
{
	BSTR LinkProtocol;
	
	HRESULT hr = m_ptrProtocolArray->get_Link_Protocol(&LinkProtocol);
	if(FAILED(hr)) return hr;

	// Check Command protocol see GetProduct()...
	if(_bstr_t(LinkProtocol) == _bstr_t("L001")){
		SysFreeString(LinkProtocol);

		switch(packet_id){
		case PID_COMMAND_DATA:
			*gPid_Packet = GARMIN_TYPES::L001::Pid_Command_Data;
			break;
		case PID_XFER_CMPLT:
			*gPid_Packet = GARMIN_TYPES::L001::Pid_Xfer_Cmplt;
			break;
		case PID_DATE_TIME_DATA:
			*gPid_Packet = GARMIN_TYPES::L001::Pid_Date_Time_Data;
			break;
		case PID_POSITION_DATA:
			*gPid_Packet = GARMIN_TYPES::L001::Pid_Position_Data;
			break;
		case PID_PRX_WPT_DATA:
			*gPid_Packet = GARMIN_TYPES::L001::Pid_Prx_Wpt_Data;
			break;
		case PID_RECORDS:
			*gPid_Packet = GARMIN_TYPES::L001::Pid_Records;
			break;
		case PID_RTE_HDR:
			*gPid_Packet = GARMIN_TYPES::L001::Pid_Rte_Hdr;
			break;
		case PID_RTE_WPT_DATA:
			*gPid_Packet = GARMIN_TYPES::L001::Pid_Rte_Wpt_Data;
			break;
		case PID_ALMANAC_DATA:
			*gPid_Packet = GARMIN_TYPES::L001::Pid_Almanac_Data;
			break;
		case PID_TRK_DATA:
			*gPid_Packet = GARMIN_TYPES::L001::Pid_Trk_Data;
			break;
		case PID_WPT_DATA:
			*gPid_Packet = GARMIN_TYPES::L001::Pid_Wpt_Data;
			break;
		case PID_PVT_DATA:
			*gPid_Packet = GARMIN_TYPES::L001::Pid_Pvt_Data;
			break;
		case PID_RTE_LINK_DATA:
			*gPid_Packet = GARMIN_TYPES::L001::Pid_Rte_Link_Data;
			break;
		case PID_TRK_HDR:
			*gPid_Packet = GARMIN_TYPES::L001::Pid_Trk_Hdr;
			break;
		case PID_FLIGHTBOOK_RECORD:
			*gPid_Packet = GARMIN_TYPES::L001::Pid_FlightBook_Record;
			break;
		case PID_LAP:
			*gPid_Packet = GARMIN_TYPES::L001::Pid_Lap;
			break;
		default:
			this->Error("Unknown PacketID... see _GetPacketId()");
			return E_FAIL;
		}		
	}
	else if(_bstr_t(LinkProtocol) == _bstr_t("L002")){
		SysFreeString(LinkProtocol);

		switch(packet_id){
		case PID_COMMAND_DATA:
			*gPid_Packet = GARMIN_TYPES::L002::Pid_Command_Data;
			break;
		case PID_XFER_CMPLT:
			*gPid_Packet = GARMIN_TYPES::L002::Pid_Xfer_Cmplt;
			break;
		case PID_DATE_TIME_DATA:
			*gPid_Packet = GARMIN_TYPES::L002::Pid_Date_Time_Data;
			break;
		case PID_POSITION_DATA:
			*gPid_Packet = GARMIN_TYPES::L002::Pid_Position_Data;
			break;
		case PID_PRX_WPT_DATA:
			*gPid_Packet = GARMIN_TYPES::L002::Pid_Prx_Wpt_Data;
			break;
		case PID_RECORDS:
			*gPid_Packet = GARMIN_TYPES::L002::Pid_Records;
			break;
		case PID_RTE_HDR:
			*gPid_Packet = GARMIN_TYPES::L002::Pid_Rte_Hdr;
			break;
		case PID_RTE_WPT_DATA:
			*gPid_Packet = GARMIN_TYPES::L002::Pid_Rte_Wpt_Data;
			break;
		case PID_ALMANAC_DATA:
			*gPid_Packet = GARMIN_TYPES::L002::Pid_Almanac_Data;
			break;
		case PID_TRK_DATA:
			this->Error("Packet ID = Pid_Trk_Data not support L002 protocol!");
			return E_FAIL;
		case PID_WPT_DATA:
			*gPid_Packet = GARMIN_TYPES::L002::Pid_Wpt_Data;
			break;
		case PID_PVT_DATA:
			this->Error("Packet ID = Pid_Pvt_Data not support L002 protocol!");
			return E_FAIL;
		case PID_RTE_LINK_DATA:
			this->Error("Packet ID = Pid_Rte_Link_Data not support L002 protocol!");
			return E_FAIL;
		case PID_TRK_HDR:
			this->Error("Packet ID = Pid_Trk_Hdr not support L002 protocol!");
			return E_FAIL;
		case PID_FLIGHTBOOK_RECORD:
			this->Error("Packet ID = Pid_FlightBook_Record not support L002 protocol!");
			return E_FAIL;
		case PID_LAP:
			this->Error("Packet ID = Pid_Lap not support L002 protocol!");
			return E_FAIL;
		default:
			this->Error("Unknown PacketID... see _GetPacketId()");
			return E_FAIL;
		}		
	}

	return S_OK;
}

STDMETHODIMP CApplication::_GetClassPacketId(BYTE gPid /*Garmin Pid_Packet*/, PACKET_ID* class_pid)
{
	BSTR LinkProtocol;
	
	HRESULT hr = m_ptrProtocolArray->get_Link_Protocol(&LinkProtocol);
	if(FAILED(hr)) return hr;

	// Check Command protocol see GetProduct()...
	if(_bstr_t(LinkProtocol) == _bstr_t("L001")){
		SysFreeString(LinkProtocol);

		switch(gPid){
		case GARMIN_TYPES::L001::Pid_Command_Data:
			*class_pid = PID_COMMAND_DATA;
			break;
		case GARMIN_TYPES::L001::Pid_Xfer_Cmplt:
			*class_pid = PID_XFER_CMPLT;
			break;
		case GARMIN_TYPES::L001::Pid_Date_Time_Data:
			*class_pid = PID_DATE_TIME_DATA;
			break;
		case GARMIN_TYPES::L001::Pid_Position_Data:
			*class_pid = PID_POSITION_DATA;
			break;
		case GARMIN_TYPES::L001::Pid_Prx_Wpt_Data:
			*class_pid = PID_PRX_WPT_DATA;
			break;
		case GARMIN_TYPES::L001::Pid_Records:
			*class_pid = PID_RECORDS;
			break;
		case GARMIN_TYPES::L001::Pid_Rte_Hdr:
			*class_pid = PID_RTE_HDR;
			break;
		case GARMIN_TYPES::L001::Pid_Rte_Wpt_Data:
			*class_pid = PID_RTE_WPT_DATA;
			break;
		case GARMIN_TYPES::L001::Pid_Almanac_Data:
			*class_pid = PID_ALMANAC_DATA;
			break;
		case GARMIN_TYPES::L001::Pid_Trk_Data:
			*class_pid = PID_TRK_DATA;
			break;
		case GARMIN_TYPES::L001::Pid_Wpt_Data:
			*class_pid = PID_WPT_DATA;
			break;
		case GARMIN_TYPES::L001::Pid_Pvt_Data:
			*class_pid = PID_PVT_DATA;
			break;
		case GARMIN_TYPES::L001::Pid_Rte_Link_Data:
			*class_pid = PID_RTE_LINK_DATA;
			break;
		case GARMIN_TYPES::L001::Pid_Trk_Hdr:
			*class_pid = PID_TRK_HDR;
			break;
		case GARMIN_TYPES::L001::Pid_FlightBook_Record:
			*class_pid = PID_FLIGHTBOOK_RECORD;
			break;
		case GARMIN_TYPES::L001::Pid_Lap:
			*class_pid = PID_LAP;
			break;
		default:
			this->Error("Unknown Garmin Pid_Packet... see _GetClassPacketId()");
			return E_FAIL;
		}		
	}
	else if(_bstr_t(LinkProtocol) == _bstr_t("L002")){
		SysFreeString(LinkProtocol);

		switch(gPid){
		case GARMIN_TYPES::L002::Pid_Command_Data:
			*class_pid = PID_COMMAND_DATA;
			break;
		case GARMIN_TYPES::L002::Pid_Xfer_Cmplt:
			*class_pid = PID_XFER_CMPLT;
			break;
		case GARMIN_TYPES::L002::Pid_Date_Time_Data:
			*class_pid = PID_DATE_TIME_DATA;
			break;
		case GARMIN_TYPES::L002::Pid_Position_Data:
			*class_pid = PID_POSITION_DATA;
			break;
		case GARMIN_TYPES::L002::Pid_Prx_Wpt_Data:
			*class_pid = PID_PRX_WPT_DATA;
			break;
		case GARMIN_TYPES::L002::Pid_Records:
			*class_pid = PID_RECORDS;
			break;
		case GARMIN_TYPES::L002::Pid_Rte_Hdr:
			*class_pid = PID_RTE_HDR;
			break;
		case GARMIN_TYPES::L002::Pid_Rte_Wpt_Data:
			*class_pid = PID_RTE_WPT_DATA;
			break;
		case GARMIN_TYPES::L002::Pid_Almanac_Data:
			*class_pid = PID_ALMANAC_DATA;
			break;
		case GARMIN_TYPES::L002::Pid_Wpt_Data:
			*class_pid = PID_WPT_DATA;
			break;
		default:
			this->Error("Unknown Garmin Pid_Packet... see _GetClassPacketId()");
			return E_FAIL;
		}		
	}

	return S_OK;
}

STDMETHODIMP CApplication::_GetCommandId(COMMAND_ID cmnd_id, BYTE* gCmnd_id /*Garmin Command */){

	BSTR CommandProtocol;

	HRESULT hr = m_ptrProtocolArray->get_Device_Command_Protocol(&CommandProtocol);
	if(FAILED(hr)) return hr;


	// Check Command protocol see GetProduct()...
	if(_bstr_t(CommandProtocol) == _bstr_t("A010")){
		SysFreeString(CommandProtocol);

		switch(cmnd_id){
		case CMND_ABORT_TRANSFER: /* abort current transfer */
			*gCmnd_id = GARMIN_TYPES::A010::Cmnd_Abort_Transfer;
			break;
		case CMND_TRANSFER_ALM: /* transfer almanac */
			*gCmnd_id = GARMIN_TYPES::A010::Cmnd_Transfer_Alm;
			break;
		case CMND_TRANSFER_POSN: /* transfer position */
			*gCmnd_id = GARMIN_TYPES::A010::Cmnd_Transfer_Posn;
			break;
		case CMND_TRANSFER_PRX: /* transfer proximity waypoints */
			*gCmnd_id = GARMIN_TYPES::A010::Cmnd_Transfer_Prx;
			break;
		case CMND_TRANSFER_RTE: /* transfer routes */
			*gCmnd_id = GARMIN_TYPES::A010::Cmnd_Transfer_Rte;
			break;
		case CMND_TRANSFER_TIME: /* transfer time */
			*gCmnd_id = GARMIN_TYPES::A010::Cmnd_Transfer_Time;
			break;
		case CMND_TRANSFER_TRK: /* transfer track log */
			*gCmnd_id = GARMIN_TYPES::A010::Cmnd_Transfer_Trk;
			break;
		case CMND_TRANSFER_WPT: /* transfer waypoints */
			*gCmnd_id = GARMIN_TYPES::A010::Cmnd_Transfer_Wpt;
			break;
		case CMND_TURN_OFF_PWR: /* turn off power */
			*gCmnd_id = GARMIN_TYPES::A010::Cmnd_Turn_Off_Pwr;
			break;
		case CMND_START_PVT_DATA: /* start transmitting PVT data */
			*gCmnd_id = GARMIN_TYPES::A010::Cmnd_Start_Pvt_Data;
			break;
		case CMND_STOP_PVT_DATA: /* stop transmitting PVT data */
			*gCmnd_id = GARMIN_TYPES::A010::Cmnd_Stop_Pvt_Data;
			break;
		case CMND_FLIGHTBOOK_TRANSFER: /* start transferring flight records */
			*gCmnd_id = GARMIN_TYPES::A010::Cmnd_FlightBook_Transfer;
			break;
		case CMND_TRANSFER_LAPS: /* transfer laps */
			*gCmnd_id = GARMIN_TYPES::A010::Cmnd_Transfer_Laps;
			break;
		}		
	}
	else if(_bstr_t(CommandProtocol) == _bstr_t("A011")){
		SysFreeString(CommandProtocol);

		switch(cmnd_id){
		case CMND_ABORT_TRANSFER: /* abort current transfer */
			*gCmnd_id = GARMIN_TYPES::A011::Cmnd_Abort_Transfer;
			break;
		case CMND_TRANSFER_ALM: /* transfer almanac */
			*gCmnd_id = GARMIN_TYPES::A011::Cmnd_Transfer_Alm;
			break;
		case CMND_TRANSFER_POSN: /* transfer position */
			this->Error("Command Protocol A011 not support Cmnd_Transfer_Posn !");
			return E_FAIL;
		case CMND_TRANSFER_PRX: /* transfer proximity waypoints */
			*gCmnd_id = GARMIN_TYPES::A011::Cmnd_Transfer_Prx;
			break;
		case CMND_TRANSFER_RTE: /* transfer routes */
			*gCmnd_id = GARMIN_TYPES::A011::Cmnd_Transfer_Rte;
			break;
		case CMND_TRANSFER_TIME: /* transfer time */
			*gCmnd_id = GARMIN_TYPES::A011::Cmnd_Transfer_Time;
			break;
		case CMND_TRANSFER_TRK: /* transfer track log */
			this->Error("Command Protocol A011 not support Cmnd_Transfer_Trk !");
			return E_FAIL;
		case CMND_TRANSFER_WPT: /* transfer waypoints */
			*gCmnd_id = GARMIN_TYPES::A011::Cmnd_Transfer_Wpt;
			break;
		case CMND_TURN_OFF_PWR: /* turn off power */
			*gCmnd_id = GARMIN_TYPES::A011::Cmnd_Turn_Off_Pwr;
			break;
		case CMND_START_PVT_DATA: /* start transmitting PVT data */
			this->Error("Command Protocol A011 not support Cmnd_Start_Pvt_Data !");
			return E_FAIL;
		case CMND_STOP_PVT_DATA: /* stop transmitting PVT data */
			this->Error("Command Protocol A011 not support Cmnd_Stop_Pvt_Data !");
			return E_FAIL;
		case CMND_FLIGHTBOOK_TRANSFER: /* start transferring flight records */
			this->Error("Command Protocol A011 not support Cmnd_FlightBook_Transfer !");
			return E_FAIL;
		case CMND_TRANSFER_LAPS: /* transfer laps */
			this->Error("Command Protocol A011 not support Cmnd_Transfer_Laps !");
			return E_FAIL;
		}
	}

	return S_OK;
}

STDMETHODIMP CApplication::_GetResponseType(COMMAND_ID cmnd_id, RESPONCE_TYPE* res_type){

	BSTR CommandProtocol;

	HRESULT hr = m_ptrProtocolArray->get_Device_Command_Protocol(&CommandProtocol);
	if(FAILED(hr)) return hr;

	// Check Command protocol see GetProduct()...
	if(_bstr_t(CommandProtocol) == _bstr_t("A010")){
		SysFreeString(CommandProtocol);

		switch(cmnd_id){
		case CMND_ABORT_TRANSFER: /* abort current transfer */
			*res_type = RESPONCE_NO;
			break;
		case CMND_TRANSFER_ALM: /* transfer almanac */
			*res_type = RESPONCE_RECORDS;
			break;
		case CMND_TRANSFER_POSN: /* transfer position */
			*res_type = RESPONCE_ONE_BODYPACKET;
			break;
		case CMND_TRANSFER_PRX: /* transfer proximity waypoints */
			*res_type = RESPONCE_RECORDS;
			break;
		case CMND_TRANSFER_RTE: /* transfer routes */
			*res_type = RESPONCE_RECORDS;
			break;
		case CMND_TRANSFER_TIME: /* transfer time */
			*res_type = RESPONCE_ONE_BODYPACKET;
			break;
		case CMND_TRANSFER_TRK: /* transfer track log */
			*res_type = RESPONCE_RECORDS;
			break;
		case CMND_TRANSFER_WPT: /* transfer waypoints */
			*res_type = RESPONCE_RECORDS;
			break;
		case CMND_TURN_OFF_PWR: /* turn off power */
			*res_type = RESPONCE_NO;
			break;
		case CMND_START_PVT_DATA: /* start transmitting PVT data */
			*res_type = RESPONCE_NO;
			break;
		case CMND_STOP_PVT_DATA: /* stop transmitting PVT data */
			*res_type = RESPONCE_NO;
			break;
		case CMND_FLIGHTBOOK_TRANSFER: /* start transferring flight records */
			*res_type = RESPONCE_RECORDS;
			break;
		case CMND_TRANSFER_LAPS: /* transfer laps */
			*res_type = RESPONCE_RECORDS;
			break;
		}		
	}
	else if(_bstr_t(CommandProtocol) == _bstr_t("A011")){
		SysFreeString(CommandProtocol);

		switch(cmnd_id){
		case CMND_ABORT_TRANSFER: /* abort current transfer */
			*res_type = RESPONCE_NO;
			break;
		case CMND_TRANSFER_ALM: /* transfer almanac */
			*res_type = RESPONCE_RECORDS;
			break;
		case CMND_TRANSFER_POSN: /* transfer position */
			this->Error("Command Protocol A011 not support Cmnd_Transfer_Posn !");
			return E_FAIL;
		case CMND_TRANSFER_PRX: /* transfer proximity waypoints */
			*res_type = RESPONCE_RECORDS;
			break;
		case CMND_TRANSFER_RTE: /* transfer routes */
			*res_type = RESPONCE_RECORDS;
			break;
		case CMND_TRANSFER_TIME: /* transfer time */
			*res_type = RESPONCE_ONE_BODYPACKET;
			break;
		case CMND_TRANSFER_TRK: /* transfer track log */
			this->Error("Command Protocol A011 not support Cmnd_Transfer_Trk !");
			return E_FAIL;
		case CMND_TRANSFER_WPT: /* transfer waypoints */
			*res_type = RESPONCE_RECORDS;
			break;
		case CMND_TURN_OFF_PWR: /* turn off power */
			*res_type = RESPONCE_NO;
			break;
		case CMND_START_PVT_DATA: /* start transmitting PVT data */
			this->Error("Command Protocol A011 not support Cmnd_Start_Pvt_Data !");
			return E_FAIL;
		case CMND_STOP_PVT_DATA: /* stop transmitting PVT data */
			this->Error("Command Protocol A011 not support Cmnd_Stop_Pvt_Data !");
			return E_FAIL;
		case CMND_FLIGHTBOOK_TRANSFER: /* start transferring flight records */
			this->Error("Command Protocol A011 not support Cmnd_FlightBook_Transfer !");
			return E_FAIL;
		case CMND_TRANSFER_LAPS: /* transfer laps */
			this->Error("Command Protocol A011 not support Cmnd_Transfer_Laps !");
			return E_FAIL;
		}
	}

	return S_OK;
}

/////////////////////////////////////////////////////////////////////////////////////////////
//
//
//	This high-level method to try create IDXXX data type!!!
//
//
/////////////////////////////////////////////////////////////////////////////////////////////
STDMETHODIMP CApplication::_CreateDataType(PACKET_ID class_pid, IDispatch** ppdisp)
{
	HRESULT		hr;
	BSTR		TypeName;
	IUnknownPtr ptrIUnknown = NULL;
	CLSID		clsid;	 

	switch(class_pid){
	case PID_DATE_TIME_DATA:
		clsid = CLSID_D600_Date_Time_Type;
		break;
	case PID_POSITION_DATA:
		this->Error("ERROR: IApplication::_CreateDataType() NOT IMPLEMENTED THIS DATA TYPE!!!");
		return E_NOTIMPL;
		break;
	case PID_PRX_WPT_DATA:
		this->Error("ERROR: IApplication::_CreateDataType() NOT IMPLEMENTED THIS DATA TYPE!!!");
		return E_NOTIMPL;
		break;
	case PID_RTE_HDR:
		this->Error("ERROR: IApplication::_CreateDataType() NOT IMPLEMENTED THIS DATA TYPE!!!");
		return E_NOTIMPL;
		break;
	case PID_RTE_WPT_DATA:
		this->Error("ERROR: IApplication::_CreateDataType() NOT IMPLEMENTED THIS DATA TYPE!!!");
		return E_NOTIMPL;
		break;
	case PID_ALMANAC_DATA:
		this->Error("ERROR: IApplication::_CreateDataType() NOT IMPLEMENTED THIS DATA TYPE!!!");
		return E_NOTIMPL;
		break;
	case PID_TRK_DATA:
		this->Error("ERROR: IApplication::_CreateDataType() NOT IMPLEMENTED THIS DATA TYPE!!!");
		return E_NOTIMPL;
		break;
	case PID_WPT_DATA:
		hr = this->m_ptrProtocolArray->get_Waypoint_Data_Type(&TypeName);
		if(FAILED(hr)) return hr;

		if(_bstr_t(TypeName) == _bstr_t("D108")){
			clsid = CLSID_D108_Wpt_Type;
		}
		else{
			SysFreeString(TypeName);
			this->Error("ERROR: IApplication::_CreateDataType() NOT IMPLEMENTED THIS DATA TYPE!!!");
			return E_FAIL;
		}
		SysFreeString(TypeName);

		break;
	case PID_PVT_DATA:
		this->Error("ERROR: IApplication::_CreateDataType() NOT IMPLEMENTED THIS DATA TYPE!!!");
		return E_NOTIMPL;
		break;
	case PID_RTE_LINK_DATA:
		this->Error("ERROR: IApplication::_CreateDataType() NOT IMPLEMENTED THIS DATA TYPE!!!");
		return E_NOTIMPL;
		break;
	case PID_TRK_HDR:
		this->Error("ERROR: IApplication::_CreateDataType() NOT IMPLEMENTED THIS DATA TYPE!!!");
		return E_NOTIMPL;
		break;
	case PID_FLIGHTBOOK_RECORD:
		this->Error("ERROR: IApplication::_CreateDataType() NOT IMPLEMENTED THIS DATA TYPE!!!");
		return E_NOTIMPL;
		break;
	case PID_LAP:
		this->Error("ERROR: IApplication::_CreateDataType() NOT IMPLEMENTED THIS DATA TYPE!!!");
		return E_NOTIMPL;
		break;
	default:
		this->Error("ERROR: inner method _CreateDataType() - unknown data type!");
		return E_NOTIMPL;
	}

	hr = CoCreateInstance(clsid, NULL, CLSCTX_ALL, IID_IDispatch, (void**)ppdisp);
	if(FAILED(hr)) return hr;

	return S_OK;
}

STDMETHODIMP CApplication::_Create_IDXXX_Data_Type(IDispatch* pBodyPacket, IDispatch** ppDXXX_Data_Type)
{
	HRESULT hr;

	IBodyPacketPtr ptrBodyPacket = NULL;

	hr = pBodyPacket->QueryInterface(IID_IBodyPacket, (void**)&ptrBodyPacket);
	if(FAILED(hr)) return hr;

	if(m_bNative){		
		_variant_t xpid, xcount, byte;

		hr = ptrBodyPacket->get_PacketID(&xpid);
		if(FAILED(hr)) return hr;

		hr = ptrBodyPacket->get_Count(&xcount);
		if(FAILED(hr)) return hr;

		PACKET_ID class_pid;

		hr = this->_GetClassPacketId(xpid, &class_pid);
		if(FAILED(hr)) return hr;

		IDispatchPtr ptrDispatch = NULL;

		hr = this->_CreateDataType(class_pid, &ptrDispatch);
		if(FAILED(hr)) return hr;

		IBodyPacketPtr ptrDXXX_Data_Type = NULL;
		
		hr = ptrDispatch->QueryInterface(IID_IBodyPacket, (void**)&ptrDXXX_Data_Type);
		if(FAILED(hr)) return hr;

		ptrDispatch = NULL;

		//-------------- Exchange PID and Data --------------------
		// exhange Packet ID
		hr = ptrDXXX_Data_Type->put_PacketID(xpid);
		if(FAILED(hr)) return hr;

		// exchange byte-data
		for(BYTE i=0; i<(BYTE)xcount; i++){
			hr = ptrBodyPacket->Item(_variant_t(i), &byte);
			if(FAILED(hr)) return hr;

			hr = ptrDXXX_Data_Type->Add(byte);
			if(FAILED(hr)) return hr;
		}

		// return 
		hr = ptrDXXX_Data_Type->QueryInterface(IID_IDispatch, (void**)ppDXXX_Data_Type);
		if(FAILED(hr)) return hr;
	}
	else{
		// redirect
		hr = ptrBodyPacket->QueryInterface(IID_IDispatch, (void**)ppDXXX_Data_Type);
		if(FAILED(hr)) return hr;
	}

	return S_OK;
}

STDMETHODIMP CApplication::get_Native(BOOL *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_bNative;

	return S_OK;
}

STDMETHODIMP CApplication::put_Native(BOOL newVal)
{
	// TODO: Add your implementation code here
	m_bNative = newVal;

	return S_OK;
}

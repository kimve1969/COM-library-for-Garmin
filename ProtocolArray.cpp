// ProtocolArray.cpp : Implementation of CProtocolArray
#include "stdafx.h"
#include "Garmin.h"
#include "ProtocolArray.h"

/////////////////////////////////////////////////////////////////////////////
// CProtocolArray

STDMETHODIMP CProtocolArray::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IProtocolArray
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CProtocolArray::FinalConstruct(void)
{
	// TODO: Add your implementation code here

	return S_OK;
}

// Данный метод будет вызван перед деструктором...
STDMETHODIMP_(void) CProtocolArray::FinalRelease()
{
	m_vector.clear();
}

STDMETHODIMP CProtocolArray::Item(long indx, VARIANT *pVal)
{
	// TODO: Add your implementation code here
	if(indx >= m_vector.size() ){
		char buff[255];
		sprintf(buff,"GetItem(index=%d) exceed size=%d of Array! can be [0;ProtocolArray.Count-1]",indx,m_vector.size());
		this->Error(buff);
		return E_FAIL;
	}

	VariantInit(pVal);

	pVal->vt		= VT_BSTR;
	pVal->bstrVal	= m_vector[indx].copy();

	return S_OK;
}

STDMETHODIMP CProtocolArray::get_Count(long *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_vector.size();

	return S_OK;
}

STDMETHODIMP CProtocolArray::Add(BSTR Val)
{
	// TODO: Add your implementation code here
	m_vector.push_back(_bstr_t(Val).copy());

	return S_OK;
}

STDMETHODIMP CProtocolArray::get_Waypoint_Transfer_Protocol(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Protocol(PRODUCT_WPT_PROTOCOL);

	return S_OK;
}

STDMETHODIMP CProtocolArray::get_Route_Transfer_Protocol(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Protocol(PRODUCT_RTE_PROTOCOL);
	return S_OK;
}

STDMETHODIMP CProtocolArray::get_Track_Log_Transfer_Protocol(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Protocol(PRODUCT_TRK_PROTOCOL);
	return S_OK;
}

STDMETHODIMP CProtocolArray::get_Proximity_Waypoint_Transfer_Protocol(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Protocol(PRODUCT_PRX_PROTOCOL);
	return S_OK;
}

STDMETHODIMP CProtocolArray::get_Almanac_Transfer_Protocol(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Protocol(PRODUCT_ALM_PROTOCOL);
	return S_OK;
}

STDMETHODIMP CProtocolArray::get_Date_and_Time_Initialization_Protocol(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Protocol(PRODUCT_DATE_AND_TIME_INITIALIZATION_PROTOCOL);
	return S_OK;
}

STDMETHODIMP CProtocolArray::get_FlightBook_Transfer_Protocol(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Protocol(PRODUCT_FLIGHTBOOK_TRANSFER_PROTOCOL);
	return S_OK;
}

STDMETHODIMP CProtocolArray::get_Position_Initialization_Protocol(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Protocol(PRODUCT_POSITION_INITIALIZATION_PROTOCOL);
	return S_OK;
}

STDMETHODIMP CProtocolArray::get_PVT_Data_Protocol(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Protocol(PRODUCT_PVT_DATA_PROTOCOL);
	return S_OK;
}

STDMETHODIMP CProtocolArray::get_Lap_Transfer_Protocol(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Protocol(PRODUCT_LAP_TRANSFER_PROTOCOL);
	return S_OK;
}

STDMETHODIMP CProtocolArray::get_Physical_Protocol(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Protocol(PRODUCT_PHYSICAL_PROTOCOL);
	return S_OK;
}

STDMETHODIMP CProtocolArray::get_Link_Protocol(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Protocol(PRODUCT_LINK);
	return S_OK;
}

STDMETHODIMP CProtocolArray::get_Device_Command_Protocol(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Protocol(PRODUCT_COMMAND);
	return S_OK;
}

// This method try seach XXX_Transfer Protocol
BSTR CProtocolArray::_Get_Transfer_Protocol(PRODUCT_INFO_FIELD req)
{
	_bstr_t result("");

	for(int i=0; i<m_vector.size() ;i++){
		if(req==PRODUCT_PHYSICAL_PROTOCOL && *((char*)m_vector[i])=='P'){
			result = m_vector[i].copy();
			break;
		}

		if(req==PRODUCT_LINK && *((char*)m_vector[i])=='L'){
			result = m_vector[i].copy();
			break;
		}

		if(*((char*)m_vector[i])=='A'){
			if(req==PRODUCT_COMMAND 
				&& ( m_vector[i]==_bstr_t("A010") || m_vector[i]==_bstr_t("A011")) ){
				result = m_vector[i].copy();
				break;
			}
			
			if(req==PRODUCT_WPT_PROTOCOL && m_vector[i]==_bstr_t("A100") ){
				result = m_vector[i].copy();
				break;
			}

			if(req==PRODUCT_RTE_PROTOCOL 
				&& (m_vector[i]==_bstr_t("A200") || m_vector[i]==_bstr_t("A201")) ){
				result = m_vector[i].copy();
				break;
			}

			if(req==PRODUCT_TRK_PROTOCOL && 
				(m_vector[i]==_bstr_t("A300") || m_vector[i]==_bstr_t("A301") || 
				 m_vector[i]==_bstr_t("A302")) ){
				result = m_vector[i].copy();
				break;
			}

			if(req==PRODUCT_PRX_PROTOCOL && m_vector[i]==_bstr_t("A400") ){
				result = m_vector[i].copy();
				break;
			}

			if(req==PRODUCT_ALM_PROTOCOL && m_vector[i]==_bstr_t("A500") ){
				result = m_vector[i].copy();
				break;
			}

			if(req==PRODUCT_DATE_AND_TIME_INITIALIZATION_PROTOCOL && m_vector[i]==_bstr_t("A600") ){
				result = m_vector[i].copy();
				break;
			}

			if(req==PRODUCT_FLIGHTBOOK_TRANSFER_PROTOCOL && m_vector[i]==_bstr_t("A650") ){
				result = m_vector[i].copy();
				break;
			}

			if(req==PRODUCT_POSITION_INITIALIZATION_PROTOCOL && m_vector[i]==_bstr_t("A700") ){
				result = m_vector[i].copy();
				break;
			}

			if(req==PRODUCT_PVT_DATA_PROTOCOL && m_vector[i]==_bstr_t("A800") ){
				result = m_vector[i].copy();
				break;
			}

			if(req==PRODUCT_LAP_TRANSFER_PROTOCOL && m_vector[i]==_bstr_t("A906") ){
				result = m_vector[i].copy();
				break;
			}

		}
	}

	return result.copy();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	TO TRY FOUND DATA TYPE FROM prtcl_name
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
BSTR CProtocolArray::_Get_Data_Type_by_Index(_bstr_t prtcl_name /*application prtotocol name*/, int offset_indx )
{
	_bstr_t result("");

	if(prtcl_name.length() == 4 && *((char*)prtcl_name)=='A'){
		// look up index by prtotocol name
		for(int i=0; i<m_vector.size() ;i++){
			if(prtcl_name == m_vector[i]){
				break;
			}
		}

		// look up data type after prtotocol name
		for(int k=1; k<=offset_indx && (k+i)<m_vector.size(); k++){
			// must be only D - prefix after prtotocol name
			if(*((char*)m_vector[k+i])=='D'){
				if(k==offset_indx){
					result = m_vector[k+i].copy(); // FOUND DATA TYPE!
				}
			}
			else{
				break;
			}
		}
	}
	return result.copy();
}

BSTR CProtocolArray::_Get_Transfer_Data_Type(PACKET_ID class_pid)
{
	_bstr_t result("");

	switch(class_pid){
	case PID_DATE_TIME_DATA:
		result = _Get_Data_Type_by_Index( _Get_Transfer_Protocol(PRODUCT_DATE_AND_TIME_INITIALIZATION_PROTOCOL), 1);
		break;
	case PID_POSITION_DATA:
		result = _Get_Data_Type_by_Index( _Get_Transfer_Protocol(PRODUCT_POSITION_INITIALIZATION_PROTOCOL), 1);
		break;
	case PID_PRX_WPT_DATA:
		result = _Get_Data_Type_by_Index( _Get_Transfer_Protocol(PRODUCT_PRX_PROTOCOL), 1);
		break;
	case PID_RTE_HDR:
		result = _Get_Data_Type_by_Index( _Get_Transfer_Protocol(PRODUCT_RTE_PROTOCOL), 1);
		break;
	case PID_RTE_WPT_DATA:
		result = _Get_Data_Type_by_Index( _Get_Transfer_Protocol(PRODUCT_RTE_PROTOCOL), 2);
		break;
	case PID_RTE_LINK_DATA:
		result = _Get_Data_Type_by_Index( _Get_Transfer_Protocol(PRODUCT_RTE_PROTOCOL), 3);
		break;
	case PID_ALMANAC_DATA:
		result = _Get_Data_Type_by_Index( _Get_Transfer_Protocol(PRODUCT_ALM_PROTOCOL), 1);
		break;
	case PID_TRK_HDR:
		result = _Get_Data_Type_by_Index( _Get_Transfer_Protocol(PRODUCT_TRK_PROTOCOL), 1);
		break;
	case PID_TRK_DATA:
		result = _Get_Data_Type_by_Index( _Get_Transfer_Protocol(PRODUCT_TRK_PROTOCOL), 2);
		break;
	case PID_WPT_DATA:
		result = _Get_Data_Type_by_Index( _Get_Transfer_Protocol(PRODUCT_WPT_PROTOCOL), 1);
		break;
	case PID_PVT_DATA:
		result = _Get_Data_Type_by_Index( _Get_Transfer_Protocol(PRODUCT_PVT_DATA_PROTOCOL), 1);
		break;
	case PID_FLIGHTBOOK_RECORD:
		result = _Get_Data_Type_by_Index( _Get_Transfer_Protocol(PRODUCT_FLIGHTBOOK_TRANSFER_PROTOCOL), 1);
		break;
	case PID_LAP:
		result = _Get_Data_Type_by_Index( _Get_Transfer_Protocol(PRODUCT_LAP_TRANSFER_PROTOCOL), 1);
		break;
	}

	return result.copy();
}

STDMETHODIMP CProtocolArray::get_Waypoint_Data_Type(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Data_Type(PID_WPT_DATA);
	return S_OK;
}

STDMETHODIMP CProtocolArray::get_Route_Header_Data_Type(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Data_Type(PID_RTE_HDR);
	return S_OK;
}

STDMETHODIMP CProtocolArray::get_Route_Waypoint_Data_Type(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Data_Type(PID_RTE_WPT_DATA);
	return S_OK;
}

STDMETHODIMP CProtocolArray::get_Route_Link_Data_Type(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Data_Type(PID_RTE_LINK_DATA);
	return S_OK;
}

STDMETHODIMP CProtocolArray::get_Almanac_Data_Type(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Data_Type(PID_ALMANAC_DATA);
	return S_OK;
}

STDMETHODIMP CProtocolArray::get_Track_Header_Data_Type(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Data_Type(PID_TRK_HDR);
	return S_OK;
}

STDMETHODIMP CProtocolArray::get_Track_Data_Type(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Data_Type(PID_TRK_DATA);
	return S_OK;
}

STDMETHODIMP CProtocolArray::get_PVT_Data_Type(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Data_Type(PID_PVT_DATA);
	return S_OK;
}

STDMETHODIMP CProtocolArray::get_FlightBook_Data_Type(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Data_Type(PID_FLIGHTBOOK_RECORD);
	return S_OK;
}

STDMETHODIMP CProtocolArray::get_Lap_Data_Type(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Data_Type(PID_LAP);
	return S_OK;
}

STDMETHODIMP CProtocolArray::get_Position_Data_Type(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Data_Type(PID_POSITION_DATA);
	return S_OK;
}

STDMETHODIMP CProtocolArray::get_Date_Time_Data_Type(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Data_Type(PID_DATE_TIME_DATA);
	return S_OK;
}

STDMETHODIMP CProtocolArray::get_Proximity_Waypoint_Data_Type(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = _Get_Transfer_Data_Type(PID_PRX_WPT_DATA);
	return S_OK;
}

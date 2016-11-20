// Communication.cpp : Implementation of CCommunication
#include "stdafx.h"
#include "Garmin.h"
#include "Communication.h"

/////////////////////////////////////////////////////////////////////////////
// CCommunication

STDMETHODIMP CCommunication::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_ICommunication
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CCommunication::FinalConstruct(void)
{
	// TODO: Add your implementation code here
	this->m_hcom	= NULL;
	m_NumRetriver	= 2;

	return S_OK;
}

// Данный метод будет вызван перед деструктором...
STDMETHODIMP_(void) CCommunication::FinalRelease()
{
	if(m_hcom) CloseHandle(m_hcom);
}

BOOL CCommunication::_ReadByte(LPBYTE lpByte)
{
	DWORD	dwNumBytes;
	if(!ReadFile(m_hcom, lpByte, 1, &dwNumBytes, NULL) || dwNumBytes!=1){
		this->Error("Failure communication with GPS - can not read byte from port!");
		return FALSE;
	}

	return TRUE;
}

BOOL CCommunication::_WriteByte(BYTE Byte)
{
	DWORD	dwNumBytes;
	if(!WriteFile(m_hcom, &Byte, 1, &dwNumBytes, NULL) || dwNumBytes!=1){
		this->Error("Failure communication with GPS - can not write byte to port!");
		return FALSE;
	}

	return TRUE;
}

STDMETHODIMP CCommunication::OpenPort(BSTR bstrPort)
{
	// TODO: Add your implementation code here
	m_hcom = CreateFile((LPCSTR)_bstr_t(bstrPort),GENERIC_READ | GENERIC_WRITE,0,0,OPEN_EXISTING,0,0);
	if(m_hcom == INVALID_HANDLE_VALUE){
		this->Error((LPCSTR)(_bstr_t("Failure communication with GPS - can not open port ") + bstrPort));
		return E_FAIL;
	}

	DCB dcb;
	if(!GetCommState(m_hcom, &dcb)){
		this->Error((LPCSTR)(_bstr_t("Failure communication with GPS - can not get parameters port ") + bstrPort));
		return E_FAIL;
	}

	dcb.BaudRate	= CBR_9600;
	dcb.ByteSize	= 8;
	dcb.Parity		= NOPARITY;
	dcb.StopBits	= ONESTOPBIT;

	if(!SetCommState(m_hcom, &dcb)){
		this->Error((LPCSTR)(_bstr_t("Failure communication with GPS - can not set parameters port ") + bstrPort));
		return E_FAIL;
	}

	COMMTIMEOUTS t_out;
	if(!GetCommTimeouts(m_hcom, &t_out)){
		this->Error((LPCSTR)(_bstr_t("Failure communication with GPS - can not get timeout parameters port ") + bstrPort));
		return E_FAIL;
	}
	
	t_out.ReadIntervalTimeout			= 0;
	t_out.ReadTotalTimeoutConstant		= 2000;
	t_out.ReadTotalTimeoutMultiplier	= 2000;
	t_out.WriteTotalTimeoutConstant		= 2000;
	t_out.WriteTotalTimeoutMultiplier	= 2000;

	if(!SetCommTimeouts(m_hcom,&t_out)){
		this->Error((LPCSTR)(_bstr_t("Failure communication with GPS - can not set timeout parameters port ") + bstrPort));
		return E_FAIL;
	}

	return S_OK;
}

STDMETHODIMP CCommunication::ClosePort()
{
	// TODO: Add your implementation code here
	if(CloseHandle(m_hcom)){
		m_hcom = NULL;

		return S_OK;
	}
	else{
		this->Error("Can not close port!");
		return E_FAIL;
	}

	return S_OK;
}

STDMETHODIMP CCommunication::ReadBodyPacket(IDispatch **ppdisp)
{
	// TODO: Add your implementation code here
	BYTE	rbuff[MAX_LENGTH_OF_DATA];

	// ------------------ read Data Link Escape
	if(!_ReadByte(&rbuff[0])){
		return E_FAIL;
	}
	if(rbuff[0]!=GARMIN_TYPES::DLE){
		this->Error("Unknown packet - not found header DLE!");
		return E_FAIL;
	}

	// ------------------ read Packet ID
	if(!_ReadByte(&rbuff[0])){
		return E_FAIL;
	}

	// ------------------ read Size of Packet Data
	if(!_ReadByte(&rbuff[1])){
		return E_FAIL;
	}
	if(rbuff[1]==GARMIN_TYPES::DLE){
		if(!_ReadByte(&rbuff[1])){
			return E_FAIL;
		}
	}

	// ------------------ read Packet Data
	for(DWORD indx=2 ; (indx-2)<rbuff[1] && indx<=MAX_LENGTH_OF_DATA; indx++){
		if(!_ReadByte(&rbuff[indx])){
			return E_FAIL;
		}
		if(rbuff[indx]==GARMIN_TYPES::DLE){
			if(!_ReadByte(&rbuff[indx])){
				return E_FAIL;
			}
		}

	}

	// ------------------ read Checksum
	if(!_ReadByte(&rbuff[indx])){
		return E_FAIL;
	}
	if(rbuff[indx]==GARMIN_TYPES::DLE){
		if(!_ReadByte(&rbuff[indx])){
			return E_FAIL;
		}
	}
	// ------------------ read Data Link Escape
	if(!_ReadByte(&rbuff[indx+1])){
		return E_FAIL;
	}
	if(rbuff[indx+1]!=GARMIN_TYPES::DLE){
		this->Error("Unknown packet - not found trailer DLE!");
		return E_FAIL;
	}

	// ------------------ read End of Text
	if(!_ReadByte(&rbuff[indx+2])){
		return E_FAIL;
	}
	if(rbuff[indx+2]!=GARMIN_TYPES::ETX){
		this->Error("Unknown packet - not found ETX!");
		return E_FAIL;
	}
	
	// ---------------------- Create Packet Body ------------------------------------------------------

	HRESULT hr;

	IBodyPacketPtr ptrBodyPacket(CLSID_BodyPacket);

	IHelperBodyPacketPtr ptrHelperBodyPacket = NULL;
	
	hr = ptrBodyPacket->QueryInterface(IID_IHelperBodyPacket, (void**)&ptrHelperBodyPacket);
	if(FAILED(hr)){
		this->Error("Not found IHelperBodyPacket interface!");
		return hr;
	}

	hr = ptrHelperBodyPacket->SetStatus(FALSE);
	if(FAILED(hr)) return hr;

	VARIANT var;
	VariantInit(&var);

	var.vt	 = VT_UI1;
	var.lVal = rbuff[0];


	hr=ptrBodyPacket->put_PacketID(var);
	if(FAILED(hr)) return hr;

	for(ULONG i=0; i<rbuff[1] ; i++){
		var.lVal = rbuff[i+2];

		hr = ptrBodyPacket->Add(var);
		if(FAILED(hr)) return hr;
	}

	_variant_t CRC;
	hr = ptrHelperBodyPacket->GetCRC(&CRC);
	if(FAILED(hr)) return hr;	

	if(rbuff[indx]==CRC.bVal){
		hr = ptrHelperBodyPacket->SetStatus(TRUE);
		if(FAILED(hr)) return hr;
	}

	// return Body Packet
	hr = ptrBodyPacket->QueryInterface(IID_IDispatch, (void**)ppdisp);
	if(FAILED(hr)) return hr;	

	return S_OK;
}

STDMETHODIMP CCommunication::WriteBodyPacket(IDispatch *pdisp)
{
	// TODO: Add your implementation code here
	BYTE	wbuff[MAX_LENGTH_OF_DATA];
	DWORD	indx=0;
	ULONG	i;

	HRESULT hr;
	VARIANT var, varindx;

	IBodyPacketPtr ptrBodyPacket(pdisp);

	/******************************* EXTRACT BODY PACKET ********************************/
	hr = ptrBodyPacket->get_Status(&var);
	if(FAILED(hr)) return hr;

	if(var.boolVal == FALSE){
		this->Error("BodyPacket is bad: Status = FALSE! Check BodyPacket befor send to port....");
		return E_FAIL;
	}
	//---------------------------------- Packet ID -----------------------------------
	hr = ptrBodyPacket->get_PacketID(&var);
	if(FAILED(hr)) return hr;

	wbuff[indx++] = var.bVal;
	if(var.bVal==GARMIN_TYPES::DLE){
		this->Error("Packet ID not equal DLE! Check it.");
		return E_FAIL;
	}
	//---------------------------------- Size Packet Data ----------------------------
	hr = ptrBodyPacket->get_Count(&var);
	if(FAILED(hr)) return hr;

	wbuff[indx++] = var.bVal;
	if(var.bVal==GARMIN_TYPES::DLE) wbuff[indx++] = GARMIN_TYPES::DLE;
	//---------------------------------- Packet Data ---------------------------------
	VariantInit(&varindx);
	varindx.vt = VT_I4;
	for(i=0; i<wbuff[1]/*Size Packet Data*/; i++){
		varindx.lVal = i;
		hr = ptrBodyPacket->Item(varindx, &var);
		if(FAILED(hr)) return hr;

		wbuff[indx++] = var.bVal;

		if(var.bVal == GARMIN_TYPES::DLE){
			wbuff[indx++] = GARMIN_TYPES::DLE;
		}
	}
	//---------------------------------- Check Sum -----------------------------------
	IHelperBodyPacketPtr ptrHelperBodyPacket = NULL;
	
	hr = ptrBodyPacket->QueryInterface(IID_IHelperBodyPacket, (void**)&ptrHelperBodyPacket);
	if(FAILED(hr)){
		this->Error("Not found IHelperBodyPacket interface!");
		return hr;
	}

	_variant_t CRC;

	hr = ptrHelperBodyPacket->GetCRC(&CRC);
	if(FAILED(hr)) return hr;

	wbuff[indx] = CRC.bVal;
	

	if(wbuff[indx] == GARMIN_TYPES::DLE){
		indx++;
		wbuff[indx] = GARMIN_TYPES::DLE;
	}
	/****************************** SEND BYTES TO PORT *********************************/
		
	//---------------------------------- PACKET HEADER -----------------------------------
	if(!_WriteByte(GARMIN_TYPES::DLE)) return E_FAIL;

	//---------------------------------- PACKET BODY -------------------------------------
	for(i=0; i<=indx ;i++){
		if(!_WriteByte(wbuff[i]) ) return E_FAIL;
	}
	//---------------------------------- PACKET TRAILER ----------------------------------
	if(!_WriteByte(GARMIN_TYPES::DLE)) return E_FAIL;

	if(!_WriteByte(GARMIN_TYPES::ETX)) return E_FAIL;

	return S_OK;
}
/***********************************************************************************************
*
*
*
*
*
***********************************************************************************************/
STDMETHODIMP CCommunication::Send(IDispatch *pdisp)
{
	// TODO: Add your implementation code here	
	//--------------- get request Packet ID -------------
	CHAR	buff[100];
	HRESULT hr;
	VARIANT varReqPID;

	IBodyPacketPtr	ptrBodyRequest(pdisp);
	IBodyPacketPtr	ptrBodyResponse  = NULL;

	hr = ptrBodyRequest->get_PacketID(&varReqPID);
	if(FAILED(hr)) return hr;

	// ***************************** ACK/NAK Handshaking ********************************
	VARIANT varPID, varResPID;
	UINT	xcount=0;/*begin at 0 retriver*/
	BOOL	bFlag = FALSE;
	do{
		//--------------- write to com port ------------------
		hr = WriteBodyPacket(ptrBodyRequest);
		if(FAILED(hr)) return hr;

		// --- if request Packet ID = ACK/NAK ---------
		if(varReqPID.bVal == GARMIN_TYPES::ACK || varReqPID.bVal == GARMIN_TYPES::NAK) return S_OK;

		hr = ReadBodyPacket((IDispatch**)&ptrBodyResponse);
		if(FAILED(hr)) return hr;

		// --- Analyse Body Packet ---------
		hr = ptrBodyResponse->get_PacketID(&varPID);
		if(FAILED(hr))return hr;
		
		// ----- must be ACK or NAK 
		if(varPID.bVal!=GARMIN_TYPES::ACK && varPID.bVal!=GARMIN_TYPES::NAK){
			sprintf(buff,"Expected ACK/NAK Handshaking, however Packet ID = %d ",varPID.bVal);
			this->Error(buff);
			return E_FAIL;
		}

		if(varPID.bVal==GARMIN_TYPES::ACK){
			// check response PID

			hr = ptrBodyResponse->Item(_variant_t((BYTE)0), &varResPID);
			if(FAILED(hr)) return hr;

			// ACK must be response for request Packet ID
			if(varReqPID.bVal!=varResPID.bVal){
				sprintf(buff,"Expected ACK for PID=%d, however reciver ACK for PID = %d ",varReqPID.bVal, varResPID.bVal);
				this->Error(buff);
				return E_FAIL;
			}
			else{
				// Good!!!
				bFlag = TRUE;
				break;
			}
		}

		xcount++;

	}while(xcount<=m_NumRetriver/*if m_NumRetriver==0 then will be send 1 packet*/);	

	if(bFlag){
		return S_OK;
	}
	else{
		sprintf(buff,"Send() - error ACK/NAK Handshaking!");
		this->Error(buff);
		return E_FAIL;
	}

}

/***********************************************************************************************
*
*
*
*
*
***********************************************************************************************/
STDMETHODIMP CCommunication::Reciver(IDispatch **ppdisp)
{
	// TODO: Add your implementation code here
	CHAR	buff[100];
	HRESULT hr;

	IBodyPacketPtr ptrBodyPacket		= NULL;
	IBodyPacketPtr ptrACK_NAKBodyPacket(CLSID_BodyPacket);

	UINT	xcount=0;/*begin at 0 retriver*/
	BOOL	bFlag = FALSE;

	VARIANT varStatus, varReqPID;

	do{
		// ----------- read packet
		hr = ReadBodyPacket((IDispatch**)&ptrBodyPacket);
		if(FAILED(hr)) return hr;

		hr = ptrBodyPacket->get_PacketID(&varReqPID);
		if(FAILED(hr)) return hr;

		hr = ptrBodyPacket->get_Status(&varStatus);
		if(FAILED(hr)) return hr;

		// ------------- create ACK or NAK packet
		if(varStatus.boolVal==TRUE){
			hr = ptrACK_NAKBodyPacket->SetACKPacket(varReqPID);
		}
		else{
			hr = ptrACK_NAKBodyPacket->SetNAKPacket(varReqPID);
		}
				
		if(FAILED(hr)) return hr;

		// ---------- send ACK or NAK
		hr = WriteBodyPacket(ptrACK_NAKBodyPacket);
		ptrACK_NAKBodyPacket = NULL;
		if(FAILED(hr)) return hr;

		if(varStatus.boolVal==TRUE){
			bFlag = TRUE;
			break;
		}		

		xcount++;
	}
	while(xcount<=m_NumRetriver/*if m_NumRetriver==0 then will be resiver 1 packet*/);

	if(bFlag){
		ptrBodyPacket->QueryInterface(IID_IDispatch, (void**)ppdisp);
		return S_OK;
	}
	else{
		sprintf(buff,"Reciver() - error ACK/NAK Handshaking!");
		this->Error(buff);
		return E_FAIL;
	}

	return S_OK;
}


STDMETHODIMP CCommunication::Clear()
{
	// TODO: Add your implementation code here
	if(m_hcom){
		//FlushFileBuffers(m_hcom);
		if(PurgeComm(m_hcom, PURGE_RXCLEAR)){
			return S_OK;
		}
		else{
			this->Error("Unable purge RX buffer!");
			return E_FAIL;
		}
	}
	return S_OK;
}

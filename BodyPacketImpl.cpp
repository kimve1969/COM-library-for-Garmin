// BodyPacket.cpp : Implementation of CBodyPacket
#include "stdafx.h"
#include "BodyPacketImpl.h"
/////////////////////////////////////////////////////////////////////////////
// IBaseBodyPacketImpl
STDMETHODIMP CBodyPacketImpl::get_PacketID(VARIANT *pVal)
{
	// TODO: Add your implementation code here
	HRESULT hr = _CheckAccess(MODE_READ);
	if(FAILED(hr)) return hr;

	VariantInit(pVal);

	pVal->vt   = VT_UI1;
	pVal->bVal = m_PacketID;

	return S_OK;
}

STDMETHODIMP CBodyPacketImpl::put_PacketID(VARIANT newVal)
{
	// TODO: Add your implementation code here
	HRESULT hr = _CheckAccess(MODE_WRITE);
	if(FAILED(hr)) return hr;

	switch(newVal.vt){
	case VT_UI1:
		m_PacketID = newVal.bVal;
		break;
	case VT_I2:
		m_PacketID = static_cast<BYTE>(newVal.iVal);
		break;
	case VT_I4:
		m_PacketID = static_cast<BYTE>(newVal.lVal);
		break;
	default:		
		return   DISP_E_TYPEMISMATCH;
	}

	return S_OK;
}

STDMETHODIMP CBodyPacketImpl::get_Count(VARIANT *pVal)
{
	// TODO: Add your implementation code here
	HRESULT hr = _CheckAccess(MODE_READ);
	if(FAILED(hr)) return hr;

	VariantInit(pVal);

	pVal->vt	= VT_UI1;	
	pVal->bVal	= m_PacketData.size();

	return S_OK;
}

STDMETHODIMP CBodyPacketImpl::get_Status(VARIANT *pVal)
{
	// TODO: Add your implementation code here
	HRESULT hr = _CheckAccess(MODE_READ);
	if(FAILED(hr)) return hr;

	VariantInit(pVal);

	pVal->vt		= VT_BOOL;
	pVal->boolVal	= m_bStatus;

	return S_OK;
}

STDMETHODIMP CBodyPacketImpl::Add(VARIANT Val)
{
	// TODO: Add your implementation code here	
	HRESULT hr = _CheckAccess(MODE_WRITE);
	if(FAILED(hr)) return hr;

	BYTE byte;
	switch(Val.vt){
	case VT_UI1:
		byte = Val.bVal;
		break;
	case VT_I2:
		byte = static_cast<BYTE>(Val.iVal);
		break;
	case VT_I4:
		byte = static_cast<BYTE>(Val.lVal);
		break;
	default:
		return DISP_E_TYPEMISMATCH;
	}
	
	m_PacketData.push_back(byte);

	return S_OK;
}

STDMETHODIMP CBodyPacketImpl::Item(VARIANT varIndx, VARIANT *pVal)
{
	// TODO: Add your implementation code here
	HRESULT hr = _CheckAccess(MODE_READ);
	if(FAILED(hr)) return hr;

	LONG indx;
	switch(varIndx.vt){
	case VT_UI1:
		indx = varIndx.bVal;
		break;
	case VT_I2:
		indx = varIndx.iVal;
		break;
	case VT_I4:
		indx = varIndx.lVal;
		break;
	default:
		return DISP_E_TYPEMISMATCH;
	}

	if(indx >= m_PacketData.size() ){
		return TYPE_E_OUTOFBOUNDS;
	}

	VariantInit(pVal);

	pVal->vt	= VT_UI1;
	pVal->bVal	= static_cast<BYTE>(m_PacketData.at(indx));

	return S_OK;
}

STDMETHODIMP CBodyPacketImpl::Clear()
{
	// TODO: Add your implementation code here
	HRESULT hr = _CheckAccess(MODE_WRITE);
	if(FAILED(hr)) return hr;

	m_PacketData.clear();
	m_bStatus	= TRUE;

	return S_OK;
}

STDMETHODIMP CBodyPacketImpl::GetCRC(/*[out, retval]*/ VARIANT *pVal)
{
	VariantInit(pVal);

	pVal->vt = VT_UI1;

	BYTE CRC = 0;

	CRC -= m_PacketID;
	CRC -= m_PacketData.size();

	for(int i=0; i<m_PacketData.size();i++){
		CRC -= m_PacketData[i];
	}

	pVal->bVal = CRC;

	return S_OK;
}

STDMETHODIMP CBodyPacketImpl::get_ACK(VARIANT *pVal)
{
	// TODO: Add your implementation code here
	HRESULT hr = _CheckAccess(MODE_READ);
	if(FAILED(hr)) return hr;

	VariantInit(pVal);

	pVal->vt = VT_BOOL;
	if(m_PacketID == GARMIN_TYPES::L000::Pid_Ack_Byte){
		pVal->boolVal = TRUE;
	}
	else{
		pVal->boolVal = FALSE;
	}

	return S_OK;
}

STDMETHODIMP CBodyPacketImpl::get_NAK(VARIANT *pVal)
{
	// TODO: Add your implementation code here
	HRESULT hr = _CheckAccess(MODE_READ);
	if(FAILED(hr)) return hr;

	VariantInit(pVal);

	pVal->vt = VT_BOOL;
	if(m_PacketID == GARMIN_TYPES::L000::Pid_Nak_Byte){
		pVal->boolVal = TRUE;
	}
	else{
		pVal->boolVal = FALSE;
	}

	return S_OK;
}


STDMETHODIMP CBodyPacketImpl::SetACKPacket(VARIANT varPacketID)
{
	// TODO: Add your implementation code here
	HRESULT hr = _CheckAccess(MODE_WRITE);
	if(FAILED(hr)) return hr;

	BYTE byte;

	switch(varPacketID.vt){
	case VT_UI1:
		byte = varPacketID.bVal;
		break;
	case VT_I2:
		byte = static_cast<BYTE>(varPacketID.iVal);
		break;
	case VT_I4:
		byte = static_cast<BYTE>(varPacketID.lVal);
		break;
	default:
		return DISP_E_TYPEMISMATCH;
	}

	hr = this->Clear();
	if(FAILED(hr)) return hr;

	m_PacketID = GARMIN_TYPES::L000::Pid_Ack_Byte;

	// ACK Packet have integer data - 2 bytes	
	m_PacketData.push_back(byte);
	m_PacketData.push_back(0);

	return S_OK;
}

STDMETHODIMP CBodyPacketImpl::SetNAKPacket(VARIANT varPacketID)
{
	// TODO: Add your implementation code here
	HRESULT hr = _CheckAccess(MODE_WRITE);
	if(FAILED(hr)) return hr;

	BYTE byte;

	switch(varPacketID.vt){
	case VT_UI1:
		byte = varPacketID.bVal;
		break;
	case VT_I2:
		byte = static_cast<BYTE>(varPacketID.iVal);
		break;
	case VT_I4:
		byte = static_cast<BYTE>(varPacketID.lVal);
		break;
	default:
		return DISP_E_TYPEMISMATCH;
	}

	hr = this->Clear();
	if(FAILED(hr)) return hr;

	m_PacketID = GARMIN_TYPES::L000::Pid_Nak_Byte;

	// ACK Packet have integer data - 2 bytes
	m_PacketData.push_back(byte);
	m_PacketData.push_back(0);

	return S_OK;
}

STDMETHODIMP CBodyPacketImpl::_CheckAccess(BODYPACKET_USE_MODE _mode)
{
	switch(_mode){
	case MODE_READ: /* using in property put_XXX */
		switch(m_Mode){
		case ACCESS_OR:
			break;
		case ACCESS_OW:
			return DISP_E_MEMBERNOTFOUND;
		case ACCESS_RW:
			break;
		}
		break;
	case MODE_WRITE: /* using in property get_XXX */
		switch(m_Mode){
		case ACCESS_OR:
			return DISP_E_MEMBERNOTFOUND;
		case ACCESS_OW:
			break;
		case ACCESS_RW:
			break;
		}
		break;
	}

	return S_OK;
}
/////////////////////////////////////////////////////////////////////////////////////////////////
//
//	import data from Garmin DXXX_Type structures
//
/////////////////////////////////////////////////////////////////////////////////////////////////
STDMETHODIMP CBodyPacketImpl::_Import(/*[in]*/ long xsize, /*[in, size_is(xsize)]*/ byte arr[])
{
	if(xsize > MAX_LENGTH_OF_PACKET){
		return TYPE_E_OUTOFBOUNDS;
	}

	// clear byte-array
	// m_PacketData.clear();

	for(long i=0; i<xsize ;i++){
		m_PacketData.push_back(arr[i]);
	}

	return S_OK;
}
/////////////////////////////////////////////////////////////////////////////////////////////////
//
//	export data to Garmin DXXX_Type structures
//
/////////////////////////////////////////////////////////////////////////////////////////////////
STDMETHODIMP CBodyPacketImpl::_Export(/*[out]*/ long* xsize, /*[out, size_is(,*xsize)]*/ byte** arr)
{
	long xcount = m_PacketData.size();

	BYTE* p = new BYTE[xcount];

	for(long i=0; i<xcount; i++){
		p[i] = m_PacketData[i];
	}

	*xsize  = xcount;
	*arr	= p;

	return S_OK;
}

STDMETHODIMP CBodyPacketImpl::SetStatus(BOOL bStat)
{
	m_bStatus = bStat;
	return S_OK;
}

STDMETHODIMP CBodyPacketImpl::SetAccess(BODYPACKET_ACCESS bpacc)
{
	m_Mode = bpacc;
	return S_OK;
}
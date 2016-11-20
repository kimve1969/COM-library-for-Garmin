// D103_Wpt_Type.cpp : Implementation of CD103_Wpt_Type
#include "stdafx.h"
#include "Garmin.h"
#include "D103_Wpt_Type.h"

/////////////////////////////////////////////////////////////////////////////
// CD103_Wpt_Type

STDMETHODIMP CD103_Wpt_Type::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_ID103_Wpt_Type,
		&IID_IGarminDataType,
		&IID_IDXXX_Wpt_Type,
		&IID_IBodyPacket
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CD103_Wpt_Type::_Exchange()
{
	return S_OK;
}

STDMETHODIMP CD103_Wpt_Type::_CheckDataLength()
{
	int xsize = sizeof(m_gdata);
	//xsize += m_ident.length() + m_comment.length() + m_facility.length() + m_city.length() + m_addr.length() + m_cross_road.length();

	if(xsize>MAX_LENGTH_OF_PACKET){
		this->Error("ERROR: ID108_Wpt_Type::_CheckDataLength() - exceed max length (255 bytes) of packet!");
		return E_INVALIDARG;
	}
	
	return S_OK;
}

STDMETHODIMP CD103_Wpt_Type::get_ident(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_ident.copy();
	return S_OK;
}

STDMETHODIMP CD103_Wpt_Type::put_ident(BSTR newVal)
{
	// TODO: Add your implementation code here
	m_ident = _bstr_t(newVal).copy();	
	return _CheckDataLength();
}

STDMETHODIMP CD103_Wpt_Type::get_lon(long *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_gdata.posn.lon;
	return S_OK;
}

STDMETHODIMP CD103_Wpt_Type::put_lon(long newVal)
{
	// TODO: Add your implementation code here
	m_gdata.posn.lon = newVal;
	return S_OK;
}

STDMETHODIMP CD103_Wpt_Type::get_lat(long *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_gdata.posn.lat;
	return S_OK;
}

STDMETHODIMP CD103_Wpt_Type::put_lat(long newVal)
{
	// TODO: Add your implementation code here
	m_gdata.posn.lat = newVal;
	return S_OK;
}

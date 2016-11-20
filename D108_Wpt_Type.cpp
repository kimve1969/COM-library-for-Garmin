// D108_Wpt_Type.cpp : Implementation of CD108_Wpt_Type
#include "stdafx.h"
#include "Garmin.h"
#include "D108_Wpt_Type.h"

/////////////////////////////////////////////////////////////////////////////
// CD108_Wpt_Type

STDMETHODIMP CD108_Wpt_Type::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_ID108_Wpt_Type,
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

STDMETHODIMP CD108_Wpt_Type::_Exchange()
{
	IBodyPacketPtr pBodyPacket = NULL;

	HRESULT hr = this->QueryInterface(IID_IBodyPacket, (void**)&pBodyPacket);
	if(FAILED(hr)) return hr;

	IHelperBodyPacketPtr ptrHelper = pBodyPacket;

	_variant_t xcount;

	hr = pBodyPacket->get_Count(&xcount);
	if(FAILED(hr)) return hr;

	if(xcount){
		// PacketData -> m_gdata
		long xbytes;
		BYTE *p = NULL;
		
		hr = ptrHelper->_Export(&xbytes, &p);
		if(FAILED(hr)) return hr;		
		
		// srtuct
		memcpy(&m_gdata, p, sizeof(m_gdata));

		// strings - must be xbytes>sizeof(m_gdata) !!!
		long i = sizeof(m_gdata);
		if(i<xbytes) m_ident = (char*)(p+i);
		
		i += m_ident.length()+1;
		if(i<xbytes) m_comment = (char*)(p+i);

		i += m_comment.length()+1;
		if(i<xbytes) m_facility = (char*)(p+i);

		i += m_facility.length()+1;
		if(i<xbytes) m_city = (char*)(p+i);

		i += m_city.length()+1;
		if(i<xbytes) m_addr = (char*)(p+i);

		i += m_addr.length()+1;
		if(i<xbytes) m_cross_road = (char*)(p+i);

		delete[] p;				
	}
	else{
		// m_gdata -> PacketData
		BYTE* p = (BYTE*)&m_gdata;

		hr = ptrHelper->_Import(sizeof(m_gdata), p);
		if(FAILED(hr)) return hr;
		// strings		

		hr = ptrHelper->_Import(m_ident.length(), (BYTE*)(char*)m_ident);
		if(FAILED(hr)) return hr;

		hr = ptrHelper->_Import(m_comment.length(), (BYTE*)(char*)m_comment);
		if(FAILED(hr)) return hr;

		hr = ptrHelper->_Import(m_facility.length(), (BYTE*)(char*)m_facility);
		if(FAILED(hr)) return hr;

		hr = ptrHelper->_Import(m_city.length(), (BYTE*)(char*)m_city);
		if(FAILED(hr)) return hr;

		hr = ptrHelper->_Import(m_addr.length(), (BYTE*)(char*)m_addr);
		if(FAILED(hr)) return hr;

		hr = ptrHelper->_Import(m_cross_road.length(), (BYTE*)(char*)m_cross_road);
		if(FAILED(hr)) return hr;
	}

	return S_OK;
}

STDMETHODIMP CD108_Wpt_Type::_CheckDataLength()
{
	int xsize = sizeof(m_gdata);
	xsize += m_ident.length() + m_comment.length() + m_facility.length() + m_city.length() + m_addr.length() + m_cross_road.length();

	if(xsize>MAX_LENGTH_OF_PACKET){
		this->Error("ERROR: ID108_Wpt_Type::_CheckDataLength() - exceed max length (255 bytes) of packet!");
		return E_INVALIDARG;
	}
	
	return S_OK;
}

STDMETHODIMP CD108_Wpt_Type::get_color(unsigned int *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_gdata.color;
	return S_OK;
}

STDMETHODIMP CD108_Wpt_Type::put_color(unsigned int newVal)
{
	// TODO: Add your implementation code here
	m_gdata.color = newVal;
	return S_OK;
}

STDMETHODIMP CD108_Wpt_Type::get_ident(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_ident.copy();
	return S_OK;
}

STDMETHODIMP CD108_Wpt_Type::put_ident(BSTR newVal)
{
	// TODO: Add your implementation code here
	m_ident = _bstr_t(newVal).copy();	
	return _CheckDataLength();
}

STDMETHODIMP CD108_Wpt_Type::get_lon(long *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_gdata.posn.lon;
	return S_OK;
}

STDMETHODIMP CD108_Wpt_Type::put_lon(long newVal)
{
	// TODO: Add your implementation code here
	m_gdata.posn.lon = newVal;
	return S_OK;
}

STDMETHODIMP CD108_Wpt_Type::get_lat(long *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_gdata.posn.lat;
	return S_OK;
}

STDMETHODIMP CD108_Wpt_Type::put_lat(long newVal)
{
	// TODO: Add your implementation code here
	m_gdata.posn.lat = newVal;
	return S_OK;
}

STDMETHODIMP CD108_Wpt_Type::get_wpt_class(unsigned int *pVal)
{
	// TODO: Add your implementation code here
	 *pVal = m_gdata.wpt_class;
	return S_OK;
}

STDMETHODIMP CD108_Wpt_Type::put_wpt_class(unsigned int newVal)
{
	// TODO: Add your implementation code here
	m_gdata.wpt_class = newVal;
	return S_OK;
}

STDMETHODIMP CD108_Wpt_Type::get_dspl(unsigned int *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_gdata.dspl;
	return S_OK;
}

STDMETHODIMP CD108_Wpt_Type::put_dspl(unsigned int newVal)
{
	// TODO: Add your implementation code here
	m_gdata.dspl = newVal;
	return S_OK;
}

STDMETHODIMP CD108_Wpt_Type::get_attr(unsigned int *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_gdata.attr;
	return S_OK;
}

STDMETHODIMP CD108_Wpt_Type::put_attr(unsigned int newVal)
{
	// TODO: Add your implementation code here
	m_gdata.attr = newVal;
	return S_OK;
}

STDMETHODIMP CD108_Wpt_Type::get_smbl(int *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_gdata.smbl;
	return S_OK;
}

STDMETHODIMP CD108_Wpt_Type::put_smbl(int newVal)
{
	// TODO: Add your implementation code here
	m_gdata.smbl = newVal;
	return S_OK;
}

STDMETHODIMP CD108_Wpt_Type::get_alt(float *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_gdata.alt;
	return S_OK;
}

STDMETHODIMP CD108_Wpt_Type::put_alt(float newVal)
{
	// TODO: Add your implementation code here
	m_gdata.alt = newVal;
	return S_OK;
}

STDMETHODIMP CD108_Wpt_Type::get_dpth(float *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_gdata.dpth;
	return S_OK;
}

STDMETHODIMP CD108_Wpt_Type::put_dpth(float newVal)
{
	// TODO: Add your implementation code here
	m_gdata.dpth = newVal;
	return S_OK;
}

STDMETHODIMP CD108_Wpt_Type::get_dist(float *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_gdata.dist;
	return S_OK;
}

STDMETHODIMP CD108_Wpt_Type::put_dist(float newVal)
{
	// TODO: Add your implementation code here
	m_gdata.dist = newVal;
	return S_OK;
}

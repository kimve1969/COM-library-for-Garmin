// D600_Date_Time_Type.cpp : Implementation of CD600_Date_Time_Type
#include "stdafx.h"
#include "Garmin.h"
#include "D600_Date_Time_Type.h"

/////////////////////////////////////////////////////////////////////////////
// CD600_Date_Time_Type

STDMETHODIMP CD600_Date_Time_Type::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_ID600_Date_Time_Type,
		&IID_IGarminDataType,
		&IID_IBodyPacket
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CD600_Date_Time_Type::FinalConstruct(void)
{
	// TODO: Add your implementation code here
	m_gdata.month	= 1;
	m_gdata.day		= 1;
	m_gdata.year	= 1990;
	m_gdata.hour	= 0;
	m_gdata.minute	= 0;
	m_gdata.second	= 0;

	return S_OK;
}

// Данный метод будет вызван перед деструктором...
STDMETHODIMP_(void) CD600_Date_Time_Type::FinalRelease()
{

}

STDMETHODIMP CD600_Date_Time_Type::_Exchange()
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

		if((long)xcount != sizeof(m_gdata)){
			this->Error("Not equal size of Garmin structures and number byte-array!");
			return E_FAIL;
		}
		
		hr = ptrHelper->_Export(&xbytes, &p);
		if(FAILED(hr)) return hr;		

		memcpy(&m_gdata, p, xbytes);

		delete[] p;
	}
	else{
		// m_gdata -> PacketData
		BYTE* p = (BYTE*)&m_gdata;

		hr = ptrHelper->_Import(sizeof(m_gdata), p);
		if(FAILED(hr)) return hr;
	}

	return S_OK;
}

STDMETHODIMP CD600_Date_Time_Type::get_month(unsigned int *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_gdata.month;
	return S_OK;
}

STDMETHODIMP CD600_Date_Time_Type::put_month(unsigned int newVal)
{
	// TODO: Add your implementation code here
	if(newVal>=1 && newVal<=12){
		m_gdata.month = newVal;
	}
	else{
		return E_INVALIDARG;
	}
	return S_OK;
}

STDMETHODIMP CD600_Date_Time_Type::get_day(unsigned int *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_gdata.day;
	return S_OK;
}

STDMETHODIMP CD600_Date_Time_Type::put_day(unsigned int newVal)
{
	// TODO: Add your implementation code here	
	if(newVal>=1 && newVal<=31){
		m_gdata.day = newVal;
	}
	else{
		return E_INVALIDARG;
	}
	return S_OK;
}

STDMETHODIMP CD600_Date_Time_Type::get_year(unsigned int *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_gdata.year;
	return S_OK;
}

STDMETHODIMP CD600_Date_Time_Type::put_year(unsigned int newVal)
{
	// TODO: Add your implementation code here
	m_gdata.year = newVal;
	return S_OK;
}

STDMETHODIMP CD600_Date_Time_Type::get_hour(unsigned int *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_gdata.hour;
	return S_OK;
}

STDMETHODIMP CD600_Date_Time_Type::put_hour(unsigned int newVal)
{
	// TODO: Add your implementation code here
	if(newVal>=0 && newVal<=23){
		m_gdata.hour = newVal;
	}
	else{
		return E_INVALIDARG;
	}
	
	return S_OK;
}

STDMETHODIMP CD600_Date_Time_Type::get_minute(unsigned int *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_gdata.minute;
	return S_OK;
}

STDMETHODIMP CD600_Date_Time_Type::put_minute(unsigned int newVal)
{
	// TODO: Add your implementation code here
	if(newVal>=0 && newVal<=59){
		m_gdata.minute = newVal;
	}
	else{
		return E_INVALIDARG;
	}
	
	return S_OK;
}

STDMETHODIMP CD600_Date_Time_Type::get_second(unsigned int *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_gdata.second;
	return S_OK;
}

STDMETHODIMP CD600_Date_Time_Type::put_second(unsigned int newVal)
{
	// TODO: Add your implementation code here
	if(newVal>=0 && newVal<=59){
		m_gdata.second = newVal;
	}
	else{
		return E_INVALIDARG;
	}
	
	return S_OK;
}

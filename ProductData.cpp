// ProductData.cpp : Implementation of CProductData
#include "stdafx.h"
#include "Garmin.h"
#include "ProductData.h"

/////////////////////////////////////////////////////////////////////////////
// CProductData

STDMETHODIMP CProductData::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IProductData
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CProductData::FinalConstruct(void)
{
	// TODO: Add your implementation code here

	return S_OK;
}

// Данный метод будет вызван перед деструктором...
STDMETHODIMP_(void) CProductData::FinalRelease()
{
	SysFreeString(m_product_description);
}

STDMETHODIMP CProductData::SetProductID(int val)
{
	m_product_ID = val;
	return S_OK;
}

STDMETHODIMP CProductData::SetSoftwareVersion(int val)
{
	m_software_version = val;
	return S_OK;
}

STDMETHODIMP CProductData::SetProductDescription(BSTR desc)
{
	m_product_description = _bstr_t(desc).copy();
	return S_OK;
}

STDMETHODIMP CProductData::get_product_ID(int *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_product_ID;

	return S_OK;
}

STDMETHODIMP CProductData::get_software_version(int *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_software_version;

	return S_OK;
}

STDMETHODIMP CProductData::get_product_description(VARIANT *pVal)
{
	// TODO: Add your implementation code here
	pVal->vt		= VT_BSTR;
	pVal->bstrVal	= m_product_description.copy();

	return S_OK;
}

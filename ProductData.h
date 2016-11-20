// ProductData.h : Declaration of the CProductData

#ifndef __PRODUCTDATA_H_
#define __PRODUCTDATA_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CProductData
class ATL_NO_VTABLE CProductData : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CProductData, &CLSID_ProductData>,
	public ISupportErrorInfo,
	public IDispatchImpl<IProductData, &IID_IProductData, &LIBID_GARMINLib>,
	public IHelperProductData
{
public:
	CProductData()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_PRODUCTDATA)
DECLARE_NOT_AGGREGATABLE(CProductData)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CProductData)
	COM_INTERFACE_ENTRY(IProductData)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IHelperProductData)
END_COM_MAP()

BEGIN_CATEGORY_MAP(CProductData)
	IMPLEMENTED_CATEGORY(CATID_SafeForScripting)
	IMPLEMENTED_CATEGORY(CATID_SafeForInitializing)
END_CATEGORY_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IProductData
public:
	STDMETHOD(get_product_description)(/*[out, retval]*/ VARIANT *pVal);
	STDMETHOD(get_software_version)(/*[out, retval]*/ int *pVal);
	STDMETHOD(get_product_ID)(/*[out, retval]*/ int *pVal);
	STDMETHOD(FinalConstruct)();
	STDMETHOD_(void, FinalRelease)();
// IHelperProductData
	STDMETHOD(SetProductDescription)(BSTR desc);
	STDMETHOD(SetSoftwareVersion)(int val);
	STDMETHOD(SetProductID)(int val);
private:
	int		m_product_ID;
	int		m_software_version;
	_bstr_t m_product_description;
};

#endif //__PRODUCTDATA_H_

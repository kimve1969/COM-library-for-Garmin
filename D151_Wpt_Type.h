// D151_Wpt_Type.h : Declaration of the CD151_Wpt_Type

#ifndef __D151_WPT_TYPE_H_
#define __D151_WPT_TYPE_H_

#include "resource.h"       // main symbols
#include "garmin_types.h"
#include "BodyPacketImpl.h"

// --------------------------- USE SMART POINTER !!! --------------------------
_COM_SMARTPTR_TYPEDEF(IBodyPacket, __uuidof(IBodyPacket));
_COM_SMARTPTR_TYPEDEF(IHelperBodyPacket, __uuidof(IHelperBodyPacket));
/////////////////////////////////////////////////////////////////////////////
// CD151_Wpt_Type
class ATL_NO_VTABLE CD151_Wpt_Type : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CD151_Wpt_Type, &CLSID_D151_Wpt_Type>,
	public ISupportErrorInfo,
	public CBodyPacketImpl,
	public IDispatchImpl<ID151_Wpt_Type, &IID_ID151_Wpt_Type, &LIBID_GARMINLib>
{
public:
	CD151_Wpt_Type()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_D151_WPT_TYPE)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CD151_Wpt_Type)
	COM_INTERFACE_ENTRY(ID151_Wpt_Type)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY2(IDispatch, ID151_Wpt_Type)
	COM_INTERFACE_ENTRY2(IGarminDataType, ID151_Wpt_Type)

	COM_INTERFACE_ENTRY2(IDXXX_Wpt_Type, ID151_Wpt_Type)
	COM_INTERFACE_ENTRY(IBodyPacket)	
	COM_INTERFACE_ENTRY(IHelperBodyPacket)
END_COM_MAP()

BEGIN_CATEGORY_MAP(CD151_Wpt_Type)
	IMPLEMENTED_CATEGORY(CATID_SafeForScripting)
	IMPLEMENTED_CATEGORY(CATID_SafeForInitializing)
END_CATEGORY_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);
// IDXXX_Wpt_Type
	STDMETHOD(get_lat)(/*[out, retval]*/ long *pVal);
	STDMETHOD(put_lat)(/*[in]*/ long newVal);
	STDMETHOD(get_lon)(/*[out, retval]*/ long *pVal);
	STDMETHOD(put_lon)(/*[in]*/ long newVal);
	STDMETHOD(get_ident)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(put_ident)(/*[in]*/ BSTR newVal);
// IGarminDataType
	STDMETHOD(get_Type)(/*[out, retval]*/BSTR * pVal)
	{
		*pVal = SysAllocString(L"D151");
			
		return S_OK;
	}
	STDMETHOD(get_IDXXX_Type)(/*[out, retval]*/IDispatch **pVal)
	{
		// TODO: Add your implementation code here
		HRESULT hr = this->QueryInterface(IID_IDXXX_Wpt_Type, (void**)pVal);
		if(FAILED(hr)) return hr;

		return S_OK;
	}
// IHelperBodyPacket
	STDMETHOD(_Exchange)();
// ID151_Wpt_Type
private:
	STDMETHOD(_CheckDataLength)();

	GARMIN_TYPES::D151_Wpt_Type m_gdata;
	_bstr_t	m_ident;
};

#endif //__D151_WPT_TYPE_H_

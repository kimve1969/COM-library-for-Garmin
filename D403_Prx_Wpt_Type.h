// D403_Prx_Wpt_Type.h : Declaration of the CD403_Prx_Wpt_Type

#ifndef __D403_PRX_WPT_TYPE_H_
#define __D403_PRX_WPT_TYPE_H_

#include "resource.h"       // main symbols
#include "garmin_types.h"
#include "BodyPacketImpl.h"

// --------------------------- USE SMART POINTER !!! --------------------------
_COM_SMARTPTR_TYPEDEF(IBodyPacket, __uuidof(IBodyPacket));
_COM_SMARTPTR_TYPEDEF(IHelperBodyPacket, __uuidof(IHelperBodyPacket));
/////////////////////////////////////////////////////////////////////////////
// CD403_Prx_Wpt_Type
class ATL_NO_VTABLE CD403_Prx_Wpt_Type : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CD403_Prx_Wpt_Type, &CLSID_D403_Prx_Wpt_Type>,
	public ISupportErrorInfo,
	public CBodyPacketImpl,
	public IDispatchImpl<ID403_Prx_Wpt_Type, &IID_ID403_Prx_Wpt_Type, &LIBID_GARMINLib>
{
public:
	CD403_Prx_Wpt_Type()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_D403_PRX_WPT_TYPE)
DECLARE_NOT_AGGREGATABLE(CD403_Prx_Wpt_Type)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CD403_Prx_Wpt_Type)
	COM_INTERFACE_ENTRY(ID403_Prx_Wpt_Type)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY2(IDispatch, ID403_Prx_Wpt_Type)
	COM_INTERFACE_ENTRY2(IGarminDataType, ID403_Prx_Wpt_Type)
	COM_INTERFACE_ENTRY2(IDXXX_Prx_Wpt_Type, ID403_Prx_Wpt_Type)
	COM_INTERFACE_ENTRY(IBodyPacket)	
	COM_INTERFACE_ENTRY(IHelperBodyPacket)
END_COM_MAP()

BEGIN_CATEGORY_MAP(CD155_Wpt_Type)
	IMPLEMENTED_CATEGORY(CATID_SafeForScripting)
	IMPLEMENTED_CATEGORY(CATID_SafeForInitializing)
END_CATEGORY_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);
// IDXXX_Prx_Wpt_Type
// IGarminDataType
	STDMETHOD(get_Type)(/*[out, retval]*/BSTR * pVal)
	{
		*pVal = SysAllocString(L"D403");
			
		return S_OK;
	}
	STDMETHOD(get_IDXXX_Type)(/*[out, retval]*/ IDispatch* *pVal)
	{
		// TODO: Add your implementation code here
		HRESULT hr = this->QueryInterface(IID_IDXXX_Prx_Wpt_Type, (void**)pVal);
		if(FAILED(hr)) return hr;

		return S_OK;
	}
// IHelperBodyPacket
	STDMETHOD(_Exchange)();
// ID403_Prx_Wpt_Type
public:
};

#endif //__D403_PRX_WPT_TYPE_H_

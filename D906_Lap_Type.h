// D906_Lap_Type.h : Declaration of the CD906_Lap_Type

#ifndef __D906_LAP_TYPE_H_
#define __D906_LAP_TYPE_H_

#include "resource.h"       // main symbols
#include "BodyPacketImpl.h"
// --------------------------- USE SMART POINTER !!! --------------------------
_COM_SMARTPTR_TYPEDEF(IBodyPacket, __uuidof(IBodyPacket));
_COM_SMARTPTR_TYPEDEF(IHelperBodyPacket, __uuidof(IHelperBodyPacket));
/////////////////////////////////////////////////////////////////////////////
// CD906_Lap_Type
class ATL_NO_VTABLE CD906_Lap_Type : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CD906_Lap_Type, &CLSID_D906_Lap_Type>,
	public ISupportErrorInfo,
	public CBodyPacketImpl,
	public IDispatchImpl<ID906_Lap_Type, &IID_ID906_Lap_Type, &LIBID_GARMINLib>
{
public:
	CD906_Lap_Type()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_D906_LAP_TYPE)
DECLARE_NOT_AGGREGATABLE(CD906_Lap_Type)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CD906_Lap_Type)
	COM_INTERFACE_ENTRY(ID906_Lap_Type)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY2(IDispatch, ID906_Lap_Type)
	COM_INTERFACE_ENTRY2(IGarminDataType,ID906_Lap_Type)	
	COM_INTERFACE_ENTRY(IBodyPacket)
	COM_INTERFACE_ENTRY(IHelperBodyPacket)
END_COM_MAP()

BEGIN_CATEGORY_MAP(CD906_Lap_Type)
	IMPLEMENTED_CATEGORY(CATID_SafeForScripting)
	IMPLEMENTED_CATEGORY(CATID_SafeForInitializing)
END_CATEGORY_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);
// IGarminDataType
	STDMETHOD(get_Type)(/*[out, retval]*/BSTR * pVal)
	{
		*pVal = SysAllocString(L"D906");
			
		return S_OK;
	}
	STDMETHOD(get_IDXXX_Type)(/*[out, retval]*/IDispatch **pVal)
	{
		// TODO: Add your implementation code here
		HRESULT hr = this->QueryInterface(IID_ID906_Lap_Type, (void**)pVal);
		if(FAILED(hr)) return hr;

		return S_OK;
	}
// IBodyPacket
	STDMETHOD(_Exchange)();
// ID906_Lap_Type
public:
private:
	GARMIN_TYPES::D906_Lap_Type m_gdata;
};

#endif //__D906_LAP_TYPE_H_

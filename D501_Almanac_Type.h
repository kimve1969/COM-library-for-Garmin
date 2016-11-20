// D501_Almanac_Type.h : Declaration of the CD501_Almanac_Type

#ifndef __D501_ALMANAC_TYPE_H_
#define __D501_ALMANAC_TYPE_H_

#include "resource.h"       // main symbols
#include "garmin_types.h"
#include "BodyPacketImpl.h"

// --------------------------- USE SMART POINTER !!! --------------------------
_COM_SMARTPTR_TYPEDEF(IBodyPacket, __uuidof(IBodyPacket));
_COM_SMARTPTR_TYPEDEF(IHelperBodyPacket, __uuidof(IHelperBodyPacket));
/////////////////////////////////////////////////////////////////////////////
// CD501_Almanac_Type
class ATL_NO_VTABLE CD501_Almanac_Type : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CD501_Almanac_Type, &CLSID_D501_Almanac_Type>,
	public ISupportErrorInfo,
	public CBodyPacketImpl,
	public IDispatchImpl<ID501_Almanac_Type, &IID_ID501_Almanac_Type, &LIBID_GARMINLib>
{
public:
	CD501_Almanac_Type()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_D501_ALMANAC_TYPE)
DECLARE_NOT_AGGREGATABLE(CD501_Almanac_Type)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CD501_Almanac_Type)
	COM_INTERFACE_ENTRY(ID501_Almanac_Type)
	COM_INTERFACE_ENTRY2(IDispatch, ID501_Almanac_Type)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	
	COM_INTERFACE_ENTRY2(IGarminDataType, ID501_Almanac_Type)
	COM_INTERFACE_ENTRY2(IDXXX_Almanac_Type, ID501_Almanac_Type)
	COM_INTERFACE_ENTRY(IBodyPacket)	
	COM_INTERFACE_ENTRY(IHelperBodyPacket)
END_COM_MAP()

BEGIN_CATEGORY_MAP(CD501_Almanac_Type)
	IMPLEMENTED_CATEGORY(CATID_SafeForScripting)
	IMPLEMENTED_CATEGORY(CATID_SafeForInitializing)
END_CATEGORY_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);
// IGarminDataType
	STDMETHOD(get_Type)(/*[out, retval]*/BSTR * pVal)
	{
		*pVal = SysAllocString(L"D501");
			
		return S_OK;
	}
	STDMETHOD(get_IDXXX_Type)(/*[out, retval]*/ IDispatch* *pVal)
	{
		// TODO: Add your implementation code here
		HRESULT hr = this->QueryInterface(IID_IDXXX_Almanac_Type, (void**)pVal);
		if(FAILED(hr)) return hr;

		return S_OK;
	}
// IHelperBodyPacket
	STDMETHOD(_Exchange)();
// ID501_Almanac_Type
public:
private:
	GARMIN_TYPES::D501_Almanac_Type m_gdata;
};

#endif //__D501_ALMANAC_TYPE_H_

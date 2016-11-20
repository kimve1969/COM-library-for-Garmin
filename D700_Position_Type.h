// D700_Position_Type.h : Declaration of the CD700_Position_Type

#ifndef __D700_POSITION_TYPE_H_
#define __D700_POSITION_TYPE_H_

#include "resource.h"       // main symbols
#include "BodyPacketImpl.h"
// --------------------------- USE SMART POINTER !!! --------------------------
_COM_SMARTPTR_TYPEDEF(IBodyPacket, __uuidof(IBodyPacket));
_COM_SMARTPTR_TYPEDEF(IHelperBodyPacket, __uuidof(IHelperBodyPacket));
/////////////////////////////////////////////////////////////////////////////
// CD700_Position_Type
class ATL_NO_VTABLE CD700_Position_Type : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CD700_Position_Type, &CLSID_D700_Position_Type>,
	public ISupportErrorInfo,
	public CBodyPacketImpl,
	public IDispatchImpl<ID700_Position_Type, &IID_ID700_Position_Type, &LIBID_GARMINLib>
{
public:
	CD700_Position_Type()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_D700_POSITION_TYPE)
DECLARE_NOT_AGGREGATABLE(CD700_Position_Type)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CD700_Position_Type)
	COM_INTERFACE_ENTRY(ID700_Position_Type)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY2(IDispatch, ID700_Position_Type)
	COM_INTERFACE_ENTRY2(IGarminDataType,ID700_Position_Type)	
	COM_INTERFACE_ENTRY(IBodyPacket)
	COM_INTERFACE_ENTRY(IHelperBodyPacket)
END_COM_MAP()

BEGIN_CATEGORY_MAP(CD650_FlightBook_Record_Type)
	IMPLEMENTED_CATEGORY(CATID_SafeForScripting)
	IMPLEMENTED_CATEGORY(CATID_SafeForInitializing)
END_CATEGORY_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);
// IGarminDataType
	STDMETHOD(get_Type)(/*[out, retval]*/BSTR * pVal)
	{
		*pVal = SysAllocString(L"D700");
			
		return S_OK;
	}
	STDMETHOD(get_IDXXX_Type)(/*[out, retval]*/IDispatch **pVal)
	{
		// TODO: Add your implementation code here
		HRESULT hr = this->QueryInterface(IID_ID700_Position_Type, (void**)pVal);
		if(FAILED(hr)) return hr;

		return S_OK;
	}
// IBodyPacket
	STDMETHOD(_Exchange)();
// ID700_Position_Type
public:
private:
	GARMIN_TYPES::D700_Position_Type m_gdata;
};

#endif //__D700_POSITION_TYPE_H_

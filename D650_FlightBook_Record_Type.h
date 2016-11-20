// D650_FlightBook_Record_Type.h : Declaration of the CD650_FlightBook_Record_Type

#ifndef __D650_FLIGHTBOOK_RECORD_TYPE_H_
#define __D650_FLIGHTBOOK_RECORD_TYPE_H_

#include "resource.h"       // main symbols
#include "BodyPacketImpl.h"
// --------------------------- USE SMART POINTER !!! --------------------------
_COM_SMARTPTR_TYPEDEF(IBodyPacket, __uuidof(IBodyPacket));
_COM_SMARTPTR_TYPEDEF(IHelperBodyPacket, __uuidof(IHelperBodyPacket));
/////////////////////////////////////////////////////////////////////////////
// CD650_FlightBook_Record_Type
class ATL_NO_VTABLE CD650_FlightBook_Record_Type : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CD650_FlightBook_Record_Type, &CLSID_D650_FlightBook_Record_Type>,
	public ISupportErrorInfo,
	public CBodyPacketImpl,
	public IDispatchImpl<ID650_FlightBook_Record_Type, &IID_ID650_FlightBook_Record_Type, &LIBID_GARMINLib>
{
public:
	CD650_FlightBook_Record_Type()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_D650_FLIGHTBOOK_RECORD_TYPE)
DECLARE_NOT_AGGREGATABLE(CD650_FlightBook_Record_Type)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CD650_FlightBook_Record_Type)
	COM_INTERFACE_ENTRY(ID650_FlightBook_Record_Type)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY2(IDispatch, ID650_FlightBook_Record_Type)
	COM_INTERFACE_ENTRY2(IGarminDataType,ID650_FlightBook_Record_Type)
	
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
		*pVal = SysAllocString(L"D650");
			
		return S_OK;
	}
	STDMETHOD(get_IDXXX_Type)(/*[out, retval]*/IDispatch **pVal)
	{
		// TODO: Add your implementation code here
		HRESULT hr = this->QueryInterface(IID_ID650_FlightBook_Record_Type, (void**)pVal);
		if(FAILED(hr)) return hr;

		return S_OK;
	}
// IBodyPacket
	STDMETHOD(_Exchange)();
// ID650_FlightBook_Record_Type
public:
private:
	GARMIN_TYPES::D650_FlightBook_Record_Type m_gdata;
};

#endif //__D650_FLIGHTBOOK_RECORD_TYPE_H_

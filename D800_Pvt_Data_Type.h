// D800_Pvt_Data_Type.h : Declaration of the CD800_Pvt_Data_Type

#ifndef __D800_PVT_DATA_TYPE_H_
#define __D800_PVT_DATA_TYPE_H_

#include "resource.h"       // main symbols
#include "BodyPacketImpl.h"
// --------------------------- USE SMART POINTER !!! --------------------------
_COM_SMARTPTR_TYPEDEF(IBodyPacket, __uuidof(IBodyPacket));
_COM_SMARTPTR_TYPEDEF(IHelperBodyPacket, __uuidof(IHelperBodyPacket));
/////////////////////////////////////////////////////////////////////////////
// CD800_Pvt_Data_Type
class ATL_NO_VTABLE CD800_Pvt_Data_Type : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CD800_Pvt_Data_Type, &CLSID_D800_Pvt_Data_Type>,
	public ISupportErrorInfo,
	public CBodyPacketImpl,
	public IDispatchImpl<ID800_Pvt_Data_Type, &IID_ID800_Pvt_Data_Type, &LIBID_GARMINLib>
{
public:
	CD800_Pvt_Data_Type()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_D800_PVT_DATA_TYPE)
DECLARE_NOT_AGGREGATABLE(CD800_Pvt_Data_Type)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CD800_Pvt_Data_Type)
	COM_INTERFACE_ENTRY(ID800_Pvt_Data_Type)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY2(IDispatch, ID800_Pvt_Data_Type)
	COM_INTERFACE_ENTRY2(IGarminDataType,ID800_Pvt_Data_Type)	
	COM_INTERFACE_ENTRY(IBodyPacket)
	COM_INTERFACE_ENTRY(IHelperBodyPacket)
END_COM_MAP()

BEGIN_CATEGORY_MAP(CD800_Pvt_Data_Type)
	IMPLEMENTED_CATEGORY(CATID_SafeForScripting)
	IMPLEMENTED_CATEGORY(CATID_SafeForInitializing)
END_CATEGORY_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);
// IGarminDataType
	STDMETHOD(get_Type)(/*[out, retval]*/BSTR * pVal)
	{
		*pVal = SysAllocString(L"D800");
			
		return S_OK;
	}
	STDMETHOD(get_IDXXX_Type)(/*[out, retval]*/IDispatch **pVal)
	{
		// TODO: Add your implementation code here
		HRESULT hr = this->QueryInterface(IID_ID800_Pvt_Data_Type, (void**)pVal);
		if(FAILED(hr)) return hr;

		return S_OK;
	}
// IBodyPacket
	STDMETHOD(_Exchange)();
// ID800_Pvt_Data_Type
public:
private:
	GARMIN_TYPES::D800_Pvt_Data_Type m_gdata;
};

#endif //__D800_PVT_DATA_TYPE_H_

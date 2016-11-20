// D312_Trk_Hdr_Type.h : Declaration of the CD312_Trk_Hdr_Type

#ifndef __D312_TRK_HDR_TYPE_H_
#define __D312_TRK_HDR_TYPE_H_

#include "resource.h"       // main symbols
#include "BodyPacketImpl.h"
/////////////////////////////////////////////////////////////////////////////
// CD312_Trk_Hdr_Type
class ATL_NO_VTABLE CD312_Trk_Hdr_Type : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CD312_Trk_Hdr_Type, &CLSID_D312_Trk_Hdr_Type>,
	public ISupportErrorInfo,
	public CBodyPacketImpl,
	public IDispatchImpl<ID312_Trk_Hdr_Type, &IID_ID312_Trk_Hdr_Type, &LIBID_GARMINLib>
{
public:
	CD312_Trk_Hdr_Type()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_D312_TRK_HDR_TYPE)
DECLARE_NOT_AGGREGATABLE(CD312_Trk_Hdr_Type)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CD312_Trk_Hdr_Type)
	COM_INTERFACE_ENTRY(ID312_Trk_Hdr_Type)
	COM_INTERFACE_ENTRY2(IDispatch,ID312_Trk_Hdr_Type)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IGarminDataType)
	COM_INTERFACE_ENTRY(IBodyPacket)
END_COM_MAP()

BEGIN_CATEGORY_MAP(CD312_Trk_Hdr_Type)
	IMPLEMENTED_CATEGORY(CATID_SafeForScripting)
	IMPLEMENTED_CATEGORY(CATID_SafeForInitializing)
END_CATEGORY_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);
// IGarminDataType
	STDMETHOD(get_Type)(/*[out, retval]*/BSTR * pVal)
	{
		*pVal = SysAllocString(L"D312");
			
		return S_OK;
	}
	STDMETHOD(get_IDXXX_Type)(/*[out, retval]*/ IDispatch* *pVal)
	{
		// TODO: Add your implementation code here
		HRESULT hr = this->QueryInterface(IID_ID312_Trk_Hdr_Type, (void**)pVal);
		if(FAILED(hr)) return hr;

		return S_OK;
	}
// IBodyPacket
	STDMETHOD(_Exchange)();
// ID312_Trk_Hdr_Type
public:
};

#endif //__D312_TRK_HDR_TYPE_H_

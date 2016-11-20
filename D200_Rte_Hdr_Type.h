// D200_Rte_Hdr_Type.h : Declaration of the CD200_Rte_Hdr_Type

#ifndef __D200_RTE_HDR_TYPE_H_
#define __D200_RTE_HDR_TYPE_H_

#include "resource.h"       // main symbols
#include "BodyPacketImpl.h"

// --------------------------- USE SMART POINTER !!! --------------------------
_COM_SMARTPTR_TYPEDEF(IBodyPacket, __uuidof(IBodyPacket));
_COM_SMARTPTR_TYPEDEF(IHelperBodyPacket, __uuidof(IHelperBodyPacket));
/////////////////////////////////////////////////////////////////////////////
// CD200_Rte_Hdr_Type
class ATL_NO_VTABLE CD200_Rte_Hdr_Type : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CD200_Rte_Hdr_Type, &CLSID_D200_Rte_Hdr_Type>,
	public ISupportErrorInfo,
	public CBodyPacketImpl,
	public IDispatchImpl<ID200_Rte_Hdr_Type, &IID_ID200_Rte_Hdr_Type, &LIBID_GARMINLib>
{
public:
	CD200_Rte_Hdr_Type()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_D200_RTE_HDR_TYPE)
DECLARE_NOT_AGGREGATABLE(CD200_Rte_Hdr_Type)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CD200_Rte_Hdr_Type)
	COM_INTERFACE_ENTRY(ID200_Rte_Hdr_Type)
	COM_INTERFACE_ENTRY2(IDispatch, ID200_Rte_Hdr_Type)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IGarminDataType)
	COM_INTERFACE_ENTRY(IBodyPacket)	
	COM_INTERFACE_ENTRY(IHelperBodyPacket)
END_COM_MAP()

BEGIN_CATEGORY_MAP(CD200_Rte_Hdr_Type)
	IMPLEMENTED_CATEGORY(CATID_SafeForScripting)
	IMPLEMENTED_CATEGORY(CATID_SafeForInitializing)
END_CATEGORY_MAP()

public:
// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);
// IGarminDataType
	STDMETHOD(get_Type)(/*[out, retval]*/BSTR * pVal)
	{
		*pVal = SysAllocString(L"D200");
			
		return S_OK;
	}
	STDMETHOD(get_IDXXX_Type)(/*[out, retval]*/IDispatch **pVal)
	{
		// TODO: Add your implementation code here
		HRESULT hr = this->QueryInterface(IID_ID200_Rte_Hdr_Type, (void**)pVal);
		if(FAILED(hr)) return hr;

		return S_OK;
	}
// IHelperBodyPacket
	STDMETHOD(_Exchange)();
// ID200_Rte_Hdr_Type

private:
	STDMETHOD(_CheckDataLength)();

	GARMIN_TYPES::D200_Rte_Hdr_Type m_gdata;
};

#endif //__D200_RTE_HDR_TYPE_H_

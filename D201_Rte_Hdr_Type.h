// D201_Rte_Hdr_Type.h : Declaration of the CD201_Rte_Hdr_Type

#ifndef __D201_RTE_HDR_TYPE_H_
#define __D201_RTE_HDR_TYPE_H_

#include "resource.h"       // main symbols
#include "BodyPacketImpl.h"

// --------------------------- USE SMART POINTER !!! --------------------------
_COM_SMARTPTR_TYPEDEF(IBodyPacket, __uuidof(IBodyPacket));
_COM_SMARTPTR_TYPEDEF(IHelperBodyPacket, __uuidof(IHelperBodyPacket));
/////////////////////////////////////////////////////////////////////////////
// CD201_Rte_Hdr_Type
class ATL_NO_VTABLE CD201_Rte_Hdr_Type : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CD201_Rte_Hdr_Type, &CLSID_D201_Rte_Hdr_Type>,
	public ISupportErrorInfo,
	public CBodyPacketImpl,
	public IDispatchImpl<ID201_Rte_Hdr_Type, &IID_ID201_Rte_Hdr_Type, &LIBID_GARMINLib>
{
public:
	CD201_Rte_Hdr_Type()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_D201_RTE_HDR_TYPE)
DECLARE_NOT_AGGREGATABLE(CD201_Rte_Hdr_Type)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CD201_Rte_Hdr_Type)
	COM_INTERFACE_ENTRY(ID201_Rte_Hdr_Type)
	COM_INTERFACE_ENTRY2(IDispatch, ID201_Rte_Hdr_Type)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IGarminDataType)
	COM_INTERFACE_ENTRY(IBodyPacket)	
	COM_INTERFACE_ENTRY(IHelperBodyPacket)
END_COM_MAP()

BEGIN_CATEGORY_MAP(CD201_Rte_Hdr_Type)
	IMPLEMENTED_CATEGORY(CATID_SafeForScripting)
	IMPLEMENTED_CATEGORY(CATID_SafeForInitializing)
END_CATEGORY_MAP()

public:
// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);
// IGarminDataType
	STDMETHOD(get_Type)(/*[out, retval]*/BSTR * pVal)
	{
		*pVal = SysAllocString(L"D201");
			
		return S_OK;
	}
	STDMETHOD(get_IDXXX_Type)(/*[out, retval]*/IDispatch **pVal)
	{
		// TODO: Add your implementation code here
		HRESULT hr = this->QueryInterface(IID_ID201_Rte_Hdr_Type, (void**)pVal);
		if(FAILED(hr)) return hr;

		return S_OK;
	}
// IHelperBodyPacket
	STDMETHOD(_Exchange)();
// ID201_Rte_Hdr_Type

private:
	STDMETHOD(_CheckDataLength)();

	GARMIN_TYPES::D201_Rte_Hdr_Type m_gdata;
};

#endif //__D201_RTE_HDR_TYPE_H_

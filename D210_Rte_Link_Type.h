// D210_Rte_Link_Type.h : Declaration of the CD210_Rte_Link_Type

#ifndef __D210_Rte_Link_TYPE_H_
#define __D210_Rte_Link_TYPE_H_

#include "resource.h"       // main symbols
#include "BodyPacketImpl.h"

// --------------------------- USE SMART POINTER !!! --------------------------
_COM_SMARTPTR_TYPEDEF(IBodyPacket, __uuidof(IBodyPacket));
_COM_SMARTPTR_TYPEDEF(IHelperBodyPacket, __uuidof(IHelperBodyPacket));
/////////////////////////////////////////////////////////////////////////////
// CD210_Rte_Link_Type
class ATL_NO_VTABLE CD210_Rte_Link_Type : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CD210_Rte_Link_Type, &CLSID_D210_Rte_Link_Type>,
	public ISupportErrorInfo,
	public CBodyPacketImpl,
	public IDispatchImpl<ID210_Rte_Link_Type, &IID_ID210_Rte_Link_Type, &LIBID_GARMINLib>
{
public:
	CD210_Rte_Link_Type()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_D210_RTE_LINK_TYPE)
DECLARE_NOT_AGGREGATABLE(CD210_Rte_Link_Type)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CD210_Rte_Link_Type)
	COM_INTERFACE_ENTRY(ID210_Rte_Link_Type)
	COM_INTERFACE_ENTRY2(IDispatch, ID210_Rte_Link_Type)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IGarminDataType)
	COM_INTERFACE_ENTRY(IBodyPacket)	
	COM_INTERFACE_ENTRY(IHelperBodyPacket)
END_COM_MAP()

BEGIN_CATEGORY_MAP(CD210_Rte_Link_Type)
	IMPLEMENTED_CATEGORY(CATID_SafeForScripting)
	IMPLEMENTED_CATEGORY(CATID_SafeForInitializing)
END_CATEGORY_MAP()

public:
// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);
// IGarminDataType
	STDMETHOD(get_Type)(/*[out, retval]*/BSTR * pVal)
	{
		*pVal = SysAllocString(L"D210");
			
		return S_OK;
	}
	STDMETHOD(get_IDXXX_Type)(/*[out, retval]*/IDispatch **pVal)
	{
		// TODO: Add your implementation code here
		HRESULT hr = this->QueryInterface(IID_ID210_Rte_Link_Type, (void**)pVal);
		if(FAILED(hr)) return hr;

		return S_OK;
	}
// IHelperBodyPacket
	STDMETHOD(_Exchange)();
// ID210_Rte_Link_Type

private:
	STDMETHOD(_CheckDataLength)();

	GARMIN_TYPES::D210_Rte_Link_Type m_gdata;
};

#endif //__D210_Rte_Link_TYPE_H_

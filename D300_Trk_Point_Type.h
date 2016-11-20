// D300_Trk_Point_Type.h : Declaration of the CD300_Trk_Point_Type

#ifndef __D300_TRK_POINT_TYPE_H_
#define __D300_TRK_POINT_TYPE_H_

#include "resource.h"       // main symbols
#include "BodyPacketImpl.h"
/////////////////////////////////////////////////////////////////////////////
// CD300_Trk_Point_Type
class ATL_NO_VTABLE CD300_Trk_Point_Type : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CD300_Trk_Point_Type, &CLSID_D300_Trk_Point_Type>,
	public ISupportErrorInfo,
	public CBodyPacketImpl,
	public IDispatchImpl<ID300_Trk_Point_Type, &IID_ID300_Trk_Point_Type, &LIBID_GARMINLib>,
	public IDispatchImpl<IGarminDataType, &IID_IGarminDataType, &LIBID_GARMINLib>,
	public IDispatchImpl<IDXXX_Trk_Point_Type, &IID_IDXXX_Trk_Point_Type, &LIBID_GARMINLib>
{
public:
	CD300_Trk_Point_Type()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_D300_TRK_POINT_TYPE)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CD300_Trk_Point_Type)
	COM_INTERFACE_ENTRY(ID300_Trk_Point_Type)
//DEL 	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY2(IDispatch, ID300_Trk_Point_Type)
	COM_INTERFACE_ENTRY2(IGarminDataType,ID300_Trk_Point_Type)
	COM_INTERFACE_ENTRY2(IDXXX_Trk_Point_Type, ID300_Trk_Point_Type)
	COM_INTERFACE_ENTRY(IBodyPacket)
END_COM_MAP()

BEGIN_CATEGORY_MAP(CD300_Trk_Point_Type)
	IMPLEMENTED_CATEGORY(CATID_SafeForScripting)
	IMPLEMENTED_CATEGORY(CATID_SafeForInitializing)
END_CATEGORY_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

public:	
// IGarminDataType
	STDMETHOD(get_Type)(/*[out, retval]*/BSTR * pVal)
	{
		*pVal = SysAllocString(L"D300");
			
		return S_OK;
	}
	STDMETHOD(get_IDXXX_Type)(/*[out, retval]*/ IDispatch* *pVal)
	{
		// TODO: Add your implementation code here
		HRESULT hr = this->QueryInterface(IID_IDXXX_Trk_Point_Type, (void**)pVal);
		if(FAILED(hr)) return hr;

		return S_OK;
	}
// IBodyPacket
	STDMETHOD(_Exchange)();

// IDXXX_Trk_Point_Type
	STDMETHOD(get_lon)(/*[out, retval]*/ long *pVal);
	STDMETHOD(put_lon)(/*[in]*/ long newVal);
	STDMETHOD(get_lat)(/*[out, retval]*/ long *pVal);
	STDMETHOD(put_lat)(/*[in]*/ long newVal);
	STDMETHOD(get_time)(/*[out, retval]*/ unsigned long *pVal);
	STDMETHOD(put_time)(/*[in]*/ unsigned long newVal);
// ID300_Trk_Point_Type
};

#endif //__D300_TRK_POINT_TYPE_H_

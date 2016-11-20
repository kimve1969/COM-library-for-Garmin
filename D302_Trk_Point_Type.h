// D302_Trk_Point_Type.h : Declaration of the CD302_Trk_Point_Type

#ifndef __D302_TRK_POINT_TYPE_H_
#define __D302_TRK_POINT_TYPE_H_

#include "resource.h"       // main symbols
#include "BodyPacketImpl.h"
/////////////////////////////////////////////////////////////////////////////
// CD302_Trk_Point_Type
class ATL_NO_VTABLE CD302_Trk_Point_Type : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CD302_Trk_Point_Type, &CLSID_D302_Trk_Point_Type>,
	public ISupportErrorInfo,
	public CBodyPacketImpl,
	public IDispatchImpl<ID302_Trk_Point_Type, &IID_ID302_Trk_Point_Type, &LIBID_GARMINLib>,
	public IDispatchImpl<IGarminDataType, &IID_IGarminDataType, &LIBID_GARMINLib>,
	public IDispatchImpl<IDXXX_Trk_Point_Type, &IID_IDXXX_Trk_Point_Type, &LIBID_GARMINLib>
{
public:
	CD302_Trk_Point_Type()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_D302_TRK_POINT_TYPE)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CD302_Trk_Point_Type)
	COM_INTERFACE_ENTRY(ID302_Trk_Point_Type)
//DEL 	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY2(IDispatch, ID302_Trk_Point_Type)
	COM_INTERFACE_ENTRY2(IGarminDataType,ID302_Trk_Point_Type)
	COM_INTERFACE_ENTRY2(IDXXX_Trk_Point_Type, ID302_Trk_Point_Type)
	COM_INTERFACE_ENTRY(IBodyPacket)
END_COM_MAP()

BEGIN_CATEGORY_MAP(CD302_Trk_Point_Type)
	IMPLEMENTED_CATEGORY(CATID_SafeForScripting)
	IMPLEMENTED_CATEGORY(CATID_SafeForInitializing)
END_CATEGORY_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

public:	
// IGarminDataType
	STDMETHOD(get_Type)(/*[out, retval]*/BSTR * pVal)
	{
		*pVal = SysAllocString(L"D302");
			
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
// ID302_Trk_Point_Type
};

#endif //__D302_TRK_POINT_TYPE_H_

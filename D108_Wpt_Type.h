// D108_Wpt_Type.h : Declaration of the CD108_Wpt_Type

#ifndef __D108_WPT_TYPE_H_
#define __D108_WPT_TYPE_H_

#include "resource.h"       // main symbols
#include "garmin_types.h"
#include "BodyPacketImpl.h"

// --------------------------- USE SMART POINTER !!! --------------------------
_COM_SMARTPTR_TYPEDEF(IBodyPacket, __uuidof(IBodyPacket));
_COM_SMARTPTR_TYPEDEF(IHelperBodyPacket, __uuidof(IHelperBodyPacket));
/////////////////////////////////////////////////////////////////////////////
// CD108_Wpt_Type
class ATL_NO_VTABLE CD108_Wpt_Type : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CD108_Wpt_Type, &CLSID_D108_Wpt_Type>,
	public ISupportErrorInfo,	
	public CBodyPacketImpl,
	public IDispatchImpl<ID108_Wpt_Type, &IID_ID108_Wpt_Type, &LIBID_GARMINLib>
{
public:
	STDMETHOD(get_dist)(/*[out, retval]*/ float *pVal);
	STDMETHOD(put_dist)(/*[in]*/ float newVal);
	STDMETHOD(get_dpth)(/*[out, retval]*/ float *pVal);
	STDMETHOD(put_dpth)(/*[in]*/ float newVal);
	STDMETHOD(get_alt)(/*[out, retval]*/ float *pVal);
	STDMETHOD(put_alt)(/*[in]*/ float newVal);
	STDMETHOD(get_smbl)(/*[out, retval]*/ int *pVal);
	STDMETHOD(put_smbl)(/*[in]*/ int newVal);
	STDMETHOD(get_attr)(/*[out, retval]*/ unsigned int *pVal);
	STDMETHOD(put_attr)(/*[in]*/ unsigned int newVal);
	STDMETHOD(get_dspl)(/*[out, retval]*/ unsigned int *pVal);
	STDMETHOD(put_dspl)(/*[in]*/ unsigned int newVal);
	STDMETHOD(get_wpt_class)(/*[out, retval]*/ unsigned int *pVal);
	STDMETHOD(put_wpt_class)(/*[in]*/ unsigned int newVal);
	STDMETHOD(get_lat)(/*[out, retval]*/ long *pVal);
	STDMETHOD(put_lat)(/*[in]*/ long newVal);
	STDMETHOD(get_lon)(/*[out, retval]*/ long *pVal);
	STDMETHOD(put_lon)(/*[in]*/ long newVal);
	STDMETHOD(get_ident)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(put_ident)(/*[in]*/ BSTR newVal);
	CD108_Wpt_Type()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_D108_WPT_TYPE)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CD108_Wpt_Type)
	COM_INTERFACE_ENTRY(ID108_Wpt_Type)
//DEL 	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY2(IDispatch, ID108_Wpt_Type)
	COM_INTERFACE_ENTRY2(IGarminDataType, ID108_Wpt_Type)

	COM_INTERFACE_ENTRY2(IDXXX_Wpt_Type, ID108_Wpt_Type)
	COM_INTERFACE_ENTRY(IBodyPacket)	
	COM_INTERFACE_ENTRY(IHelperBodyPacket)
END_COM_MAP()

BEGIN_CATEGORY_MAP(CD108_Wpt_Type)
	IMPLEMENTED_CATEGORY(CATID_SafeForScripting)
	IMPLEMENTED_CATEGORY(CATID_SafeForInitializing)
END_CATEGORY_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// ID108_Wpt_Type
	STDMETHOD(get_color)(/*[out, retval]*/ unsigned int *pVal);
	STDMETHOD(put_color)(/*[in]*/ unsigned int newVal);


// IGarminDataType
	STDMETHOD(get_Type)(/*[out, retval]*/BSTR * pVal)
	{
		*pVal = SysAllocString(L"D108");
			
		return S_OK;
	}
	STDMETHOD(get_IDXXX_Type)(/*[out, retval]*/IDispatch **pVal)
	{
		// TODO: Add your implementation code here
		HRESULT hr = this->QueryInterface(IID_IDXXX_Wpt_Type, (void**)pVal);
		if(FAILED(hr)) return hr;

		return S_OK;
	}
// IHelperBodyPacket
	STDMETHOD(_Exchange)();

private:
	STDMETHOD(_CheckDataLength)();

	GARMIN_TYPES::D108_Wpt_Type m_gdata;
	_bstr_t	m_ident;
	_bstr_t m_comment;
	_bstr_t m_facility;
	_bstr_t m_city;
	_bstr_t m_addr;
	_bstr_t m_cross_road;

};

#endif //__D108_WPT_TYPE_H_

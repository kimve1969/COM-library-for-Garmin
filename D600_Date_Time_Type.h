// D600_Date_Time_Type.h : Declaration of the CD600_Date_Time_Type

#ifndef __D600_DATE_TIME_TYPE_H_
#define __D600_DATE_TIME_TYPE_H_

#include "resource.h"       // main symbols
#include "BodyPacketImpl.h"
// --------------------------- USE SMART POINTER !!! --------------------------
_COM_SMARTPTR_TYPEDEF(IBodyPacket, __uuidof(IBodyPacket));
_COM_SMARTPTR_TYPEDEF(IHelperBodyPacket, __uuidof(IHelperBodyPacket));
/////////////////////////////////////////////////////////////////////////////
// CD600_Date_Time_Type
class ATL_NO_VTABLE CD600_Date_Time_Type : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CD600_Date_Time_Type, &CLSID_D600_Date_Time_Type>,
	public ISupportErrorInfo,
	public CBodyPacketImpl,
	public IDispatchImpl<ID600_Date_Time_Type, &IID_ID600_Date_Time_Type, &LIBID_GARMINLib>
{
public:
	CD600_Date_Time_Type()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_D600_DATE_TIME_TYPE)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CD600_Date_Time_Type)
	COM_INTERFACE_ENTRY(ID600_Date_Time_Type)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY2(IDispatch, ID600_Date_Time_Type)
	COM_INTERFACE_ENTRY2(IGarminDataType,ID600_Date_Time_Type)
	
	COM_INTERFACE_ENTRY(IBodyPacket)
	COM_INTERFACE_ENTRY(IHelperBodyPacket)
END_COM_MAP()

BEGIN_CATEGORY_MAP(CD600_Date_Time_Type)
	IMPLEMENTED_CATEGORY(CATID_SafeForScripting)
	IMPLEMENTED_CATEGORY(CATID_SafeForInitializing)
END_CATEGORY_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// ID600_Date_Time_Type
public:
	STDMETHOD(get_second)(/*[out, retval]*/ unsigned int *pVal);
	STDMETHOD(put_second)(/*[in]*/ unsigned int newVal);
	STDMETHOD(get_minute)(/*[out, retval]*/ unsigned int *pVal);
	STDMETHOD(put_minute)(/*[in]*/ unsigned int newVal);
	STDMETHOD(get_hour)(/*[out, retval]*/ unsigned int *pVal);
	STDMETHOD(put_hour)(/*[in]*/ unsigned int newVal);
	STDMETHOD(get_year)(/*[out, retval]*/ unsigned int *pVal);
	STDMETHOD(put_year)(/*[in]*/ unsigned int newVal);
	STDMETHOD(get_day)(/*[out, retval]*/ unsigned int *pVal);
	STDMETHOD(put_day)(/*[in]*/ unsigned int newVal);
	STDMETHOD(get_month)(/*[out, retval]*/ unsigned int *pVal);
	STDMETHOD(put_month)(/*[in]*/ unsigned int newVal);

	STDMETHOD(FinalConstruct)();
	STDMETHOD_(void, FinalRelease)();
// IGarminDataType
	STDMETHOD(get_Type)(/*[out, retval]*/BSTR * pVal)
	{
		*pVal = SysAllocString(L"D600");
			
		return S_OK;
	}
	STDMETHOD(get_IDXXX_Type)(/*[out, retval]*/IDispatch **pVal)
	{
		// TODO: Add your implementation code here
		HRESULT hr = this->QueryInterface(IID_ID600_Date_Time_Type, (void**)pVal);
		if(FAILED(hr)) return hr;

		return S_OK;
	}
// IBodyPacket
	STDMETHOD(_Exchange)();
private:
	GARMIN_TYPES::D600_Date_Time_Type m_gdata;
};

#endif //__D600_DATE_TIME_TYPE_H_

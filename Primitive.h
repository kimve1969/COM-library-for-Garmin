// Primitive.h : Declaration of the CPrimitive

#ifndef __PRIMITIVE_H_
#define __PRIMITIVE_H_

#include "resource.h"       // main symbols
#include <vector>

using namespace std;

typedef vector<BYTE> BYTEVECTOR;
/////////////////////////////////////////////////////////////////////////////
// CPrimitive
class ATL_NO_VTABLE CPrimitive : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CPrimitive, &CLSID_Primitive>,
	public ISupportErrorInfo,
	public IDispatchImpl<IPrimitive, &IID_IPrimitive, &LIBID_GARMINLib>
{
public:
	CPrimitive()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_PRIMITIVE)
DECLARE_NOT_AGGREGATABLE(CPrimitive)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CPrimitive)
	COM_INTERFACE_ENTRY(IPrimitive)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

BEGIN_CATEGORY_MAP(CPrimitive)
	IMPLEMENTED_CATEGORY(CATID_SafeForScripting)
	IMPLEMENTED_CATEGORY(CATID_SafeForInitializing)
END_CATEGORY_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IPrimitive
public:
	STDMETHOD(put_gdegrees)(/*[in]*/ double newVal);
	STDMETHOD(get_gdegrees_from_semicircles)(/*[out, retval]*/ double *pVal);
	STDMETHOD(get_gdegrees_from_radians)(/*[out, retval]*/ double *pVal);

	STDMETHOD(get_gradians)(/*[out, retval]*/ double *pVal);
	STDMETHOD(put_gradians)(/*[in]*/ double newVal);
	STDMETHOD(get_gsemicircles)(/*[out, retval]*/ long *pVal);
	STDMETHOD(put_gsemicircles)(/*[in]*/ long newVal);
	STDMETHOD(Add)(/*[in]*/ VARIANT Val);
	STDMETHOD(Item)(/*[in]*/ long Indx,/*[out, retval]*/ VARIANT *pVal);
	STDMETHOD(get_glongword)(/*[out, retval]*/ unsigned long *pVal);
	STDMETHOD(put_glongword)(/*[in]*/ unsigned long newVal);
	STDMETHOD(get_gword)(/*[out, retval]*/ unsigned short *pVal);
	STDMETHOD(put_gword)(/*[in]*/ unsigned short newVal);
	STDMETHOD(get_gint)(/*[out, retval]*/ short *pVal);
	STDMETHOD(put_gint)(/*[in]*/ short newVal);
	STDMETHOD(get_glong)(/*[out, retval]*/ long *pVal);
	STDMETHOD(put_glong)(/*[in]*/ long newVal);
	STDMETHOD(get_gdouble)(/*[out, retval]*/ double *pVal);
	STDMETHOD(put_gdouble)(/*[in]*/ double newVal);
	STDMETHOD(get_gfloat)(/*[out, retval]*/ float *pVal);
	STDMETHOD(put_gfloat)(/*[in]*/ float newVal);
	STDMETHOD(get_Count)(/*[out, retval]*/ VARIANT *pVal);
	STDMETHOD(Clear)();
	STDMETHOD(FinalConstruct)();
	STDMETHOD_(void, FinalRelease)();
private:
	BYTEVECTOR m_vector;
};

#endif //__PRIMITIVE_H_

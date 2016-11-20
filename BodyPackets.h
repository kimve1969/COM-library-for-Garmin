// BodyPackets.h : Declaration of the CBodyPackets

#ifndef __BODYPACKETS_H_
#define __BODYPACKETS_H_

#include "resource.h"       // main symbols
#include <vector>

using namespace std;

typedef vector<IDispatch*> BODYPACKETVECTOR;
/////////////////////////////////////////////////////////////////////////////
// CBodyPackets
class ATL_NO_VTABLE CBodyPackets : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CBodyPackets, &CLSID_BodyPackets>,
	public ISupportErrorInfo,
	public IDispatchImpl<IBodyPackets, &IID_IBodyPackets, &LIBID_GARMINLib>
{
public:
	CBodyPackets()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_BODYPACKETS)
DECLARE_NOT_AGGREGATABLE(CBodyPackets)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CBodyPackets)
	COM_INTERFACE_ENTRY(IBodyPackets)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

BEGIN_CATEGORY_MAP(CBodyPackets)
	IMPLEMENTED_CATEGORY(CATID_SafeForScripting)
	IMPLEMENTED_CATEGORY(CATID_SafeForInitializing)
END_CATEGORY_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IBodyPackets
public:
	STDMETHOD(get__NewEnum)(/*[out, retval]*/ LPUNKNOWN *pVal);
	STDMETHOD(Remove)(/*[in]*/ long index);
	STDMETHOD(Add)(/*[in]*/ IDispatch* pnewBodyPacket);
	STDMETHOD(get_Count)(/*[out, retval]*/ long *pVal);
	STDMETHOD(Item)(/*[in]*/ long index, /*[out, retval]*/ IDispatch** ppdisp);
	STDMETHOD(FinalConstruct)();
	STDMETHOD_(void, FinalRelease)();
private:
	BODYPACKETVECTOR m_vector;
};

#endif //__BODYPACKETS_H_

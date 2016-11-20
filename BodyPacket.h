// BodyPacket.h : Declaration of the CBodyPacket

#ifndef __BODYPACKET_H_
#define __BODYPACKET_H_

#include "resource.h"       // main symbols
#include "BodyPacketImpl.h"
/////////////////////////////////////////////////////////////////////////////
// CBodyPacket
class ATL_NO_VTABLE CBodyPacket : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CBodyPacket, &CLSID_BodyPacket>,
	public ISupportErrorInfo,
	public CBodyPacketImpl	
{
public:
	CBodyPacket()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_BODYPACKET)
DECLARE_NOT_AGGREGATABLE(CBodyPacket)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CBodyPacket)
	COM_INTERFACE_ENTRY(IBodyPacket)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IHelperBodyPacket)
END_COM_MAP()

BEGIN_CATEGORY_MAP(CBodyPacket)
	IMPLEMENTED_CATEGORY(CATID_SafeForScripting)
	IMPLEMENTED_CATEGORY(CATID_SafeForInitializing)
END_CATEGORY_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IBodyPacket
public:
	STDMETHOD(FinalConstruct)();
	STDMETHOD_(void, FinalRelease)();	
	STDMETHOD(_Exchange)(){ /* this is stubs */
		return S_OK;
	}
};

#endif //__BODYPACKET_H_

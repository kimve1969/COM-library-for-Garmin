// Communication.h : Declaration of the CCommunication

#ifndef __COMMUNICATION_H_
#define __COMMUNICATION_H_

#include "resource.h"       // main symbols
#include "BodyPacket.h"
// --------------------------- USE SMART POINTER !!! --------------------------
_COM_SMARTPTR_TYPEDEF(IBodyPacket, __uuidof(IBodyPacket));
_COM_SMARTPTR_TYPEDEF(IHelperBodyPacket, __uuidof(IHelperBodyPacket));

_COM_SMARTPTR_TYPEDEF(IBodyPackets, __uuidof(IBodyPackets));
_COM_SMARTPTR_TYPEDEF(IPrimitive, __uuidof(IPrimitive));
/////////////////////////////////////////////////////////////////////////////
// CCommunication
class ATL_NO_VTABLE CCommunication : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CCommunication, &CLSID_Communication>,
	public ISupportErrorInfo,
	public IDispatchImpl<ICommunication, &IID_ICommunication, &LIBID_GARMINLib>
{
public:
	CCommunication()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_COMMUNICATION)
DECLARE_NOT_AGGREGATABLE(CCommunication)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CCommunication)
	COM_INTERFACE_ENTRY(ICommunication)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

BEGIN_CATEGORY_MAP(CCommunication)
	IMPLEMENTED_CATEGORY(CATID_SafeForScripting)
	IMPLEMENTED_CATEGORY(CATID_SafeForInitializing)
END_CATEGORY_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// ICommunication
public:
	STDMETHOD(Clear)();
	STDMETHOD(Reciver)(/*[out, retval]*/ IDispatch** ppdisp);
	STDMETHOD(Send)(/*[in]*/IDispatch* pdisp);
	STDMETHOD(WriteBodyPacket)(/*[in]*/IDispatch *pdisp);
	STDMETHOD(ReadBodyPacket)(/*[out, retval]*/ IDispatch **ppdisp);
	STDMETHOD(ClosePort)();
	STDMETHOD(OpenPort)(/*[in]*/ BSTR bstrPort);
	STDMETHOD(FinalConstruct)();
	STDMETHOD_(void, FinalRelease)();
private:
	UINT	m_NumRetriver;
	BOOL	_WriteByte(BYTE Byte);
	BOOL	_ReadByte(LPBYTE lpByte);
	HANDLE	m_hcom;
};

#endif //__COMMUNICATION_H_

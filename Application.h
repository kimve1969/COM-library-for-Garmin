// Application.h : Declaration of the CApplication

#ifndef __APPLICATION_H_
#define __APPLICATION_H_

#include "resource.h"       // main symbols
#include "ProductData.h"
#include "ProtocolArray.h"
#include "garmin_types.h"
#include "BodyPacket.h"

// --------------------------- USE SMART POINTER !!! --------------------------
_COM_SMARTPTR_TYPEDEF(IBodyPacket, __uuidof(IBodyPacket));
_COM_SMARTPTR_TYPEDEF(IHelperBodyPacket, __uuidof(IHelperBodyPacket));

_COM_SMARTPTR_TYPEDEF(IBodyPackets, __uuidof(IBodyPackets));
_COM_SMARTPTR_TYPEDEF(IPrimitive, __uuidof(IPrimitive));

_COM_SMARTPTR_TYPEDEF(ICommunication, __uuidof(ICommunication));

_COM_SMARTPTR_TYPEDEF(IProductData, __uuidof(IProductData));
_COM_SMARTPTR_TYPEDEF(IHelperProductData, __uuidof(IProductData));

_COM_SMARTPTR_TYPEDEF(IProtocolArray, __uuidof(IProtocolArray));
_COM_SMARTPTR_TYPEDEF(IHelperProtocolArray, __uuidof(IProtocolArray));


/////////////////////////////////////////////////////////////////////////////
// CApplication
class ATL_NO_VTABLE CApplication : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CApplication, &CLSID_Application>,
	public ISupportErrorInfo,
	public IDispatchImpl<IApplication, &IID_IApplication, &LIBID_GARMINLib>
{
public:
	CApplication()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_APPLICATION)
DECLARE_NOT_AGGREGATABLE(CApplication)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CApplication)
	COM_INTERFACE_ENTRY(IApplication)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

BEGIN_CATEGORY_MAP(CApplication)
	IMPLEMENTED_CATEGORY(CATID_SafeForScripting)
	IMPLEMENTED_CATEGORY(CATID_SafeForInitializing)
END_CATEGORY_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IApplication
public:
	STDMETHOD(get_ProtocolArray)(/*[out, retval]*/ IDispatch* *pVal);
	STDMETHOD(get_ProductData)(/*[out, retval]*/ IDispatch* *pVal);
	STDMETHOD(putref_Communication)(/*[in]*/ IDispatch* newVal);
	STDMETHOD(FinalConstruct)();
	STDMETHOD_(void, FinalRelease)();

	/* Directive - command */
	STDMETHOD(Cmnd_Abort_Transfer)();
	STDMETHOD(Cmnd_Stop_Pvt_Data)();
	STDMETHOD(Cmnd_Start_Pvt_Data)();
	STDMETHOD(Cmnd_Turn_Off_Pwr)();
	/* Get - command */
	STDMETHOD(Cmnd_Get_Transfer_Wpt)(/*[out, retval]*/ IDispatch** ppdisp);
	STDMETHOD(Cmnd_Get_Transfer_Trk)(/*[out, retval]*/ IDispatch** ppdisp);
	STDMETHOD(Cmnd_Get_Transfer_Time)(/*[out, retval]*/ IDispatch** ppdisp);
	STDMETHOD(Cmnd_Get_Transfer_Rte)(/*[out, retval]*/ IDispatch** ppdisp);
	STDMETHOD(Cmnd_Get_Transfer_Prx)(/*[out, retval]*/ IDispatch** ppdisp);
	STDMETHOD(Cmnd_Get_Transfer_Posn)(/*[out, retval]*/ IDispatch** ppdisp);
	STDMETHOD(Cmnd_Get_Transfer_Alm)(/*[out, retval]*/ IDispatch** ppdisp);
	STDMETHOD(Cmnd_Get_FlightBook_Transfer)(/*[out, retval]*/ IDispatch** ppdisp);
	STDMETHOD(Cmnd_Get_Transfer_Laps)(/*[out, retval]*/ IDispatch** ppdisp);	
	/* Set - command */
	STDMETHOD(Cmnd_Set_Transfer_Wpt)(/*[in]*/ IDispatch* pdisp);
	STDMETHOD(Cmnd_Set_Transfer_Trk)(/*[in]*/ IDispatch* pdisp);
	STDMETHOD(Cmnd_Set_Transfer_Time)(/*[in]*/ IDispatch* pdisp);
	STDMETHOD(Cmnd_Set_Transfer_Rte)(/*[in]*/ IDispatch* pdisp);
	STDMETHOD(Cmnd_Set_Transfer_Prx)(/*[in]*/ IDispatch* pdisp);
	STDMETHOD(Cmnd_Set_Transfer_Posn)(/*[in]*/ IDispatch* pdisp);
	STDMETHOD(Cmnd_Set_Transfer_Alm)(/*[in]*/ IDispatch* pdisp);
	STDMETHOD(Cmnd_Set_FlightBook_Transfer)(/*[in]*/ IDispatch* pdisp);
	STDMETHOD(Cmnd_Set_Transfer_Laps)(/*[in]*/ IDispatch* pdisp);
	STDMETHOD(CreateBodyPacket)(/*[in]*/ BSTR pid_name, /*[out,retval]*/ IDispatch** ppdisp);

// CApplication
public:
	STDMETHOD(get_Native)(/*[out, retval]*/ BOOL *pVal);
	STDMETHOD(put_Native)(/*[in]*/ BOOL newVal);
	

private:
	STDMETHOD(_GetProductCapabilitiesFromTable)(INT ProductID, DOUBLE SoftVersion, PRODUCT_INFO_FIELD field, VARIANT *pVal);
	STDMETHOD(_SetPacketAsCommand)(IBodyPacket *pPacket);
	STDMETHOD(_GetProduct)(void);
	STDMETHOD(_GetResponseAsRecords)(IBodyPacket *pCommand, IBodyPackets **ppBodyCollections); /* Get Response as Records */
	STDMETHOD(_Cmnd_Get_Transfer)(COMMAND_ID cmnd_id, IDispatch** ppdisp = NULL);
	STDMETHOD(_Cmnd_Set_Transfer)(COMMAND_ID cmnd_id, IDispatch* pdisp);
	STDMETHOD(_GetPacketId)(PACKET_ID packet_id, BYTE* gPid_Packet /*Garmin Pid_Packet*/);
	STDMETHOD(_GetClassPacketId)(BYTE gPid /*Garmin Pid_Packet*/, PACKET_ID* class_pid);
	STDMETHOD(_GetCommandId)(COMMAND_ID cmnd_id, BYTE* gCmnd_id /*Garmin Command */);
	STDMETHOD(_GetResponseType)(COMMAND_ID cmnd_id, RESPONCE_TYPE* res_type);
	STDMETHOD(_CreateDataType)(PACKET_ID class_pid, IDispatch** ppdisp);
	STDMETHOD(_Create_IDXXX_Data_Type)(IDispatch* pBodyPacket, IDispatch** ppDXXX_Data_Type);
	
	ICommunicationPtr	m_ptrCommunication;
	IProductDataPtr		m_ptrProductData;
	IProtocolArrayPtr	m_ptrProtocolArray;

	BOOL	m_bNative;
};

#endif //__APPLICATION_H_

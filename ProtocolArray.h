// ProtocolArray.h : Declaration of the CProtocolArray

#ifndef __PROTOCOLARRAY_H_
#define __PROTOCOLARRAY_H_

#include "resource.h"       // main symbols
#include <vector>

using namespace std;

typedef vector<_bstr_t> BSTRVECTOR;
/////////////////////////////////////////////////////////////////////////////
// CProtocolArray
class ATL_NO_VTABLE CProtocolArray : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CProtocolArray, &CLSID_ProtocolArray>,
	public ISupportErrorInfo,
	public IDispatchImpl<IProtocolArray, &IID_IProtocolArray, &LIBID_GARMINLib>,
	public IHelperProtocolArray
{
public:
	CProtocolArray()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_PROTOCOLARRAY)
DECLARE_NOT_AGGREGATABLE(CProtocolArray)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CProtocolArray)
	COM_INTERFACE_ENTRY(IProtocolArray)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IHelperProtocolArray)
END_COM_MAP()

BEGIN_CATEGORY_MAP(CProtocolArray)
	IMPLEMENTED_CATEGORY(CATID_SafeForScripting)
	IMPLEMENTED_CATEGORY(CATID_SafeForInitializing)
END_CATEGORY_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IProtocolArray
public:
	STDMETHOD(get_Count)(/*[out, retval]*/ long *pVal);
	STDMETHOD(Item)(/*[in]*/ long indx, /*[out, retval]*/ VARIANT *pVal);
	STDMETHOD(FinalConstruct)();
	STDMETHOD_(void, FinalRelease)();
// CProtocolArray
public:	
	STDMETHOD(get_Proximity_Waypoint_Data_Type)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_Date_Time_Data_Type)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_Position_Data_Type)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_Lap_Data_Type)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_FlightBook_Data_Type)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_PVT_Data_Type)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_Track_Data_Type)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_Track_Header_Data_Type)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_Almanac_Data_Type)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_Route_Link_Data_Type)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_Route_Waypoint_Data_Type)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_Route_Header_Data_Type)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_Waypoint_Data_Type)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_Physical_Protocol)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_Device_Command_Protocol)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_Link_Protocol)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_Lap_Transfer_Protocol)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_PVT_Data_Protocol)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_Position_Initialization_Protocol)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_FlightBook_Transfer_Protocol)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_Date_and_Time_Initialization_Protocol)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_Almanac_Transfer_Protocol)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_Proximity_Waypoint_Transfer_Protocol)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_Track_Log_Transfer_Protocol)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_Route_Transfer_Protocol)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_Waypoint_Transfer_Protocol)(/*[out, retval]*/ BSTR *pVal);
// IHelperProtocolArray
	STDMETHOD(Add)(BSTR Val);
private:
	BSTR _Get_Transfer_Protocol(PRODUCT_INFO_FIELD req);
	BSTR _Get_Data_Type_by_Index(_bstr_t prtcl_name /*prtotocol name*/, int offset_indx);
	BSTR _Get_Transfer_Data_Type(PACKET_ID class_pid);
	BSTRVECTOR m_vector;
};

#endif //__PROTOCOLARRAY_H_

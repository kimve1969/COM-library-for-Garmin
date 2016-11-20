/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sun Sep 12 22:15:11 2004
 */
/* Compiler settings for D:\Program C++\Garmin\garmin\garmin.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 440
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "garmin.h"

#define TYPE_FORMAT_STRING_SIZE   1073                              
#define PROC_FORMAT_STRING_SIZE   3625                              

typedef struct _MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } MIDL_TYPE_FORMAT_STRING;

typedef struct _MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } MIDL_PROC_FORMAT_STRING;


extern const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;
extern const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;


/* Standard interface: __MIDL_itf_garmin_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ICommunication, ver. 0.0,
   GUID={0x0F9A5D4A,0x64DA,0x4CB6,{0x99,0x09,0x25,0xC4,0x2D,0xC1,0x00,0x41}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ICommunication_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ICommunication_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    28,
    50,
    78,
    106,
    134,
    162
    };

static const MIDL_SERVER_INFO ICommunication_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ICommunication_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ICommunication_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ICommunication_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(14) _ICommunicationProxyVtbl = 
{
    &ICommunication_ProxyInfo,
    &IID_ICommunication,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *)-1 /* ICommunication::OpenPort */ ,
    (void *)-1 /* ICommunication::ClosePort */ ,
    (void *)-1 /* ICommunication::ReadBodyPacket */ ,
    (void *)-1 /* ICommunication::WriteBodyPacket */ ,
    (void *)-1 /* ICommunication::Send */ ,
    (void *)-1 /* ICommunication::Reciver */ ,
    (void *)-1 /* ICommunication::Clear */
};


static const PRPC_STUB_FUNCTION ICommunication_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ICommunicationStubVtbl =
{
    &IID_ICommunication,
    &ICommunication_ServerInfo,
    14,
    &ICommunication_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IBodyPacket, ver. 0.0,
   GUID={0x730AF596,0x177B,0x4027,{0x9E,0xBB,0xFC,0x91,0x5E,0x91,0x7B,0xA2}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IBodyPacket_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IBodyPacket_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    184,
    212,
    240,
    268,
    296,
    324,
    162,
    358,
    386,
    414,
    442
    };

static const MIDL_SERVER_INFO IBodyPacket_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IBodyPacket_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IBodyPacket_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IBodyPacket_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(18) _IBodyPacketProxyVtbl = 
{
    &IBodyPacket_ProxyInfo,
    &IID_IBodyPacket,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *)-1 /* IBodyPacket::get_PacketID */ ,
    (void *)-1 /* IBodyPacket::put_PacketID */ ,
    (void *)-1 /* IBodyPacket::get_Count */ ,
    (void *)-1 /* IBodyPacket::get_Status */ ,
    (void *)-1 /* IBodyPacket::Add */ ,
    (void *)-1 /* IBodyPacket::Item */ ,
    (void *)-1 /* IBodyPacket::Clear */ ,
    (void *)-1 /* IBodyPacket::get_ACK */ ,
    (void *)-1 /* IBodyPacket::get_NAK */ ,
    (void *)-1 /* IBodyPacket::SetACKPacket */ ,
    (void *)-1 /* IBodyPacket::SetNAKPacket */
};


static const PRPC_STUB_FUNCTION IBodyPacket_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IBodyPacketStubVtbl =
{
    &IID_IBodyPacket,
    &IBodyPacket_ServerInfo,
    18,
    &IBodyPacket_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IHelperBodyPacket, ver. 0.0,
   GUID={0x294A611D,0xEA91,0x4754,{0xB9,0x29,0x41,0xA7,0x37,0xBF,0x1B,0x6C}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IHelperBodyPacket_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IHelperBodyPacket_FormatStringOffsetTable[] = 
    {
    470,
    498,
    526,
    554,
    588,
    28
    };

static const MIDL_SERVER_INFO IHelperBodyPacket_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IHelperBodyPacket_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IHelperBodyPacket_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IHelperBodyPacket_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(9) _IHelperBodyPacketProxyVtbl = 
{
    &IHelperBodyPacket_ProxyInfo,
    &IID_IHelperBodyPacket,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IHelperBodyPacket::SetAccess */ ,
    (void *)-1 /* IHelperBodyPacket::SetStatus */ ,
    (void *)-1 /* IHelperBodyPacket::GetCRC */ ,
    (void *)-1 /* IHelperBodyPacket::_Import */ ,
    (void *)-1 /* IHelperBodyPacket::_Export */ ,
    (void *)-1 /* IHelperBodyPacket::_Exchange */
};

const CInterfaceStubVtbl _IHelperBodyPacketStubVtbl =
{
    &IID_IHelperBodyPacket,
    &IHelperBodyPacket_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IApplication, ver. 0.0,
   GUID={0x16E7C83B,0xCFDA,0x49AD,{0xAA,0x14,0xCE,0xBD,0xDA,0xC4,0xF8,0x45}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IApplication_ServerInfo;

#pragma code_seg(".orpc")
/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_CreateBodyPacket_Proxy( 
    IApplication __RPC_FAR * This,
    /* [in] */ BSTR pid_name,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ppdisp);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1248],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1248],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pid_name,
                  ( unsigned char __RPC_FAR * )&ppdisp);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1248],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IApplication_get_Native_Proxy( 
    IApplication __RPC_FAR * This,
    /* [retval][out] */ BOOL __RPC_FAR *pVal)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pVal);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1282],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1282],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pVal);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1282],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IApplication_put_Native_Proxy( 
    IApplication __RPC_FAR * This,
    /* [in] */ BOOL newVal)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,newVal);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1310],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1310],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&newVal);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1310],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

static const unsigned short IApplication_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    622,
    650,
    50,
    678,
    700,
    722,
    162,
    744,
    772,
    800,
    828,
    856,
    884,
    912,
    940,
    968,
    996,
    1024,
    1052,
    1080,
    1108,
    1136,
    1164,
    1192,
    1220,
    1248,
    1282,
    1310
    };

static const MIDL_SERVER_INFO IApplication_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IApplication_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IApplication_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IApplication_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(35) _IApplicationProxyVtbl = 
{
    &IApplication_ProxyInfo,
    &IID_IApplication,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *)-1 /* IApplication::putref_Communication */ ,
    (void *)-1 /* IApplication::get_ProductData */ ,
    (void *)-1 /* IApplication::get_ProtocolArray */ ,
    (void *)-1 /* IApplication::Cmnd_Abort_Transfer */ ,
    (void *)-1 /* IApplication::Cmnd_Turn_Off_Pwr */ ,
    (void *)-1 /* IApplication::Cmnd_Start_Pvt_Data */ ,
    (void *)-1 /* IApplication::Cmnd_Stop_Pvt_Data */ ,
    (void *)-1 /* IApplication::Cmnd_Get_Transfer_Alm */ ,
    (void *)-1 /* IApplication::Cmnd_Get_Transfer_Posn */ ,
    (void *)-1 /* IApplication::Cmnd_Get_Transfer_Prx */ ,
    (void *)-1 /* IApplication::Cmnd_Get_Transfer_Rte */ ,
    (void *)-1 /* IApplication::Cmnd_Get_Transfer_Time */ ,
    (void *)-1 /* IApplication::Cmnd_Get_Transfer_Trk */ ,
    (void *)-1 /* IApplication::Cmnd_Get_Transfer_Wpt */ ,
    (void *)-1 /* IApplication::Cmnd_Get_FlightBook_Transfer */ ,
    (void *)-1 /* IApplication::Cmnd_Get_Transfer_Laps */ ,
    (void *)-1 /* IApplication::Cmnd_Set_Transfer_Alm */ ,
    (void *)-1 /* IApplication::Cmnd_Set_Transfer_Posn */ ,
    (void *)-1 /* IApplication::Cmnd_Set_Transfer_Prx */ ,
    (void *)-1 /* IApplication::Cmnd_Set_Transfer_Rte */ ,
    (void *)-1 /* IApplication::Cmnd_Set_Transfer_Time */ ,
    (void *)-1 /* IApplication::Cmnd_Set_Transfer_Trk */ ,
    (void *)-1 /* IApplication::Cmnd_Set_Transfer_Wpt */ ,
    (void *)-1 /* IApplication::Cmnd_Set_FlightBook_Transfer */ ,
    (void *)-1 /* IApplication::Cmnd_Set_Transfer_Laps */ ,
    IApplication_CreateBodyPacket_Proxy ,
    IApplication_get_Native_Proxy ,
    IApplication_put_Native_Proxy
};


static const PRPC_STUB_FUNCTION IApplication_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IApplicationStubVtbl =
{
    &IID_IApplication,
    &IApplication_ServerInfo,
    35,
    &IApplication_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IProtocolArray, ver. 0.0,
   GUID={0x18228139,0x1608,0x40F8,{0xA9,0xB4,0xE3,0x67,0x82,0xCA,0x4A,0xCE}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IProtocolArray_ServerInfo;

#pragma code_seg(".orpc")
/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Position_Data_Type_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pVal);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2044],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2044],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pVal);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2044],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Date_Time_Data_Type_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pVal);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2072],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2072],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pVal);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2072],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Proximity_Waypoint_Data_Type_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pVal);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2100],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2100],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pVal);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2100],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

static const unsigned short IProtocolArray_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1338,
    1372,
    1400,
    1428,
    1456,
    1484,
    1512,
    1540,
    1568,
    1596,
    1624,
    1652,
    1680,
    1708,
    1736,
    1764,
    1792,
    1820,
    1848,
    1876,
    1904,
    1932,
    1960,
    1988,
    2016,
    2044,
    2072,
    2100
    };

static const MIDL_SERVER_INFO IProtocolArray_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IProtocolArray_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IProtocolArray_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IProtocolArray_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(35) _IProtocolArrayProxyVtbl = 
{
    &IProtocolArray_ProxyInfo,
    &IID_IProtocolArray,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *)-1 /* IProtocolArray::Item */ ,
    (void *)-1 /* IProtocolArray::get_Count */ ,
    (void *)-1 /* IProtocolArray::get_Waypoint_Transfer_Protocol */ ,
    (void *)-1 /* IProtocolArray::get_Route_Transfer_Protocol */ ,
    (void *)-1 /* IProtocolArray::get_Track_Log_Transfer_Protocol */ ,
    (void *)-1 /* IProtocolArray::get_Proximity_Waypoint_Transfer_Protocol */ ,
    (void *)-1 /* IProtocolArray::get_Almanac_Transfer_Protocol */ ,
    (void *)-1 /* IProtocolArray::get_Date_and_Time_Initialization_Protocol */ ,
    (void *)-1 /* IProtocolArray::get_FlightBook_Transfer_Protocol */ ,
    (void *)-1 /* IProtocolArray::get_Position_Initialization_Protocol */ ,
    (void *)-1 /* IProtocolArray::get_PVT_Data_Protocol */ ,
    (void *)-1 /* IProtocolArray::get_Lap_Transfer_Protocol */ ,
    (void *)-1 /* IProtocolArray::get_Link_Protocol */ ,
    (void *)-1 /* IProtocolArray::get_Device_Command_Protocol */ ,
    (void *)-1 /* IProtocolArray::get_Physical_Protocol */ ,
    (void *)-1 /* IProtocolArray::get_Waypoint_Data_Type */ ,
    (void *)-1 /* IProtocolArray::get_Route_Header_Data_Type */ ,
    (void *)-1 /* IProtocolArray::get_Route_Waypoint_Data_Type */ ,
    (void *)-1 /* IProtocolArray::get_Route_Link_Data_Type */ ,
    (void *)-1 /* IProtocolArray::get_Almanac_Data_Type */ ,
    (void *)-1 /* IProtocolArray::get_Track_Header_Data_Type */ ,
    (void *)-1 /* IProtocolArray::get_Track_Data_Type */ ,
    (void *)-1 /* IProtocolArray::get_PVT_Data_Type */ ,
    (void *)-1 /* IProtocolArray::get_FlightBook_Data_Type */ ,
    (void *)-1 /* IProtocolArray::get_Lap_Data_Type */ ,
    IProtocolArray_get_Position_Data_Type_Proxy ,
    IProtocolArray_get_Date_Time_Data_Type_Proxy ,
    IProtocolArray_get_Proximity_Waypoint_Data_Type_Proxy
};


static const PRPC_STUB_FUNCTION IProtocolArray_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IProtocolArrayStubVtbl =
{
    &IID_IProtocolArray,
    &IProtocolArray_ServerInfo,
    35,
    &IProtocolArray_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IHelperProtocolArray, ver. 0.0,
   GUID={0xAE0EAE18,0x04FF,0x4ddc,{0x9F,0x79,0xC2,0xF1,0xD8,0xDD,0xC8,0x65}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IHelperProtocolArray_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IHelperProtocolArray_FormatStringOffsetTable[] = 
    {
    2128
    };

static const MIDL_SERVER_INFO IHelperProtocolArray_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IHelperProtocolArray_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IHelperProtocolArray_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IHelperProtocolArray_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IHelperProtocolArrayProxyVtbl = 
{
    &IHelperProtocolArray_ProxyInfo,
    &IID_IHelperProtocolArray,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IHelperProtocolArray::Add */
};

const CInterfaceStubVtbl _IHelperProtocolArrayStubVtbl =
{
    &IID_IHelperProtocolArray,
    &IHelperProtocolArray_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IProductData, ver. 0.0,
   GUID={0x751F1E73,0x4CFA,0x4F84,{0xA8,0xB1,0xF0,0x8F,0x10,0xDE,0xDB,0xCF}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IProductData_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IProductData_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2156,
    1372,
    240
    };

static const MIDL_SERVER_INFO IProductData_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IProductData_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IProductData_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IProductData_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(10) _IProductDataProxyVtbl = 
{
    &IProductData_ProxyInfo,
    &IID_IProductData,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *)-1 /* IProductData::get_product_ID */ ,
    (void *)-1 /* IProductData::get_software_version */ ,
    (void *)-1 /* IProductData::get_product_description */
};


static const PRPC_STUB_FUNCTION IProductData_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IProductDataStubVtbl =
{
    &IID_IProductData,
    &IProductData_ServerInfo,
    10,
    &IProductData_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IHelperProductData, ver. 0.0,
   GUID={0xB49BCD69,0xC0AA,0x4ca3,{0xBC,0x63,0x09,0x1E,0x29,0xA7,0xD2,0x3E}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IHelperProductData_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IHelperProductData_FormatStringOffsetTable[] = 
    {
    2128,
    498,
    2184
    };

static const MIDL_SERVER_INFO IHelperProductData_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IHelperProductData_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IHelperProductData_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IHelperProductData_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(6) _IHelperProductDataProxyVtbl = 
{
    &IHelperProductData_ProxyInfo,
    &IID_IHelperProductData,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IHelperProductData::SetProductDescription */ ,
    (void *)-1 /* IHelperProductData::SetSoftwareVersion */ ,
    (void *)-1 /* IHelperProductData::SetProductID */
};

const CInterfaceStubVtbl _IHelperProductDataStubVtbl =
{
    &IID_IHelperProductData,
    &IHelperProductData_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IBodyPackets, ver. 0.0,
   GUID={0xF7F3D000,0xCBB7,0x41C0,{0x8D,0x89,0x60,0x51,0x7B,0x33,0x54,0x75}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IBodyPackets_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IBodyPackets_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2212,
    1372,
    2246,
    2274,
    2302
    };

static const MIDL_SERVER_INFO IBodyPackets_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IBodyPackets_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IBodyPackets_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IBodyPackets_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(12) _IBodyPacketsProxyVtbl = 
{
    &IBodyPackets_ProxyInfo,
    &IID_IBodyPackets,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *)-1 /* IBodyPackets::Item */ ,
    (void *)-1 /* IBodyPackets::get_Count */ ,
    (void *)-1 /* IBodyPackets::Add */ ,
    (void *)-1 /* IBodyPackets::Remove */ ,
    (void *)-1 /* IBodyPackets::get__NewEnum */
};


static const PRPC_STUB_FUNCTION IBodyPackets_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IBodyPacketsStubVtbl =
{
    &IID_IBodyPackets,
    &IBodyPackets_ServerInfo,
    12,
    &IBodyPackets_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IPrimitive, ver. 0.0,
   GUID={0xEBDD5B58,0x3169,0x4D98,{0x84,0xF7,0x88,0xD1,0xDE,0x9B,0xBF,0x85}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPrimitive_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IPrimitive_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2330,
    28,
    240,
    2358,
    2386,
    2414,
    2442,
    2470,
    2498,
    2526,
    2554,
    2582,
    2610,
    2638,
    2666,
    2694,
    2728,
    2756,
    2784,
    2812,
    2840,
    2868,
    2896
    };

static const MIDL_SERVER_INFO IPrimitive_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IPrimitive_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPrimitive_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IPrimitive_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(30) _IPrimitiveProxyVtbl = 
{
    &IPrimitive_ProxyInfo,
    &IID_IPrimitive,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *)-1 /* IPrimitive::Add */ ,
    (void *)-1 /* IPrimitive::Clear */ ,
    (void *)-1 /* IPrimitive::get_Count */ ,
    (void *)-1 /* IPrimitive::get_gfloat */ ,
    (void *)-1 /* IPrimitive::put_gfloat */ ,
    (void *)-1 /* IPrimitive::get_gdouble */ ,
    (void *)-1 /* IPrimitive::put_gdouble */ ,
    (void *)-1 /* IPrimitive::get_glong */ ,
    (void *)-1 /* IPrimitive::put_glong */ ,
    (void *)-1 /* IPrimitive::get_gint */ ,
    (void *)-1 /* IPrimitive::put_gint */ ,
    (void *)-1 /* IPrimitive::get_gword */ ,
    (void *)-1 /* IPrimitive::put_gword */ ,
    (void *)-1 /* IPrimitive::get_glongword */ ,
    (void *)-1 /* IPrimitive::put_glongword */ ,
    (void *)-1 /* IPrimitive::Item */ ,
    (void *)-1 /* IPrimitive::get_gsemicircles */ ,
    (void *)-1 /* IPrimitive::put_gsemicircles */ ,
    (void *)-1 /* IPrimitive::get_gradians */ ,
    (void *)-1 /* IPrimitive::put_gradians */ ,
    (void *)-1 /* IPrimitive::get_gdegrees_from_semicircles */ ,
    (void *)-1 /* IPrimitive::get_gdegrees_from_radians */ ,
    (void *)-1 /* IPrimitive::put_gdegrees */
};


static const PRPC_STUB_FUNCTION IPrimitive_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPrimitiveStubVtbl =
{
    &IID_IPrimitive,
    &IPrimitive_ServerInfo,
    30,
    &IPrimitive_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IGarminDataType, ver. 0.0,
   GUID={0xB892E0AF,0x1D97,0x4d8f,{0x83,0x62,0x97,0x4E,0x81,0x10,0x15,0x51}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IGarminDataType_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IGarminDataType_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2924,
    650
    };

static const MIDL_SERVER_INFO IGarminDataType_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IGarminDataType_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IGarminDataType_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IGarminDataType_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(9) _IGarminDataTypeProxyVtbl = 
{
    &IGarminDataType_ProxyInfo,
    &IID_IGarminDataType,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *)-1 /* IGarminDataType::get_Type */ ,
    (void *)-1 /* IGarminDataType::get_IDXXX_Type */
};


static const PRPC_STUB_FUNCTION IGarminDataType_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IGarminDataTypeStubVtbl =
{
    &IID_IGarminDataType,
    &IGarminDataType_ServerInfo,
    9,
    &IGarminDataType_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IDXXX_Wpt_Type, ver. 0.0,
   GUID={0x159762E6,0x8B54,0x43b8,{0xAC,0xB7,0x4F,0xE4,0xAE,0x5B,0xDF,0xFB}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDXXX_Wpt_Type_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IDXXX_Wpt_Type_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2924,
    650,
    1400,
    2952,
    2980,
    3008,
    3036,
    3064
    };

static const MIDL_SERVER_INFO IDXXX_Wpt_Type_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IDXXX_Wpt_Type_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IDXXX_Wpt_Type_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IDXXX_Wpt_Type_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(15) _IDXXX_Wpt_TypeProxyVtbl = 
{
    &IDXXX_Wpt_Type_ProxyInfo,
    &IID_IDXXX_Wpt_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *)-1 /* IGarminDataType::get_Type */ ,
    (void *)-1 /* IGarminDataType::get_IDXXX_Type */ ,
    (void *)-1 /* IDXXX_Wpt_Type::get_ident */ ,
    (void *)-1 /* IDXXX_Wpt_Type::put_ident */ ,
    (void *)-1 /* IDXXX_Wpt_Type::get_lon */ ,
    (void *)-1 /* IDXXX_Wpt_Type::put_lon */ ,
    (void *)-1 /* IDXXX_Wpt_Type::get_lat */ ,
    (void *)-1 /* IDXXX_Wpt_Type::put_lat */
};


static const PRPC_STUB_FUNCTION IDXXX_Wpt_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IDXXX_Wpt_TypeStubVtbl =
{
    &IID_IDXXX_Wpt_Type,
    &IDXXX_Wpt_Type_ServerInfo,
    15,
    &IDXXX_Wpt_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID100_Wpt_Type, ver. 0.0,
   GUID={0xE95D7CBD,0x4282,0x455C,{0x96,0x75,0xE7,0x84,0x29,0x92,0x4F,0x2A}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(15) _ID100_Wpt_TypeProxyVtbl = 
{
    0,
    &IID_ID100_Wpt_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lat */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lat */
};


static const PRPC_STUB_FUNCTION ID100_Wpt_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID100_Wpt_TypeStubVtbl =
{
    &IID_ID100_Wpt_Type,
    0,
    15,
    &ID100_Wpt_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID101_Wpt_Type, ver. 0.0,
   GUID={0xE88FA770,0x0531,0x4501,{0xB7,0x76,0x5E,0x2D,0x2C,0xBE,0x65,0x57}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(15) _ID101_Wpt_TypeProxyVtbl = 
{
    0,
    &IID_ID101_Wpt_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lat */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lat */
};


static const PRPC_STUB_FUNCTION ID101_Wpt_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID101_Wpt_TypeStubVtbl =
{
    &IID_ID101_Wpt_Type,
    0,
    15,
    &ID101_Wpt_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID102_Wpt_Type, ver. 0.0,
   GUID={0xF3FB6D62,0x0399,0x4071,{0xAE,0x64,0xC2,0x57,0x34,0xB9,0x35,0x51}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(15) _ID102_Wpt_TypeProxyVtbl = 
{
    0,
    &IID_ID102_Wpt_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lat */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lat */
};


static const PRPC_STUB_FUNCTION ID102_Wpt_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID102_Wpt_TypeStubVtbl =
{
    &IID_ID102_Wpt_Type,
    0,
    15,
    &ID102_Wpt_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID103_Wpt_Type, ver. 0.0,
   GUID={0x2DFA1A39,0x1124,0x4DF1,{0xA2,0x63,0xAF,0x35,0x62,0x76,0x2C,0x18}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(15) _ID103_Wpt_TypeProxyVtbl = 
{
    0,
    &IID_ID103_Wpt_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lat */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lat */
};


static const PRPC_STUB_FUNCTION ID103_Wpt_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID103_Wpt_TypeStubVtbl =
{
    &IID_ID103_Wpt_Type,
    0,
    15,
    &ID103_Wpt_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID104_Wpt_Type, ver. 0.0,
   GUID={0x327D435A,0xEDD6,0x4AF5,{0xA3,0x0A,0x7E,0x9A,0x0D,0x90,0x21,0x47}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(15) _ID104_Wpt_TypeProxyVtbl = 
{
    0,
    &IID_ID104_Wpt_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lat */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lat */
};


static const PRPC_STUB_FUNCTION ID104_Wpt_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID104_Wpt_TypeStubVtbl =
{
    &IID_ID104_Wpt_Type,
    0,
    15,
    &ID104_Wpt_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID105_Wpt_Type, ver. 0.0,
   GUID={0x85D51003,0x9918,0x4DEC,{0x97,0x71,0x1A,0x94,0x3D,0x98,0xC4,0x16}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(15) _ID105_Wpt_TypeProxyVtbl = 
{
    0,
    &IID_ID105_Wpt_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lat */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lat */
};


static const PRPC_STUB_FUNCTION ID105_Wpt_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID105_Wpt_TypeStubVtbl =
{
    &IID_ID105_Wpt_Type,
    0,
    15,
    &ID105_Wpt_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID106_Wpt_Type, ver. 0.0,
   GUID={0x8BE8FA0B,0x9C2B,0x43C9,{0x98,0xBF,0x5D,0x61,0x33,0xFB,0x4E,0xEF}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(15) _ID106_Wpt_TypeProxyVtbl = 
{
    0,
    &IID_ID106_Wpt_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lat */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lat */
};


static const PRPC_STUB_FUNCTION ID106_Wpt_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID106_Wpt_TypeStubVtbl =
{
    &IID_ID106_Wpt_Type,
    0,
    15,
    &ID106_Wpt_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID107_Wpt_Type, ver. 0.0,
   GUID={0xE17059F8,0x4F93,0x4882,{0x91,0x46,0xEC,0xA0,0x91,0xE1,0x70,0xC3}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(15) _ID107_Wpt_TypeProxyVtbl = 
{
    0,
    &IID_ID107_Wpt_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lat */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lat */
};


static const PRPC_STUB_FUNCTION ID107_Wpt_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID107_Wpt_TypeStubVtbl =
{
    &IID_ID107_Wpt_Type,
    0,
    15,
    &ID107_Wpt_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID108_Wpt_Type, ver. 0.0,
   GUID={0x7BE71D06,0x70AC,0x406F,{0x86,0x3D,0xB3,0xAC,0x86,0xDF,0xCC,0x81}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ID108_Wpt_Type_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ID108_Wpt_Type_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2924,
    650,
    1400,
    2952,
    2980,
    3008,
    3036,
    3064,
    3092,
    3120,
    3148,
    3176,
    3204,
    3232,
    3260,
    3288,
    2728,
    2756,
    3316,
    3344,
    3372,
    3400,
    3428,
    3456
    };

static const MIDL_SERVER_INFO ID108_Wpt_Type_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ID108_Wpt_Type_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ID108_Wpt_Type_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ID108_Wpt_Type_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(31) _ID108_Wpt_TypeProxyVtbl = 
{
    &ID108_Wpt_Type_ProxyInfo,
    &IID_ID108_Wpt_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *)-1 /* IGarminDataType::get_Type */ ,
    (void *)-1 /* IGarminDataType::get_IDXXX_Type */ ,
    (void *)-1 /* IDXXX_Wpt_Type::get_ident */ ,
    (void *)-1 /* IDXXX_Wpt_Type::put_ident */ ,
    (void *)-1 /* IDXXX_Wpt_Type::get_lon */ ,
    (void *)-1 /* IDXXX_Wpt_Type::put_lon */ ,
    (void *)-1 /* IDXXX_Wpt_Type::get_lat */ ,
    (void *)-1 /* IDXXX_Wpt_Type::put_lat */ ,
    (void *)-1 /* ID108_Wpt_Type::get_color */ ,
    (void *)-1 /* ID108_Wpt_Type::put_color */ ,
    (void *)-1 /* ID108_Wpt_Type::get_wpt_class */ ,
    (void *)-1 /* ID108_Wpt_Type::put_wpt_class */ ,
    (void *)-1 /* ID108_Wpt_Type::get_dspl */ ,
    (void *)-1 /* ID108_Wpt_Type::put_dspl */ ,
    (void *)-1 /* ID108_Wpt_Type::get_attr */ ,
    (void *)-1 /* ID108_Wpt_Type::put_attr */ ,
    (void *)-1 /* ID108_Wpt_Type::get_smbl */ ,
    (void *)-1 /* ID108_Wpt_Type::put_smbl */ ,
    (void *)-1 /* ID108_Wpt_Type::get_alt */ ,
    (void *)-1 /* ID108_Wpt_Type::put_alt */ ,
    (void *)-1 /* ID108_Wpt_Type::get_dpth */ ,
    (void *)-1 /* ID108_Wpt_Type::put_dpth */ ,
    (void *)-1 /* ID108_Wpt_Type::get_dist */ ,
    (void *)-1 /* ID108_Wpt_Type::put_dist */
};


static const PRPC_STUB_FUNCTION ID108_Wpt_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID108_Wpt_TypeStubVtbl =
{
    &IID_ID108_Wpt_Type,
    &ID108_Wpt_Type_ServerInfo,
    31,
    &ID108_Wpt_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID109_Wpt_Type, ver. 0.0,
   GUID={0x49EFB30A,0x7AEB,0x4AA1,{0xBC,0x0D,0x2C,0x9E,0x64,0xC0,0xBD,0xD0}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(15) _ID109_Wpt_TypeProxyVtbl = 
{
    0,
    &IID_ID109_Wpt_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lat */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lat */
};


static const PRPC_STUB_FUNCTION ID109_Wpt_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID109_Wpt_TypeStubVtbl =
{
    &IID_ID109_Wpt_Type,
    0,
    15,
    &ID109_Wpt_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID110_Wpt_Type, ver. 0.0,
   GUID={0xE6DBBF81,0xC03A,0x4E33,{0xA1,0xA4,0x3C,0x41,0xCD,0x7E,0x99,0x94}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(15) _ID110_Wpt_TypeProxyVtbl = 
{
    0,
    &IID_ID110_Wpt_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lat */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lat */
};


static const PRPC_STUB_FUNCTION ID110_Wpt_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID110_Wpt_TypeStubVtbl =
{
    &IID_ID110_Wpt_Type,
    0,
    15,
    &ID110_Wpt_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID150_Wpt_Type, ver. 0.0,
   GUID={0xFA811D94,0xB38A,0x4ACE,{0x96,0x8D,0x74,0x57,0x11,0x1A,0x45,0xFE}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(15) _ID150_Wpt_TypeProxyVtbl = 
{
    0,
    &IID_ID150_Wpt_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lat */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lat */
};


static const PRPC_STUB_FUNCTION ID150_Wpt_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID150_Wpt_TypeStubVtbl =
{
    &IID_ID150_Wpt_Type,
    0,
    15,
    &ID150_Wpt_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID151_Wpt_Type, ver. 0.0,
   GUID={0xCB1F20DE,0x9D03,0x4436,{0x87,0xF6,0x80,0xD0,0x49,0x96,0x2C,0x55}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(15) _ID151_Wpt_TypeProxyVtbl = 
{
    0,
    &IID_ID151_Wpt_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lat */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lat */
};


static const PRPC_STUB_FUNCTION ID151_Wpt_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID151_Wpt_TypeStubVtbl =
{
    &IID_ID151_Wpt_Type,
    0,
    15,
    &ID151_Wpt_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID152_Wpt_Type, ver. 0.0,
   GUID={0x99270E0B,0xBF3F,0x4699,{0xAA,0xD7,0xF5,0xE5,0x5B,0x8C,0x75,0x0C}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(15) _ID152_Wpt_TypeProxyVtbl = 
{
    0,
    &IID_ID152_Wpt_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lat */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lat */
};


static const PRPC_STUB_FUNCTION ID152_Wpt_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID152_Wpt_TypeStubVtbl =
{
    &IID_ID152_Wpt_Type,
    0,
    15,
    &ID152_Wpt_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID154_Wpt_Type, ver. 0.0,
   GUID={0x92EF6B0C,0x7B5B,0x4080,{0x82,0xBA,0x1D,0xB3,0xDE,0xAD,0xBB,0xCB}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(15) _ID154_Wpt_TypeProxyVtbl = 
{
    0,
    &IID_ID154_Wpt_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lat */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lat */
};


static const PRPC_STUB_FUNCTION ID154_Wpt_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID154_Wpt_TypeStubVtbl =
{
    &IID_ID154_Wpt_Type,
    0,
    15,
    &ID154_Wpt_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID155_Wpt_Type, ver. 0.0,
   GUID={0x9B9C68CF,0xB1B8,0x461F,{0x9F,0x4A,0xE3,0xB9,0x80,0x21,0x0C,0xE4}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(15) _ID155_Wpt_TypeProxyVtbl = 
{
    0,
    &IID_ID155_Wpt_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_ident */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lon */ ,
    0 /* forced delegation IDXXX_Wpt_Type::get_lat */ ,
    0 /* forced delegation IDXXX_Wpt_Type::put_lat */
};


static const PRPC_STUB_FUNCTION ID155_Wpt_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID155_Wpt_TypeStubVtbl =
{
    &IID_ID155_Wpt_Type,
    0,
    15,
    &ID155_Wpt_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID200_Rte_Hdr_Type, ver. 0.0,
   GUID={0xB09277E6,0xB1B6,0x4786,{0xBC,0x21,0xCC,0xE9,0xD0,0x82,0x1C,0xBD}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(9) _ID200_Rte_Hdr_TypeProxyVtbl = 
{
    0,
    &IID_ID200_Rte_Hdr_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */
};


static const PRPC_STUB_FUNCTION ID200_Rte_Hdr_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID200_Rte_Hdr_TypeStubVtbl =
{
    &IID_ID200_Rte_Hdr_Type,
    0,
    9,
    &ID200_Rte_Hdr_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID201_Rte_Hdr_Type, ver. 0.0,
   GUID={0x98C9CD1F,0xB32B,0x405C,{0x95,0xEE,0xAC,0x07,0x88,0x86,0x15,0x71}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(9) _ID201_Rte_Hdr_TypeProxyVtbl = 
{
    0,
    &IID_ID201_Rte_Hdr_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */
};


static const PRPC_STUB_FUNCTION ID201_Rte_Hdr_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID201_Rte_Hdr_TypeStubVtbl =
{
    &IID_ID201_Rte_Hdr_Type,
    0,
    9,
    &ID201_Rte_Hdr_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID202_Rte_Hdr_Type, ver. 0.0,
   GUID={0xB26D0E64,0x9C6B,0x4815,{0xAC,0xF8,0x8E,0xA9,0x18,0xB9,0x30,0x98}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(9) _ID202_Rte_Hdr_TypeProxyVtbl = 
{
    0,
    &IID_ID202_Rte_Hdr_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */
};


static const PRPC_STUB_FUNCTION ID202_Rte_Hdr_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID202_Rte_Hdr_TypeStubVtbl =
{
    &IID_ID202_Rte_Hdr_Type,
    0,
    9,
    &ID202_Rte_Hdr_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID210_Rte_Link_Type, ver. 0.0,
   GUID={0xDAAA1645,0x843A,0x4B48,{0xB0,0x52,0x29,0x54,0xC7,0x0C,0x37,0xA8}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(9) _ID210_Rte_Link_TypeProxyVtbl = 
{
    0,
    &IID_ID210_Rte_Link_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */
};


static const PRPC_STUB_FUNCTION ID210_Rte_Link_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID210_Rte_Link_TypeStubVtbl =
{
    &IID_ID210_Rte_Link_Type,
    0,
    9,
    &ID210_Rte_Link_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IDXXX_Trk_Point_Type, ver. 0.0,
   GUID={0xB6E9B4D0,0x4823,0x426b,{0x9C,0x03,0xFA,0xF0,0xBB,0x14,0x81,0x51}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDXXX_Trk_Point_Type_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IDXXX_Trk_Point_Type_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2924,
    650,
    3484,
    2274,
    2980,
    3008,
    3036,
    3064
    };

static const MIDL_SERVER_INFO IDXXX_Trk_Point_Type_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IDXXX_Trk_Point_Type_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IDXXX_Trk_Point_Type_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IDXXX_Trk_Point_Type_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(15) _IDXXX_Trk_Point_TypeProxyVtbl = 
{
    &IDXXX_Trk_Point_Type_ProxyInfo,
    &IID_IDXXX_Trk_Point_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *)-1 /* IGarminDataType::get_Type */ ,
    (void *)-1 /* IGarminDataType::get_IDXXX_Type */ ,
    (void *)-1 /* IDXXX_Trk_Point_Type::get_lat */ ,
    (void *)-1 /* IDXXX_Trk_Point_Type::put_lat */ ,
    (void *)-1 /* IDXXX_Trk_Point_Type::get_lon */ ,
    (void *)-1 /* IDXXX_Trk_Point_Type::put_lon */ ,
    (void *)-1 /* IDXXX_Trk_Point_Type::get_time */ ,
    (void *)-1 /* IDXXX_Trk_Point_Type::put_time */
};


static const PRPC_STUB_FUNCTION IDXXX_Trk_Point_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IDXXX_Trk_Point_TypeStubVtbl =
{
    &IID_IDXXX_Trk_Point_Type,
    &IDXXX_Trk_Point_Type_ServerInfo,
    15,
    &IDXXX_Trk_Point_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID300_Trk_Point_Type, ver. 0.0,
   GUID={0x41A7411C,0x0F75,0x4D12,{0x9B,0x30,0x23,0x49,0xCD,0xA8,0x47,0xD6}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(15) _ID300_Trk_Point_TypeProxyVtbl = 
{
    0,
    &IID_ID300_Trk_Point_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */ ,
    0 /* forced delegation IDXXX_Trk_Point_Type::get_lat */ ,
    0 /* forced delegation IDXXX_Trk_Point_Type::put_lat */ ,
    0 /* forced delegation IDXXX_Trk_Point_Type::get_lon */ ,
    0 /* forced delegation IDXXX_Trk_Point_Type::put_lon */ ,
    0 /* forced delegation IDXXX_Trk_Point_Type::get_time */ ,
    0 /* forced delegation IDXXX_Trk_Point_Type::put_time */
};


static const PRPC_STUB_FUNCTION ID300_Trk_Point_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID300_Trk_Point_TypeStubVtbl =
{
    &IID_ID300_Trk_Point_Type,
    0,
    15,
    &ID300_Trk_Point_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID301_Trk_Point_Type, ver. 0.0,
   GUID={0xCC178575,0x0663,0x49C0,{0xBD,0xEF,0xB6,0x4C,0x5D,0x7B,0x93,0xB5}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ID301_Trk_Point_Type_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ID301_Trk_Point_Type_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2924,
    650,
    3484,
    2274,
    2980,
    3008,
    3036,
    3064,
    3512,
    3540,
    3568,
    3596,
    3204,
    3232
    };

static const MIDL_SERVER_INFO ID301_Trk_Point_Type_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ID301_Trk_Point_Type_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ID301_Trk_Point_Type_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ID301_Trk_Point_Type_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(21) _ID301_Trk_Point_TypeProxyVtbl = 
{
    &ID301_Trk_Point_Type_ProxyInfo,
    &IID_ID301_Trk_Point_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *)-1 /* IGarminDataType::get_Type */ ,
    (void *)-1 /* IGarminDataType::get_IDXXX_Type */ ,
    (void *)-1 /* IDXXX_Trk_Point_Type::get_lat */ ,
    (void *)-1 /* IDXXX_Trk_Point_Type::put_lat */ ,
    (void *)-1 /* IDXXX_Trk_Point_Type::get_lon */ ,
    (void *)-1 /* IDXXX_Trk_Point_Type::put_lon */ ,
    (void *)-1 /* IDXXX_Trk_Point_Type::get_time */ ,
    (void *)-1 /* IDXXX_Trk_Point_Type::put_time */ ,
    (void *)-1 /* ID301_Trk_Point_Type::get_alt */ ,
    (void *)-1 /* ID301_Trk_Point_Type::put_alt */ ,
    (void *)-1 /* ID301_Trk_Point_Type::get_dpth */ ,
    (void *)-1 /* ID301_Trk_Point_Type::put_dpth */ ,
    (void *)-1 /* ID301_Trk_Point_Type::get_new_trk */ ,
    (void *)-1 /* ID301_Trk_Point_Type::put_new_trk */
};


static const PRPC_STUB_FUNCTION ID301_Trk_Point_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID301_Trk_Point_TypeStubVtbl =
{
    &IID_ID301_Trk_Point_Type,
    &ID301_Trk_Point_Type_ServerInfo,
    21,
    &ID301_Trk_Point_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID302_Trk_Point_Type, ver. 0.0,
   GUID={0x08D674C1,0xE27D,0x471A,{0x91,0x2D,0x34,0xB6,0x99,0x80,0x0D,0x3D}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(15) _ID302_Trk_Point_TypeProxyVtbl = 
{
    0,
    &IID_ID302_Trk_Point_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */ ,
    0 /* forced delegation IDXXX_Trk_Point_Type::get_lat */ ,
    0 /* forced delegation IDXXX_Trk_Point_Type::put_lat */ ,
    0 /* forced delegation IDXXX_Trk_Point_Type::get_lon */ ,
    0 /* forced delegation IDXXX_Trk_Point_Type::put_lon */ ,
    0 /* forced delegation IDXXX_Trk_Point_Type::get_time */ ,
    0 /* forced delegation IDXXX_Trk_Point_Type::put_time */
};


static const PRPC_STUB_FUNCTION ID302_Trk_Point_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID302_Trk_Point_TypeStubVtbl =
{
    &IID_ID302_Trk_Point_Type,
    0,
    15,
    &ID302_Trk_Point_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID310_Trk_Hdr_Type, ver. 0.0,
   GUID={0x23423C4D,0xEB94,0x447C,{0xA6,0xCF,0x16,0x35,0xC4,0x06,0x33,0x21}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(9) _ID310_Trk_Hdr_TypeProxyVtbl = 
{
    0,
    &IID_ID310_Trk_Hdr_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */
};


static const PRPC_STUB_FUNCTION ID310_Trk_Hdr_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID310_Trk_Hdr_TypeStubVtbl =
{
    &IID_ID310_Trk_Hdr_Type,
    0,
    9,
    &ID310_Trk_Hdr_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID311_Trk_Hdr_Type, ver. 0.0,
   GUID={0x05ABD889,0xE3EB,0x41EC,{0xA0,0xDD,0x83,0x7E,0x02,0x3F,0x30,0xF6}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(9) _ID311_Trk_Hdr_TypeProxyVtbl = 
{
    0,
    &IID_ID311_Trk_Hdr_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */
};


static const PRPC_STUB_FUNCTION ID311_Trk_Hdr_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID311_Trk_Hdr_TypeStubVtbl =
{
    &IID_ID311_Trk_Hdr_Type,
    0,
    9,
    &ID311_Trk_Hdr_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID312_Trk_Hdr_Type, ver. 0.0,
   GUID={0xF1E2E227,0xED1C,0x40F3,{0x90,0xDA,0x53,0x33,0x7D,0x17,0xC9,0xF4}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(9) _ID312_Trk_Hdr_TypeProxyVtbl = 
{
    0,
    &IID_ID312_Trk_Hdr_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */
};


static const PRPC_STUB_FUNCTION ID312_Trk_Hdr_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID312_Trk_Hdr_TypeStubVtbl =
{
    &IID_ID312_Trk_Hdr_Type,
    0,
    9,
    &ID312_Trk_Hdr_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IDXXX_Prx_Wpt_Type, ver. 0.0,
   GUID={0x436FF720,0x6760,0x4036,{0xAD,0xFF,0x1B,0x4C,0xA2,0x06,0xF6,0xA8}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(9) _IDXXX_Prx_Wpt_TypeProxyVtbl = 
{
    0,
    &IID_IDXXX_Prx_Wpt_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */
};


static const PRPC_STUB_FUNCTION IDXXX_Prx_Wpt_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IDXXX_Prx_Wpt_TypeStubVtbl =
{
    &IID_IDXXX_Prx_Wpt_Type,
    0,
    9,
    &IDXXX_Prx_Wpt_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID400_Prx_Wpt_Type, ver. 0.0,
   GUID={0xC6F61EAE,0x6D5A,0x4615,{0x83,0x93,0x53,0x3A,0xC0,0x3E,0x38,0x28}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(9) _ID400_Prx_Wpt_TypeProxyVtbl = 
{
    0,
    &IID_ID400_Prx_Wpt_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */
};


static const PRPC_STUB_FUNCTION ID400_Prx_Wpt_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID400_Prx_Wpt_TypeStubVtbl =
{
    &IID_ID400_Prx_Wpt_Type,
    0,
    9,
    &ID400_Prx_Wpt_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID403_Prx_Wpt_Type, ver. 0.0,
   GUID={0xC068C7CC,0x38A4,0x4ADF,{0x87,0xFC,0xEB,0xC8,0xC0,0x98,0x83,0x6C}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(9) _ID403_Prx_Wpt_TypeProxyVtbl = 
{
    0,
    &IID_ID403_Prx_Wpt_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */
};


static const PRPC_STUB_FUNCTION ID403_Prx_Wpt_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID403_Prx_Wpt_TypeStubVtbl =
{
    &IID_ID403_Prx_Wpt_Type,
    0,
    9,
    &ID403_Prx_Wpt_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID450_Prx_Wpt_Type, ver. 0.0,
   GUID={0x23A98EA2,0x3BF2,0x4140,{0x80,0x4B,0x8E,0x8C,0xFC,0x57,0x28,0x10}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(9) _ID450_Prx_Wpt_TypeProxyVtbl = 
{
    0,
    &IID_ID450_Prx_Wpt_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */
};


static const PRPC_STUB_FUNCTION ID450_Prx_Wpt_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID450_Prx_Wpt_TypeStubVtbl =
{
    &IID_ID450_Prx_Wpt_Type,
    0,
    9,
    &ID450_Prx_Wpt_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IDXXX_Almanac_Type, ver. 0.0,
   GUID={0xEA73540C,0xC0F6,0x4e60,{0xB0,0x83,0xE1,0xDA,0x50,0x8D,0x81,0x38}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(9) _IDXXX_Almanac_TypeProxyVtbl = 
{
    0,
    &IID_IDXXX_Almanac_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */
};


static const PRPC_STUB_FUNCTION IDXXX_Almanac_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IDXXX_Almanac_TypeStubVtbl =
{
    &IID_IDXXX_Almanac_Type,
    0,
    9,
    &IDXXX_Almanac_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID500_Almanac_Type, ver. 0.0,
   GUID={0x317AC2D3,0xC90B,0x4229,{0xAC,0x52,0xAE,0xB8,0x0D,0x46,0x18,0xBA}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(9) _ID500_Almanac_TypeProxyVtbl = 
{
    0,
    &IID_ID500_Almanac_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */
};


static const PRPC_STUB_FUNCTION ID500_Almanac_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID500_Almanac_TypeStubVtbl =
{
    &IID_ID500_Almanac_Type,
    0,
    9,
    &ID500_Almanac_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID501_Almanac_Type, ver. 0.0,
   GUID={0x8238A7AD,0xE78C,0x47F2,{0x9E,0x28,0xF2,0xE7,0x48,0x8C,0xDB,0xC1}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(9) _ID501_Almanac_TypeProxyVtbl = 
{
    0,
    &IID_ID501_Almanac_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */
};


static const PRPC_STUB_FUNCTION ID501_Almanac_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID501_Almanac_TypeStubVtbl =
{
    &IID_ID501_Almanac_Type,
    0,
    9,
    &ID501_Almanac_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID550_Almanac_Type, ver. 0.0,
   GUID={0x49C2B829,0x07C0,0x4610,{0xA4,0xB6,0x1D,0xDD,0x70,0x8A,0xD4,0xC3}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(9) _ID550_Almanac_TypeProxyVtbl = 
{
    0,
    &IID_ID550_Almanac_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */
};


static const PRPC_STUB_FUNCTION ID550_Almanac_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID550_Almanac_TypeStubVtbl =
{
    &IID_ID550_Almanac_Type,
    0,
    9,
    &ID550_Almanac_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID551_Almanac_Type, ver. 0.0,
   GUID={0xFA135063,0x1E92,0x40E2,{0x98,0xDE,0x13,0xCC,0xB1,0x9A,0xFE,0xD8}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(9) _ID551_Almanac_TypeProxyVtbl = 
{
    0,
    &IID_ID551_Almanac_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IGarminDataType::get_Type */ ,
    0 /* forced delegation IGarminDataType::get_IDXXX_Type */
};


static const PRPC_STUB_FUNCTION ID551_Almanac_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID551_Almanac_TypeStubVtbl =
{
    &IID_ID551_Almanac_Type,
    0,
    9,
    &ID551_Almanac_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID600_Date_Time_Type, ver. 0.0,
   GUID={0x85540371,0x1DB0,0x45D6,{0x89,0x16,0x59,0x2E,0xAF,0xAB,0x1C,0xA7}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ID600_Date_Time_Type_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ID600_Date_Time_Type_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2924,
    650,
    3484,
    2274,
    2980,
    3008,
    3036,
    3064,
    3092,
    3120,
    3148,
    3176,
    3204,
    3232
    };

static const MIDL_SERVER_INFO ID600_Date_Time_Type_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ID600_Date_Time_Type_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ID600_Date_Time_Type_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ID600_Date_Time_Type_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(21) _ID600_Date_Time_TypeProxyVtbl = 
{
    &ID600_Date_Time_Type_ProxyInfo,
    &IID_ID600_Date_Time_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *)-1 /* IGarminDataType::get_Type */ ,
    (void *)-1 /* IGarminDataType::get_IDXXX_Type */ ,
    (void *)-1 /* ID600_Date_Time_Type::get_month */ ,
    (void *)-1 /* ID600_Date_Time_Type::put_month */ ,
    (void *)-1 /* ID600_Date_Time_Type::get_day */ ,
    (void *)-1 /* ID600_Date_Time_Type::put_day */ ,
    (void *)-1 /* ID600_Date_Time_Type::get_year */ ,
    (void *)-1 /* ID600_Date_Time_Type::put_year */ ,
    (void *)-1 /* ID600_Date_Time_Type::get_hour */ ,
    (void *)-1 /* ID600_Date_Time_Type::put_hour */ ,
    (void *)-1 /* ID600_Date_Time_Type::get_minute */ ,
    (void *)-1 /* ID600_Date_Time_Type::put_minute */ ,
    (void *)-1 /* ID600_Date_Time_Type::get_second */ ,
    (void *)-1 /* ID600_Date_Time_Type::put_second */
};


static const PRPC_STUB_FUNCTION ID600_Date_Time_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ID600_Date_Time_TypeStubVtbl =
{
    &IID_ID600_Date_Time_Type,
    &ID600_Date_Time_Type_ServerInfo,
    21,
    &ID600_Date_Time_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID650_FlightBook_Record_Type, ver. 0.0,
   GUID={0x4B5F1508,0xCBF5,0x43ED,{0xA9,0x8A,0xAE,0xEC,0x73,0x02,0x66,0x6B}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(7) _ID650_FlightBook_Record_TypeProxyVtbl = 
{
    0,
    &IID_ID650_FlightBook_Record_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION ID650_FlightBook_Record_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _ID650_FlightBook_Record_TypeStubVtbl =
{
    &IID_ID650_FlightBook_Record_Type,
    0,
    7,
    &ID650_FlightBook_Record_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID700_Position_Type, ver. 0.0,
   GUID={0x52143944,0x06EE,0x45AC,{0x9B,0xCF,0x1C,0xFC,0x0A,0x38,0xDF,0x58}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(7) _ID700_Position_TypeProxyVtbl = 
{
    0,
    &IID_ID700_Position_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION ID700_Position_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _ID700_Position_TypeStubVtbl =
{
    &IID_ID700_Position_Type,
    0,
    7,
    &ID700_Position_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID800_Pvt_Data_Type, ver. 0.0,
   GUID={0x1509FB5F,0x1400,0x4E74,{0xBA,0xC0,0x42,0x43,0x58,0xB9,0x80,0x89}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(7) _ID800_Pvt_Data_TypeProxyVtbl = 
{
    0,
    &IID_ID800_Pvt_Data_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION ID800_Pvt_Data_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _ID800_Pvt_Data_TypeStubVtbl =
{
    &IID_ID800_Pvt_Data_Type,
    0,
    7,
    &ID800_Pvt_Data_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ID906_Lap_Type, ver. 0.0,
   GUID={0xFDAC05DF,0xDC76,0x400F,{0x86,0x77,0x6E,0xA0,0x03,0xBF,0xD0,0x77}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[2];

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x20000, /* Ndr library version */
    0,
    0x50100a4, /* MIDL Version 5.1.164 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    1,  /* Flags */
    0,  /* Reserved3 */
    0,  /* Reserved4 */
    0   /* Reserved5 */
    };

CINTERFACE_PROXY_VTABLE(7) _ID906_Lap_TypeProxyVtbl = 
{
    0,
    &IID_ID906_Lap_Type,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION ID906_Lap_Type_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _ID906_Lap_TypeStubVtbl =
{
    &IID_ID906_Lap_Type,
    0,
    7,
    &ID906_Lap_Type_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

#pragma data_seg(".rdata")

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[2] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT40_OR_LATER)
#error You need a Windows NT 4.0 or later to run this stub because it uses these features:
#error   -Oif or -Oicf, [wire_marshal] or [user_marshal] attribute, float, double or hyper in -Oif or -Oicf, more than 32 methods in the interface.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will die there with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure OpenPort */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/*  8 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter bstrPort */

/* 16 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
/* 18 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 20 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Return value */

/* 22 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 24 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 26 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clear */


	/* Procedure _Exchange */


	/* Procedure ClosePort */

/* 28 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 30 */	NdrFcLong( 0x0 ),	/* 0 */
/* 34 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 36 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0x8 ),	/* 8 */
/* 42 */	0x4,		/* Oi2 Flags:  has return, */
			0x1,		/* 1 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 44 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 46 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 48 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ProtocolArray */


	/* Procedure ReadBodyPacket */

/* 50 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 52 */	NdrFcLong( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 58 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x8 ),	/* 8 */
/* 64 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */


	/* Parameter ppdisp */

/* 66 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
#ifndef _ALPHA_
/* 68 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 70 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Return value */


	/* Return value */

/* 72 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 74 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteBodyPacket */

/* 78 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 80 */	NdrFcLong( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 86 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x8 ),	/* 8 */
/* 92 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pdisp */

/* 94 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
#ifndef _ALPHA_
/* 96 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 98 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 100 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 102 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Send */

/* 106 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 108 */	NdrFcLong( 0x0 ),	/* 0 */
/* 112 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 114 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 120 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pdisp */

/* 122 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
#ifndef _ALPHA_
/* 124 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 126 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 128 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 130 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reciver */

/* 134 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 142 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 148 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter ppdisp */

/* 150 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
#ifndef _ALPHA_
/* 152 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 154 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Return value */

/* 156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 158 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cmnd_Stop_Pvt_Data */


	/* Procedure Clear */


	/* Procedure Clear */

/* 162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 170 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 176 */	0x4,		/* Oi2 Flags:  has return, */
			0x1,		/* 1 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 180 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PacketID */

/* 184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 190 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 192 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 198 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 200 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
#ifndef _ALPHA_
/* 202 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 204 */	NdrFcShort( 0x3d6 ),	/* Type Offset=982 */

	/* Return value */

/* 206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 208 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_PacketID */

/* 212 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 220 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
#else
			NdrFcShort( 0x1c ),	/* MIPS & PPC Stack size/offset = 28 */
#endif
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 226 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 228 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 230 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* MIPS & PPC Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 232 */	NdrFcShort( 0x3e4 ),	/* Type Offset=996 */

	/* Return value */

/* 234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 236 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
#else
			NdrFcShort( 0x18 ),	/* MIPS & PPC Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Count */


	/* Procedure get_product_description */


	/* Procedure get_Count */

/* 240 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 248 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 254 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 256 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
#ifndef _ALPHA_
/* 258 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 260 */	NdrFcShort( 0x3d6 ),	/* Type Offset=982 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 262 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 264 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Status */

/* 268 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 270 */	NdrFcLong( 0x0 ),	/* 0 */
/* 274 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 276 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 282 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 284 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
#ifndef _ALPHA_
/* 286 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 288 */	NdrFcShort( 0x3d6 ),	/* Type Offset=982 */

	/* Return value */

/* 290 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 292 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Add */

/* 296 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 298 */	NdrFcLong( 0x0 ),	/* 0 */
/* 302 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 304 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
#else
			NdrFcShort( 0x1c ),	/* MIPS & PPC Stack size/offset = 28 */
#endif
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x8 ),	/* 8 */
/* 310 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter Val */

/* 312 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 314 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* MIPS & PPC Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 316 */	NdrFcShort( 0x3e4 ),	/* Type Offset=996 */

	/* Return value */

/* 318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 320 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
#else
			NdrFcShort( 0x18 ),	/* MIPS & PPC Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Item */

/* 324 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 330 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 332 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
#else
			NdrFcShort( 0x20 ),	/* MIPS & PPC Stack size/offset = 32 */
#endif
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 338 */	0x7,		/* Oi2 Flags:  srv must size, clt must size, has return, */
			0x3,		/* 3 */

	/* Parameter varIndx */

/* 340 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 342 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* MIPS & PPC Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 344 */	NdrFcShort( 0x3e4 ),	/* Type Offset=996 */

	/* Parameter pVal */

/* 346 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 348 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
#else
			NdrFcShort( 0x18 ),	/* MIPS & PPC Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 350 */	NdrFcShort( 0x3d6 ),	/* Type Offset=982 */

	/* Return value */

/* 352 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 354 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
#else
			NdrFcShort( 0x1c ),	/* MIPS & PPC Stack size/offset = 28 */
#endif
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ACK */

/* 358 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 360 */	NdrFcLong( 0x0 ),	/* 0 */
/* 364 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 366 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x8 ),	/* 8 */
/* 372 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 374 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
#ifndef _ALPHA_
/* 376 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 378 */	NdrFcShort( 0x3d6 ),	/* Type Offset=982 */

	/* Return value */

/* 380 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 382 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NAK */

/* 386 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 392 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 394 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x8 ),	/* 8 */
/* 400 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 402 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
#ifndef _ALPHA_
/* 404 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 406 */	NdrFcShort( 0x3d6 ),	/* Type Offset=982 */

	/* Return value */

/* 408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 410 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetACKPacket */

/* 414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 420 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 422 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
#else
			NdrFcShort( 0x1c ),	/* MIPS & PPC Stack size/offset = 28 */
#endif
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 428 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter varPacketID */

/* 430 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 432 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* MIPS & PPC Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 434 */	NdrFcShort( 0x3e4 ),	/* Type Offset=996 */

	/* Return value */

/* 436 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 438 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
#else
			NdrFcShort( 0x18 ),	/* MIPS & PPC Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetNAKPacket */

/* 442 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 448 */	NdrFcShort( 0x11 ),	/* 17 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 450 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
#else
			NdrFcShort( 0x1c ),	/* MIPS & PPC Stack size/offset = 28 */
#endif
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0x8 ),	/* 8 */
/* 456 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter varPacketID */

/* 458 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 460 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* MIPS & PPC Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 462 */	NdrFcShort( 0x3e4 ),	/* Type Offset=996 */

	/* Return value */

/* 464 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 466 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
#else
			NdrFcShort( 0x18 ),	/* MIPS & PPC Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAccess */

/* 470 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 478 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 480 */	NdrFcShort( 0x6 ),	/* 6 */
/* 482 */	NdrFcShort( 0x8 ),	/* 8 */
/* 484 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter mode */

/* 486 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 488 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 490 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 494 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSoftwareVersion */


	/* Procedure SetStatus */

/* 498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 506 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 508 */	NdrFcShort( 0x8 ),	/* 8 */
/* 510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 512 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter val */


	/* Parameter bStat */

/* 514 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 516 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 520 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 522 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCRC */

/* 526 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 532 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 534 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 540 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 542 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
#ifndef _ALPHA_
/* 544 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 546 */	NdrFcShort( 0x3e4 ),	/* Type Offset=996 */

	/* Return value */

/* 548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 550 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure _Import */

/* 554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 562 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 564 */	NdrFcShort( 0x8 ),	/* 8 */
/* 566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 568 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x3,		/* 3 */

	/* Parameter xsize */

/* 570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 572 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arr */

/* 576 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
#ifndef _ALPHA_
/* 578 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 580 */	NdrFcShort( 0x3f2 ),	/* Type Offset=1010 */

	/* Return value */

/* 582 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 584 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure _Export */

/* 588 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 594 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 596 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x10 ),	/* 16 */
/* 602 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x3,		/* 3 */

	/* Parameter xsize */

/* 604 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 606 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arr */

/* 610 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
#ifndef _ALPHA_
/* 612 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 614 */	NdrFcShort( 0x400 ),	/* Type Offset=1024 */

	/* Return value */

/* 616 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 618 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure putref_Communication */

/* 622 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 624 */	NdrFcLong( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 630 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0x8 ),	/* 8 */
/* 636 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 638 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
#ifndef _ALPHA_
/* 640 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 642 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 644 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 646 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IDXXX_Type */


	/* Procedure get_ProductData */

/* 650 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 656 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 658 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 664 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 666 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
#ifndef _ALPHA_
/* 668 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 670 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Return value */


	/* Return value */

/* 672 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 674 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cmnd_Abort_Transfer */

/* 678 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 684 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 686 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 692 */	0x4,		/* Oi2 Flags:  has return, */
			0x1,		/* 1 */

	/* Return value */

/* 694 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 696 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cmnd_Turn_Off_Pwr */

/* 700 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 706 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 708 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 714 */	0x4,		/* Oi2 Flags:  has return, */
			0x1,		/* 1 */

	/* Return value */

/* 716 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 718 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cmnd_Start_Pvt_Data */

/* 722 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 724 */	NdrFcLong( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 730 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 734 */	NdrFcShort( 0x8 ),	/* 8 */
/* 736 */	0x4,		/* Oi2 Flags:  has return, */
			0x1,		/* 1 */

	/* Return value */

/* 738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 740 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cmnd_Get_Transfer_Alm */

/* 744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 752 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 758 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter ppdisp */

/* 760 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
#ifndef _ALPHA_
/* 762 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 764 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Return value */

/* 766 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 768 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cmnd_Get_Transfer_Posn */

/* 772 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 780 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 784 */	NdrFcShort( 0x8 ),	/* 8 */
/* 786 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter ppdisp */

/* 788 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
#ifndef _ALPHA_
/* 790 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 792 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Return value */

/* 794 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 796 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cmnd_Get_Transfer_Prx */

/* 800 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 802 */	NdrFcLong( 0x0 ),	/* 0 */
/* 806 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 808 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x8 ),	/* 8 */
/* 814 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter ppdisp */

/* 816 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
#ifndef _ALPHA_
/* 818 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 820 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Return value */

/* 822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 824 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cmnd_Get_Transfer_Rte */

/* 828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0x11 ),	/* 17 */
#ifndef _ALPHA_
/* 836 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 842 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter ppdisp */

/* 844 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
#ifndef _ALPHA_
/* 846 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 848 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Return value */

/* 850 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 852 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 854 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cmnd_Get_Transfer_Time */

/* 856 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 858 */	NdrFcLong( 0x0 ),	/* 0 */
/* 862 */	NdrFcShort( 0x12 ),	/* 18 */
#ifndef _ALPHA_
/* 864 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 870 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter ppdisp */

/* 872 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
#ifndef _ALPHA_
/* 874 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 876 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Return value */

/* 878 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 880 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cmnd_Get_Transfer_Trk */

/* 884 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 890 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 892 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x8 ),	/* 8 */
/* 898 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter ppdisp */

/* 900 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
#ifndef _ALPHA_
/* 902 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 904 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Return value */

/* 906 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 908 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cmnd_Get_Transfer_Wpt */

/* 912 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 918 */	NdrFcShort( 0x14 ),	/* 20 */
#ifndef _ALPHA_
/* 920 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 926 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter ppdisp */

/* 928 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
#ifndef _ALPHA_
/* 930 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 932 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Return value */

/* 934 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 936 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cmnd_Get_FlightBook_Transfer */

/* 940 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 946 */	NdrFcShort( 0x15 ),	/* 21 */
#ifndef _ALPHA_
/* 948 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 954 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter ppdisp */

/* 956 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
#ifndef _ALPHA_
/* 958 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 960 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Return value */

/* 962 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 964 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cmnd_Get_Transfer_Laps */

/* 968 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 974 */	NdrFcShort( 0x16 ),	/* 22 */
#ifndef _ALPHA_
/* 976 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 980 */	NdrFcShort( 0x8 ),	/* 8 */
/* 982 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter ppdisp */

/* 984 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
#ifndef _ALPHA_
/* 986 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 988 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Return value */

/* 990 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 992 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cmnd_Set_Transfer_Alm */

/* 996 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1002 */	NdrFcShort( 0x17 ),	/* 23 */
#ifndef _ALPHA_
/* 1004 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1010 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pdisp */

/* 1012 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
#ifndef _ALPHA_
/* 1014 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1016 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 1018 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1020 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cmnd_Set_Transfer_Posn */

/* 1024 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1030 */	NdrFcShort( 0x18 ),	/* 24 */
#ifndef _ALPHA_
/* 1032 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1036 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1038 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pdisp */

/* 1040 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
#ifndef _ALPHA_
/* 1042 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1044 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 1046 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1048 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cmnd_Set_Transfer_Prx */

/* 1052 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1058 */	NdrFcShort( 0x19 ),	/* 25 */
#ifndef _ALPHA_
/* 1060 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1064 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1066 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pdisp */

/* 1068 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
#ifndef _ALPHA_
/* 1070 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1072 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 1074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1076 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cmnd_Set_Transfer_Rte */

/* 1080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1086 */	NdrFcShort( 0x1a ),	/* 26 */
#ifndef _ALPHA_
/* 1088 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1092 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1094 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pdisp */

/* 1096 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
#ifndef _ALPHA_
/* 1098 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1100 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 1102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1104 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cmnd_Set_Transfer_Time */

/* 1108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1114 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 1116 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1122 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pdisp */

/* 1124 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
#ifndef _ALPHA_
/* 1126 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1128 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 1130 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1132 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cmnd_Set_Transfer_Trk */

/* 1136 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1142 */	NdrFcShort( 0x1c ),	/* 28 */
#ifndef _ALPHA_
/* 1144 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1148 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1150 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pdisp */

/* 1152 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
#ifndef _ALPHA_
/* 1154 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1156 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 1158 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1160 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cmnd_Set_Transfer_Wpt */

/* 1164 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1170 */	NdrFcShort( 0x1d ),	/* 29 */
#ifndef _ALPHA_
/* 1172 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1176 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1178 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pdisp */

/* 1180 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
#ifndef _ALPHA_
/* 1182 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1184 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 1186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1188 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cmnd_Set_FlightBook_Transfer */

/* 1192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1198 */	NdrFcShort( 0x1e ),	/* 30 */
#ifndef _ALPHA_
/* 1200 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1206 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pdisp */

/* 1208 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
#ifndef _ALPHA_
/* 1210 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1212 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 1214 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1216 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Cmnd_Set_Transfer_Laps */

/* 1220 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1226 */	NdrFcShort( 0x1f ),	/* 31 */
#ifndef _ALPHA_
/* 1228 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1234 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pdisp */

/* 1236 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
#ifndef _ALPHA_
/* 1238 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1240 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 1242 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1244 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateBodyPacket */

/* 1248 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1254 */	NdrFcShort( 0x20 ),	/* 32 */
#ifndef _ALPHA_
/* 1256 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1262 */	0x7,		/* Oi2 Flags:  srv must size, clt must size, has return, */
			0x3,		/* 3 */

	/* Parameter pid_name */

/* 1264 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
/* 1266 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1268 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter ppdisp */

/* 1270 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
#ifndef _ALPHA_
/* 1272 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1274 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Return value */

/* 1276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1278 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Native */

/* 1282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1288 */	NdrFcShort( 0x21 ),	/* 33 */
#ifndef _ALPHA_
/* 1290 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1294 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1296 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 1298 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 1300 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1306 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Native */

/* 1310 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1316 */	NdrFcShort( 0x22 ),	/* 34 */
#ifndef _ALPHA_
/* 1318 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1322 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1324 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 1326 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 1328 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1334 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Item */

/* 1338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1344 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 1346 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1352 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x3,		/* 3 */

	/* Parameter indx */

/* 1354 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 1356 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 1360 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
#ifndef _ALPHA_
/* 1362 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1364 */	NdrFcShort( 0x3d6 ),	/* Type Offset=982 */

	/* Return value */

/* 1366 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1368 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Count */


	/* Procedure get_software_version */


	/* Procedure get_Count */

/* 1372 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1378 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1380 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1384 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1386 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 1388 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 1390 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 1394 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1396 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ident */


	/* Procedure get_Waypoint_Transfer_Protocol */

/* 1400 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1406 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 1408 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1412 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1414 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1416 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 1418 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1420 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */


	/* Return value */

/* 1422 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1424 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Route_Transfer_Protocol */

/* 1428 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1434 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 1436 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1440 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1442 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 1444 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 1446 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1448 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 1450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1452 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Track_Log_Transfer_Protocol */

/* 1456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1462 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1464 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1470 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 1472 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 1474 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1476 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 1478 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1480 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Proximity_Waypoint_Transfer_Protocol */

/* 1484 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1490 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 1492 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1498 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 1500 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 1502 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1504 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 1506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1508 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Almanac_Transfer_Protocol */

/* 1512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1518 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 1520 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1524 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1526 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 1528 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 1530 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1532 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 1534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1536 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Date_and_Time_Initialization_Protocol */

/* 1540 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1546 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 1548 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1554 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 1556 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 1558 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1560 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 1562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1564 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FlightBook_Transfer_Protocol */

/* 1568 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1574 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 1576 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1582 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 1584 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 1586 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1588 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 1590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1592 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Position_Initialization_Protocol */

/* 1596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1602 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 1604 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1610 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 1612 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 1614 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1616 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 1618 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1620 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PVT_Data_Protocol */

/* 1624 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1630 */	NdrFcShort( 0x11 ),	/* 17 */
#ifndef _ALPHA_
/* 1632 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1636 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1638 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 1640 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 1642 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1644 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 1646 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1648 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Lap_Transfer_Protocol */

/* 1652 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1654 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1658 */	NdrFcShort( 0x12 ),	/* 18 */
#ifndef _ALPHA_
/* 1660 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1664 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1666 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 1668 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 1670 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1672 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 1674 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1676 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Link_Protocol */

/* 1680 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1686 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1688 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1692 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1694 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 1696 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 1698 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1700 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 1702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1704 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Device_Command_Protocol */

/* 1708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1714 */	NdrFcShort( 0x14 ),	/* 20 */
#ifndef _ALPHA_
/* 1716 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1722 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 1724 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 1726 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1728 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 1730 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1732 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Physical_Protocol */

/* 1736 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1738 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1742 */	NdrFcShort( 0x15 ),	/* 21 */
#ifndef _ALPHA_
/* 1744 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1748 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1750 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 1752 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 1754 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1756 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 1758 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1760 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Waypoint_Data_Type */

/* 1764 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1770 */	NdrFcShort( 0x16 ),	/* 22 */
#ifndef _ALPHA_
/* 1772 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1776 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1778 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 1780 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 1782 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1784 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 1786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1788 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Route_Header_Data_Type */

/* 1792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1798 */	NdrFcShort( 0x17 ),	/* 23 */
#ifndef _ALPHA_
/* 1800 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1804 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1806 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 1808 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 1810 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1812 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 1814 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1816 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Route_Waypoint_Data_Type */

/* 1820 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1826 */	NdrFcShort( 0x18 ),	/* 24 */
#ifndef _ALPHA_
/* 1828 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1832 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1834 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 1836 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 1838 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1840 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 1842 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1844 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Route_Link_Data_Type */

/* 1848 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1850 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1854 */	NdrFcShort( 0x19 ),	/* 25 */
#ifndef _ALPHA_
/* 1856 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1860 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1862 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 1864 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 1866 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1868 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 1870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1872 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Almanac_Data_Type */

/* 1876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1882 */	NdrFcShort( 0x1a ),	/* 26 */
#ifndef _ALPHA_
/* 1884 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1888 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1890 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 1892 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 1894 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1896 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 1898 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1900 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Track_Header_Data_Type */

/* 1904 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1906 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1910 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 1912 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1916 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1918 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 1920 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 1922 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1924 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 1926 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1928 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Track_Data_Type */

/* 1932 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1934 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1938 */	NdrFcShort( 0x1c ),	/* 28 */
#ifndef _ALPHA_
/* 1940 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1944 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1946 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 1948 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 1950 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1952 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 1954 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1956 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PVT_Data_Type */

/* 1960 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1962 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1966 */	NdrFcShort( 0x1d ),	/* 29 */
#ifndef _ALPHA_
/* 1968 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1972 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1974 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 1976 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 1978 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1980 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 1982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 1984 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FlightBook_Data_Type */

/* 1988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1994 */	NdrFcShort( 0x1e ),	/* 30 */
#ifndef _ALPHA_
/* 1996 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2002 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 2004 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 2006 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2008 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 2010 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2012 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Lap_Data_Type */

/* 2016 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2022 */	NdrFcShort( 0x1f ),	/* 31 */
#ifndef _ALPHA_
/* 2024 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2028 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2030 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 2032 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 2034 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2036 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 2038 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2040 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Position_Data_Type */

/* 2044 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2050 */	NdrFcShort( 0x20 ),	/* 32 */
#ifndef _ALPHA_
/* 2052 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2056 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2058 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 2060 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 2062 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2064 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 2066 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2068 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Date_Time_Data_Type */

/* 2072 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2078 */	NdrFcShort( 0x21 ),	/* 33 */
#ifndef _ALPHA_
/* 2080 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2084 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2086 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 2088 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 2090 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2092 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 2094 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2096 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Proximity_Waypoint_Data_Type */

/* 2100 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2106 */	NdrFcShort( 0x22 ),	/* 34 */
#ifndef _ALPHA_
/* 2108 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2114 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 2116 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 2118 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2120 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 2122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2124 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetProductDescription */


	/* Procedure Add */

/* 2128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2134 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 2136 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2142 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter desc */


	/* Parameter Val */

/* 2144 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
/* 2146 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2148 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Return value */


	/* Return value */

/* 2150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2152 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_product_ID */

/* 2156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2162 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 2164 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2168 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2170 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 2172 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 2174 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2180 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetProductID */

/* 2184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2190 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 2192 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2198 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter val */

/* 2200 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 2202 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2208 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Item */

/* 2212 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2218 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 2220 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2226 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x3,		/* 3 */

	/* Parameter index */

/* 2228 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 2230 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppdisp */

/* 2234 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
#ifndef _ALPHA_
/* 2236 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2238 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Return value */

/* 2240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2242 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Add */

/* 2246 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2252 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 2254 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2260 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter pnewBodyPacket */

/* 2262 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
#ifndef _ALPHA_
/* 2264 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2266 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 2268 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2270 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_month */


	/* Procedure put_lat */


	/* Procedure Remove */

/* 2274 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2280 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 2282 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2284 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2286 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2288 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */


	/* Parameter newVal */


	/* Parameter Index */

/* 2290 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 2292 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2298 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get__NewEnum */

/* 2302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2308 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2310 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2316 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 2318 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
#ifndef _ALPHA_
/* 2320 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2322 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 2324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2326 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Add */

/* 2330 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2336 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2338 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
#else
			NdrFcShort( 0x1c ),	/* MIPS & PPC Stack size/offset = 28 */
#endif
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2342 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2344 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter Val */

/* 2346 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2348 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* MIPS & PPC Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2350 */	NdrFcShort( 0x3e4 ),	/* Type Offset=996 */

	/* Return value */

/* 2352 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2354 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
#else
			NdrFcShort( 0x18 ),	/* MIPS & PPC Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_gfloat */

/* 2358 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2360 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2364 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 2366 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2370 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2372 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 2374 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 2376 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2378 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 2380 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2382 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_gfloat */

/* 2386 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2392 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2394 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2398 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2400 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 2402 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 2404 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2406 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 2408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2410 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_gdouble */

/* 2414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2420 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 2422 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2426 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2428 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 2430 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 2432 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2434 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2436 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2438 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_gdouble */

/* 2442 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2448 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2450 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
#else
			NdrFcShort( 0x14 ),	/* MIPS & PPC Stack size/offset = 20 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2452 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2454 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2456 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 2458 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2460 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* MIPS & PPC Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2462 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2464 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2466 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
#else
			NdrFcShort( 0x10 ),	/* MIPS & PPC Stack size/offset = 16 */
#endif
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_glong */

/* 2470 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2476 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 2478 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2482 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2484 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 2486 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 2488 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2494 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_glong */

/* 2498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2504 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 2506 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2508 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2512 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 2514 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 2516 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2520 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2522 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_gint */

/* 2526 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2532 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 2534 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2538 */	NdrFcShort( 0xe ),	/* 14 */
/* 2540 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 2542 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 2544 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2546 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2550 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_gint */

/* 2554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2560 */	NdrFcShort( 0x11 ),	/* 17 */
#ifndef _ALPHA_
/* 2562 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2564 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2568 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 2570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 2572 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2574 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2576 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2578 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_gword */

/* 2582 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2588 */	NdrFcShort( 0x12 ),	/* 18 */
#ifndef _ALPHA_
/* 2590 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2594 */	NdrFcShort( 0xe ),	/* 14 */
/* 2596 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 2598 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 2600 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2602 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2604 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2606 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_gword */

/* 2610 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2616 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 2618 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2620 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2624 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 2626 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 2628 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2630 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2632 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2634 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_glongword */

/* 2638 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2640 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2644 */	NdrFcShort( 0x14 ),	/* 20 */
#ifndef _ALPHA_
/* 2646 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2650 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2652 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 2654 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 2656 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2662 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_glongword */

/* 2666 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2672 */	NdrFcShort( 0x15 ),	/* 21 */
#ifndef _ALPHA_
/* 2674 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2678 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2680 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 2682 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 2684 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2688 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2690 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Item */

/* 2694 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2700 */	NdrFcShort( 0x16 ),	/* 22 */
#ifndef _ALPHA_
/* 2702 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2708 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x3,		/* 3 */

	/* Parameter Indx */

/* 2710 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 2712 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 2716 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
#ifndef _ALPHA_
/* 2718 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2720 */	NdrFcShort( 0x3d6 ),	/* Type Offset=982 */

	/* Return value */

/* 2722 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2724 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_smbl */


	/* Procedure get_gsemicircles */

/* 2728 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2730 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2734 */	NdrFcShort( 0x17 ),	/* 23 */
#ifndef _ALPHA_
/* 2736 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2740 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2742 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 2744 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 2746 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2752 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_smbl */


	/* Procedure put_gsemicircles */

/* 2756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2762 */	NdrFcShort( 0x18 ),	/* 24 */
#ifndef _ALPHA_
/* 2764 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2766 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2770 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 2772 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 2774 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2778 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2780 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_gradians */

/* 2784 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2790 */	NdrFcShort( 0x19 ),	/* 25 */
#ifndef _ALPHA_
/* 2792 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2796 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2798 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 2800 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 2802 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2804 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2808 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_gradians */

/* 2812 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2818 */	NdrFcShort( 0x1a ),	/* 26 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2820 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
#else
			NdrFcShort( 0x14 ),	/* MIPS & PPC Stack size/offset = 20 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2822 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2826 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 2828 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2830 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* MIPS & PPC Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2832 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2834 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2836 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
#else
			NdrFcShort( 0x10 ),	/* MIPS & PPC Stack size/offset = 16 */
#endif
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_gdegrees_from_semicircles */

/* 2840 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2846 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 2848 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2852 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2854 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 2856 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 2858 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2860 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2862 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2864 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_gdegrees_from_radians */

/* 2868 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2870 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2874 */	NdrFcShort( 0x1c ),	/* 28 */
#ifndef _ALPHA_
/* 2876 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2880 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2882 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 2884 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 2886 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2888 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2890 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2892 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_gdegrees */

/* 2896 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2902 */	NdrFcShort( 0x1d ),	/* 29 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2904 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
#else
			NdrFcShort( 0x14 ),	/* MIPS & PPC Stack size/offset = 20 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2906 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2908 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2910 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 2912 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2914 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* MIPS & PPC Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2916 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 2918 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2920 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
#else
			NdrFcShort( 0x10 ),	/* MIPS & PPC Stack size/offset = 16 */
#endif
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Type */

/* 2924 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2930 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 2932 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2936 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2938 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 2940 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 2942 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2944 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Return value */

/* 2946 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2948 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ident */

/* 2952 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2958 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 2960 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2964 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2966 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 2968 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
/* 2970 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2972 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Return value */

/* 2974 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 2976 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_day */


	/* Procedure get_lon */


	/* Procedure get_lon */

/* 2980 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2982 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2986 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2988 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2992 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2994 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 2996 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 2998 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 3002 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 3004 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_day */


	/* Procedure put_lon */


	/* Procedure put_lon */

/* 3008 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3010 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3014 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 3016 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3018 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3020 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3022 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */


	/* Parameter newVal */


	/* Parameter newVal */

/* 3024 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 3026 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 3030 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 3032 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_year */


	/* Procedure get_time */


	/* Procedure get_lat */

/* 3036 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3038 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3042 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 3044 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3048 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3050 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 3052 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 3054 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 3058 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 3060 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_year */


	/* Procedure put_time */


	/* Procedure put_lat */

/* 3064 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3066 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3070 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 3072 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3074 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3076 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3078 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */


	/* Parameter newVal */


	/* Parameter newVal */

/* 3080 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 3082 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 3086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 3088 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_hour */


	/* Procedure get_color */

/* 3092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3098 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 3100 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3104 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3106 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 3108 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 3110 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 3116 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_hour */


	/* Procedure put_color */

/* 3120 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3126 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 3128 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3134 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 3136 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 3138 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3142 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 3144 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_minute */


	/* Procedure get_wpt_class */

/* 3148 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3154 */	NdrFcShort( 0x11 ),	/* 17 */
#ifndef _ALPHA_
/* 3156 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3160 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3162 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 3164 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 3166 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 3172 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_minute */


	/* Procedure put_wpt_class */

/* 3176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3182 */	NdrFcShort( 0x12 ),	/* 18 */
#ifndef _ALPHA_
/* 3184 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3190 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */


	/* Parameter newVal */

/* 3192 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 3194 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 3200 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_second */


	/* Procedure get_new_trk */


	/* Procedure get_dspl */

/* 3204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3210 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 3212 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3216 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3218 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */


	/* Parameter pVal */


	/* Parameter pVal */

/* 3220 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 3222 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 3226 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 3228 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_second */


	/* Procedure put_new_trk */


	/* Procedure put_dspl */

/* 3232 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3238 */	NdrFcShort( 0x14 ),	/* 20 */
#ifndef _ALPHA_
/* 3240 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3242 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3244 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3246 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */


	/* Parameter newVal */


	/* Parameter newVal */

/* 3248 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 3250 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 3254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 3256 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_attr */

/* 3260 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3266 */	NdrFcShort( 0x15 ),	/* 21 */
#ifndef _ALPHA_
/* 3268 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3272 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3274 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 3276 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 3278 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3282 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 3284 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_attr */

/* 3288 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3294 */	NdrFcShort( 0x16 ),	/* 22 */
#ifndef _ALPHA_
/* 3296 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3298 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3300 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3302 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 3304 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 3306 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 3312 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_alt */

/* 3316 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3322 */	NdrFcShort( 0x19 ),	/* 25 */
#ifndef _ALPHA_
/* 3324 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3328 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3330 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 3332 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 3334 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3336 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 3338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 3340 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_alt */

/* 3344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3350 */	NdrFcShort( 0x1a ),	/* 26 */
#ifndef _ALPHA_
/* 3352 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3358 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 3360 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 3362 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3364 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 3366 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 3368 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_dpth */

/* 3372 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3378 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 3380 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3384 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3386 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 3388 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 3390 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3392 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 3394 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 3396 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_dpth */

/* 3400 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3406 */	NdrFcShort( 0x1c ),	/* 28 */
#ifndef _ALPHA_
/* 3408 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3410 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3412 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3414 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 3416 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 3418 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3420 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 3422 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 3424 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_dist */

/* 3428 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3434 */	NdrFcShort( 0x1d ),	/* 29 */
#ifndef _ALPHA_
/* 3436 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3440 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3442 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 3444 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 3446 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3448 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 3450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 3452 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_dist */

/* 3456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3462 */	NdrFcShort( 0x1e ),	/* 30 */
#ifndef _ALPHA_
/* 3464 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3470 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 3472 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 3474 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3476 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 3478 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 3480 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_month */


	/* Procedure get_lat */

/* 3484 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3490 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 3492 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3496 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3498 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 3500 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 3502 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 3508 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_alt */

/* 3512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3518 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 3520 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3524 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3526 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 3528 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 3530 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3532 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 3534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 3536 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_alt */

/* 3540 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3546 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 3548 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3550 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3554 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 3556 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 3558 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3560 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 3562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 3564 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_dpth */

/* 3568 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3574 */	NdrFcShort( 0x11 ),	/* 17 */
#ifndef _ALPHA_
/* 3576 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3580 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3582 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 3584 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 3586 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3588 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 3590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 3592 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_dpth */

/* 3596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3602 */	NdrFcShort( 0x12 ),	/* 18 */
#ifndef _ALPHA_
/* 3604 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3610 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 3612 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 3614 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3616 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 3618 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 3620 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x0,	/* FC_UP */
/*  4 */	NdrFcShort( 0xc ),	/* Offset= 12 (16) */
/*  6 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/*  8 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 14 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 16 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 18 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (6) */
/* 22 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 24 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 26 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */
/* 30 */	NdrFcShort( 0x4 ),	/* 4 */
/* 32 */	NdrFcShort( 0x0 ),	/* 0 */
/* 34 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (2) */
/* 36 */	
			0x11, 0x10,	/* FC_RP */
/* 38 */	NdrFcShort( 0x2 ),	/* Offset= 2 (40) */
/* 40 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 42 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 46 */	NdrFcShort( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 52 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 54 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 56 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 58 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 60 */	NdrFcShort( 0x39a ),	/* Offset= 922 (982) */
/* 62 */	
			0x13, 0x0,	/* FC_OP */
/* 64 */	NdrFcShort( 0x382 ),	/* Offset= 898 (962) */
/* 66 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 68 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 70 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 72 */	NdrFcShort( 0x2 ),	/* Offset= 2 (74) */
/* 74 */	NdrFcShort( 0x10 ),	/* 16 */
/* 76 */	NdrFcShort( 0x2b ),	/* 43 */
/* 78 */	NdrFcLong( 0x3 ),	/* 3 */
/* 82 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 84 */	NdrFcLong( 0x11 ),	/* 17 */
/* 88 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 90 */	NdrFcLong( 0x2 ),	/* 2 */
/* 94 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 96 */	NdrFcLong( 0x4 ),	/* 4 */
/* 100 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 102 */	NdrFcLong( 0x5 ),	/* 5 */
/* 106 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 108 */	NdrFcLong( 0xb ),	/* 11 */
/* 112 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 114 */	NdrFcLong( 0xa ),	/* 10 */
/* 118 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 120 */	NdrFcLong( 0x6 ),	/* 6 */
/* 124 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (338) */
/* 126 */	NdrFcLong( 0x7 ),	/* 7 */
/* 130 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 132 */	NdrFcLong( 0x8 ),	/* 8 */
/* 136 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (344) */
/* 138 */	NdrFcLong( 0xd ),	/* 13 */
/* 142 */	NdrFcShort( 0xce ),	/* Offset= 206 (348) */
/* 144 */	NdrFcLong( 0x9 ),	/* 9 */
/* 148 */	NdrFcShort( 0xffffff94 ),	/* Offset= -108 (40) */
/* 150 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 154 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (366) */
/* 156 */	NdrFcLong( 0x24 ),	/* 36 */
/* 160 */	NdrFcShort( 0x2de ),	/* Offset= 734 (894) */
/* 162 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 166 */	NdrFcShort( 0x2d8 ),	/* Offset= 728 (894) */
/* 168 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 172 */	NdrFcShort( 0x2d6 ),	/* Offset= 726 (898) */
/* 174 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 178 */	NdrFcShort( 0x2d4 ),	/* Offset= 724 (902) */
/* 180 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 184 */	NdrFcShort( 0x2d2 ),	/* Offset= 722 (906) */
/* 186 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 190 */	NdrFcShort( 0x2d0 ),	/* Offset= 720 (910) */
/* 192 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 196 */	NdrFcShort( 0x2ce ),	/* Offset= 718 (914) */
/* 198 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 202 */	NdrFcShort( 0x2bc ),	/* Offset= 700 (902) */
/* 204 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 208 */	NdrFcShort( 0x2ba ),	/* Offset= 698 (906) */
/* 210 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 214 */	NdrFcShort( 0x2c0 ),	/* Offset= 704 (918) */
/* 216 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 220 */	NdrFcShort( 0x2b6 ),	/* Offset= 694 (914) */
/* 222 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 226 */	NdrFcShort( 0x2b8 ),	/* Offset= 696 (922) */
/* 228 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 232 */	NdrFcShort( 0x2b6 ),	/* Offset= 694 (926) */
/* 234 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 238 */	NdrFcShort( 0x2b4 ),	/* Offset= 692 (930) */
/* 240 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 244 */	NdrFcShort( 0x2b2 ),	/* Offset= 690 (934) */
/* 246 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 250 */	NdrFcShort( 0x2b0 ),	/* Offset= 688 (938) */
/* 252 */	NdrFcLong( 0x10 ),	/* 16 */
/* 256 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 258 */	NdrFcLong( 0x12 ),	/* 18 */
/* 262 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 264 */	NdrFcLong( 0x13 ),	/* 19 */
/* 268 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 270 */	NdrFcLong( 0x16 ),	/* 22 */
/* 274 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 276 */	NdrFcLong( 0x17 ),	/* 23 */
/* 280 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 282 */	NdrFcLong( 0xe ),	/* 14 */
/* 286 */	NdrFcShort( 0x294 ),	/* Offset= 660 (946) */
/* 288 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 292 */	NdrFcShort( 0x29a ),	/* Offset= 666 (958) */
/* 294 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 298 */	NdrFcShort( 0x258 ),	/* Offset= 600 (898) */
/* 300 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 304 */	NdrFcShort( 0x256 ),	/* Offset= 598 (902) */
/* 306 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 310 */	NdrFcShort( 0x254 ),	/* Offset= 596 (906) */
/* 312 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 316 */	NdrFcShort( 0x24e ),	/* Offset= 590 (906) */
/* 318 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 322 */	NdrFcShort( 0x248 ),	/* Offset= 584 (906) */
/* 324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 328 */	NdrFcShort( 0x0 ),	/* Offset= 0 (328) */
/* 330 */	NdrFcLong( 0x1 ),	/* 1 */
/* 334 */	NdrFcShort( 0x0 ),	/* Offset= 0 (334) */
/* 336 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (335) */
/* 338 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 340 */	NdrFcShort( 0x8 ),	/* 8 */
/* 342 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 344 */	
			0x13, 0x0,	/* FC_OP */
/* 346 */	NdrFcShort( 0xfffffeb6 ),	/* Offset= -330 (16) */
/* 348 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 358 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 360 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 362 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 364 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 366 */	
			0x13, 0x0,	/* FC_OP */
/* 368 */	NdrFcShort( 0x1fc ),	/* Offset= 508 (876) */
/* 370 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 372 */	NdrFcShort( 0x18 ),	/* 24 */
/* 374 */	NdrFcShort( 0xa ),	/* 10 */
/* 376 */	NdrFcLong( 0x8 ),	/* 8 */
/* 380 */	NdrFcShort( 0x58 ),	/* Offset= 88 (468) */
/* 382 */	NdrFcLong( 0xd ),	/* 13 */
/* 386 */	NdrFcShort( 0x78 ),	/* Offset= 120 (506) */
/* 388 */	NdrFcLong( 0x9 ),	/* 9 */
/* 392 */	NdrFcShort( 0x94 ),	/* Offset= 148 (540) */
/* 394 */	NdrFcLong( 0xc ),	/* 12 */
/* 398 */	NdrFcShort( 0xbc ),	/* Offset= 188 (586) */
/* 400 */	NdrFcLong( 0x24 ),	/* 36 */
/* 404 */	NdrFcShort( 0x114 ),	/* Offset= 276 (680) */
/* 406 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 410 */	NdrFcShort( 0x130 ),	/* Offset= 304 (714) */
/* 412 */	NdrFcLong( 0x10 ),	/* 16 */
/* 416 */	NdrFcShort( 0x148 ),	/* Offset= 328 (744) */
/* 418 */	NdrFcLong( 0x2 ),	/* 2 */
/* 422 */	NdrFcShort( 0x160 ),	/* Offset= 352 (774) */
/* 424 */	NdrFcLong( 0x3 ),	/* 3 */
/* 428 */	NdrFcShort( 0x178 ),	/* Offset= 376 (804) */
/* 430 */	NdrFcLong( 0x14 ),	/* 20 */
/* 434 */	NdrFcShort( 0x190 ),	/* Offset= 400 (834) */
/* 436 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (435) */
/* 438 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 440 */	NdrFcShort( 0x4 ),	/* 4 */
/* 442 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 446 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 448 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 450 */	NdrFcShort( 0x4 ),	/* 4 */
/* 452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0x1 ),	/* 1 */
/* 456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 460 */	0x13, 0x0,	/* FC_OP */
/* 462 */	NdrFcShort( 0xfffffe42 ),	/* Offset= -446 (16) */
/* 464 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 466 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 468 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 470 */	NdrFcShort( 0x8 ),	/* 8 */
/* 472 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 474 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 476 */	NdrFcShort( 0x4 ),	/* 4 */
/* 478 */	NdrFcShort( 0x4 ),	/* 4 */
/* 480 */	0x11, 0x0,	/* FC_RP */
/* 482 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (438) */
/* 484 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 486 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 488 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 492 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 496 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 500 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 502 */	NdrFcShort( 0xffffff66 ),	/* Offset= -154 (348) */
/* 504 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 506 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 508 */	NdrFcShort( 0x8 ),	/* 8 */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x6 ),	/* Offset= 6 (518) */
/* 514 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 516 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 518 */	
			0x11, 0x0,	/* FC_RP */
/* 520 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (488) */
/* 522 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 526 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 530 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 534 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 536 */	NdrFcShort( 0xfffffe10 ),	/* Offset= -496 (40) */
/* 538 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 540 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 542 */	NdrFcShort( 0x8 ),	/* 8 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x6 ),	/* Offset= 6 (552) */
/* 548 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 550 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 552 */	
			0x11, 0x0,	/* FC_RP */
/* 554 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (522) */
/* 556 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 558 */	NdrFcShort( 0x4 ),	/* 4 */
/* 560 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 564 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 566 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 568 */	NdrFcShort( 0x4 ),	/* 4 */
/* 570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 572 */	NdrFcShort( 0x1 ),	/* 1 */
/* 574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	0x13, 0x0,	/* FC_OP */
/* 580 */	NdrFcShort( 0x17e ),	/* Offset= 382 (962) */
/* 582 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 584 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 586 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x6 ),	/* Offset= 6 (598) */
/* 594 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 596 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 598 */	
			0x11, 0x0,	/* FC_RP */
/* 600 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (556) */
/* 602 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 604 */	NdrFcLong( 0x2f ),	/* 47 */
/* 608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 612 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 614 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 616 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 618 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 620 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 622 */	NdrFcShort( 0x1 ),	/* 1 */
/* 624 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 626 */	NdrFcShort( 0x4 ),	/* 4 */
/* 628 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 630 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 632 */	NdrFcShort( 0x10 ),	/* 16 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0xa ),	/* Offset= 10 (646) */
/* 638 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 640 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 642 */	NdrFcShort( 0xffffffd8 ),	/* Offset= -40 (602) */
/* 644 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 646 */	
			0x13, 0x0,	/* FC_OP */
/* 648 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (620) */
/* 650 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 652 */	NdrFcShort( 0x4 ),	/* 4 */
/* 654 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 658 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 660 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 662 */	NdrFcShort( 0x4 ),	/* 4 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 666 */	NdrFcShort( 0x1 ),	/* 1 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 672 */	0x13, 0x0,	/* FC_OP */
/* 674 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (630) */
/* 676 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 678 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 680 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 682 */	NdrFcShort( 0x8 ),	/* 8 */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x6 ),	/* Offset= 6 (692) */
/* 688 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 690 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 692 */	
			0x11, 0x0,	/* FC_RP */
/* 694 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (650) */
/* 696 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 698 */	NdrFcShort( 0x8 ),	/* 8 */
/* 700 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 702 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 704 */	NdrFcShort( 0x10 ),	/* 16 */
/* 706 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 708 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 710 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (696) */
			0x5b,		/* FC_END */
/* 714 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 716 */	NdrFcShort( 0x18 ),	/* 24 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0xa ),	/* Offset= 10 (730) */
/* 722 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 724 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 726 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (702) */
/* 728 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 730 */	
			0x11, 0x0,	/* FC_RP */
/* 732 */	NdrFcShort( 0xffffff0c ),	/* Offset= -244 (488) */
/* 734 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 736 */	NdrFcShort( 0x1 ),	/* 1 */
/* 738 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 742 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 744 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 746 */	NdrFcShort( 0x8 ),	/* 8 */
/* 748 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 750 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 752 */	NdrFcShort( 0x4 ),	/* 4 */
/* 754 */	NdrFcShort( 0x4 ),	/* 4 */
/* 756 */	0x13, 0x0,	/* FC_OP */
/* 758 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (734) */
/* 760 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 762 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 764 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 766 */	NdrFcShort( 0x2 ),	/* 2 */
/* 768 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 774 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 776 */	NdrFcShort( 0x8 ),	/* 8 */
/* 778 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 780 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 782 */	NdrFcShort( 0x4 ),	/* 4 */
/* 784 */	NdrFcShort( 0x4 ),	/* 4 */
/* 786 */	0x13, 0x0,	/* FC_OP */
/* 788 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (764) */
/* 790 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 792 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 794 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 796 */	NdrFcShort( 0x4 ),	/* 4 */
/* 798 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 804 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 806 */	NdrFcShort( 0x8 ),	/* 8 */
/* 808 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 810 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 812 */	NdrFcShort( 0x4 ),	/* 4 */
/* 814 */	NdrFcShort( 0x4 ),	/* 4 */
/* 816 */	0x13, 0x0,	/* FC_OP */
/* 818 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (794) */
/* 820 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 822 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 824 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 826 */	NdrFcShort( 0x8 ),	/* 8 */
/* 828 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 834 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 836 */	NdrFcShort( 0x8 ),	/* 8 */
/* 838 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 840 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 842 */	NdrFcShort( 0x4 ),	/* 4 */
/* 844 */	NdrFcShort( 0x4 ),	/* 4 */
/* 846 */	0x13, 0x0,	/* FC_OP */
/* 848 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (824) */
/* 850 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 852 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 854 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 856 */	NdrFcShort( 0x8 ),	/* 8 */
/* 858 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 860 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 862 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 864 */	NdrFcShort( 0x8 ),	/* 8 */
/* 866 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 868 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 870 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 872 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (854) */
/* 874 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 876 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 878 */	NdrFcShort( 0x28 ),	/* 40 */
/* 880 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (862) */
/* 882 */	NdrFcShort( 0x0 ),	/* Offset= 0 (882) */
/* 884 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 886 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 888 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 890 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffdf7 ),	/* Offset= -521 (370) */
			0x5b,		/* FC_END */
/* 894 */	
			0x13, 0x0,	/* FC_OP */
/* 896 */	NdrFcShort( 0xfffffef6 ),	/* Offset= -266 (630) */
/* 898 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 900 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 902 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 904 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 906 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 908 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 910 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 912 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 914 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 916 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 918 */	
			0x13, 0x0,	/* FC_OP */
/* 920 */	NdrFcShort( 0xfffffdba ),	/* Offset= -582 (338) */
/* 922 */	
			0x13, 0x10,	/* FC_OP */
/* 924 */	NdrFcShort( 0xfffffdbc ),	/* Offset= -580 (344) */
/* 926 */	
			0x13, 0x10,	/* FC_OP */
/* 928 */	NdrFcShort( 0xfffffdbc ),	/* Offset= -580 (348) */
/* 930 */	
			0x13, 0x10,	/* FC_OP */
/* 932 */	NdrFcShort( 0xfffffc84 ),	/* Offset= -892 (40) */
/* 934 */	
			0x13, 0x10,	/* FC_OP */
/* 936 */	NdrFcShort( 0xfffffdc6 ),	/* Offset= -570 (366) */
/* 938 */	
			0x13, 0x10,	/* FC_OP */
/* 940 */	NdrFcShort( 0x2 ),	/* Offset= 2 (942) */
/* 942 */	
			0x13, 0x0,	/* FC_OP */
/* 944 */	NdrFcShort( 0xfffffc50 ),	/* Offset= -944 (0) */
/* 946 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 948 */	NdrFcShort( 0x10 ),	/* 16 */
/* 950 */	0x6,		/* FC_SHORT */
			0x2,		/* FC_CHAR */
/* 952 */	0x2,		/* FC_CHAR */
			0x38,		/* FC_ALIGNM4 */
/* 954 */	0x8,		/* FC_LONG */
			0x39,		/* FC_ALIGNM8 */
/* 956 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 958 */	
			0x13, 0x0,	/* FC_OP */
/* 960 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (946) */
/* 962 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 964 */	NdrFcShort( 0x20 ),	/* 32 */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* Offset= 0 (968) */
/* 970 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 972 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 974 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 976 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 978 */	NdrFcShort( 0xfffffc70 ),	/* Offset= -912 (66) */
/* 980 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 982 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 984 */	NdrFcShort( 0x1 ),	/* 1 */
/* 986 */	NdrFcShort( 0x10 ),	/* 16 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0xfffffc60 ),	/* Offset= -928 (62) */
/* 992 */	
			0x12, 0x0,	/* FC_UP */
/* 994 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (962) */
/* 996 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 998 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1000 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (992) */
/* 1006 */	
			0x11, 0x0,	/* FC_RP */
/* 1008 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (996) */
/* 1010 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1012 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1014 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1016 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1018 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1020 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1022 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1024 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 1026 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1028) */
/* 1028 */	
			0x13, 0x0,	/* FC_OP */
/* 1030 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1032) */
/* 1032 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1034 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1036 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 1038 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1040 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1042 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1044 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1046) */
/* 1046 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1054 */	NdrFcShort( 0xfffffd3a ),	/* Offset= -710 (344) */
/* 1056 */	
			0x11, 0x10,	/* FC_RP */
/* 1058 */	NdrFcShort( 0xfffffd3a ),	/* Offset= -710 (348) */
/* 1060 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1062 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1064 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1066 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1068 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1070 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

const CInterfaceProxyVtbl * _garmin_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IBodyPacketsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID105_Wpt_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID108_Wpt_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID650_FlightBook_Record_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID109_Wpt_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID152_Wpt_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID106_Wpt_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IDXXX_Almanac_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID154_Wpt_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IHelperProtocolArrayProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID300_Trk_Point_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IHelperBodyPacketProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID201_Rte_Hdr_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IDXXX_Prx_Wpt_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID312_Trk_Hdr_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID550_Almanac_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID103_Wpt_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IProtocolArrayProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IApplicationProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID700_Position_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID210_Rte_Link_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ICommunicationProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID310_Trk_Hdr_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPrimitiveProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID104_Wpt_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID800_Pvt_Data_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID102_Wpt_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID551_Almanac_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID202_Rte_Hdr_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IHelperProductDataProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID101_Wpt_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID600_Date_Time_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IProductDataProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID301_Trk_Point_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID110_Wpt_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID311_Trk_Hdr_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID150_Wpt_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IBodyPacketProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID450_Prx_Wpt_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID501_Almanac_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID400_Prx_Wpt_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IGarminDataTypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID100_Wpt_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID302_Trk_Point_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID403_Prx_Wpt_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID155_Wpt_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IDXXX_Trk_Point_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID500_Almanac_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID151_Wpt_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID906_Lap_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IDXXX_Wpt_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID200_Rte_Hdr_TypeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ID107_Wpt_TypeProxyVtbl,
    0
};

const CInterfaceStubVtbl * _garmin_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IBodyPacketsStubVtbl,
    ( CInterfaceStubVtbl *) &_ID105_Wpt_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID108_Wpt_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID650_FlightBook_Record_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID109_Wpt_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID152_Wpt_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID106_Wpt_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_IDXXX_Almanac_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID154_Wpt_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_IHelperProtocolArrayStubVtbl,
    ( CInterfaceStubVtbl *) &_ID300_Trk_Point_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_IHelperBodyPacketStubVtbl,
    ( CInterfaceStubVtbl *) &_ID201_Rte_Hdr_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_IDXXX_Prx_Wpt_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID312_Trk_Hdr_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID550_Almanac_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID103_Wpt_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_IProtocolArrayStubVtbl,
    ( CInterfaceStubVtbl *) &_IApplicationStubVtbl,
    ( CInterfaceStubVtbl *) &_ID700_Position_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID210_Rte_Link_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ICommunicationStubVtbl,
    ( CInterfaceStubVtbl *) &_ID310_Trk_Hdr_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_IPrimitiveStubVtbl,
    ( CInterfaceStubVtbl *) &_ID104_Wpt_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID800_Pvt_Data_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID102_Wpt_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID551_Almanac_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID202_Rte_Hdr_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_IHelperProductDataStubVtbl,
    ( CInterfaceStubVtbl *) &_ID101_Wpt_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID600_Date_Time_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_IProductDataStubVtbl,
    ( CInterfaceStubVtbl *) &_ID301_Trk_Point_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID110_Wpt_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID311_Trk_Hdr_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID150_Wpt_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_IBodyPacketStubVtbl,
    ( CInterfaceStubVtbl *) &_ID450_Prx_Wpt_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID501_Almanac_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID400_Prx_Wpt_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_IGarminDataTypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID100_Wpt_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID302_Trk_Point_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID403_Prx_Wpt_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID155_Wpt_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_IDXXX_Trk_Point_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID500_Almanac_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID151_Wpt_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID906_Lap_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_IDXXX_Wpt_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID200_Rte_Hdr_TypeStubVtbl,
    ( CInterfaceStubVtbl *) &_ID107_Wpt_TypeStubVtbl,
    0
};

PCInterfaceName const _garmin_InterfaceNamesList[] = 
{
    "IBodyPackets",
    "ID105_Wpt_Type",
    "ID108_Wpt_Type",
    "ID650_FlightBook_Record_Type",
    "ID109_Wpt_Type",
    "ID152_Wpt_Type",
    "ID106_Wpt_Type",
    "IDXXX_Almanac_Type",
    "ID154_Wpt_Type",
    "IHelperProtocolArray",
    "ID300_Trk_Point_Type",
    "IHelperBodyPacket",
    "ID201_Rte_Hdr_Type",
    "IDXXX_Prx_Wpt_Type",
    "ID312_Trk_Hdr_Type",
    "ID550_Almanac_Type",
    "ID103_Wpt_Type",
    "IProtocolArray",
    "IApplication",
    "ID700_Position_Type",
    "ID210_Rte_Link_Type",
    "ICommunication",
    "ID310_Trk_Hdr_Type",
    "IPrimitive",
    "ID104_Wpt_Type",
    "ID800_Pvt_Data_Type",
    "ID102_Wpt_Type",
    "ID551_Almanac_Type",
    "ID202_Rte_Hdr_Type",
    "IHelperProductData",
    "ID101_Wpt_Type",
    "ID600_Date_Time_Type",
    "IProductData",
    "ID301_Trk_Point_Type",
    "ID110_Wpt_Type",
    "ID311_Trk_Hdr_Type",
    "ID150_Wpt_Type",
    "IBodyPacket",
    "ID450_Prx_Wpt_Type",
    "ID501_Almanac_Type",
    "ID400_Prx_Wpt_Type",
    "IGarminDataType",
    "ID100_Wpt_Type",
    "ID302_Trk_Point_Type",
    "ID403_Prx_Wpt_Type",
    "ID155_Wpt_Type",
    "IDXXX_Trk_Point_Type",
    "ID500_Almanac_Type",
    "ID151_Wpt_Type",
    "ID906_Lap_Type",
    "IDXXX_Wpt_Type",
    "ID200_Rte_Hdr_Type",
    "ID107_Wpt_Type",
    0
};

const IID *  _garmin_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0,
    &IID_IDispatch,
    0,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _garmin_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _garmin, pIID, n)

int __stdcall _garmin_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _garmin, 53, 32 )
    IID_BS_LOOKUP_NEXT_TEST( _garmin, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _garmin, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _garmin, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _garmin, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _garmin, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _garmin, 53, *pIndex )
    
}

const ExtendedProxyFileInfo garmin_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _garmin_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _garmin_StubVtblList,
    (const PCInterfaceName * ) & _garmin_InterfaceNamesList,
    (const IID ** ) & _garmin_BaseIIDList,
    & _garmin_IID_Lookup, 
    53,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};

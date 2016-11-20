// garmin.cpp : Implementation of DLL Exports.


// Note: Proxy/Stub Information
//      To build a separate proxy/stub DLL, 
//      run nmake -f garminps.mk in the project directory.

#include "stdafx.h"
#include "resource.h"
#include <initguid.h>
#include "garmin.h"

#include "garmin_i.c"
#include "Communication.h"
#include "BodyPacket.h"
#include "BodyPackets.h"
#include "Application.h"
#include "ProtocolArray.h"
#include "ProductData.h"
#include "Primitive.h"
#include "D100_Wpt_Type.h"
#include "D101_Wpt_Type.h"
#include "D108_Wpt_Type.h"
#include "D301_Trk_Point_Type.h"
#include "D600_Date_Time_Type.h"
#include "D102_Wpt_Type.h"
#include "D103_Wpt_Type.h"
#include "D104_Wpt_Type.h"
#include "D105_Wpt_Type.h"
#include "D106_Wpt_Type.h"
#include "D107_Wpt_Type.h"
#include "D109_Wpt_Type.h"
#include "D110_Wpt_Type.h"
#include "D150_Wpt_Type.h"
#include "D151_Wpt_Type.h"
#include "D152_Wpt_Type.h"
#include "D154_Wpt_Type.h"
#include "D155_Wpt_Type.h"
#include "D200_Rte_Hdr_Type.h"
#include "D201_Rte_Hdr_Type.h"
#include "D202_Rte_Hdr_Type.h"
#include "D210_Rte_Link_Type.h"
#include "D300_Trk_Point_Type.h"
#include "D302_Trk_Point_Type.h"
#include "D310_Trk_Hdr_Type.h"
#include "D311_Trk_Hdr_Type.h"
#include "D312_Trk_Hdr_Type.h"
#include "D400_Prx_Wpt_Type.h"
#include "D403_Prx_Wpt_Type.h"
#include "D450_Prx_Wpt_Type.h"
#include "D500_Almanac_Type.h"
#include "D501_Almanac_Type.h"
#include "D550_Almanac_Type.h"
#include "D551_Almanac_Type.h"
#include "D650_FlightBook_Record_Type.h"
#include "D700_Position_Type.h"
#include "D800_Pvt_Data_Type.h"
#include "D906_Lap_Type.h"

CComModule _Module;

BEGIN_OBJECT_MAP(ObjectMap)
	OBJECT_ENTRY(CLSID_Communication, CCommunication)
	OBJECT_ENTRY(CLSID_BodyPacket, CBodyPacket)
	OBJECT_ENTRY(CLSID_Application, CApplication)	
	OBJECT_ENTRY(CLSID_ProtocolArray, CProtocolArray)
	OBJECT_ENTRY(CLSID_ProductData, CProductData)
	OBJECT_ENTRY(CLSID_BodyPackets, CBodyPackets)
	OBJECT_ENTRY(CLSID_Primitive, CPrimitive)
	OBJECT_ENTRY(CLSID_D100_Wpt_Type, CD100_Wpt_Type)
	OBJECT_ENTRY(CLSID_D101_Wpt_Type, CD101_Wpt_Type)
	OBJECT_ENTRY(CLSID_D108_Wpt_Type, CD108_Wpt_Type)
	OBJECT_ENTRY(CLSID_D301_Trk_Point_Type, CD301_Trk_Point_Type)
	OBJECT_ENTRY(CLSID_D600_Date_Time_Type, CD600_Date_Time_Type)
	OBJECT_ENTRY(CLSID_D102_Wpt_Type, CD102_Wpt_Type)
	OBJECT_ENTRY(CLSID_D103_Wpt_Type, CD103_Wpt_Type)
	OBJECT_ENTRY(CLSID_D104_Wpt_Type, CD104_Wpt_Type)
	OBJECT_ENTRY(CLSID_D105_Wpt_Type, CD105_Wpt_Type)
	OBJECT_ENTRY(CLSID_D106_Wpt_Type, CD106_Wpt_Type)
	OBJECT_ENTRY(CLSID_D107_Wpt_Type, CD107_Wpt_Type)
	OBJECT_ENTRY(CLSID_D109_Wpt_Type, CD109_Wpt_Type)
	OBJECT_ENTRY(CLSID_D110_Wpt_Type, CD110_Wpt_Type)
	OBJECT_ENTRY(CLSID_D150_Wpt_Type, CD150_Wpt_Type)
	OBJECT_ENTRY(CLSID_D151_Wpt_Type, CD151_Wpt_Type)
	OBJECT_ENTRY(CLSID_D152_Wpt_Type, CD152_Wpt_Type)
	OBJECT_ENTRY(CLSID_D154_Wpt_Type, CD154_Wpt_Type)
	OBJECT_ENTRY(CLSID_D155_Wpt_Type, CD155_Wpt_Type)
	OBJECT_ENTRY(CLSID_D200_Rte_Hdr_Type, CD200_Rte_Hdr_Type)
	OBJECT_ENTRY(CLSID_D201_Rte_Hdr_Type, CD201_Rte_Hdr_Type)
	OBJECT_ENTRY(CLSID_D202_Rte_Hdr_Type, CD202_Rte_Hdr_Type)
	OBJECT_ENTRY(CLSID_D210_Rte_Link_Type, CD210_Rte_Link_Type)
	OBJECT_ENTRY(CLSID_D300_Trk_Point_Type, CD300_Trk_Point_Type)
	OBJECT_ENTRY(CLSID_D302_Trk_Point_Type, CD302_Trk_Point_Type)
	OBJECT_ENTRY(CLSID_D310_Trk_Hdr_Type, CD310_Trk_Hdr_Type)
	OBJECT_ENTRY(CLSID_D311_Trk_Hdr_Type, CD311_Trk_Hdr_Type)
	OBJECT_ENTRY(CLSID_D312_Trk_Hdr_Type, CD312_Trk_Hdr_Type)
	OBJECT_ENTRY(CLSID_D400_Prx_Wpt_Type, CD400_Prx_Wpt_Type)
	OBJECT_ENTRY(CLSID_D403_Prx_Wpt_Type, CD403_Prx_Wpt_Type)
	OBJECT_ENTRY(CLSID_D450_Prx_Wpt_Type, CD450_Prx_Wpt_Type)
	OBJECT_ENTRY(CLSID_D500_Almanac_Type, CD500_Almanac_Type)
	OBJECT_ENTRY(CLSID_D501_Almanac_Type, CD501_Almanac_Type)
	OBJECT_ENTRY(CLSID_D550_Almanac_Type, CD550_Almanac_Type)
	OBJECT_ENTRY(CLSID_D551_Almanac_Type, CD551_Almanac_Type)
	OBJECT_ENTRY(CLSID_D650_FlightBook_Record_Type, CD650_FlightBook_Record_Type)
	OBJECT_ENTRY(CLSID_D700_Position_Type, CD700_Position_Type)
	OBJECT_ENTRY(CLSID_D800_Pvt_Data_Type, CD800_Pvt_Data_Type)
	OBJECT_ENTRY(CLSID_D906_Lap_Type, CD906_Lap_Type)
END_OBJECT_MAP()

/////////////////////////////////////////////////////////////////////////////
// DLL Entry Point

extern "C"
BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID /*lpReserved*/)
{
    if (dwReason == DLL_PROCESS_ATTACH)
    {
        _Module.Init(ObjectMap, hInstance, &LIBID_GARMINLib);
        DisableThreadLibraryCalls(hInstance);
    }
    else if (dwReason == DLL_PROCESS_DETACH)
        _Module.Term();
    return TRUE;    // ok
}

/////////////////////////////////////////////////////////////////////////////
// Used to determine whether the DLL can be unloaded by OLE

STDAPI DllCanUnloadNow(void)
{
    return (_Module.GetLockCount()==0) ? S_OK : S_FALSE;
}

/////////////////////////////////////////////////////////////////////////////
// Returns a class factory to create an object of the requested type

STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
    return _Module.GetClassObject(rclsid, riid, ppv);
}

/////////////////////////////////////////////////////////////////////////////
// DllRegisterServer - Adds entries to the system registry

STDAPI DllRegisterServer(void)
{
    // registers object, typelib and all interfaces in typelib
    return _Module.RegisterServer(TRUE);
}

/////////////////////////////////////////////////////////////////////////////
// DllUnregisterServer - Removes entries from the system registry

STDAPI DllUnregisterServer(void)
{
    return _Module.UnregisterServer(TRUE);
}



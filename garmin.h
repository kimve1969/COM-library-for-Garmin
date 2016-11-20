/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sun Sep 12 22:15:11 2004
 */
/* Compiler settings for D:\Program C++\Garmin\garmin\garmin.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __garmin_h__
#define __garmin_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __ICommunication_FWD_DEFINED__
#define __ICommunication_FWD_DEFINED__
typedef interface ICommunication ICommunication;
#endif 	/* __ICommunication_FWD_DEFINED__ */


#ifndef __IBodyPacket_FWD_DEFINED__
#define __IBodyPacket_FWD_DEFINED__
typedef interface IBodyPacket IBodyPacket;
#endif 	/* __IBodyPacket_FWD_DEFINED__ */


#ifndef __IHelperBodyPacket_FWD_DEFINED__
#define __IHelperBodyPacket_FWD_DEFINED__
typedef interface IHelperBodyPacket IHelperBodyPacket;
#endif 	/* __IHelperBodyPacket_FWD_DEFINED__ */


#ifndef __IApplication_FWD_DEFINED__
#define __IApplication_FWD_DEFINED__
typedef interface IApplication IApplication;
#endif 	/* __IApplication_FWD_DEFINED__ */


#ifndef __IProtocolArray_FWD_DEFINED__
#define __IProtocolArray_FWD_DEFINED__
typedef interface IProtocolArray IProtocolArray;
#endif 	/* __IProtocolArray_FWD_DEFINED__ */


#ifndef __IHelperProtocolArray_FWD_DEFINED__
#define __IHelperProtocolArray_FWD_DEFINED__
typedef interface IHelperProtocolArray IHelperProtocolArray;
#endif 	/* __IHelperProtocolArray_FWD_DEFINED__ */


#ifndef __IProductData_FWD_DEFINED__
#define __IProductData_FWD_DEFINED__
typedef interface IProductData IProductData;
#endif 	/* __IProductData_FWD_DEFINED__ */


#ifndef __IHelperProductData_FWD_DEFINED__
#define __IHelperProductData_FWD_DEFINED__
typedef interface IHelperProductData IHelperProductData;
#endif 	/* __IHelperProductData_FWD_DEFINED__ */


#ifndef __IBodyPackets_FWD_DEFINED__
#define __IBodyPackets_FWD_DEFINED__
typedef interface IBodyPackets IBodyPackets;
#endif 	/* __IBodyPackets_FWD_DEFINED__ */


#ifndef __IPrimitive_FWD_DEFINED__
#define __IPrimitive_FWD_DEFINED__
typedef interface IPrimitive IPrimitive;
#endif 	/* __IPrimitive_FWD_DEFINED__ */


#ifndef __IGarminDataType_FWD_DEFINED__
#define __IGarminDataType_FWD_DEFINED__
typedef interface IGarminDataType IGarminDataType;
#endif 	/* __IGarminDataType_FWD_DEFINED__ */


#ifndef __IDXXX_Wpt_Type_FWD_DEFINED__
#define __IDXXX_Wpt_Type_FWD_DEFINED__
typedef interface IDXXX_Wpt_Type IDXXX_Wpt_Type;
#endif 	/* __IDXXX_Wpt_Type_FWD_DEFINED__ */


#ifndef __ID100_Wpt_Type_FWD_DEFINED__
#define __ID100_Wpt_Type_FWD_DEFINED__
typedef interface ID100_Wpt_Type ID100_Wpt_Type;
#endif 	/* __ID100_Wpt_Type_FWD_DEFINED__ */


#ifndef __ID101_Wpt_Type_FWD_DEFINED__
#define __ID101_Wpt_Type_FWD_DEFINED__
typedef interface ID101_Wpt_Type ID101_Wpt_Type;
#endif 	/* __ID101_Wpt_Type_FWD_DEFINED__ */


#ifndef __ID102_Wpt_Type_FWD_DEFINED__
#define __ID102_Wpt_Type_FWD_DEFINED__
typedef interface ID102_Wpt_Type ID102_Wpt_Type;
#endif 	/* __ID102_Wpt_Type_FWD_DEFINED__ */


#ifndef __ID103_Wpt_Type_FWD_DEFINED__
#define __ID103_Wpt_Type_FWD_DEFINED__
typedef interface ID103_Wpt_Type ID103_Wpt_Type;
#endif 	/* __ID103_Wpt_Type_FWD_DEFINED__ */


#ifndef __ID104_Wpt_Type_FWD_DEFINED__
#define __ID104_Wpt_Type_FWD_DEFINED__
typedef interface ID104_Wpt_Type ID104_Wpt_Type;
#endif 	/* __ID104_Wpt_Type_FWD_DEFINED__ */


#ifndef __ID105_Wpt_Type_FWD_DEFINED__
#define __ID105_Wpt_Type_FWD_DEFINED__
typedef interface ID105_Wpt_Type ID105_Wpt_Type;
#endif 	/* __ID105_Wpt_Type_FWD_DEFINED__ */


#ifndef __ID106_Wpt_Type_FWD_DEFINED__
#define __ID106_Wpt_Type_FWD_DEFINED__
typedef interface ID106_Wpt_Type ID106_Wpt_Type;
#endif 	/* __ID106_Wpt_Type_FWD_DEFINED__ */


#ifndef __ID107_Wpt_Type_FWD_DEFINED__
#define __ID107_Wpt_Type_FWD_DEFINED__
typedef interface ID107_Wpt_Type ID107_Wpt_Type;
#endif 	/* __ID107_Wpt_Type_FWD_DEFINED__ */


#ifndef __ID108_Wpt_Type_FWD_DEFINED__
#define __ID108_Wpt_Type_FWD_DEFINED__
typedef interface ID108_Wpt_Type ID108_Wpt_Type;
#endif 	/* __ID108_Wpt_Type_FWD_DEFINED__ */


#ifndef __ID109_Wpt_Type_FWD_DEFINED__
#define __ID109_Wpt_Type_FWD_DEFINED__
typedef interface ID109_Wpt_Type ID109_Wpt_Type;
#endif 	/* __ID109_Wpt_Type_FWD_DEFINED__ */


#ifndef __ID110_Wpt_Type_FWD_DEFINED__
#define __ID110_Wpt_Type_FWD_DEFINED__
typedef interface ID110_Wpt_Type ID110_Wpt_Type;
#endif 	/* __ID110_Wpt_Type_FWD_DEFINED__ */


#ifndef __ID150_Wpt_Type_FWD_DEFINED__
#define __ID150_Wpt_Type_FWD_DEFINED__
typedef interface ID150_Wpt_Type ID150_Wpt_Type;
#endif 	/* __ID150_Wpt_Type_FWD_DEFINED__ */


#ifndef __ID151_Wpt_Type_FWD_DEFINED__
#define __ID151_Wpt_Type_FWD_DEFINED__
typedef interface ID151_Wpt_Type ID151_Wpt_Type;
#endif 	/* __ID151_Wpt_Type_FWD_DEFINED__ */


#ifndef __ID152_Wpt_Type_FWD_DEFINED__
#define __ID152_Wpt_Type_FWD_DEFINED__
typedef interface ID152_Wpt_Type ID152_Wpt_Type;
#endif 	/* __ID152_Wpt_Type_FWD_DEFINED__ */


#ifndef __ID154_Wpt_Type_FWD_DEFINED__
#define __ID154_Wpt_Type_FWD_DEFINED__
typedef interface ID154_Wpt_Type ID154_Wpt_Type;
#endif 	/* __ID154_Wpt_Type_FWD_DEFINED__ */


#ifndef __ID155_Wpt_Type_FWD_DEFINED__
#define __ID155_Wpt_Type_FWD_DEFINED__
typedef interface ID155_Wpt_Type ID155_Wpt_Type;
#endif 	/* __ID155_Wpt_Type_FWD_DEFINED__ */


#ifndef __ID200_Rte_Hdr_Type_FWD_DEFINED__
#define __ID200_Rte_Hdr_Type_FWD_DEFINED__
typedef interface ID200_Rte_Hdr_Type ID200_Rte_Hdr_Type;
#endif 	/* __ID200_Rte_Hdr_Type_FWD_DEFINED__ */


#ifndef __ID201_Rte_Hdr_Type_FWD_DEFINED__
#define __ID201_Rte_Hdr_Type_FWD_DEFINED__
typedef interface ID201_Rte_Hdr_Type ID201_Rte_Hdr_Type;
#endif 	/* __ID201_Rte_Hdr_Type_FWD_DEFINED__ */


#ifndef __ID202_Rte_Hdr_Type_FWD_DEFINED__
#define __ID202_Rte_Hdr_Type_FWD_DEFINED__
typedef interface ID202_Rte_Hdr_Type ID202_Rte_Hdr_Type;
#endif 	/* __ID202_Rte_Hdr_Type_FWD_DEFINED__ */


#ifndef __ID210_Rte_Link_Type_FWD_DEFINED__
#define __ID210_Rte_Link_Type_FWD_DEFINED__
typedef interface ID210_Rte_Link_Type ID210_Rte_Link_Type;
#endif 	/* __ID210_Rte_Link_Type_FWD_DEFINED__ */


#ifndef __IDXXX_Trk_Point_Type_FWD_DEFINED__
#define __IDXXX_Trk_Point_Type_FWD_DEFINED__
typedef interface IDXXX_Trk_Point_Type IDXXX_Trk_Point_Type;
#endif 	/* __IDXXX_Trk_Point_Type_FWD_DEFINED__ */


#ifndef __ID300_Trk_Point_Type_FWD_DEFINED__
#define __ID300_Trk_Point_Type_FWD_DEFINED__
typedef interface ID300_Trk_Point_Type ID300_Trk_Point_Type;
#endif 	/* __ID300_Trk_Point_Type_FWD_DEFINED__ */


#ifndef __ID301_Trk_Point_Type_FWD_DEFINED__
#define __ID301_Trk_Point_Type_FWD_DEFINED__
typedef interface ID301_Trk_Point_Type ID301_Trk_Point_Type;
#endif 	/* __ID301_Trk_Point_Type_FWD_DEFINED__ */


#ifndef __ID302_Trk_Point_Type_FWD_DEFINED__
#define __ID302_Trk_Point_Type_FWD_DEFINED__
typedef interface ID302_Trk_Point_Type ID302_Trk_Point_Type;
#endif 	/* __ID302_Trk_Point_Type_FWD_DEFINED__ */


#ifndef __ID310_Trk_Hdr_Type_FWD_DEFINED__
#define __ID310_Trk_Hdr_Type_FWD_DEFINED__
typedef interface ID310_Trk_Hdr_Type ID310_Trk_Hdr_Type;
#endif 	/* __ID310_Trk_Hdr_Type_FWD_DEFINED__ */


#ifndef __ID311_Trk_Hdr_Type_FWD_DEFINED__
#define __ID311_Trk_Hdr_Type_FWD_DEFINED__
typedef interface ID311_Trk_Hdr_Type ID311_Trk_Hdr_Type;
#endif 	/* __ID311_Trk_Hdr_Type_FWD_DEFINED__ */


#ifndef __ID312_Trk_Hdr_Type_FWD_DEFINED__
#define __ID312_Trk_Hdr_Type_FWD_DEFINED__
typedef interface ID312_Trk_Hdr_Type ID312_Trk_Hdr_Type;
#endif 	/* __ID312_Trk_Hdr_Type_FWD_DEFINED__ */


#ifndef __IDXXX_Prx_Wpt_Type_FWD_DEFINED__
#define __IDXXX_Prx_Wpt_Type_FWD_DEFINED__
typedef interface IDXXX_Prx_Wpt_Type IDXXX_Prx_Wpt_Type;
#endif 	/* __IDXXX_Prx_Wpt_Type_FWD_DEFINED__ */


#ifndef __ID400_Prx_Wpt_Type_FWD_DEFINED__
#define __ID400_Prx_Wpt_Type_FWD_DEFINED__
typedef interface ID400_Prx_Wpt_Type ID400_Prx_Wpt_Type;
#endif 	/* __ID400_Prx_Wpt_Type_FWD_DEFINED__ */


#ifndef __ID403_Prx_Wpt_Type_FWD_DEFINED__
#define __ID403_Prx_Wpt_Type_FWD_DEFINED__
typedef interface ID403_Prx_Wpt_Type ID403_Prx_Wpt_Type;
#endif 	/* __ID403_Prx_Wpt_Type_FWD_DEFINED__ */


#ifndef __ID450_Prx_Wpt_Type_FWD_DEFINED__
#define __ID450_Prx_Wpt_Type_FWD_DEFINED__
typedef interface ID450_Prx_Wpt_Type ID450_Prx_Wpt_Type;
#endif 	/* __ID450_Prx_Wpt_Type_FWD_DEFINED__ */


#ifndef __IDXXX_Almanac_Type_FWD_DEFINED__
#define __IDXXX_Almanac_Type_FWD_DEFINED__
typedef interface IDXXX_Almanac_Type IDXXX_Almanac_Type;
#endif 	/* __IDXXX_Almanac_Type_FWD_DEFINED__ */


#ifndef __ID500_Almanac_Type_FWD_DEFINED__
#define __ID500_Almanac_Type_FWD_DEFINED__
typedef interface ID500_Almanac_Type ID500_Almanac_Type;
#endif 	/* __ID500_Almanac_Type_FWD_DEFINED__ */


#ifndef __ID501_Almanac_Type_FWD_DEFINED__
#define __ID501_Almanac_Type_FWD_DEFINED__
typedef interface ID501_Almanac_Type ID501_Almanac_Type;
#endif 	/* __ID501_Almanac_Type_FWD_DEFINED__ */


#ifndef __ID550_Almanac_Type_FWD_DEFINED__
#define __ID550_Almanac_Type_FWD_DEFINED__
typedef interface ID550_Almanac_Type ID550_Almanac_Type;
#endif 	/* __ID550_Almanac_Type_FWD_DEFINED__ */


#ifndef __ID551_Almanac_Type_FWD_DEFINED__
#define __ID551_Almanac_Type_FWD_DEFINED__
typedef interface ID551_Almanac_Type ID551_Almanac_Type;
#endif 	/* __ID551_Almanac_Type_FWD_DEFINED__ */


#ifndef __ID600_Date_Time_Type_FWD_DEFINED__
#define __ID600_Date_Time_Type_FWD_DEFINED__
typedef interface ID600_Date_Time_Type ID600_Date_Time_Type;
#endif 	/* __ID600_Date_Time_Type_FWD_DEFINED__ */


#ifndef __ID650_FlightBook_Record_Type_FWD_DEFINED__
#define __ID650_FlightBook_Record_Type_FWD_DEFINED__
typedef interface ID650_FlightBook_Record_Type ID650_FlightBook_Record_Type;
#endif 	/* __ID650_FlightBook_Record_Type_FWD_DEFINED__ */


#ifndef __ID700_Position_Type_FWD_DEFINED__
#define __ID700_Position_Type_FWD_DEFINED__
typedef interface ID700_Position_Type ID700_Position_Type;
#endif 	/* __ID700_Position_Type_FWD_DEFINED__ */


#ifndef __ID800_Pvt_Data_Type_FWD_DEFINED__
#define __ID800_Pvt_Data_Type_FWD_DEFINED__
typedef interface ID800_Pvt_Data_Type ID800_Pvt_Data_Type;
#endif 	/* __ID800_Pvt_Data_Type_FWD_DEFINED__ */


#ifndef __ID906_Lap_Type_FWD_DEFINED__
#define __ID906_Lap_Type_FWD_DEFINED__
typedef interface ID906_Lap_Type ID906_Lap_Type;
#endif 	/* __ID906_Lap_Type_FWD_DEFINED__ */


#ifndef __Communication_FWD_DEFINED__
#define __Communication_FWD_DEFINED__

#ifdef __cplusplus
typedef class Communication Communication;
#else
typedef struct Communication Communication;
#endif /* __cplusplus */

#endif 	/* __Communication_FWD_DEFINED__ */


#ifndef __BodyPacket_FWD_DEFINED__
#define __BodyPacket_FWD_DEFINED__

#ifdef __cplusplus
typedef class BodyPacket BodyPacket;
#else
typedef struct BodyPacket BodyPacket;
#endif /* __cplusplus */

#endif 	/* __BodyPacket_FWD_DEFINED__ */


#ifndef __Application_FWD_DEFINED__
#define __Application_FWD_DEFINED__

#ifdef __cplusplus
typedef class Application Application;
#else
typedef struct Application Application;
#endif /* __cplusplus */

#endif 	/* __Application_FWD_DEFINED__ */


#ifndef __ProtocolArray_FWD_DEFINED__
#define __ProtocolArray_FWD_DEFINED__

#ifdef __cplusplus
typedef class ProtocolArray ProtocolArray;
#else
typedef struct ProtocolArray ProtocolArray;
#endif /* __cplusplus */

#endif 	/* __ProtocolArray_FWD_DEFINED__ */


#ifndef __ProductData_FWD_DEFINED__
#define __ProductData_FWD_DEFINED__

#ifdef __cplusplus
typedef class ProductData ProductData;
#else
typedef struct ProductData ProductData;
#endif /* __cplusplus */

#endif 	/* __ProductData_FWD_DEFINED__ */


#ifndef __BodyPackets_FWD_DEFINED__
#define __BodyPackets_FWD_DEFINED__

#ifdef __cplusplus
typedef class BodyPackets BodyPackets;
#else
typedef struct BodyPackets BodyPackets;
#endif /* __cplusplus */

#endif 	/* __BodyPackets_FWD_DEFINED__ */


#ifndef __Primitive_FWD_DEFINED__
#define __Primitive_FWD_DEFINED__

#ifdef __cplusplus
typedef class Primitive Primitive;
#else
typedef struct Primitive Primitive;
#endif /* __cplusplus */

#endif 	/* __Primitive_FWD_DEFINED__ */


#ifndef __D100_Wpt_Type_FWD_DEFINED__
#define __D100_Wpt_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D100_Wpt_Type D100_Wpt_Type;
#else
typedef struct D100_Wpt_Type D100_Wpt_Type;
#endif /* __cplusplus */

#endif 	/* __D100_Wpt_Type_FWD_DEFINED__ */


#ifndef __D101_Wpt_Type_FWD_DEFINED__
#define __D101_Wpt_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D101_Wpt_Type D101_Wpt_Type;
#else
typedef struct D101_Wpt_Type D101_Wpt_Type;
#endif /* __cplusplus */

#endif 	/* __D101_Wpt_Type_FWD_DEFINED__ */


#ifndef __D102_Wpt_Type_FWD_DEFINED__
#define __D102_Wpt_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D102_Wpt_Type D102_Wpt_Type;
#else
typedef struct D102_Wpt_Type D102_Wpt_Type;
#endif /* __cplusplus */

#endif 	/* __D102_Wpt_Type_FWD_DEFINED__ */


#ifndef __D103_Wpt_Type_FWD_DEFINED__
#define __D103_Wpt_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D103_Wpt_Type D103_Wpt_Type;
#else
typedef struct D103_Wpt_Type D103_Wpt_Type;
#endif /* __cplusplus */

#endif 	/* __D103_Wpt_Type_FWD_DEFINED__ */


#ifndef __D104_Wpt_Type_FWD_DEFINED__
#define __D104_Wpt_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D104_Wpt_Type D104_Wpt_Type;
#else
typedef struct D104_Wpt_Type D104_Wpt_Type;
#endif /* __cplusplus */

#endif 	/* __D104_Wpt_Type_FWD_DEFINED__ */


#ifndef __D105_Wpt_Type_FWD_DEFINED__
#define __D105_Wpt_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D105_Wpt_Type D105_Wpt_Type;
#else
typedef struct D105_Wpt_Type D105_Wpt_Type;
#endif /* __cplusplus */

#endif 	/* __D105_Wpt_Type_FWD_DEFINED__ */


#ifndef __D106_Wpt_Type_FWD_DEFINED__
#define __D106_Wpt_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D106_Wpt_Type D106_Wpt_Type;
#else
typedef struct D106_Wpt_Type D106_Wpt_Type;
#endif /* __cplusplus */

#endif 	/* __D106_Wpt_Type_FWD_DEFINED__ */


#ifndef __D107_Wpt_Type_FWD_DEFINED__
#define __D107_Wpt_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D107_Wpt_Type D107_Wpt_Type;
#else
typedef struct D107_Wpt_Type D107_Wpt_Type;
#endif /* __cplusplus */

#endif 	/* __D107_Wpt_Type_FWD_DEFINED__ */


#ifndef __D108_Wpt_Type_FWD_DEFINED__
#define __D108_Wpt_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D108_Wpt_Type D108_Wpt_Type;
#else
typedef struct D108_Wpt_Type D108_Wpt_Type;
#endif /* __cplusplus */

#endif 	/* __D108_Wpt_Type_FWD_DEFINED__ */


#ifndef __D109_Wpt_Type_FWD_DEFINED__
#define __D109_Wpt_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D109_Wpt_Type D109_Wpt_Type;
#else
typedef struct D109_Wpt_Type D109_Wpt_Type;
#endif /* __cplusplus */

#endif 	/* __D109_Wpt_Type_FWD_DEFINED__ */


#ifndef __D110_Wpt_Type_FWD_DEFINED__
#define __D110_Wpt_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D110_Wpt_Type D110_Wpt_Type;
#else
typedef struct D110_Wpt_Type D110_Wpt_Type;
#endif /* __cplusplus */

#endif 	/* __D110_Wpt_Type_FWD_DEFINED__ */


#ifndef __D150_Wpt_Type_FWD_DEFINED__
#define __D150_Wpt_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D150_Wpt_Type D150_Wpt_Type;
#else
typedef struct D150_Wpt_Type D150_Wpt_Type;
#endif /* __cplusplus */

#endif 	/* __D150_Wpt_Type_FWD_DEFINED__ */


#ifndef __D151_Wpt_Type_FWD_DEFINED__
#define __D151_Wpt_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D151_Wpt_Type D151_Wpt_Type;
#else
typedef struct D151_Wpt_Type D151_Wpt_Type;
#endif /* __cplusplus */

#endif 	/* __D151_Wpt_Type_FWD_DEFINED__ */


#ifndef __D152_Wpt_Type_FWD_DEFINED__
#define __D152_Wpt_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D152_Wpt_Type D152_Wpt_Type;
#else
typedef struct D152_Wpt_Type D152_Wpt_Type;
#endif /* __cplusplus */

#endif 	/* __D152_Wpt_Type_FWD_DEFINED__ */


#ifndef __D154_Wpt_Type_FWD_DEFINED__
#define __D154_Wpt_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D154_Wpt_Type D154_Wpt_Type;
#else
typedef struct D154_Wpt_Type D154_Wpt_Type;
#endif /* __cplusplus */

#endif 	/* __D154_Wpt_Type_FWD_DEFINED__ */


#ifndef __D155_Wpt_Type_FWD_DEFINED__
#define __D155_Wpt_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D155_Wpt_Type D155_Wpt_Type;
#else
typedef struct D155_Wpt_Type D155_Wpt_Type;
#endif /* __cplusplus */

#endif 	/* __D155_Wpt_Type_FWD_DEFINED__ */


#ifndef __D200_Rte_Hdr_Type_FWD_DEFINED__
#define __D200_Rte_Hdr_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D200_Rte_Hdr_Type D200_Rte_Hdr_Type;
#else
typedef struct D200_Rte_Hdr_Type D200_Rte_Hdr_Type;
#endif /* __cplusplus */

#endif 	/* __D200_Rte_Hdr_Type_FWD_DEFINED__ */


#ifndef __D201_Rte_Hdr_Type_FWD_DEFINED__
#define __D201_Rte_Hdr_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D201_Rte_Hdr_Type D201_Rte_Hdr_Type;
#else
typedef struct D201_Rte_Hdr_Type D201_Rte_Hdr_Type;
#endif /* __cplusplus */

#endif 	/* __D201_Rte_Hdr_Type_FWD_DEFINED__ */


#ifndef __D202_Rte_Hdr_Type_FWD_DEFINED__
#define __D202_Rte_Hdr_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D202_Rte_Hdr_Type D202_Rte_Hdr_Type;
#else
typedef struct D202_Rte_Hdr_Type D202_Rte_Hdr_Type;
#endif /* __cplusplus */

#endif 	/* __D202_Rte_Hdr_Type_FWD_DEFINED__ */


#ifndef __D210_Rte_Link_Type_FWD_DEFINED__
#define __D210_Rte_Link_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D210_Rte_Link_Type D210_Rte_Link_Type;
#else
typedef struct D210_Rte_Link_Type D210_Rte_Link_Type;
#endif /* __cplusplus */

#endif 	/* __D210_Rte_Link_Type_FWD_DEFINED__ */


#ifndef __D301_Trk_Point_Type_FWD_DEFINED__
#define __D301_Trk_Point_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D301_Trk_Point_Type D301_Trk_Point_Type;
#else
typedef struct D301_Trk_Point_Type D301_Trk_Point_Type;
#endif /* __cplusplus */

#endif 	/* __D301_Trk_Point_Type_FWD_DEFINED__ */


#ifndef __D300_Trk_Point_Type_FWD_DEFINED__
#define __D300_Trk_Point_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D300_Trk_Point_Type D300_Trk_Point_Type;
#else
typedef struct D300_Trk_Point_Type D300_Trk_Point_Type;
#endif /* __cplusplus */

#endif 	/* __D300_Trk_Point_Type_FWD_DEFINED__ */


#ifndef __D302_Trk_Point_Type_FWD_DEFINED__
#define __D302_Trk_Point_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D302_Trk_Point_Type D302_Trk_Point_Type;
#else
typedef struct D302_Trk_Point_Type D302_Trk_Point_Type;
#endif /* __cplusplus */

#endif 	/* __D302_Trk_Point_Type_FWD_DEFINED__ */


#ifndef __D310_Trk_Hdr_Type_FWD_DEFINED__
#define __D310_Trk_Hdr_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D310_Trk_Hdr_Type D310_Trk_Hdr_Type;
#else
typedef struct D310_Trk_Hdr_Type D310_Trk_Hdr_Type;
#endif /* __cplusplus */

#endif 	/* __D310_Trk_Hdr_Type_FWD_DEFINED__ */


#ifndef __D311_Trk_Hdr_Type_FWD_DEFINED__
#define __D311_Trk_Hdr_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D311_Trk_Hdr_Type D311_Trk_Hdr_Type;
#else
typedef struct D311_Trk_Hdr_Type D311_Trk_Hdr_Type;
#endif /* __cplusplus */

#endif 	/* __D311_Trk_Hdr_Type_FWD_DEFINED__ */


#ifndef __D312_Trk_Hdr_Type_FWD_DEFINED__
#define __D312_Trk_Hdr_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D312_Trk_Hdr_Type D312_Trk_Hdr_Type;
#else
typedef struct D312_Trk_Hdr_Type D312_Trk_Hdr_Type;
#endif /* __cplusplus */

#endif 	/* __D312_Trk_Hdr_Type_FWD_DEFINED__ */


#ifndef __D400_Prx_Wpt_Type_FWD_DEFINED__
#define __D400_Prx_Wpt_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D400_Prx_Wpt_Type D400_Prx_Wpt_Type;
#else
typedef struct D400_Prx_Wpt_Type D400_Prx_Wpt_Type;
#endif /* __cplusplus */

#endif 	/* __D400_Prx_Wpt_Type_FWD_DEFINED__ */


#ifndef __D403_Prx_Wpt_Type_FWD_DEFINED__
#define __D403_Prx_Wpt_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D403_Prx_Wpt_Type D403_Prx_Wpt_Type;
#else
typedef struct D403_Prx_Wpt_Type D403_Prx_Wpt_Type;
#endif /* __cplusplus */

#endif 	/* __D403_Prx_Wpt_Type_FWD_DEFINED__ */


#ifndef __D450_Prx_Wpt_Type_FWD_DEFINED__
#define __D450_Prx_Wpt_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D450_Prx_Wpt_Type D450_Prx_Wpt_Type;
#else
typedef struct D450_Prx_Wpt_Type D450_Prx_Wpt_Type;
#endif /* __cplusplus */

#endif 	/* __D450_Prx_Wpt_Type_FWD_DEFINED__ */


#ifndef __D500_Almanac_Type_FWD_DEFINED__
#define __D500_Almanac_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D500_Almanac_Type D500_Almanac_Type;
#else
typedef struct D500_Almanac_Type D500_Almanac_Type;
#endif /* __cplusplus */

#endif 	/* __D500_Almanac_Type_FWD_DEFINED__ */


#ifndef __D501_Almanac_Type_FWD_DEFINED__
#define __D501_Almanac_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D501_Almanac_Type D501_Almanac_Type;
#else
typedef struct D501_Almanac_Type D501_Almanac_Type;
#endif /* __cplusplus */

#endif 	/* __D501_Almanac_Type_FWD_DEFINED__ */


#ifndef __D550_Almanac_Type_FWD_DEFINED__
#define __D550_Almanac_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D550_Almanac_Type D550_Almanac_Type;
#else
typedef struct D550_Almanac_Type D550_Almanac_Type;
#endif /* __cplusplus */

#endif 	/* __D550_Almanac_Type_FWD_DEFINED__ */


#ifndef __D551_Almanac_Type_FWD_DEFINED__
#define __D551_Almanac_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D551_Almanac_Type D551_Almanac_Type;
#else
typedef struct D551_Almanac_Type D551_Almanac_Type;
#endif /* __cplusplus */

#endif 	/* __D551_Almanac_Type_FWD_DEFINED__ */


#ifndef __D600_Date_Time_Type_FWD_DEFINED__
#define __D600_Date_Time_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D600_Date_Time_Type D600_Date_Time_Type;
#else
typedef struct D600_Date_Time_Type D600_Date_Time_Type;
#endif /* __cplusplus */

#endif 	/* __D600_Date_Time_Type_FWD_DEFINED__ */


#ifndef __D650_FlightBook_Record_Type_FWD_DEFINED__
#define __D650_FlightBook_Record_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D650_FlightBook_Record_Type D650_FlightBook_Record_Type;
#else
typedef struct D650_FlightBook_Record_Type D650_FlightBook_Record_Type;
#endif /* __cplusplus */

#endif 	/* __D650_FlightBook_Record_Type_FWD_DEFINED__ */


#ifndef __D700_Position_Type_FWD_DEFINED__
#define __D700_Position_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D700_Position_Type D700_Position_Type;
#else
typedef struct D700_Position_Type D700_Position_Type;
#endif /* __cplusplus */

#endif 	/* __D700_Position_Type_FWD_DEFINED__ */


#ifndef __D800_Pvt_Data_Type_FWD_DEFINED__
#define __D800_Pvt_Data_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D800_Pvt_Data_Type D800_Pvt_Data_Type;
#else
typedef struct D800_Pvt_Data_Type D800_Pvt_Data_Type;
#endif /* __cplusplus */

#endif 	/* __D800_Pvt_Data_Type_FWD_DEFINED__ */


#ifndef __D906_Lap_Type_FWD_DEFINED__
#define __D906_Lap_Type_FWD_DEFINED__

#ifdef __cplusplus
typedef class D906_Lap_Type D906_Lap_Type;
#else
typedef struct D906_Lap_Type D906_Lap_Type;
#endif /* __cplusplus */

#endif 	/* __D906_Lap_Type_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_garmin_0000 */
/* [local] */ 

typedef 
enum _BODYPACKET_ACCESS
    {	ACCESS_OR	= 0,
	ACCESS_OW	= ACCESS_OR + 1,
	ACCESS_RW	= ACCESS_OW + 1
    }	BODYPACKET_ACCESS;

typedef /* [public][v1_enum] */ 
enum __MIDL___MIDL_itf_garmin_0000_0001
    {	sym_anchor	= 0,
	sym_bell	= 1,
	sym_diamond_grn	= 2,
	sym_diamond_red	= 3,
	sym_dive1	= 4,
	sym_dive2	= 5,
	sym_dollar	= 6,
	sym_fish	= 7,
	sym_fuel	= 8,
	sym_horn	= 9,
	sym_house	= 10,
	sym_knife	= 11,
	sym_light	= 12,
	sym_mug	= 13,
	sym_skull	= 14,
	sym_square_grn	= 15,
	sym_square_red	= 16,
	sym_wbuoy	= 17,
	sym_wpt_dot	= 18,
	sym_wreck	= 19,
	sym_null	= 20,
	sym_mob	= 21,
	sym_buoy_ambr	= 22,
	sym_buoy_blck	= 23,
	sym_buoy_blue	= 24,
	sym_buoy_grn	= 25,
	sym_buoy_grn_red	= 26,
	sym_buoy_grn_wht	= 27,
	sym_buoy_orng	= 28,
	sym_buoy_red	= 29,
	sym_buoy_red_grn	= 30,
	sym_buoy_red_wht	= 31,
	sym_buoy_violet	= 32,
	sym_buoy_wht	= 33,
	sym_buoy_wht_grn	= 34,
	sym_buoy_wht_red	= 35,
	sym_dot	= 36,
	sym_rbcn	= 37,
	sym_boat_ramp	= 150,
	sym_camp	= 151,
	sym_restrooms	= 152,
	sym_showers	= 153,
	sym_drinking_wtr	= 154,
	sym_phone	= 155,
	sym_1st_aid	= 156,
	sym_info	= 157,
	sym_parking	= 158,
	sym_park	= 159,
	sym_picnic	= 160,
	sym_scenic	= 161,
	sym_skiing	= 162,
	sym_swimming	= 163,
	sym_dam	= 164,
	sym_controlled	= 165,
	sym_danger	= 166,
	sym_restricted	= 167,
	sym_null_2	= 168,
	sym_ball	= 169,
	sym_car	= 170,
	sym_deer	= 171,
	sym_shpng_cart	= 172,
	sym_lodging	= 173,
	sym_mine	= 174,
	sym_trail_head	= 175,
	sym_truck_stop	= 176,
	sym_user_exit	= 177,
	sym_flag	= 178,
	sym_circle_x	= 179,
	sym_open_24hr	= 180,
	sym_fhs_facility	= 181,
	sym_bot_cond	= 182,
	sym_tide_pred_stn	= 183,
	sym_anchor_prohib	= 184,
	sym_beacon	= 185,
	sym_coast_guard	= 186,
	sym_reef	= 187,
	sym_weedbed	= 188,
	sym_dropoff	= 189,
	sym_dock	= 190,
	sym_marina	= 191,
	sym_bait_tackle	= 192,
	sym_stump	= 193,
	sym_is_hwy	= 8192,
	sym_us_hwy	= 8193,
	sym_st_hwy	= 8194,
	sym_mi_mrkr	= 8195,
	sym_trcbck	= 8196,
	sym_golf	= 8197,
	sym_sml_cty	= 8198,
	sym_med_cty	= 8199,
	sym_lrg_cty	= 8200,
	sym_freeway	= 8201,
	sym_ntl_hwy	= 8202,
	sym_cap_cty	= 8203,
	sym_amuse_pk	= 8204,
	sym_bowling	= 8205,
	sym_car_rental	= 8206,
	sym_car_repair	= 8207,
	sym_fastfood	= 8208,
	sym_fitness	= 8209,
	sym_movie	= 8210,
	sym_museum	= 8211,
	sym_pharmacy	= 8212,
	sym_pizza	= 8213,
	sym_post_ofc	= 8214,
	sym_rv_park	= 8215,
	sym_school	= 8216,
	sym_stadium	= 8217,
	sym_store	= 8218,
	sym_zoo	= 8219,
	sym_gas_plus	= 8220,
	sym_faces	= 8221,
	sym_ramp_int	= 8222,
	sym_st_int	= 8223,
	sym_weigh_sttn	= 8226,
	sym_toll_booth	= 8227,
	sym_elev_pt	= 8228,
	sym_ex_no_srvc	= 8229,
	sym_geo_place_mm	= 8230,
	sym_geo_place_wtr	= 8231,
	sym_geo_place_lnd	= 8232,
	sym_bridge	= 8233,
	sym_building	= 8234,
	sym_cemetery	= 8235,
	sym_church	= 8236,
	sym_civil	= 8237,
	sym_crossing	= 8238,
	sym_hist_town	= 8239,
	sym_levee	= 8240,
	sym_military	= 8241,
	sym_oil_field	= 8242,
	sym_tunnel	= 8243,
	sym_beach	= 8244,
	sym_forest	= 8245,
	sym_summit	= 8246,
	sym_lrg_ramp_int	= 8247,
	sym_lrg_ex_no_srvc	= 8248,
	sym_badge	= 8249,
	sym_cards	= 8250,
	sym_snowski	= 8251,
	sym_iceskate	= 8252,
	sym_wrecker	= 8253,
	sym_border	= 8254,
	sym_geocache	= 8255,
	sym_geocache_fnd	= 8256,
	sym_cntct_smiley	= 8257,
	sym_cntct_ball_cap	= 8258,
	sym_cntct_big_ears	= 8259,
	sym_cntct_spike	= 8260,
	sym_cntct_goatee	= 8261,
	sym_cntct_afro	= 8262,
	sym_cntct_dreads	= 8263,
	sym_cntct_female1	= 8264,
	sym_cntct_female2	= 8265,
	sym_cntct_female3	= 8266,
	sym_cntct_ranger	= 8267,
	sym_cntct_kung_fu	= 8268,
	sym_cntct_sumo	= 8269,
	sym_cntct_pirate	= 8270,
	sym_cntct_biker	= 8271,
	sym_cntct_alien	= 8272,
	sym_cntct_bug	= 8273,
	sym_cntct_cat	= 8274,
	sym_cntct_dog	= 8275,
	sym_cntct_pig	= 8276,
	sym_hydrant	= 8282,
	sym_flag_blue	= 8284,
	sym_flag_green	= 8285,
	sym_flag_red	= 8286,
	sym_pin_blue	= 8287,
	sym_pin_green	= 8288,
	sym_pin_red	= 8289,
	sym_block_blue	= 8290,
	sym_block_green	= 8291,
	sym_block_red	= 8292,
	sym_bike_trail	= 8293,
	sym_circle_red	= 8294,
	sym_circle_green	= 8295,
	sym_circle_blue	= 8296,
	sym_diamond_blue	= 8299,
	sym_oval_red	= 8300,
	sym_oval_green	= 8301,
	sym_oval_blue	= 8302,
	sym_rect_red	= 8303,
	sym_rect_green	= 8304,
	sym_rect_blue	= 8305,
	sym_square_blue	= 8308,
	sym_letter_a_red	= 8309,
	sym_letter_b_red	= 8310,
	sym_letter_c_red	= 8311,
	sym_letter_d_red	= 8312,
	sym_letter_a_green	= 8313,
	sym_letter_c_green	= 8314,
	sym_letter_b_green	= 8315,
	sym_letter_d_green	= 8316,
	sym_letter_a_blue	= 8317,
	sym_letter_b_blue	= 8318,
	sym_letter_c_blue	= 8319,
	sym_letter_d_blue	= 8320,
	sym_number_0_red	= 8321,
	sym_number_1_red	= 8322,
	sym_number_2_red	= 8323,
	sym_number_3_red	= 8324,
	sym_number_4_red	= 8325,
	sym_number_5_red	= 8326,
	sym_number_6_red	= 8327,
	sym_number_7_red	= 8328,
	sym_number_8_red	= 8329,
	sym_number_9_red	= 8330,
	sym_number_0_green	= 8331,
	sym_number_1_green	= 8332,
	sym_number_2_green	= 8333,
	sym_number_3_green	= 8334,
	sym_number_4_green	= 8335,
	sym_number_5_green	= 8336,
	sym_number_6_green	= 8337,
	sym_number_7_green	= 8338,
	sym_number_8_green	= 8339,
	sym_number_9_green	= 8340,
	sym_number_0_blue	= 8341,
	sym_number_1_blue	= 8342,
	sym_number_2_blue	= 8343,
	sym_number_3_blue	= 8344,
	sym_number_4_blue	= 8345,
	sym_number_5_blue	= 8346,
	sym_number_6_blue	= 8347,
	sym_number_7_blue	= 8348,
	sym_number_8_blue	= 8349,
	sym_number_9_blue	= 8350,
	sym_triangle_blue	= 8351,
	sym_triangle_green	= 8352,
	sym_triangle_red	= 8353,
	sym_airport	= 16384,
	sym_int	= 16385,
	sym_ndb	= 16386,
	sym_vor	= 16387,
	sym_heliport	= 16388,
	sym_private	= 16389,
	sym_soft_fld	= 16390,
	sym_tall_tower	= 16391,
	sym_short_tower	= 16392,
	sym_glider	= 16393,
	sym_ultralight	= 16394,
	sym_parachute	= 16395,
	sym_vortac	= 16396,
	sym_vordme	= 16397,
	sym_faf	= 16398,
	sym_lom	= 16399,
	sym_map	= 16400,
	sym_tacan	= 16401,
	sym_seaplane	= 16402
    }	Symbol_Type;



extern RPC_IF_HANDLE __MIDL_itf_garmin_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_garmin_0000_v0_0_s_ifspec;

#ifndef __ICommunication_INTERFACE_DEFINED__
#define __ICommunication_INTERFACE_DEFINED__

/* interface ICommunication */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICommunication;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0F9A5D4A-64DA-4CB6-9909-25C42DC10041")
    ICommunication : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenPort( 
            /* [in] */ BSTR bstrPort) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClosePort( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadBodyPacket( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteBodyPacket( 
            /* [in] */ IDispatch __RPC_FAR *pdisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Send( 
            /* [in] */ IDispatch __RPC_FAR *pdisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Reciver( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICommunicationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICommunication __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICommunication __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICommunication __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ICommunication __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ICommunication __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ICommunication __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ICommunication __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OpenPort )( 
            ICommunication __RPC_FAR * This,
            /* [in] */ BSTR bstrPort);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ClosePort )( 
            ICommunication __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ReadBodyPacket )( 
            ICommunication __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *WriteBodyPacket )( 
            ICommunication __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *pdisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Send )( 
            ICommunication __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *pdisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reciver )( 
            ICommunication __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clear )( 
            ICommunication __RPC_FAR * This);
        
        END_INTERFACE
    } ICommunicationVtbl;

    interface ICommunication
    {
        CONST_VTBL struct ICommunicationVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICommunication_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICommunication_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICommunication_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICommunication_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ICommunication_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ICommunication_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ICommunication_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ICommunication_OpenPort(This,bstrPort)	\
    (This)->lpVtbl -> OpenPort(This,bstrPort)

#define ICommunication_ClosePort(This)	\
    (This)->lpVtbl -> ClosePort(This)

#define ICommunication_ReadBodyPacket(This,ppdisp)	\
    (This)->lpVtbl -> ReadBodyPacket(This,ppdisp)

#define ICommunication_WriteBodyPacket(This,pdisp)	\
    (This)->lpVtbl -> WriteBodyPacket(This,pdisp)

#define ICommunication_Send(This,pdisp)	\
    (This)->lpVtbl -> Send(This,pdisp)

#define ICommunication_Reciver(This,ppdisp)	\
    (This)->lpVtbl -> Reciver(This,ppdisp)

#define ICommunication_Clear(This)	\
    (This)->lpVtbl -> Clear(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICommunication_OpenPort_Proxy( 
    ICommunication __RPC_FAR * This,
    /* [in] */ BSTR bstrPort);


void __RPC_STUB ICommunication_OpenPort_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICommunication_ClosePort_Proxy( 
    ICommunication __RPC_FAR * This);


void __RPC_STUB ICommunication_ClosePort_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICommunication_ReadBodyPacket_Proxy( 
    ICommunication __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);


void __RPC_STUB ICommunication_ReadBodyPacket_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICommunication_WriteBodyPacket_Proxy( 
    ICommunication __RPC_FAR * This,
    /* [in] */ IDispatch __RPC_FAR *pdisp);


void __RPC_STUB ICommunication_WriteBodyPacket_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICommunication_Send_Proxy( 
    ICommunication __RPC_FAR * This,
    /* [in] */ IDispatch __RPC_FAR *pdisp);


void __RPC_STUB ICommunication_Send_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICommunication_Reciver_Proxy( 
    ICommunication __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);


void __RPC_STUB ICommunication_Reciver_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ICommunication_Clear_Proxy( 
    ICommunication __RPC_FAR * This);


void __RPC_STUB ICommunication_Clear_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICommunication_INTERFACE_DEFINED__ */


#ifndef __IBodyPacket_INTERFACE_DEFINED__
#define __IBodyPacket_INTERFACE_DEFINED__

/* interface IBodyPacket */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IBodyPacket;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("730AF596-177B-4027-9EBB-FC915E917BA2")
    IBodyPacket : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PacketID( 
            /* [retval][out] */ VARIANT __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PacketID( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ VARIANT __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ VARIANT __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ VARIANT Val) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT varIndx,
            /* [retval][out] */ VARIANT __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ACK( 
            /* [retval][out] */ VARIANT __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NAK( 
            /* [retval][out] */ VARIANT __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetACKPacket( 
            /* [in] */ VARIANT varPacketID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetNAKPacket( 
            /* [in] */ VARIANT varPacketID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IBodyPacketVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IBodyPacket __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IBodyPacket __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IBodyPacket __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IBodyPacket __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IBodyPacket __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IBodyPacket __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IBodyPacket __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_PacketID )( 
            IBodyPacket __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_PacketID )( 
            IBodyPacket __RPC_FAR * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )( 
            IBodyPacket __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Status )( 
            IBodyPacket __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Add )( 
            IBodyPacket __RPC_FAR * This,
            /* [in] */ VARIANT Val);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Item )( 
            IBodyPacket __RPC_FAR * This,
            /* [in] */ VARIANT varIndx,
            /* [retval][out] */ VARIANT __RPC_FAR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clear )( 
            IBodyPacket __RPC_FAR * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ACK )( 
            IBodyPacket __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_NAK )( 
            IBodyPacket __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetACKPacket )( 
            IBodyPacket __RPC_FAR * This,
            /* [in] */ VARIANT varPacketID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetNAKPacket )( 
            IBodyPacket __RPC_FAR * This,
            /* [in] */ VARIANT varPacketID);
        
        END_INTERFACE
    } IBodyPacketVtbl;

    interface IBodyPacket
    {
        CONST_VTBL struct IBodyPacketVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBodyPacket_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IBodyPacket_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IBodyPacket_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IBodyPacket_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IBodyPacket_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IBodyPacket_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IBodyPacket_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IBodyPacket_get_PacketID(This,pVal)	\
    (This)->lpVtbl -> get_PacketID(This,pVal)

#define IBodyPacket_put_PacketID(This,newVal)	\
    (This)->lpVtbl -> put_PacketID(This,newVal)

#define IBodyPacket_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define IBodyPacket_get_Status(This,pVal)	\
    (This)->lpVtbl -> get_Status(This,pVal)

#define IBodyPacket_Add(This,Val)	\
    (This)->lpVtbl -> Add(This,Val)

#define IBodyPacket_Item(This,varIndx,pVal)	\
    (This)->lpVtbl -> Item(This,varIndx,pVal)

#define IBodyPacket_Clear(This)	\
    (This)->lpVtbl -> Clear(This)

#define IBodyPacket_get_ACK(This,pVal)	\
    (This)->lpVtbl -> get_ACK(This,pVal)

#define IBodyPacket_get_NAK(This,pVal)	\
    (This)->lpVtbl -> get_NAK(This,pVal)

#define IBodyPacket_SetACKPacket(This,varPacketID)	\
    (This)->lpVtbl -> SetACKPacket(This,varPacketID)

#define IBodyPacket_SetNAKPacket(This,varPacketID)	\
    (This)->lpVtbl -> SetNAKPacket(This,varPacketID)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IBodyPacket_get_PacketID_Proxy( 
    IBodyPacket __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pVal);


void __RPC_STUB IBodyPacket_get_PacketID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IBodyPacket_put_PacketID_Proxy( 
    IBodyPacket __RPC_FAR * This,
    /* [in] */ VARIANT newVal);


void __RPC_STUB IBodyPacket_put_PacketID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IBodyPacket_get_Count_Proxy( 
    IBodyPacket __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pVal);


void __RPC_STUB IBodyPacket_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IBodyPacket_get_Status_Proxy( 
    IBodyPacket __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pVal);


void __RPC_STUB IBodyPacket_get_Status_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IBodyPacket_Add_Proxy( 
    IBodyPacket __RPC_FAR * This,
    /* [in] */ VARIANT Val);


void __RPC_STUB IBodyPacket_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IBodyPacket_Item_Proxy( 
    IBodyPacket __RPC_FAR * This,
    /* [in] */ VARIANT varIndx,
    /* [retval][out] */ VARIANT __RPC_FAR *pVal);


void __RPC_STUB IBodyPacket_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IBodyPacket_Clear_Proxy( 
    IBodyPacket __RPC_FAR * This);


void __RPC_STUB IBodyPacket_Clear_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IBodyPacket_get_ACK_Proxy( 
    IBodyPacket __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pVal);


void __RPC_STUB IBodyPacket_get_ACK_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IBodyPacket_get_NAK_Proxy( 
    IBodyPacket __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pVal);


void __RPC_STUB IBodyPacket_get_NAK_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IBodyPacket_SetACKPacket_Proxy( 
    IBodyPacket __RPC_FAR * This,
    /* [in] */ VARIANT varPacketID);


void __RPC_STUB IBodyPacket_SetACKPacket_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IBodyPacket_SetNAKPacket_Proxy( 
    IBodyPacket __RPC_FAR * This,
    /* [in] */ VARIANT varPacketID);


void __RPC_STUB IBodyPacket_SetNAKPacket_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IBodyPacket_INTERFACE_DEFINED__ */


#ifndef __IHelperBodyPacket_INTERFACE_DEFINED__
#define __IHelperBodyPacket_INTERFACE_DEFINED__

/* interface IHelperBodyPacket */
/* [unique][helpstring][dual][uuid][object] */ 




EXTERN_C const IID IID_IHelperBodyPacket;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("294A611D-EA91-4754-B929-41A737BF1B6C")
    IHelperBodyPacket : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetAccess( 
            BODYPACKET_ACCESS mode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetStatus( 
            BOOL bStat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCRC( 
            VARIANT __RPC_FAR *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _Import( 
            /* [in] */ long xsize,
            /* [size_is][in] */ byte __RPC_FAR arr[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _Export( 
            /* [out] */ long __RPC_FAR *xsize,
            /* [size_is][size_is][out] */ byte __RPC_FAR *__RPC_FAR *arr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _Exchange( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHelperBodyPacketVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IHelperBodyPacket __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IHelperBodyPacket __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IHelperBodyPacket __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetAccess )( 
            IHelperBodyPacket __RPC_FAR * This,
            BODYPACKET_ACCESS mode);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetStatus )( 
            IHelperBodyPacket __RPC_FAR * This,
            BOOL bStat);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCRC )( 
            IHelperBodyPacket __RPC_FAR * This,
            VARIANT __RPC_FAR *pVal);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *_Import )( 
            IHelperBodyPacket __RPC_FAR * This,
            /* [in] */ long xsize,
            /* [size_is][in] */ byte __RPC_FAR arr[  ]);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *_Export )( 
            IHelperBodyPacket __RPC_FAR * This,
            /* [out] */ long __RPC_FAR *xsize,
            /* [size_is][size_is][out] */ byte __RPC_FAR *__RPC_FAR *arr);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *_Exchange )( 
            IHelperBodyPacket __RPC_FAR * This);
        
        END_INTERFACE
    } IHelperBodyPacketVtbl;

    interface IHelperBodyPacket
    {
        CONST_VTBL struct IHelperBodyPacketVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHelperBodyPacket_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IHelperBodyPacket_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IHelperBodyPacket_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IHelperBodyPacket_SetAccess(This,mode)	\
    (This)->lpVtbl -> SetAccess(This,mode)

#define IHelperBodyPacket_SetStatus(This,bStat)	\
    (This)->lpVtbl -> SetStatus(This,bStat)

#define IHelperBodyPacket_GetCRC(This,pVal)	\
    (This)->lpVtbl -> GetCRC(This,pVal)

#define IHelperBodyPacket__Import(This,xsize,arr)	\
    (This)->lpVtbl -> _Import(This,xsize,arr)

#define IHelperBodyPacket__Export(This,xsize,arr)	\
    (This)->lpVtbl -> _Export(This,xsize,arr)

#define IHelperBodyPacket__Exchange(This)	\
    (This)->lpVtbl -> _Exchange(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IHelperBodyPacket_SetAccess_Proxy( 
    IHelperBodyPacket __RPC_FAR * This,
    BODYPACKET_ACCESS mode);


void __RPC_STUB IHelperBodyPacket_SetAccess_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IHelperBodyPacket_SetStatus_Proxy( 
    IHelperBodyPacket __RPC_FAR * This,
    BOOL bStat);


void __RPC_STUB IHelperBodyPacket_SetStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IHelperBodyPacket_GetCRC_Proxy( 
    IHelperBodyPacket __RPC_FAR * This,
    VARIANT __RPC_FAR *pVal);


void __RPC_STUB IHelperBodyPacket_GetCRC_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IHelperBodyPacket__Import_Proxy( 
    IHelperBodyPacket __RPC_FAR * This,
    /* [in] */ long xsize,
    /* [size_is][in] */ byte __RPC_FAR arr[  ]);


void __RPC_STUB IHelperBodyPacket__Import_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IHelperBodyPacket__Export_Proxy( 
    IHelperBodyPacket __RPC_FAR * This,
    /* [out] */ long __RPC_FAR *xsize,
    /* [size_is][size_is][out] */ byte __RPC_FAR *__RPC_FAR *arr);


void __RPC_STUB IHelperBodyPacket__Export_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IHelperBodyPacket__Exchange_Proxy( 
    IHelperBodyPacket __RPC_FAR * This);


void __RPC_STUB IHelperBodyPacket__Exchange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IHelperBodyPacket_INTERFACE_DEFINED__ */


#ifndef __IApplication_INTERFACE_DEFINED__
#define __IApplication_INTERFACE_DEFINED__

/* interface IApplication */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IApplication;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("16E7C83B-CFDA-49AD-AA14-CEBDDAC4F845")
    IApplication : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propputref] */ HRESULT STDMETHODCALLTYPE putref_Communication( 
            /* [in] */ IDispatch __RPC_FAR *newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProductData( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProtocolArray( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cmnd_Abort_Transfer( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cmnd_Turn_Off_Pwr( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cmnd_Start_Pvt_Data( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cmnd_Stop_Pvt_Data( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cmnd_Get_Transfer_Alm( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cmnd_Get_Transfer_Posn( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cmnd_Get_Transfer_Prx( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cmnd_Get_Transfer_Rte( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cmnd_Get_Transfer_Time( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cmnd_Get_Transfer_Trk( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cmnd_Get_Transfer_Wpt( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cmnd_Get_FlightBook_Transfer( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cmnd_Get_Transfer_Laps( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cmnd_Set_Transfer_Alm( 
            /* [in] */ IDispatch __RPC_FAR *pdisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cmnd_Set_Transfer_Posn( 
            /* [in] */ IDispatch __RPC_FAR *pdisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cmnd_Set_Transfer_Prx( 
            /* [in] */ IDispatch __RPC_FAR *pdisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cmnd_Set_Transfer_Rte( 
            /* [in] */ IDispatch __RPC_FAR *pdisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cmnd_Set_Transfer_Time( 
            /* [in] */ IDispatch __RPC_FAR *pdisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cmnd_Set_Transfer_Trk( 
            /* [in] */ IDispatch __RPC_FAR *pdisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cmnd_Set_Transfer_Wpt( 
            /* [in] */ IDispatch __RPC_FAR *pdisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cmnd_Set_FlightBook_Transfer( 
            /* [in] */ IDispatch __RPC_FAR *pdisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cmnd_Set_Transfer_Laps( 
            /* [in] */ IDispatch __RPC_FAR *pdisp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateBodyPacket( 
            /* [in] */ BSTR pid_name,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Native( 
            /* [retval][out] */ BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Native( 
            /* [in] */ BOOL newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IApplicationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IApplication __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IApplication __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IApplication __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IApplication __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IApplication __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IApplication __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IApplication __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propputref] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *putref_Communication )( 
            IApplication __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ProductData )( 
            IApplication __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ProtocolArray )( 
            IApplication __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Cmnd_Abort_Transfer )( 
            IApplication __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Cmnd_Turn_Off_Pwr )( 
            IApplication __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Cmnd_Start_Pvt_Data )( 
            IApplication __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Cmnd_Stop_Pvt_Data )( 
            IApplication __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Cmnd_Get_Transfer_Alm )( 
            IApplication __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Cmnd_Get_Transfer_Posn )( 
            IApplication __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Cmnd_Get_Transfer_Prx )( 
            IApplication __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Cmnd_Get_Transfer_Rte )( 
            IApplication __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Cmnd_Get_Transfer_Time )( 
            IApplication __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Cmnd_Get_Transfer_Trk )( 
            IApplication __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Cmnd_Get_Transfer_Wpt )( 
            IApplication __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Cmnd_Get_FlightBook_Transfer )( 
            IApplication __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Cmnd_Get_Transfer_Laps )( 
            IApplication __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Cmnd_Set_Transfer_Alm )( 
            IApplication __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *pdisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Cmnd_Set_Transfer_Posn )( 
            IApplication __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *pdisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Cmnd_Set_Transfer_Prx )( 
            IApplication __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *pdisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Cmnd_Set_Transfer_Rte )( 
            IApplication __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *pdisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Cmnd_Set_Transfer_Time )( 
            IApplication __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *pdisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Cmnd_Set_Transfer_Trk )( 
            IApplication __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *pdisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Cmnd_Set_Transfer_Wpt )( 
            IApplication __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *pdisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Cmnd_Set_FlightBook_Transfer )( 
            IApplication __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *pdisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Cmnd_Set_Transfer_Laps )( 
            IApplication __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *pdisp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateBodyPacket )( 
            IApplication __RPC_FAR * This,
            /* [in] */ BSTR pid_name,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Native )( 
            IApplication __RPC_FAR * This,
            /* [retval][out] */ BOOL __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Native )( 
            IApplication __RPC_FAR * This,
            /* [in] */ BOOL newVal);
        
        END_INTERFACE
    } IApplicationVtbl;

    interface IApplication
    {
        CONST_VTBL struct IApplicationVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplication_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IApplication_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IApplication_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IApplication_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IApplication_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IApplication_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IApplication_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IApplication_putref_Communication(This,newVal)	\
    (This)->lpVtbl -> putref_Communication(This,newVal)

#define IApplication_get_ProductData(This,pVal)	\
    (This)->lpVtbl -> get_ProductData(This,pVal)

#define IApplication_get_ProtocolArray(This,pVal)	\
    (This)->lpVtbl -> get_ProtocolArray(This,pVal)

#define IApplication_Cmnd_Abort_Transfer(This)	\
    (This)->lpVtbl -> Cmnd_Abort_Transfer(This)

#define IApplication_Cmnd_Turn_Off_Pwr(This)	\
    (This)->lpVtbl -> Cmnd_Turn_Off_Pwr(This)

#define IApplication_Cmnd_Start_Pvt_Data(This)	\
    (This)->lpVtbl -> Cmnd_Start_Pvt_Data(This)

#define IApplication_Cmnd_Stop_Pvt_Data(This)	\
    (This)->lpVtbl -> Cmnd_Stop_Pvt_Data(This)

#define IApplication_Cmnd_Get_Transfer_Alm(This,ppdisp)	\
    (This)->lpVtbl -> Cmnd_Get_Transfer_Alm(This,ppdisp)

#define IApplication_Cmnd_Get_Transfer_Posn(This,ppdisp)	\
    (This)->lpVtbl -> Cmnd_Get_Transfer_Posn(This,ppdisp)

#define IApplication_Cmnd_Get_Transfer_Prx(This,ppdisp)	\
    (This)->lpVtbl -> Cmnd_Get_Transfer_Prx(This,ppdisp)

#define IApplication_Cmnd_Get_Transfer_Rte(This,ppdisp)	\
    (This)->lpVtbl -> Cmnd_Get_Transfer_Rte(This,ppdisp)

#define IApplication_Cmnd_Get_Transfer_Time(This,ppdisp)	\
    (This)->lpVtbl -> Cmnd_Get_Transfer_Time(This,ppdisp)

#define IApplication_Cmnd_Get_Transfer_Trk(This,ppdisp)	\
    (This)->lpVtbl -> Cmnd_Get_Transfer_Trk(This,ppdisp)

#define IApplication_Cmnd_Get_Transfer_Wpt(This,ppdisp)	\
    (This)->lpVtbl -> Cmnd_Get_Transfer_Wpt(This,ppdisp)

#define IApplication_Cmnd_Get_FlightBook_Transfer(This,ppdisp)	\
    (This)->lpVtbl -> Cmnd_Get_FlightBook_Transfer(This,ppdisp)

#define IApplication_Cmnd_Get_Transfer_Laps(This,ppdisp)	\
    (This)->lpVtbl -> Cmnd_Get_Transfer_Laps(This,ppdisp)

#define IApplication_Cmnd_Set_Transfer_Alm(This,pdisp)	\
    (This)->lpVtbl -> Cmnd_Set_Transfer_Alm(This,pdisp)

#define IApplication_Cmnd_Set_Transfer_Posn(This,pdisp)	\
    (This)->lpVtbl -> Cmnd_Set_Transfer_Posn(This,pdisp)

#define IApplication_Cmnd_Set_Transfer_Prx(This,pdisp)	\
    (This)->lpVtbl -> Cmnd_Set_Transfer_Prx(This,pdisp)

#define IApplication_Cmnd_Set_Transfer_Rte(This,pdisp)	\
    (This)->lpVtbl -> Cmnd_Set_Transfer_Rte(This,pdisp)

#define IApplication_Cmnd_Set_Transfer_Time(This,pdisp)	\
    (This)->lpVtbl -> Cmnd_Set_Transfer_Time(This,pdisp)

#define IApplication_Cmnd_Set_Transfer_Trk(This,pdisp)	\
    (This)->lpVtbl -> Cmnd_Set_Transfer_Trk(This,pdisp)

#define IApplication_Cmnd_Set_Transfer_Wpt(This,pdisp)	\
    (This)->lpVtbl -> Cmnd_Set_Transfer_Wpt(This,pdisp)

#define IApplication_Cmnd_Set_FlightBook_Transfer(This,pdisp)	\
    (This)->lpVtbl -> Cmnd_Set_FlightBook_Transfer(This,pdisp)

#define IApplication_Cmnd_Set_Transfer_Laps(This,pdisp)	\
    (This)->lpVtbl -> Cmnd_Set_Transfer_Laps(This,pdisp)

#define IApplication_CreateBodyPacket(This,pid_name,ppdisp)	\
    (This)->lpVtbl -> CreateBodyPacket(This,pid_name,ppdisp)

#define IApplication_get_Native(This,pVal)	\
    (This)->lpVtbl -> get_Native(This,pVal)

#define IApplication_put_Native(This,newVal)	\
    (This)->lpVtbl -> put_Native(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propputref] */ HRESULT STDMETHODCALLTYPE IApplication_putref_Communication_Proxy( 
    IApplication __RPC_FAR * This,
    /* [in] */ IDispatch __RPC_FAR *newVal);


void __RPC_STUB IApplication_putref_Communication_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IApplication_get_ProductData_Proxy( 
    IApplication __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);


void __RPC_STUB IApplication_get_ProductData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IApplication_get_ProtocolArray_Proxy( 
    IApplication __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);


void __RPC_STUB IApplication_get_ProtocolArray_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_Cmnd_Abort_Transfer_Proxy( 
    IApplication __RPC_FAR * This);


void __RPC_STUB IApplication_Cmnd_Abort_Transfer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_Cmnd_Turn_Off_Pwr_Proxy( 
    IApplication __RPC_FAR * This);


void __RPC_STUB IApplication_Cmnd_Turn_Off_Pwr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_Cmnd_Start_Pvt_Data_Proxy( 
    IApplication __RPC_FAR * This);


void __RPC_STUB IApplication_Cmnd_Start_Pvt_Data_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_Cmnd_Stop_Pvt_Data_Proxy( 
    IApplication __RPC_FAR * This);


void __RPC_STUB IApplication_Cmnd_Stop_Pvt_Data_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_Cmnd_Get_Transfer_Alm_Proxy( 
    IApplication __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);


void __RPC_STUB IApplication_Cmnd_Get_Transfer_Alm_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_Cmnd_Get_Transfer_Posn_Proxy( 
    IApplication __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);


void __RPC_STUB IApplication_Cmnd_Get_Transfer_Posn_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_Cmnd_Get_Transfer_Prx_Proxy( 
    IApplication __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);


void __RPC_STUB IApplication_Cmnd_Get_Transfer_Prx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_Cmnd_Get_Transfer_Rte_Proxy( 
    IApplication __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);


void __RPC_STUB IApplication_Cmnd_Get_Transfer_Rte_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_Cmnd_Get_Transfer_Time_Proxy( 
    IApplication __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);


void __RPC_STUB IApplication_Cmnd_Get_Transfer_Time_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_Cmnd_Get_Transfer_Trk_Proxy( 
    IApplication __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);


void __RPC_STUB IApplication_Cmnd_Get_Transfer_Trk_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_Cmnd_Get_Transfer_Wpt_Proxy( 
    IApplication __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);


void __RPC_STUB IApplication_Cmnd_Get_Transfer_Wpt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_Cmnd_Get_FlightBook_Transfer_Proxy( 
    IApplication __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);


void __RPC_STUB IApplication_Cmnd_Get_FlightBook_Transfer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_Cmnd_Get_Transfer_Laps_Proxy( 
    IApplication __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);


void __RPC_STUB IApplication_Cmnd_Get_Transfer_Laps_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_Cmnd_Set_Transfer_Alm_Proxy( 
    IApplication __RPC_FAR * This,
    /* [in] */ IDispatch __RPC_FAR *pdisp);


void __RPC_STUB IApplication_Cmnd_Set_Transfer_Alm_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_Cmnd_Set_Transfer_Posn_Proxy( 
    IApplication __RPC_FAR * This,
    /* [in] */ IDispatch __RPC_FAR *pdisp);


void __RPC_STUB IApplication_Cmnd_Set_Transfer_Posn_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_Cmnd_Set_Transfer_Prx_Proxy( 
    IApplication __RPC_FAR * This,
    /* [in] */ IDispatch __RPC_FAR *pdisp);


void __RPC_STUB IApplication_Cmnd_Set_Transfer_Prx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_Cmnd_Set_Transfer_Rte_Proxy( 
    IApplication __RPC_FAR * This,
    /* [in] */ IDispatch __RPC_FAR *pdisp);


void __RPC_STUB IApplication_Cmnd_Set_Transfer_Rte_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_Cmnd_Set_Transfer_Time_Proxy( 
    IApplication __RPC_FAR * This,
    /* [in] */ IDispatch __RPC_FAR *pdisp);


void __RPC_STUB IApplication_Cmnd_Set_Transfer_Time_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_Cmnd_Set_Transfer_Trk_Proxy( 
    IApplication __RPC_FAR * This,
    /* [in] */ IDispatch __RPC_FAR *pdisp);


void __RPC_STUB IApplication_Cmnd_Set_Transfer_Trk_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_Cmnd_Set_Transfer_Wpt_Proxy( 
    IApplication __RPC_FAR * This,
    /* [in] */ IDispatch __RPC_FAR *pdisp);


void __RPC_STUB IApplication_Cmnd_Set_Transfer_Wpt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_Cmnd_Set_FlightBook_Transfer_Proxy( 
    IApplication __RPC_FAR * This,
    /* [in] */ IDispatch __RPC_FAR *pdisp);


void __RPC_STUB IApplication_Cmnd_Set_FlightBook_Transfer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_Cmnd_Set_Transfer_Laps_Proxy( 
    IApplication __RPC_FAR * This,
    /* [in] */ IDispatch __RPC_FAR *pdisp);


void __RPC_STUB IApplication_Cmnd_Set_Transfer_Laps_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IApplication_CreateBodyPacket_Proxy( 
    IApplication __RPC_FAR * This,
    /* [in] */ BSTR pid_name,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);


void __RPC_STUB IApplication_CreateBodyPacket_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IApplication_get_Native_Proxy( 
    IApplication __RPC_FAR * This,
    /* [retval][out] */ BOOL __RPC_FAR *pVal);


void __RPC_STUB IApplication_get_Native_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IApplication_put_Native_Proxy( 
    IApplication __RPC_FAR * This,
    /* [in] */ BOOL newVal);


void __RPC_STUB IApplication_put_Native_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IApplication_INTERFACE_DEFINED__ */


#ifndef __IProtocolArray_INTERFACE_DEFINED__
#define __IProtocolArray_INTERFACE_DEFINED__

/* interface IProtocolArray */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IProtocolArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("18228139-1608-40F8-A9B4-E36782CA4ACE")
    IProtocolArray : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ long indx,
            /* [retval][out] */ VARIANT __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Waypoint_Transfer_Protocol( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Route_Transfer_Protocol( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Track_Log_Transfer_Protocol( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Proximity_Waypoint_Transfer_Protocol( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Almanac_Transfer_Protocol( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Date_and_Time_Initialization_Protocol( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FlightBook_Transfer_Protocol( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Position_Initialization_Protocol( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PVT_Data_Protocol( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Lap_Transfer_Protocol( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Link_Protocol( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Device_Command_Protocol( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Physical_Protocol( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Waypoint_Data_Type( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Route_Header_Data_Type( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Route_Waypoint_Data_Type( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Route_Link_Data_Type( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Almanac_Data_Type( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Track_Header_Data_Type( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Track_Data_Type( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PVT_Data_Type( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FlightBook_Data_Type( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Lap_Data_Type( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Position_Data_Type( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Date_Time_Data_Type( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Proximity_Waypoint_Data_Type( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IProtocolArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IProtocolArray __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IProtocolArray __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IProtocolArray __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IProtocolArray __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IProtocolArray __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IProtocolArray __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IProtocolArray __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Item )( 
            IProtocolArray __RPC_FAR * This,
            /* [in] */ long indx,
            /* [retval][out] */ VARIANT __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Waypoint_Transfer_Protocol )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Route_Transfer_Protocol )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Track_Log_Transfer_Protocol )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Proximity_Waypoint_Transfer_Protocol )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Almanac_Transfer_Protocol )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Date_and_Time_Initialization_Protocol )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_FlightBook_Transfer_Protocol )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Position_Initialization_Protocol )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_PVT_Data_Protocol )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Lap_Transfer_Protocol )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Link_Protocol )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Device_Command_Protocol )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Physical_Protocol )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Waypoint_Data_Type )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Route_Header_Data_Type )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Route_Waypoint_Data_Type )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Route_Link_Data_Type )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Almanac_Data_Type )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Track_Header_Data_Type )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Track_Data_Type )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_PVT_Data_Type )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_FlightBook_Data_Type )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Lap_Data_Type )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Position_Data_Type )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Date_Time_Data_Type )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Proximity_Waypoint_Data_Type )( 
            IProtocolArray __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        END_INTERFACE
    } IProtocolArrayVtbl;

    interface IProtocolArray
    {
        CONST_VTBL struct IProtocolArrayVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IProtocolArray_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IProtocolArray_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IProtocolArray_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IProtocolArray_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IProtocolArray_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IProtocolArray_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IProtocolArray_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IProtocolArray_Item(This,indx,pVal)	\
    (This)->lpVtbl -> Item(This,indx,pVal)

#define IProtocolArray_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define IProtocolArray_get_Waypoint_Transfer_Protocol(This,pVal)	\
    (This)->lpVtbl -> get_Waypoint_Transfer_Protocol(This,pVal)

#define IProtocolArray_get_Route_Transfer_Protocol(This,pVal)	\
    (This)->lpVtbl -> get_Route_Transfer_Protocol(This,pVal)

#define IProtocolArray_get_Track_Log_Transfer_Protocol(This,pVal)	\
    (This)->lpVtbl -> get_Track_Log_Transfer_Protocol(This,pVal)

#define IProtocolArray_get_Proximity_Waypoint_Transfer_Protocol(This,pVal)	\
    (This)->lpVtbl -> get_Proximity_Waypoint_Transfer_Protocol(This,pVal)

#define IProtocolArray_get_Almanac_Transfer_Protocol(This,pVal)	\
    (This)->lpVtbl -> get_Almanac_Transfer_Protocol(This,pVal)

#define IProtocolArray_get_Date_and_Time_Initialization_Protocol(This,pVal)	\
    (This)->lpVtbl -> get_Date_and_Time_Initialization_Protocol(This,pVal)

#define IProtocolArray_get_FlightBook_Transfer_Protocol(This,pVal)	\
    (This)->lpVtbl -> get_FlightBook_Transfer_Protocol(This,pVal)

#define IProtocolArray_get_Position_Initialization_Protocol(This,pVal)	\
    (This)->lpVtbl -> get_Position_Initialization_Protocol(This,pVal)

#define IProtocolArray_get_PVT_Data_Protocol(This,pVal)	\
    (This)->lpVtbl -> get_PVT_Data_Protocol(This,pVal)

#define IProtocolArray_get_Lap_Transfer_Protocol(This,pVal)	\
    (This)->lpVtbl -> get_Lap_Transfer_Protocol(This,pVal)

#define IProtocolArray_get_Link_Protocol(This,pVal)	\
    (This)->lpVtbl -> get_Link_Protocol(This,pVal)

#define IProtocolArray_get_Device_Command_Protocol(This,pVal)	\
    (This)->lpVtbl -> get_Device_Command_Protocol(This,pVal)

#define IProtocolArray_get_Physical_Protocol(This,pVal)	\
    (This)->lpVtbl -> get_Physical_Protocol(This,pVal)

#define IProtocolArray_get_Waypoint_Data_Type(This,pVal)	\
    (This)->lpVtbl -> get_Waypoint_Data_Type(This,pVal)

#define IProtocolArray_get_Route_Header_Data_Type(This,pVal)	\
    (This)->lpVtbl -> get_Route_Header_Data_Type(This,pVal)

#define IProtocolArray_get_Route_Waypoint_Data_Type(This,pVal)	\
    (This)->lpVtbl -> get_Route_Waypoint_Data_Type(This,pVal)

#define IProtocolArray_get_Route_Link_Data_Type(This,pVal)	\
    (This)->lpVtbl -> get_Route_Link_Data_Type(This,pVal)

#define IProtocolArray_get_Almanac_Data_Type(This,pVal)	\
    (This)->lpVtbl -> get_Almanac_Data_Type(This,pVal)

#define IProtocolArray_get_Track_Header_Data_Type(This,pVal)	\
    (This)->lpVtbl -> get_Track_Header_Data_Type(This,pVal)

#define IProtocolArray_get_Track_Data_Type(This,pVal)	\
    (This)->lpVtbl -> get_Track_Data_Type(This,pVal)

#define IProtocolArray_get_PVT_Data_Type(This,pVal)	\
    (This)->lpVtbl -> get_PVT_Data_Type(This,pVal)

#define IProtocolArray_get_FlightBook_Data_Type(This,pVal)	\
    (This)->lpVtbl -> get_FlightBook_Data_Type(This,pVal)

#define IProtocolArray_get_Lap_Data_Type(This,pVal)	\
    (This)->lpVtbl -> get_Lap_Data_Type(This,pVal)

#define IProtocolArray_get_Position_Data_Type(This,pVal)	\
    (This)->lpVtbl -> get_Position_Data_Type(This,pVal)

#define IProtocolArray_get_Date_Time_Data_Type(This,pVal)	\
    (This)->lpVtbl -> get_Date_Time_Data_Type(This,pVal)

#define IProtocolArray_get_Proximity_Waypoint_Data_Type(This,pVal)	\
    (This)->lpVtbl -> get_Proximity_Waypoint_Data_Type(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IProtocolArray_Item_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [in] */ long indx,
    /* [retval][out] */ VARIANT __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Count_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Waypoint_Transfer_Protocol_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_Waypoint_Transfer_Protocol_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Route_Transfer_Protocol_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_Route_Transfer_Protocol_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Track_Log_Transfer_Protocol_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_Track_Log_Transfer_Protocol_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Proximity_Waypoint_Transfer_Protocol_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_Proximity_Waypoint_Transfer_Protocol_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Almanac_Transfer_Protocol_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_Almanac_Transfer_Protocol_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Date_and_Time_Initialization_Protocol_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_Date_and_Time_Initialization_Protocol_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_FlightBook_Transfer_Protocol_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_FlightBook_Transfer_Protocol_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Position_Initialization_Protocol_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_Position_Initialization_Protocol_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_PVT_Data_Protocol_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_PVT_Data_Protocol_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Lap_Transfer_Protocol_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_Lap_Transfer_Protocol_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Link_Protocol_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_Link_Protocol_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Device_Command_Protocol_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_Device_Command_Protocol_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Physical_Protocol_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_Physical_Protocol_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Waypoint_Data_Type_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_Waypoint_Data_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Route_Header_Data_Type_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_Route_Header_Data_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Route_Waypoint_Data_Type_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_Route_Waypoint_Data_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Route_Link_Data_Type_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_Route_Link_Data_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Almanac_Data_Type_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_Almanac_Data_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Track_Header_Data_Type_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_Track_Header_Data_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Track_Data_Type_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_Track_Data_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_PVT_Data_Type_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_PVT_Data_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_FlightBook_Data_Type_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_FlightBook_Data_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Lap_Data_Type_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_Lap_Data_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Position_Data_Type_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_Position_Data_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Date_Time_Data_Type_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_Date_Time_Data_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProtocolArray_get_Proximity_Waypoint_Data_Type_Proxy( 
    IProtocolArray __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IProtocolArray_get_Proximity_Waypoint_Data_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IProtocolArray_INTERFACE_DEFINED__ */


#ifndef __IHelperProtocolArray_INTERFACE_DEFINED__
#define __IHelperProtocolArray_INTERFACE_DEFINED__

/* interface IHelperProtocolArray */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IHelperProtocolArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AE0EAE18-04FF-4ddc-9F79-C2F1D8DDC865")
    IHelperProtocolArray : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Add( 
            BSTR Val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHelperProtocolArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IHelperProtocolArray __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IHelperProtocolArray __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IHelperProtocolArray __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Add )( 
            IHelperProtocolArray __RPC_FAR * This,
            BSTR Val);
        
        END_INTERFACE
    } IHelperProtocolArrayVtbl;

    interface IHelperProtocolArray
    {
        CONST_VTBL struct IHelperProtocolArrayVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHelperProtocolArray_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IHelperProtocolArray_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IHelperProtocolArray_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IHelperProtocolArray_Add(This,Val)	\
    (This)->lpVtbl -> Add(This,Val)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IHelperProtocolArray_Add_Proxy( 
    IHelperProtocolArray __RPC_FAR * This,
    BSTR Val);


void __RPC_STUB IHelperProtocolArray_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IHelperProtocolArray_INTERFACE_DEFINED__ */


#ifndef __IProductData_INTERFACE_DEFINED__
#define __IProductData_INTERFACE_DEFINED__

/* interface IProductData */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IProductData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("751F1E73-4CFA-4F84-A8B1-F08F10DEDBCF")
    IProductData : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_product_ID( 
            /* [retval][out] */ int __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_software_version( 
            /* [retval][out] */ int __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_product_description( 
            /* [retval][out] */ VARIANT __RPC_FAR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IProductDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IProductData __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IProductData __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IProductData __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IProductData __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IProductData __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IProductData __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IProductData __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_product_ID )( 
            IProductData __RPC_FAR * This,
            /* [retval][out] */ int __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_software_version )( 
            IProductData __RPC_FAR * This,
            /* [retval][out] */ int __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_product_description )( 
            IProductData __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pVal);
        
        END_INTERFACE
    } IProductDataVtbl;

    interface IProductData
    {
        CONST_VTBL struct IProductDataVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IProductData_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IProductData_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IProductData_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IProductData_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IProductData_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IProductData_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IProductData_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IProductData_get_product_ID(This,pVal)	\
    (This)->lpVtbl -> get_product_ID(This,pVal)

#define IProductData_get_software_version(This,pVal)	\
    (This)->lpVtbl -> get_software_version(This,pVal)

#define IProductData_get_product_description(This,pVal)	\
    (This)->lpVtbl -> get_product_description(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProductData_get_product_ID_Proxy( 
    IProductData __RPC_FAR * This,
    /* [retval][out] */ int __RPC_FAR *pVal);


void __RPC_STUB IProductData_get_product_ID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProductData_get_software_version_Proxy( 
    IProductData __RPC_FAR * This,
    /* [retval][out] */ int __RPC_FAR *pVal);


void __RPC_STUB IProductData_get_software_version_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IProductData_get_product_description_Proxy( 
    IProductData __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pVal);


void __RPC_STUB IProductData_get_product_description_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IProductData_INTERFACE_DEFINED__ */


#ifndef __IHelperProductData_INTERFACE_DEFINED__
#define __IHelperProductData_INTERFACE_DEFINED__

/* interface IHelperProductData */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IHelperProductData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B49BCD69-C0AA-4ca3-BC63-091E29A7D23E")
    IHelperProductData : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetProductDescription( 
            BSTR desc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSoftwareVersion( 
            int val) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProductID( 
            int val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHelperProductDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IHelperProductData __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IHelperProductData __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IHelperProductData __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetProductDescription )( 
            IHelperProductData __RPC_FAR * This,
            BSTR desc);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetSoftwareVersion )( 
            IHelperProductData __RPC_FAR * This,
            int val);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetProductID )( 
            IHelperProductData __RPC_FAR * This,
            int val);
        
        END_INTERFACE
    } IHelperProductDataVtbl;

    interface IHelperProductData
    {
        CONST_VTBL struct IHelperProductDataVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHelperProductData_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IHelperProductData_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IHelperProductData_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IHelperProductData_SetProductDescription(This,desc)	\
    (This)->lpVtbl -> SetProductDescription(This,desc)

#define IHelperProductData_SetSoftwareVersion(This,val)	\
    (This)->lpVtbl -> SetSoftwareVersion(This,val)

#define IHelperProductData_SetProductID(This,val)	\
    (This)->lpVtbl -> SetProductID(This,val)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IHelperProductData_SetProductDescription_Proxy( 
    IHelperProductData __RPC_FAR * This,
    BSTR desc);


void __RPC_STUB IHelperProductData_SetProductDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IHelperProductData_SetSoftwareVersion_Proxy( 
    IHelperProductData __RPC_FAR * This,
    int val);


void __RPC_STUB IHelperProductData_SetSoftwareVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IHelperProductData_SetProductID_Proxy( 
    IHelperProductData __RPC_FAR * This,
    int val);


void __RPC_STUB IHelperProductData_SetProductID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IHelperProductData_INTERFACE_DEFINED__ */


#ifndef __IBodyPackets_INTERFACE_DEFINED__
#define __IBodyPackets_INTERFACE_DEFINED__

/* interface IBodyPackets */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IBodyPackets;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F7F3D000-CBB7-41C0-8D89-60517B335475")
    IBodyPackets : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ long index,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IDispatch __RPC_FAR *pnewBodyPacket) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long Index) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN __RPC_FAR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IBodyPacketsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IBodyPackets __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IBodyPackets __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IBodyPackets __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IBodyPackets __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IBodyPackets __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IBodyPackets __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IBodyPackets __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Item )( 
            IBodyPackets __RPC_FAR * This,
            /* [in] */ long index,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )( 
            IBodyPackets __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Add )( 
            IBodyPackets __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *pnewBodyPacket);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Remove )( 
            IBodyPackets __RPC_FAR * This,
            /* [in] */ long Index);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__NewEnum )( 
            IBodyPackets __RPC_FAR * This,
            /* [retval][out] */ LPUNKNOWN __RPC_FAR *pVal);
        
        END_INTERFACE
    } IBodyPacketsVtbl;

    interface IBodyPackets
    {
        CONST_VTBL struct IBodyPacketsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBodyPackets_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IBodyPackets_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IBodyPackets_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IBodyPackets_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IBodyPackets_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IBodyPackets_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IBodyPackets_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IBodyPackets_Item(This,index,ppdisp)	\
    (This)->lpVtbl -> Item(This,index,ppdisp)

#define IBodyPackets_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define IBodyPackets_Add(This,pnewBodyPacket)	\
    (This)->lpVtbl -> Add(This,pnewBodyPacket)

#define IBodyPackets_Remove(This,Index)	\
    (This)->lpVtbl -> Remove(This,Index)

#define IBodyPackets_get__NewEnum(This,pVal)	\
    (This)->lpVtbl -> get__NewEnum(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IBodyPackets_Item_Proxy( 
    IBodyPackets __RPC_FAR * This,
    /* [in] */ long index,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);


void __RPC_STUB IBodyPackets_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IBodyPackets_get_Count_Proxy( 
    IBodyPackets __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IBodyPackets_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IBodyPackets_Add_Proxy( 
    IBodyPackets __RPC_FAR * This,
    /* [in] */ IDispatch __RPC_FAR *pnewBodyPacket);


void __RPC_STUB IBodyPackets_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IBodyPackets_Remove_Proxy( 
    IBodyPackets __RPC_FAR * This,
    /* [in] */ long Index);


void __RPC_STUB IBodyPackets_Remove_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IBodyPackets_get__NewEnum_Proxy( 
    IBodyPackets __RPC_FAR * This,
    /* [retval][out] */ LPUNKNOWN __RPC_FAR *pVal);


void __RPC_STUB IBodyPackets_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IBodyPackets_INTERFACE_DEFINED__ */


#ifndef __IPrimitive_INTERFACE_DEFINED__
#define __IPrimitive_INTERFACE_DEFINED__

/* interface IPrimitive */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IPrimitive;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EBDD5B58-3169-4D98-84F7-88D1DE9BBF85")
    IPrimitive : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ VARIANT Val) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ VARIANT __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_gfloat( 
            /* [retval][out] */ float __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_gfloat( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_gdouble( 
            /* [retval][out] */ double __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_gdouble( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_glong( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_glong( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_gint( 
            /* [retval][out] */ short __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_gint( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_gword( 
            /* [retval][out] */ unsigned short __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_gword( 
            /* [in] */ unsigned short newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_glongword( 
            /* [retval][out] */ unsigned long __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_glongword( 
            /* [in] */ unsigned long newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ long Indx,
            /* [retval][out] */ VARIANT __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_gsemicircles( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_gsemicircles( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_gradians( 
            /* [retval][out] */ double __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_gradians( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_gdegrees_from_semicircles( 
            /* [retval][out] */ double __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_gdegrees_from_radians( 
            /* [retval][out] */ double __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_gdegrees( 
            /* [in] */ double newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPrimitiveVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPrimitive __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPrimitive __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPrimitive __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IPrimitive __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IPrimitive __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IPrimitive __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IPrimitive __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Add )( 
            IPrimitive __RPC_FAR * This,
            /* [in] */ VARIANT Val);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clear )( 
            IPrimitive __RPC_FAR * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )( 
            IPrimitive __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_gfloat )( 
            IPrimitive __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_gfloat )( 
            IPrimitive __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_gdouble )( 
            IPrimitive __RPC_FAR * This,
            /* [retval][out] */ double __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_gdouble )( 
            IPrimitive __RPC_FAR * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_glong )( 
            IPrimitive __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_glong )( 
            IPrimitive __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_gint )( 
            IPrimitive __RPC_FAR * This,
            /* [retval][out] */ short __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_gint )( 
            IPrimitive __RPC_FAR * This,
            /* [in] */ short newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_gword )( 
            IPrimitive __RPC_FAR * This,
            /* [retval][out] */ unsigned short __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_gword )( 
            IPrimitive __RPC_FAR * This,
            /* [in] */ unsigned short newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_glongword )( 
            IPrimitive __RPC_FAR * This,
            /* [retval][out] */ unsigned long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_glongword )( 
            IPrimitive __RPC_FAR * This,
            /* [in] */ unsigned long newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Item )( 
            IPrimitive __RPC_FAR * This,
            /* [in] */ long Indx,
            /* [retval][out] */ VARIANT __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_gsemicircles )( 
            IPrimitive __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_gsemicircles )( 
            IPrimitive __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_gradians )( 
            IPrimitive __RPC_FAR * This,
            /* [retval][out] */ double __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_gradians )( 
            IPrimitive __RPC_FAR * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_gdegrees_from_semicircles )( 
            IPrimitive __RPC_FAR * This,
            /* [retval][out] */ double __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_gdegrees_from_radians )( 
            IPrimitive __RPC_FAR * This,
            /* [retval][out] */ double __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_gdegrees )( 
            IPrimitive __RPC_FAR * This,
            /* [in] */ double newVal);
        
        END_INTERFACE
    } IPrimitiveVtbl;

    interface IPrimitive
    {
        CONST_VTBL struct IPrimitiveVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPrimitive_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPrimitive_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPrimitive_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPrimitive_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IPrimitive_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IPrimitive_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IPrimitive_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IPrimitive_Add(This,Val)	\
    (This)->lpVtbl -> Add(This,Val)

#define IPrimitive_Clear(This)	\
    (This)->lpVtbl -> Clear(This)

#define IPrimitive_get_Count(This,pVal)	\
    (This)->lpVtbl -> get_Count(This,pVal)

#define IPrimitive_get_gfloat(This,pVal)	\
    (This)->lpVtbl -> get_gfloat(This,pVal)

#define IPrimitive_put_gfloat(This,newVal)	\
    (This)->lpVtbl -> put_gfloat(This,newVal)

#define IPrimitive_get_gdouble(This,pVal)	\
    (This)->lpVtbl -> get_gdouble(This,pVal)

#define IPrimitive_put_gdouble(This,newVal)	\
    (This)->lpVtbl -> put_gdouble(This,newVal)

#define IPrimitive_get_glong(This,pVal)	\
    (This)->lpVtbl -> get_glong(This,pVal)

#define IPrimitive_put_glong(This,newVal)	\
    (This)->lpVtbl -> put_glong(This,newVal)

#define IPrimitive_get_gint(This,pVal)	\
    (This)->lpVtbl -> get_gint(This,pVal)

#define IPrimitive_put_gint(This,newVal)	\
    (This)->lpVtbl -> put_gint(This,newVal)

#define IPrimitive_get_gword(This,pVal)	\
    (This)->lpVtbl -> get_gword(This,pVal)

#define IPrimitive_put_gword(This,newVal)	\
    (This)->lpVtbl -> put_gword(This,newVal)

#define IPrimitive_get_glongword(This,pVal)	\
    (This)->lpVtbl -> get_glongword(This,pVal)

#define IPrimitive_put_glongword(This,newVal)	\
    (This)->lpVtbl -> put_glongword(This,newVal)

#define IPrimitive_Item(This,Indx,pVal)	\
    (This)->lpVtbl -> Item(This,Indx,pVal)

#define IPrimitive_get_gsemicircles(This,pVal)	\
    (This)->lpVtbl -> get_gsemicircles(This,pVal)

#define IPrimitive_put_gsemicircles(This,newVal)	\
    (This)->lpVtbl -> put_gsemicircles(This,newVal)

#define IPrimitive_get_gradians(This,pVal)	\
    (This)->lpVtbl -> get_gradians(This,pVal)

#define IPrimitive_put_gradians(This,newVal)	\
    (This)->lpVtbl -> put_gradians(This,newVal)

#define IPrimitive_get_gdegrees_from_semicircles(This,pVal)	\
    (This)->lpVtbl -> get_gdegrees_from_semicircles(This,pVal)

#define IPrimitive_get_gdegrees_from_radians(This,pVal)	\
    (This)->lpVtbl -> get_gdegrees_from_radians(This,pVal)

#define IPrimitive_put_gdegrees(This,newVal)	\
    (This)->lpVtbl -> put_gdegrees(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPrimitive_Add_Proxy( 
    IPrimitive __RPC_FAR * This,
    /* [in] */ VARIANT Val);


void __RPC_STUB IPrimitive_Add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPrimitive_Clear_Proxy( 
    IPrimitive __RPC_FAR * This);


void __RPC_STUB IPrimitive_Clear_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IPrimitive_get_Count_Proxy( 
    IPrimitive __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pVal);


void __RPC_STUB IPrimitive_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IPrimitive_get_gfloat_Proxy( 
    IPrimitive __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pVal);


void __RPC_STUB IPrimitive_get_gfloat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IPrimitive_put_gfloat_Proxy( 
    IPrimitive __RPC_FAR * This,
    /* [in] */ float newVal);


void __RPC_STUB IPrimitive_put_gfloat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IPrimitive_get_gdouble_Proxy( 
    IPrimitive __RPC_FAR * This,
    /* [retval][out] */ double __RPC_FAR *pVal);


void __RPC_STUB IPrimitive_get_gdouble_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IPrimitive_put_gdouble_Proxy( 
    IPrimitive __RPC_FAR * This,
    /* [in] */ double newVal);


void __RPC_STUB IPrimitive_put_gdouble_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IPrimitive_get_glong_Proxy( 
    IPrimitive __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IPrimitive_get_glong_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IPrimitive_put_glong_Proxy( 
    IPrimitive __RPC_FAR * This,
    /* [in] */ long newVal);


void __RPC_STUB IPrimitive_put_glong_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IPrimitive_get_gint_Proxy( 
    IPrimitive __RPC_FAR * This,
    /* [retval][out] */ short __RPC_FAR *pVal);


void __RPC_STUB IPrimitive_get_gint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IPrimitive_put_gint_Proxy( 
    IPrimitive __RPC_FAR * This,
    /* [in] */ short newVal);


void __RPC_STUB IPrimitive_put_gint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IPrimitive_get_gword_Proxy( 
    IPrimitive __RPC_FAR * This,
    /* [retval][out] */ unsigned short __RPC_FAR *pVal);


void __RPC_STUB IPrimitive_get_gword_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IPrimitive_put_gword_Proxy( 
    IPrimitive __RPC_FAR * This,
    /* [in] */ unsigned short newVal);


void __RPC_STUB IPrimitive_put_gword_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IPrimitive_get_glongword_Proxy( 
    IPrimitive __RPC_FAR * This,
    /* [retval][out] */ unsigned long __RPC_FAR *pVal);


void __RPC_STUB IPrimitive_get_glongword_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IPrimitive_put_glongword_Proxy( 
    IPrimitive __RPC_FAR * This,
    /* [in] */ unsigned long newVal);


void __RPC_STUB IPrimitive_put_glongword_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPrimitive_Item_Proxy( 
    IPrimitive __RPC_FAR * This,
    /* [in] */ long Indx,
    /* [retval][out] */ VARIANT __RPC_FAR *pVal);


void __RPC_STUB IPrimitive_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IPrimitive_get_gsemicircles_Proxy( 
    IPrimitive __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IPrimitive_get_gsemicircles_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IPrimitive_put_gsemicircles_Proxy( 
    IPrimitive __RPC_FAR * This,
    /* [in] */ long newVal);


void __RPC_STUB IPrimitive_put_gsemicircles_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IPrimitive_get_gradians_Proxy( 
    IPrimitive __RPC_FAR * This,
    /* [retval][out] */ double __RPC_FAR *pVal);


void __RPC_STUB IPrimitive_get_gradians_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IPrimitive_put_gradians_Proxy( 
    IPrimitive __RPC_FAR * This,
    /* [in] */ double newVal);


void __RPC_STUB IPrimitive_put_gradians_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IPrimitive_get_gdegrees_from_semicircles_Proxy( 
    IPrimitive __RPC_FAR * This,
    /* [retval][out] */ double __RPC_FAR *pVal);


void __RPC_STUB IPrimitive_get_gdegrees_from_semicircles_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IPrimitive_get_gdegrees_from_radians_Proxy( 
    IPrimitive __RPC_FAR * This,
    /* [retval][out] */ double __RPC_FAR *pVal);


void __RPC_STUB IPrimitive_get_gdegrees_from_radians_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IPrimitive_put_gdegrees_Proxy( 
    IPrimitive __RPC_FAR * This,
    /* [in] */ double newVal);


void __RPC_STUB IPrimitive_put_gdegrees_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPrimitive_INTERFACE_DEFINED__ */


#ifndef __IGarminDataType_INTERFACE_DEFINED__
#define __IGarminDataType_INTERFACE_DEFINED__

/* interface IGarminDataType */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IGarminDataType;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B892E0AF-1D97-4d8f-8362-974E81101551")
    IGarminDataType : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IDXXX_Type( 
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IGarminDataTypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IGarminDataType __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IGarminDataType __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IGarminDataType __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IGarminDataType __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IGarminDataType __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IGarminDataType __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IGarminDataType __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            IGarminDataType __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            IGarminDataType __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        END_INTERFACE
    } IGarminDataTypeVtbl;

    interface IGarminDataType
    {
        CONST_VTBL struct IGarminDataTypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGarminDataType_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IGarminDataType_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IGarminDataType_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IGarminDataType_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IGarminDataType_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IGarminDataType_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IGarminDataType_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IGarminDataType_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define IGarminDataType_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IGarminDataType_get_Type_Proxy( 
    IGarminDataType __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IGarminDataType_get_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IGarminDataType_get_IDXXX_Type_Proxy( 
    IGarminDataType __RPC_FAR * This,
    /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);


void __RPC_STUB IGarminDataType_get_IDXXX_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IGarminDataType_INTERFACE_DEFINED__ */


#ifndef __IDXXX_Wpt_Type_INTERFACE_DEFINED__
#define __IDXXX_Wpt_Type_INTERFACE_DEFINED__

/* interface IDXXX_Wpt_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXXX_Wpt_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("159762E6-8B54-43b8-ACB7-4FE4AE5BDFFB")
    IDXXX_Wpt_Type : public IGarminDataType
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ident( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ident( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_lon( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_lon( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_lat( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_lat( 
            /* [in] */ long newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXXX_Wpt_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXXX_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXXX_Wpt_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXXX_Wpt_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXXX_Wpt_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXXX_Wpt_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXXX_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXXX_Wpt_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            IDXXX_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            IDXXX_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ident )( 
            IDXXX_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ident )( 
            IDXXX_Wpt_Type __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lon )( 
            IDXXX_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lon )( 
            IDXXX_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lat )( 
            IDXXX_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lat )( 
            IDXXX_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } IDXXX_Wpt_TypeVtbl;

    interface IDXXX_Wpt_Type
    {
        CONST_VTBL struct IDXXX_Wpt_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXXX_Wpt_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXXX_Wpt_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXXX_Wpt_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXXX_Wpt_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXXX_Wpt_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXXX_Wpt_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXXX_Wpt_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXXX_Wpt_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define IDXXX_Wpt_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#define IDXXX_Wpt_Type_get_ident(This,pVal)	\
    (This)->lpVtbl -> get_ident(This,pVal)

#define IDXXX_Wpt_Type_put_ident(This,newVal)	\
    (This)->lpVtbl -> put_ident(This,newVal)

#define IDXXX_Wpt_Type_get_lon(This,pVal)	\
    (This)->lpVtbl -> get_lon(This,pVal)

#define IDXXX_Wpt_Type_put_lon(This,newVal)	\
    (This)->lpVtbl -> put_lon(This,newVal)

#define IDXXX_Wpt_Type_get_lat(This,pVal)	\
    (This)->lpVtbl -> get_lat(This,pVal)

#define IDXXX_Wpt_Type_put_lat(This,newVal)	\
    (This)->lpVtbl -> put_lat(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IDXXX_Wpt_Type_get_ident_Proxy( 
    IDXXX_Wpt_Type __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IDXXX_Wpt_Type_get_ident_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IDXXX_Wpt_Type_put_ident_Proxy( 
    IDXXX_Wpt_Type __RPC_FAR * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IDXXX_Wpt_Type_put_ident_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IDXXX_Wpt_Type_get_lon_Proxy( 
    IDXXX_Wpt_Type __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IDXXX_Wpt_Type_get_lon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IDXXX_Wpt_Type_put_lon_Proxy( 
    IDXXX_Wpt_Type __RPC_FAR * This,
    /* [in] */ long newVal);


void __RPC_STUB IDXXX_Wpt_Type_put_lon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IDXXX_Wpt_Type_get_lat_Proxy( 
    IDXXX_Wpt_Type __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IDXXX_Wpt_Type_get_lat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IDXXX_Wpt_Type_put_lat_Proxy( 
    IDXXX_Wpt_Type __RPC_FAR * This,
    /* [in] */ long newVal);


void __RPC_STUB IDXXX_Wpt_Type_put_lat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXXX_Wpt_Type_INTERFACE_DEFINED__ */


#ifndef __ID100_Wpt_Type_INTERFACE_DEFINED__
#define __ID100_Wpt_Type_INTERFACE_DEFINED__

/* interface ID100_Wpt_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID100_Wpt_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E95D7CBD-4282-455C-9675-E78429924F2A")
    ID100_Wpt_Type : public IDXXX_Wpt_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID100_Wpt_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID100_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID100_Wpt_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID100_Wpt_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID100_Wpt_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID100_Wpt_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID100_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID100_Wpt_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID100_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID100_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ident )( 
            ID100_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ident )( 
            ID100_Wpt_Type __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lon )( 
            ID100_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lon )( 
            ID100_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lat )( 
            ID100_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lat )( 
            ID100_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } ID100_Wpt_TypeVtbl;

    interface ID100_Wpt_Type
    {
        CONST_VTBL struct ID100_Wpt_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID100_Wpt_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID100_Wpt_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID100_Wpt_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID100_Wpt_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID100_Wpt_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID100_Wpt_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID100_Wpt_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID100_Wpt_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID100_Wpt_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#define ID100_Wpt_Type_get_ident(This,pVal)	\
    (This)->lpVtbl -> get_ident(This,pVal)

#define ID100_Wpt_Type_put_ident(This,newVal)	\
    (This)->lpVtbl -> put_ident(This,newVal)

#define ID100_Wpt_Type_get_lon(This,pVal)	\
    (This)->lpVtbl -> get_lon(This,pVal)

#define ID100_Wpt_Type_put_lon(This,newVal)	\
    (This)->lpVtbl -> put_lon(This,newVal)

#define ID100_Wpt_Type_get_lat(This,pVal)	\
    (This)->lpVtbl -> get_lat(This,pVal)

#define ID100_Wpt_Type_put_lat(This,newVal)	\
    (This)->lpVtbl -> put_lat(This,newVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID100_Wpt_Type_INTERFACE_DEFINED__ */


#ifndef __ID101_Wpt_Type_INTERFACE_DEFINED__
#define __ID101_Wpt_Type_INTERFACE_DEFINED__

/* interface ID101_Wpt_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID101_Wpt_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E88FA770-0531-4501-B776-5E2D2CBE6557")
    ID101_Wpt_Type : public IDXXX_Wpt_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID101_Wpt_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID101_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID101_Wpt_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID101_Wpt_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID101_Wpt_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID101_Wpt_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID101_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID101_Wpt_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID101_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID101_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ident )( 
            ID101_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ident )( 
            ID101_Wpt_Type __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lon )( 
            ID101_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lon )( 
            ID101_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lat )( 
            ID101_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lat )( 
            ID101_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } ID101_Wpt_TypeVtbl;

    interface ID101_Wpt_Type
    {
        CONST_VTBL struct ID101_Wpt_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID101_Wpt_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID101_Wpt_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID101_Wpt_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID101_Wpt_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID101_Wpt_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID101_Wpt_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID101_Wpt_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID101_Wpt_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID101_Wpt_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#define ID101_Wpt_Type_get_ident(This,pVal)	\
    (This)->lpVtbl -> get_ident(This,pVal)

#define ID101_Wpt_Type_put_ident(This,newVal)	\
    (This)->lpVtbl -> put_ident(This,newVal)

#define ID101_Wpt_Type_get_lon(This,pVal)	\
    (This)->lpVtbl -> get_lon(This,pVal)

#define ID101_Wpt_Type_put_lon(This,newVal)	\
    (This)->lpVtbl -> put_lon(This,newVal)

#define ID101_Wpt_Type_get_lat(This,pVal)	\
    (This)->lpVtbl -> get_lat(This,pVal)

#define ID101_Wpt_Type_put_lat(This,newVal)	\
    (This)->lpVtbl -> put_lat(This,newVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID101_Wpt_Type_INTERFACE_DEFINED__ */


#ifndef __ID102_Wpt_Type_INTERFACE_DEFINED__
#define __ID102_Wpt_Type_INTERFACE_DEFINED__

/* interface ID102_Wpt_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID102_Wpt_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F3FB6D62-0399-4071-AE64-C25734B93551")
    ID102_Wpt_Type : public IDXXX_Wpt_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID102_Wpt_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID102_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID102_Wpt_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID102_Wpt_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID102_Wpt_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID102_Wpt_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID102_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID102_Wpt_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID102_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID102_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ident )( 
            ID102_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ident )( 
            ID102_Wpt_Type __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lon )( 
            ID102_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lon )( 
            ID102_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lat )( 
            ID102_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lat )( 
            ID102_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } ID102_Wpt_TypeVtbl;

    interface ID102_Wpt_Type
    {
        CONST_VTBL struct ID102_Wpt_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID102_Wpt_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID102_Wpt_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID102_Wpt_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID102_Wpt_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID102_Wpt_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID102_Wpt_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID102_Wpt_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID102_Wpt_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID102_Wpt_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#define ID102_Wpt_Type_get_ident(This,pVal)	\
    (This)->lpVtbl -> get_ident(This,pVal)

#define ID102_Wpt_Type_put_ident(This,newVal)	\
    (This)->lpVtbl -> put_ident(This,newVal)

#define ID102_Wpt_Type_get_lon(This,pVal)	\
    (This)->lpVtbl -> get_lon(This,pVal)

#define ID102_Wpt_Type_put_lon(This,newVal)	\
    (This)->lpVtbl -> put_lon(This,newVal)

#define ID102_Wpt_Type_get_lat(This,pVal)	\
    (This)->lpVtbl -> get_lat(This,pVal)

#define ID102_Wpt_Type_put_lat(This,newVal)	\
    (This)->lpVtbl -> put_lat(This,newVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID102_Wpt_Type_INTERFACE_DEFINED__ */


#ifndef __ID103_Wpt_Type_INTERFACE_DEFINED__
#define __ID103_Wpt_Type_INTERFACE_DEFINED__

/* interface ID103_Wpt_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID103_Wpt_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2DFA1A39-1124-4DF1-A263-AF3562762C18")
    ID103_Wpt_Type : public IDXXX_Wpt_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID103_Wpt_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID103_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID103_Wpt_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID103_Wpt_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID103_Wpt_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID103_Wpt_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID103_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID103_Wpt_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID103_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID103_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ident )( 
            ID103_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ident )( 
            ID103_Wpt_Type __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lon )( 
            ID103_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lon )( 
            ID103_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lat )( 
            ID103_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lat )( 
            ID103_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } ID103_Wpt_TypeVtbl;

    interface ID103_Wpt_Type
    {
        CONST_VTBL struct ID103_Wpt_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID103_Wpt_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID103_Wpt_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID103_Wpt_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID103_Wpt_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID103_Wpt_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID103_Wpt_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID103_Wpt_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID103_Wpt_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID103_Wpt_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#define ID103_Wpt_Type_get_ident(This,pVal)	\
    (This)->lpVtbl -> get_ident(This,pVal)

#define ID103_Wpt_Type_put_ident(This,newVal)	\
    (This)->lpVtbl -> put_ident(This,newVal)

#define ID103_Wpt_Type_get_lon(This,pVal)	\
    (This)->lpVtbl -> get_lon(This,pVal)

#define ID103_Wpt_Type_put_lon(This,newVal)	\
    (This)->lpVtbl -> put_lon(This,newVal)

#define ID103_Wpt_Type_get_lat(This,pVal)	\
    (This)->lpVtbl -> get_lat(This,pVal)

#define ID103_Wpt_Type_put_lat(This,newVal)	\
    (This)->lpVtbl -> put_lat(This,newVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID103_Wpt_Type_INTERFACE_DEFINED__ */


#ifndef __ID104_Wpt_Type_INTERFACE_DEFINED__
#define __ID104_Wpt_Type_INTERFACE_DEFINED__

/* interface ID104_Wpt_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID104_Wpt_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("327D435A-EDD6-4AF5-A30A-7E9A0D902147")
    ID104_Wpt_Type : public IDXXX_Wpt_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID104_Wpt_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID104_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID104_Wpt_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID104_Wpt_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID104_Wpt_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID104_Wpt_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID104_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID104_Wpt_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID104_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID104_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ident )( 
            ID104_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ident )( 
            ID104_Wpt_Type __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lon )( 
            ID104_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lon )( 
            ID104_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lat )( 
            ID104_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lat )( 
            ID104_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } ID104_Wpt_TypeVtbl;

    interface ID104_Wpt_Type
    {
        CONST_VTBL struct ID104_Wpt_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID104_Wpt_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID104_Wpt_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID104_Wpt_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID104_Wpt_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID104_Wpt_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID104_Wpt_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID104_Wpt_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID104_Wpt_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID104_Wpt_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#define ID104_Wpt_Type_get_ident(This,pVal)	\
    (This)->lpVtbl -> get_ident(This,pVal)

#define ID104_Wpt_Type_put_ident(This,newVal)	\
    (This)->lpVtbl -> put_ident(This,newVal)

#define ID104_Wpt_Type_get_lon(This,pVal)	\
    (This)->lpVtbl -> get_lon(This,pVal)

#define ID104_Wpt_Type_put_lon(This,newVal)	\
    (This)->lpVtbl -> put_lon(This,newVal)

#define ID104_Wpt_Type_get_lat(This,pVal)	\
    (This)->lpVtbl -> get_lat(This,pVal)

#define ID104_Wpt_Type_put_lat(This,newVal)	\
    (This)->lpVtbl -> put_lat(This,newVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID104_Wpt_Type_INTERFACE_DEFINED__ */


#ifndef __ID105_Wpt_Type_INTERFACE_DEFINED__
#define __ID105_Wpt_Type_INTERFACE_DEFINED__

/* interface ID105_Wpt_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID105_Wpt_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("85D51003-9918-4DEC-9771-1A943D98C416")
    ID105_Wpt_Type : public IDXXX_Wpt_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID105_Wpt_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID105_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID105_Wpt_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID105_Wpt_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID105_Wpt_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID105_Wpt_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID105_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID105_Wpt_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID105_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID105_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ident )( 
            ID105_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ident )( 
            ID105_Wpt_Type __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lon )( 
            ID105_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lon )( 
            ID105_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lat )( 
            ID105_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lat )( 
            ID105_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } ID105_Wpt_TypeVtbl;

    interface ID105_Wpt_Type
    {
        CONST_VTBL struct ID105_Wpt_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID105_Wpt_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID105_Wpt_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID105_Wpt_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID105_Wpt_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID105_Wpt_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID105_Wpt_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID105_Wpt_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID105_Wpt_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID105_Wpt_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#define ID105_Wpt_Type_get_ident(This,pVal)	\
    (This)->lpVtbl -> get_ident(This,pVal)

#define ID105_Wpt_Type_put_ident(This,newVal)	\
    (This)->lpVtbl -> put_ident(This,newVal)

#define ID105_Wpt_Type_get_lon(This,pVal)	\
    (This)->lpVtbl -> get_lon(This,pVal)

#define ID105_Wpt_Type_put_lon(This,newVal)	\
    (This)->lpVtbl -> put_lon(This,newVal)

#define ID105_Wpt_Type_get_lat(This,pVal)	\
    (This)->lpVtbl -> get_lat(This,pVal)

#define ID105_Wpt_Type_put_lat(This,newVal)	\
    (This)->lpVtbl -> put_lat(This,newVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID105_Wpt_Type_INTERFACE_DEFINED__ */


#ifndef __ID106_Wpt_Type_INTERFACE_DEFINED__
#define __ID106_Wpt_Type_INTERFACE_DEFINED__

/* interface ID106_Wpt_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID106_Wpt_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8BE8FA0B-9C2B-43C9-98BF-5D6133FB4EEF")
    ID106_Wpt_Type : public IDXXX_Wpt_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID106_Wpt_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID106_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID106_Wpt_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID106_Wpt_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID106_Wpt_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID106_Wpt_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID106_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID106_Wpt_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID106_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID106_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ident )( 
            ID106_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ident )( 
            ID106_Wpt_Type __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lon )( 
            ID106_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lon )( 
            ID106_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lat )( 
            ID106_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lat )( 
            ID106_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } ID106_Wpt_TypeVtbl;

    interface ID106_Wpt_Type
    {
        CONST_VTBL struct ID106_Wpt_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID106_Wpt_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID106_Wpt_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID106_Wpt_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID106_Wpt_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID106_Wpt_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID106_Wpt_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID106_Wpt_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID106_Wpt_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID106_Wpt_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#define ID106_Wpt_Type_get_ident(This,pVal)	\
    (This)->lpVtbl -> get_ident(This,pVal)

#define ID106_Wpt_Type_put_ident(This,newVal)	\
    (This)->lpVtbl -> put_ident(This,newVal)

#define ID106_Wpt_Type_get_lon(This,pVal)	\
    (This)->lpVtbl -> get_lon(This,pVal)

#define ID106_Wpt_Type_put_lon(This,newVal)	\
    (This)->lpVtbl -> put_lon(This,newVal)

#define ID106_Wpt_Type_get_lat(This,pVal)	\
    (This)->lpVtbl -> get_lat(This,pVal)

#define ID106_Wpt_Type_put_lat(This,newVal)	\
    (This)->lpVtbl -> put_lat(This,newVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID106_Wpt_Type_INTERFACE_DEFINED__ */


#ifndef __ID107_Wpt_Type_INTERFACE_DEFINED__
#define __ID107_Wpt_Type_INTERFACE_DEFINED__

/* interface ID107_Wpt_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID107_Wpt_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E17059F8-4F93-4882-9146-ECA091E170C3")
    ID107_Wpt_Type : public IDXXX_Wpt_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID107_Wpt_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID107_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID107_Wpt_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID107_Wpt_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID107_Wpt_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID107_Wpt_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID107_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID107_Wpt_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID107_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID107_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ident )( 
            ID107_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ident )( 
            ID107_Wpt_Type __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lon )( 
            ID107_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lon )( 
            ID107_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lat )( 
            ID107_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lat )( 
            ID107_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } ID107_Wpt_TypeVtbl;

    interface ID107_Wpt_Type
    {
        CONST_VTBL struct ID107_Wpt_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID107_Wpt_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID107_Wpt_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID107_Wpt_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID107_Wpt_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID107_Wpt_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID107_Wpt_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID107_Wpt_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID107_Wpt_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID107_Wpt_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#define ID107_Wpt_Type_get_ident(This,pVal)	\
    (This)->lpVtbl -> get_ident(This,pVal)

#define ID107_Wpt_Type_put_ident(This,newVal)	\
    (This)->lpVtbl -> put_ident(This,newVal)

#define ID107_Wpt_Type_get_lon(This,pVal)	\
    (This)->lpVtbl -> get_lon(This,pVal)

#define ID107_Wpt_Type_put_lon(This,newVal)	\
    (This)->lpVtbl -> put_lon(This,newVal)

#define ID107_Wpt_Type_get_lat(This,pVal)	\
    (This)->lpVtbl -> get_lat(This,pVal)

#define ID107_Wpt_Type_put_lat(This,newVal)	\
    (This)->lpVtbl -> put_lat(This,newVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID107_Wpt_Type_INTERFACE_DEFINED__ */


#ifndef __ID108_Wpt_Type_INTERFACE_DEFINED__
#define __ID108_Wpt_Type_INTERFACE_DEFINED__

/* interface ID108_Wpt_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID108_Wpt_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7BE71D06-70AC-406F-863D-B3AC86DFCC81")
    ID108_Wpt_Type : public IDXXX_Wpt_Type
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_color( 
            /* [retval][out] */ unsigned int __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_color( 
            /* [in] */ unsigned int newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_wpt_class( 
            /* [retval][out] */ unsigned int __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_wpt_class( 
            /* [in] */ unsigned int newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_dspl( 
            /* [retval][out] */ unsigned int __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_dspl( 
            /* [in] */ unsigned int newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_attr( 
            /* [retval][out] */ unsigned int __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_attr( 
            /* [in] */ unsigned int newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_smbl( 
            /* [retval][out] */ int __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_smbl( 
            /* [in] */ int newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_alt( 
            /* [retval][out] */ float __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_alt( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_dpth( 
            /* [retval][out] */ float __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_dpth( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_dist( 
            /* [retval][out] */ float __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_dist( 
            /* [in] */ float newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ID108_Wpt_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID108_Wpt_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID108_Wpt_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ident )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ident )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lon )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lon )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lat )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lat )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_color )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ unsigned int __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_color )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [in] */ unsigned int newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_wpt_class )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ unsigned int __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_wpt_class )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [in] */ unsigned int newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_dspl )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ unsigned int __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_dspl )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [in] */ unsigned int newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_attr )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ unsigned int __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_attr )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [in] */ unsigned int newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_smbl )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ int __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_smbl )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [in] */ int newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_alt )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_alt )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_dpth )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_dpth )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_dist )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_dist )( 
            ID108_Wpt_Type __RPC_FAR * This,
            /* [in] */ float newVal);
        
        END_INTERFACE
    } ID108_Wpt_TypeVtbl;

    interface ID108_Wpt_Type
    {
        CONST_VTBL struct ID108_Wpt_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID108_Wpt_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID108_Wpt_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID108_Wpt_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID108_Wpt_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID108_Wpt_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID108_Wpt_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID108_Wpt_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID108_Wpt_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID108_Wpt_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#define ID108_Wpt_Type_get_ident(This,pVal)	\
    (This)->lpVtbl -> get_ident(This,pVal)

#define ID108_Wpt_Type_put_ident(This,newVal)	\
    (This)->lpVtbl -> put_ident(This,newVal)

#define ID108_Wpt_Type_get_lon(This,pVal)	\
    (This)->lpVtbl -> get_lon(This,pVal)

#define ID108_Wpt_Type_put_lon(This,newVal)	\
    (This)->lpVtbl -> put_lon(This,newVal)

#define ID108_Wpt_Type_get_lat(This,pVal)	\
    (This)->lpVtbl -> get_lat(This,pVal)

#define ID108_Wpt_Type_put_lat(This,newVal)	\
    (This)->lpVtbl -> put_lat(This,newVal)


#define ID108_Wpt_Type_get_color(This,pVal)	\
    (This)->lpVtbl -> get_color(This,pVal)

#define ID108_Wpt_Type_put_color(This,newVal)	\
    (This)->lpVtbl -> put_color(This,newVal)

#define ID108_Wpt_Type_get_wpt_class(This,pVal)	\
    (This)->lpVtbl -> get_wpt_class(This,pVal)

#define ID108_Wpt_Type_put_wpt_class(This,newVal)	\
    (This)->lpVtbl -> put_wpt_class(This,newVal)

#define ID108_Wpt_Type_get_dspl(This,pVal)	\
    (This)->lpVtbl -> get_dspl(This,pVal)

#define ID108_Wpt_Type_put_dspl(This,newVal)	\
    (This)->lpVtbl -> put_dspl(This,newVal)

#define ID108_Wpt_Type_get_attr(This,pVal)	\
    (This)->lpVtbl -> get_attr(This,pVal)

#define ID108_Wpt_Type_put_attr(This,newVal)	\
    (This)->lpVtbl -> put_attr(This,newVal)

#define ID108_Wpt_Type_get_smbl(This,pVal)	\
    (This)->lpVtbl -> get_smbl(This,pVal)

#define ID108_Wpt_Type_put_smbl(This,newVal)	\
    (This)->lpVtbl -> put_smbl(This,newVal)

#define ID108_Wpt_Type_get_alt(This,pVal)	\
    (This)->lpVtbl -> get_alt(This,pVal)

#define ID108_Wpt_Type_put_alt(This,newVal)	\
    (This)->lpVtbl -> put_alt(This,newVal)

#define ID108_Wpt_Type_get_dpth(This,pVal)	\
    (This)->lpVtbl -> get_dpth(This,pVal)

#define ID108_Wpt_Type_put_dpth(This,newVal)	\
    (This)->lpVtbl -> put_dpth(This,newVal)

#define ID108_Wpt_Type_get_dist(This,pVal)	\
    (This)->lpVtbl -> get_dist(This,pVal)

#define ID108_Wpt_Type_put_dist(This,newVal)	\
    (This)->lpVtbl -> put_dist(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ID108_Wpt_Type_get_color_Proxy( 
    ID108_Wpt_Type __RPC_FAR * This,
    /* [retval][out] */ unsigned int __RPC_FAR *pVal);


void __RPC_STUB ID108_Wpt_Type_get_color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ID108_Wpt_Type_put_color_Proxy( 
    ID108_Wpt_Type __RPC_FAR * This,
    /* [in] */ unsigned int newVal);


void __RPC_STUB ID108_Wpt_Type_put_color_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ID108_Wpt_Type_get_wpt_class_Proxy( 
    ID108_Wpt_Type __RPC_FAR * This,
    /* [retval][out] */ unsigned int __RPC_FAR *pVal);


void __RPC_STUB ID108_Wpt_Type_get_wpt_class_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ID108_Wpt_Type_put_wpt_class_Proxy( 
    ID108_Wpt_Type __RPC_FAR * This,
    /* [in] */ unsigned int newVal);


void __RPC_STUB ID108_Wpt_Type_put_wpt_class_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ID108_Wpt_Type_get_dspl_Proxy( 
    ID108_Wpt_Type __RPC_FAR * This,
    /* [retval][out] */ unsigned int __RPC_FAR *pVal);


void __RPC_STUB ID108_Wpt_Type_get_dspl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ID108_Wpt_Type_put_dspl_Proxy( 
    ID108_Wpt_Type __RPC_FAR * This,
    /* [in] */ unsigned int newVal);


void __RPC_STUB ID108_Wpt_Type_put_dspl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ID108_Wpt_Type_get_attr_Proxy( 
    ID108_Wpt_Type __RPC_FAR * This,
    /* [retval][out] */ unsigned int __RPC_FAR *pVal);


void __RPC_STUB ID108_Wpt_Type_get_attr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ID108_Wpt_Type_put_attr_Proxy( 
    ID108_Wpt_Type __RPC_FAR * This,
    /* [in] */ unsigned int newVal);


void __RPC_STUB ID108_Wpt_Type_put_attr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ID108_Wpt_Type_get_smbl_Proxy( 
    ID108_Wpt_Type __RPC_FAR * This,
    /* [retval][out] */ int __RPC_FAR *pVal);


void __RPC_STUB ID108_Wpt_Type_get_smbl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ID108_Wpt_Type_put_smbl_Proxy( 
    ID108_Wpt_Type __RPC_FAR * This,
    /* [in] */ int newVal);


void __RPC_STUB ID108_Wpt_Type_put_smbl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ID108_Wpt_Type_get_alt_Proxy( 
    ID108_Wpt_Type __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pVal);


void __RPC_STUB ID108_Wpt_Type_get_alt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ID108_Wpt_Type_put_alt_Proxy( 
    ID108_Wpt_Type __RPC_FAR * This,
    /* [in] */ float newVal);


void __RPC_STUB ID108_Wpt_Type_put_alt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ID108_Wpt_Type_get_dpth_Proxy( 
    ID108_Wpt_Type __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pVal);


void __RPC_STUB ID108_Wpt_Type_get_dpth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ID108_Wpt_Type_put_dpth_Proxy( 
    ID108_Wpt_Type __RPC_FAR * This,
    /* [in] */ float newVal);


void __RPC_STUB ID108_Wpt_Type_put_dpth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ID108_Wpt_Type_get_dist_Proxy( 
    ID108_Wpt_Type __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pVal);


void __RPC_STUB ID108_Wpt_Type_get_dist_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ID108_Wpt_Type_put_dist_Proxy( 
    ID108_Wpt_Type __RPC_FAR * This,
    /* [in] */ float newVal);


void __RPC_STUB ID108_Wpt_Type_put_dist_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ID108_Wpt_Type_INTERFACE_DEFINED__ */


#ifndef __ID109_Wpt_Type_INTERFACE_DEFINED__
#define __ID109_Wpt_Type_INTERFACE_DEFINED__

/* interface ID109_Wpt_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID109_Wpt_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("49EFB30A-7AEB-4AA1-BC0D-2C9E64C0BDD0")
    ID109_Wpt_Type : public IDXXX_Wpt_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID109_Wpt_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID109_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID109_Wpt_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID109_Wpt_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID109_Wpt_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID109_Wpt_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID109_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID109_Wpt_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID109_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID109_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ident )( 
            ID109_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ident )( 
            ID109_Wpt_Type __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lon )( 
            ID109_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lon )( 
            ID109_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lat )( 
            ID109_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lat )( 
            ID109_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } ID109_Wpt_TypeVtbl;

    interface ID109_Wpt_Type
    {
        CONST_VTBL struct ID109_Wpt_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID109_Wpt_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID109_Wpt_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID109_Wpt_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID109_Wpt_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID109_Wpt_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID109_Wpt_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID109_Wpt_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID109_Wpt_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID109_Wpt_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#define ID109_Wpt_Type_get_ident(This,pVal)	\
    (This)->lpVtbl -> get_ident(This,pVal)

#define ID109_Wpt_Type_put_ident(This,newVal)	\
    (This)->lpVtbl -> put_ident(This,newVal)

#define ID109_Wpt_Type_get_lon(This,pVal)	\
    (This)->lpVtbl -> get_lon(This,pVal)

#define ID109_Wpt_Type_put_lon(This,newVal)	\
    (This)->lpVtbl -> put_lon(This,newVal)

#define ID109_Wpt_Type_get_lat(This,pVal)	\
    (This)->lpVtbl -> get_lat(This,pVal)

#define ID109_Wpt_Type_put_lat(This,newVal)	\
    (This)->lpVtbl -> put_lat(This,newVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID109_Wpt_Type_INTERFACE_DEFINED__ */


#ifndef __ID110_Wpt_Type_INTERFACE_DEFINED__
#define __ID110_Wpt_Type_INTERFACE_DEFINED__

/* interface ID110_Wpt_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID110_Wpt_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E6DBBF81-C03A-4E33-A1A4-3C41CD7E9994")
    ID110_Wpt_Type : public IDXXX_Wpt_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID110_Wpt_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID110_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID110_Wpt_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID110_Wpt_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID110_Wpt_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID110_Wpt_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID110_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID110_Wpt_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID110_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID110_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ident )( 
            ID110_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ident )( 
            ID110_Wpt_Type __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lon )( 
            ID110_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lon )( 
            ID110_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lat )( 
            ID110_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lat )( 
            ID110_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } ID110_Wpt_TypeVtbl;

    interface ID110_Wpt_Type
    {
        CONST_VTBL struct ID110_Wpt_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID110_Wpt_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID110_Wpt_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID110_Wpt_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID110_Wpt_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID110_Wpt_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID110_Wpt_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID110_Wpt_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID110_Wpt_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID110_Wpt_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#define ID110_Wpt_Type_get_ident(This,pVal)	\
    (This)->lpVtbl -> get_ident(This,pVal)

#define ID110_Wpt_Type_put_ident(This,newVal)	\
    (This)->lpVtbl -> put_ident(This,newVal)

#define ID110_Wpt_Type_get_lon(This,pVal)	\
    (This)->lpVtbl -> get_lon(This,pVal)

#define ID110_Wpt_Type_put_lon(This,newVal)	\
    (This)->lpVtbl -> put_lon(This,newVal)

#define ID110_Wpt_Type_get_lat(This,pVal)	\
    (This)->lpVtbl -> get_lat(This,pVal)

#define ID110_Wpt_Type_put_lat(This,newVal)	\
    (This)->lpVtbl -> put_lat(This,newVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID110_Wpt_Type_INTERFACE_DEFINED__ */


#ifndef __ID150_Wpt_Type_INTERFACE_DEFINED__
#define __ID150_Wpt_Type_INTERFACE_DEFINED__

/* interface ID150_Wpt_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID150_Wpt_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FA811D94-B38A-4ACE-968D-7457111A45FE")
    ID150_Wpt_Type : public IDXXX_Wpt_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID150_Wpt_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID150_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID150_Wpt_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID150_Wpt_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID150_Wpt_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID150_Wpt_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID150_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID150_Wpt_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID150_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID150_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ident )( 
            ID150_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ident )( 
            ID150_Wpt_Type __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lon )( 
            ID150_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lon )( 
            ID150_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lat )( 
            ID150_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lat )( 
            ID150_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } ID150_Wpt_TypeVtbl;

    interface ID150_Wpt_Type
    {
        CONST_VTBL struct ID150_Wpt_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID150_Wpt_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID150_Wpt_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID150_Wpt_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID150_Wpt_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID150_Wpt_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID150_Wpt_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID150_Wpt_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID150_Wpt_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID150_Wpt_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#define ID150_Wpt_Type_get_ident(This,pVal)	\
    (This)->lpVtbl -> get_ident(This,pVal)

#define ID150_Wpt_Type_put_ident(This,newVal)	\
    (This)->lpVtbl -> put_ident(This,newVal)

#define ID150_Wpt_Type_get_lon(This,pVal)	\
    (This)->lpVtbl -> get_lon(This,pVal)

#define ID150_Wpt_Type_put_lon(This,newVal)	\
    (This)->lpVtbl -> put_lon(This,newVal)

#define ID150_Wpt_Type_get_lat(This,pVal)	\
    (This)->lpVtbl -> get_lat(This,pVal)

#define ID150_Wpt_Type_put_lat(This,newVal)	\
    (This)->lpVtbl -> put_lat(This,newVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID150_Wpt_Type_INTERFACE_DEFINED__ */


#ifndef __ID151_Wpt_Type_INTERFACE_DEFINED__
#define __ID151_Wpt_Type_INTERFACE_DEFINED__

/* interface ID151_Wpt_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID151_Wpt_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CB1F20DE-9D03-4436-87F6-80D049962C55")
    ID151_Wpt_Type : public IDXXX_Wpt_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID151_Wpt_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID151_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID151_Wpt_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID151_Wpt_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID151_Wpt_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID151_Wpt_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID151_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID151_Wpt_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID151_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID151_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ident )( 
            ID151_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ident )( 
            ID151_Wpt_Type __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lon )( 
            ID151_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lon )( 
            ID151_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lat )( 
            ID151_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lat )( 
            ID151_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } ID151_Wpt_TypeVtbl;

    interface ID151_Wpt_Type
    {
        CONST_VTBL struct ID151_Wpt_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID151_Wpt_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID151_Wpt_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID151_Wpt_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID151_Wpt_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID151_Wpt_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID151_Wpt_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID151_Wpt_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID151_Wpt_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID151_Wpt_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#define ID151_Wpt_Type_get_ident(This,pVal)	\
    (This)->lpVtbl -> get_ident(This,pVal)

#define ID151_Wpt_Type_put_ident(This,newVal)	\
    (This)->lpVtbl -> put_ident(This,newVal)

#define ID151_Wpt_Type_get_lon(This,pVal)	\
    (This)->lpVtbl -> get_lon(This,pVal)

#define ID151_Wpt_Type_put_lon(This,newVal)	\
    (This)->lpVtbl -> put_lon(This,newVal)

#define ID151_Wpt_Type_get_lat(This,pVal)	\
    (This)->lpVtbl -> get_lat(This,pVal)

#define ID151_Wpt_Type_put_lat(This,newVal)	\
    (This)->lpVtbl -> put_lat(This,newVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID151_Wpt_Type_INTERFACE_DEFINED__ */


#ifndef __ID152_Wpt_Type_INTERFACE_DEFINED__
#define __ID152_Wpt_Type_INTERFACE_DEFINED__

/* interface ID152_Wpt_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID152_Wpt_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99270E0B-BF3F-4699-AAD7-F5E55B8C750C")
    ID152_Wpt_Type : public IDXXX_Wpt_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID152_Wpt_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID152_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID152_Wpt_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID152_Wpt_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID152_Wpt_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID152_Wpt_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID152_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID152_Wpt_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID152_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID152_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ident )( 
            ID152_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ident )( 
            ID152_Wpt_Type __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lon )( 
            ID152_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lon )( 
            ID152_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lat )( 
            ID152_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lat )( 
            ID152_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } ID152_Wpt_TypeVtbl;

    interface ID152_Wpt_Type
    {
        CONST_VTBL struct ID152_Wpt_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID152_Wpt_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID152_Wpt_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID152_Wpt_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID152_Wpt_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID152_Wpt_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID152_Wpt_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID152_Wpt_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID152_Wpt_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID152_Wpt_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#define ID152_Wpt_Type_get_ident(This,pVal)	\
    (This)->lpVtbl -> get_ident(This,pVal)

#define ID152_Wpt_Type_put_ident(This,newVal)	\
    (This)->lpVtbl -> put_ident(This,newVal)

#define ID152_Wpt_Type_get_lon(This,pVal)	\
    (This)->lpVtbl -> get_lon(This,pVal)

#define ID152_Wpt_Type_put_lon(This,newVal)	\
    (This)->lpVtbl -> put_lon(This,newVal)

#define ID152_Wpt_Type_get_lat(This,pVal)	\
    (This)->lpVtbl -> get_lat(This,pVal)

#define ID152_Wpt_Type_put_lat(This,newVal)	\
    (This)->lpVtbl -> put_lat(This,newVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID152_Wpt_Type_INTERFACE_DEFINED__ */


#ifndef __ID154_Wpt_Type_INTERFACE_DEFINED__
#define __ID154_Wpt_Type_INTERFACE_DEFINED__

/* interface ID154_Wpt_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID154_Wpt_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("92EF6B0C-7B5B-4080-82BA-1DB3DEADBBCB")
    ID154_Wpt_Type : public IDXXX_Wpt_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID154_Wpt_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID154_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID154_Wpt_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID154_Wpt_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID154_Wpt_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID154_Wpt_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID154_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID154_Wpt_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID154_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID154_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ident )( 
            ID154_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ident )( 
            ID154_Wpt_Type __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lon )( 
            ID154_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lon )( 
            ID154_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lat )( 
            ID154_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lat )( 
            ID154_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } ID154_Wpt_TypeVtbl;

    interface ID154_Wpt_Type
    {
        CONST_VTBL struct ID154_Wpt_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID154_Wpt_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID154_Wpt_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID154_Wpt_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID154_Wpt_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID154_Wpt_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID154_Wpt_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID154_Wpt_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID154_Wpt_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID154_Wpt_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#define ID154_Wpt_Type_get_ident(This,pVal)	\
    (This)->lpVtbl -> get_ident(This,pVal)

#define ID154_Wpt_Type_put_ident(This,newVal)	\
    (This)->lpVtbl -> put_ident(This,newVal)

#define ID154_Wpt_Type_get_lon(This,pVal)	\
    (This)->lpVtbl -> get_lon(This,pVal)

#define ID154_Wpt_Type_put_lon(This,newVal)	\
    (This)->lpVtbl -> put_lon(This,newVal)

#define ID154_Wpt_Type_get_lat(This,pVal)	\
    (This)->lpVtbl -> get_lat(This,pVal)

#define ID154_Wpt_Type_put_lat(This,newVal)	\
    (This)->lpVtbl -> put_lat(This,newVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID154_Wpt_Type_INTERFACE_DEFINED__ */


#ifndef __ID155_Wpt_Type_INTERFACE_DEFINED__
#define __ID155_Wpt_Type_INTERFACE_DEFINED__

/* interface ID155_Wpt_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID155_Wpt_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9B9C68CF-B1B8-461F-9F4A-E3B980210CE4")
    ID155_Wpt_Type : public IDXXX_Wpt_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID155_Wpt_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID155_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID155_Wpt_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID155_Wpt_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID155_Wpt_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID155_Wpt_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID155_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID155_Wpt_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID155_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID155_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ident )( 
            ID155_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_ident )( 
            ID155_Wpt_Type __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lon )( 
            ID155_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lon )( 
            ID155_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lat )( 
            ID155_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lat )( 
            ID155_Wpt_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } ID155_Wpt_TypeVtbl;

    interface ID155_Wpt_Type
    {
        CONST_VTBL struct ID155_Wpt_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID155_Wpt_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID155_Wpt_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID155_Wpt_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID155_Wpt_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID155_Wpt_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID155_Wpt_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID155_Wpt_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID155_Wpt_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID155_Wpt_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#define ID155_Wpt_Type_get_ident(This,pVal)	\
    (This)->lpVtbl -> get_ident(This,pVal)

#define ID155_Wpt_Type_put_ident(This,newVal)	\
    (This)->lpVtbl -> put_ident(This,newVal)

#define ID155_Wpt_Type_get_lon(This,pVal)	\
    (This)->lpVtbl -> get_lon(This,pVal)

#define ID155_Wpt_Type_put_lon(This,newVal)	\
    (This)->lpVtbl -> put_lon(This,newVal)

#define ID155_Wpt_Type_get_lat(This,pVal)	\
    (This)->lpVtbl -> get_lat(This,pVal)

#define ID155_Wpt_Type_put_lat(This,newVal)	\
    (This)->lpVtbl -> put_lat(This,newVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID155_Wpt_Type_INTERFACE_DEFINED__ */


#ifndef __ID200_Rte_Hdr_Type_INTERFACE_DEFINED__
#define __ID200_Rte_Hdr_Type_INTERFACE_DEFINED__

/* interface ID200_Rte_Hdr_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID200_Rte_Hdr_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B09277E6-B1B6-4786-BC21-CCE9D0821CBD")
    ID200_Rte_Hdr_Type : public IGarminDataType
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID200_Rte_Hdr_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID200_Rte_Hdr_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID200_Rte_Hdr_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID200_Rte_Hdr_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID200_Rte_Hdr_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID200_Rte_Hdr_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID200_Rte_Hdr_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID200_Rte_Hdr_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID200_Rte_Hdr_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID200_Rte_Hdr_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        END_INTERFACE
    } ID200_Rte_Hdr_TypeVtbl;

    interface ID200_Rte_Hdr_Type
    {
        CONST_VTBL struct ID200_Rte_Hdr_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID200_Rte_Hdr_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID200_Rte_Hdr_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID200_Rte_Hdr_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID200_Rte_Hdr_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID200_Rte_Hdr_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID200_Rte_Hdr_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID200_Rte_Hdr_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID200_Rte_Hdr_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID200_Rte_Hdr_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID200_Rte_Hdr_Type_INTERFACE_DEFINED__ */


#ifndef __ID201_Rte_Hdr_Type_INTERFACE_DEFINED__
#define __ID201_Rte_Hdr_Type_INTERFACE_DEFINED__

/* interface ID201_Rte_Hdr_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID201_Rte_Hdr_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("98C9CD1F-B32B-405C-95EE-AC0788861571")
    ID201_Rte_Hdr_Type : public IGarminDataType
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID201_Rte_Hdr_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID201_Rte_Hdr_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID201_Rte_Hdr_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID201_Rte_Hdr_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID201_Rte_Hdr_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID201_Rte_Hdr_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID201_Rte_Hdr_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID201_Rte_Hdr_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID201_Rte_Hdr_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID201_Rte_Hdr_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        END_INTERFACE
    } ID201_Rte_Hdr_TypeVtbl;

    interface ID201_Rte_Hdr_Type
    {
        CONST_VTBL struct ID201_Rte_Hdr_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID201_Rte_Hdr_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID201_Rte_Hdr_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID201_Rte_Hdr_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID201_Rte_Hdr_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID201_Rte_Hdr_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID201_Rte_Hdr_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID201_Rte_Hdr_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID201_Rte_Hdr_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID201_Rte_Hdr_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID201_Rte_Hdr_Type_INTERFACE_DEFINED__ */


#ifndef __ID202_Rte_Hdr_Type_INTERFACE_DEFINED__
#define __ID202_Rte_Hdr_Type_INTERFACE_DEFINED__

/* interface ID202_Rte_Hdr_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID202_Rte_Hdr_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B26D0E64-9C6B-4815-ACF8-8EA918B93098")
    ID202_Rte_Hdr_Type : public IGarminDataType
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID202_Rte_Hdr_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID202_Rte_Hdr_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID202_Rte_Hdr_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID202_Rte_Hdr_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID202_Rte_Hdr_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID202_Rte_Hdr_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID202_Rte_Hdr_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID202_Rte_Hdr_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID202_Rte_Hdr_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID202_Rte_Hdr_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        END_INTERFACE
    } ID202_Rte_Hdr_TypeVtbl;

    interface ID202_Rte_Hdr_Type
    {
        CONST_VTBL struct ID202_Rte_Hdr_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID202_Rte_Hdr_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID202_Rte_Hdr_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID202_Rte_Hdr_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID202_Rte_Hdr_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID202_Rte_Hdr_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID202_Rte_Hdr_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID202_Rte_Hdr_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID202_Rte_Hdr_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID202_Rte_Hdr_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID202_Rte_Hdr_Type_INTERFACE_DEFINED__ */


#ifndef __ID210_Rte_Link_Type_INTERFACE_DEFINED__
#define __ID210_Rte_Link_Type_INTERFACE_DEFINED__

/* interface ID210_Rte_Link_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID210_Rte_Link_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DAAA1645-843A-4B48-B052-2954C70C37A8")
    ID210_Rte_Link_Type : public IGarminDataType
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID210_Rte_Link_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID210_Rte_Link_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID210_Rte_Link_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID210_Rte_Link_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID210_Rte_Link_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID210_Rte_Link_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID210_Rte_Link_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID210_Rte_Link_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID210_Rte_Link_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID210_Rte_Link_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        END_INTERFACE
    } ID210_Rte_Link_TypeVtbl;

    interface ID210_Rte_Link_Type
    {
        CONST_VTBL struct ID210_Rte_Link_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID210_Rte_Link_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID210_Rte_Link_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID210_Rte_Link_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID210_Rte_Link_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID210_Rte_Link_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID210_Rte_Link_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID210_Rte_Link_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID210_Rte_Link_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID210_Rte_Link_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID210_Rte_Link_Type_INTERFACE_DEFINED__ */


#ifndef __IDXXX_Trk_Point_Type_INTERFACE_DEFINED__
#define __IDXXX_Trk_Point_Type_INTERFACE_DEFINED__

/* interface IDXXX_Trk_Point_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXXX_Trk_Point_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B6E9B4D0-4823-426b-9C03-FAF0BB148151")
    IDXXX_Trk_Point_Type : public IGarminDataType
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_lat( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_lat( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_lon( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_lon( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_time( 
            /* [retval][out] */ unsigned long __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_time( 
            /* [in] */ unsigned long newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDXXX_Trk_Point_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXXX_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXXX_Trk_Point_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXXX_Trk_Point_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXXX_Trk_Point_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXXX_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXXX_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXXX_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            IDXXX_Trk_Point_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            IDXXX_Trk_Point_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lat )( 
            IDXXX_Trk_Point_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lat )( 
            IDXXX_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lon )( 
            IDXXX_Trk_Point_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lon )( 
            IDXXX_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_time )( 
            IDXXX_Trk_Point_Type __RPC_FAR * This,
            /* [retval][out] */ unsigned long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_time )( 
            IDXXX_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ unsigned long newVal);
        
        END_INTERFACE
    } IDXXX_Trk_Point_TypeVtbl;

    interface IDXXX_Trk_Point_Type
    {
        CONST_VTBL struct IDXXX_Trk_Point_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXXX_Trk_Point_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXXX_Trk_Point_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXXX_Trk_Point_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXXX_Trk_Point_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXXX_Trk_Point_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXXX_Trk_Point_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXXX_Trk_Point_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXXX_Trk_Point_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define IDXXX_Trk_Point_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#define IDXXX_Trk_Point_Type_get_lat(This,pVal)	\
    (This)->lpVtbl -> get_lat(This,pVal)

#define IDXXX_Trk_Point_Type_put_lat(This,newVal)	\
    (This)->lpVtbl -> put_lat(This,newVal)

#define IDXXX_Trk_Point_Type_get_lon(This,pVal)	\
    (This)->lpVtbl -> get_lon(This,pVal)

#define IDXXX_Trk_Point_Type_put_lon(This,newVal)	\
    (This)->lpVtbl -> put_lon(This,newVal)

#define IDXXX_Trk_Point_Type_get_time(This,pVal)	\
    (This)->lpVtbl -> get_time(This,pVal)

#define IDXXX_Trk_Point_Type_put_time(This,newVal)	\
    (This)->lpVtbl -> put_time(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IDXXX_Trk_Point_Type_get_lat_Proxy( 
    IDXXX_Trk_Point_Type __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IDXXX_Trk_Point_Type_get_lat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IDXXX_Trk_Point_Type_put_lat_Proxy( 
    IDXXX_Trk_Point_Type __RPC_FAR * This,
    /* [in] */ long newVal);


void __RPC_STUB IDXXX_Trk_Point_Type_put_lat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IDXXX_Trk_Point_Type_get_lon_Proxy( 
    IDXXX_Trk_Point_Type __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IDXXX_Trk_Point_Type_get_lon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IDXXX_Trk_Point_Type_put_lon_Proxy( 
    IDXXX_Trk_Point_Type __RPC_FAR * This,
    /* [in] */ long newVal);


void __RPC_STUB IDXXX_Trk_Point_Type_put_lon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IDXXX_Trk_Point_Type_get_time_Proxy( 
    IDXXX_Trk_Point_Type __RPC_FAR * This,
    /* [retval][out] */ unsigned long __RPC_FAR *pVal);


void __RPC_STUB IDXXX_Trk_Point_Type_get_time_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IDXXX_Trk_Point_Type_put_time_Proxy( 
    IDXXX_Trk_Point_Type __RPC_FAR * This,
    /* [in] */ unsigned long newVal);


void __RPC_STUB IDXXX_Trk_Point_Type_put_time_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDXXX_Trk_Point_Type_INTERFACE_DEFINED__ */


#ifndef __ID300_Trk_Point_Type_INTERFACE_DEFINED__
#define __ID300_Trk_Point_Type_INTERFACE_DEFINED__

/* interface ID300_Trk_Point_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID300_Trk_Point_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("41A7411C-0F75-4D12-9B30-2349CDA847D6")
    ID300_Trk_Point_Type : public IDXXX_Trk_Point_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID300_Trk_Point_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID300_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID300_Trk_Point_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID300_Trk_Point_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID300_Trk_Point_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID300_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID300_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID300_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID300_Trk_Point_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID300_Trk_Point_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lat )( 
            ID300_Trk_Point_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lat )( 
            ID300_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lon )( 
            ID300_Trk_Point_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lon )( 
            ID300_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_time )( 
            ID300_Trk_Point_Type __RPC_FAR * This,
            /* [retval][out] */ unsigned long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_time )( 
            ID300_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ unsigned long newVal);
        
        END_INTERFACE
    } ID300_Trk_Point_TypeVtbl;

    interface ID300_Trk_Point_Type
    {
        CONST_VTBL struct ID300_Trk_Point_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID300_Trk_Point_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID300_Trk_Point_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID300_Trk_Point_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID300_Trk_Point_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID300_Trk_Point_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID300_Trk_Point_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID300_Trk_Point_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID300_Trk_Point_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID300_Trk_Point_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#define ID300_Trk_Point_Type_get_lat(This,pVal)	\
    (This)->lpVtbl -> get_lat(This,pVal)

#define ID300_Trk_Point_Type_put_lat(This,newVal)	\
    (This)->lpVtbl -> put_lat(This,newVal)

#define ID300_Trk_Point_Type_get_lon(This,pVal)	\
    (This)->lpVtbl -> get_lon(This,pVal)

#define ID300_Trk_Point_Type_put_lon(This,newVal)	\
    (This)->lpVtbl -> put_lon(This,newVal)

#define ID300_Trk_Point_Type_get_time(This,pVal)	\
    (This)->lpVtbl -> get_time(This,pVal)

#define ID300_Trk_Point_Type_put_time(This,newVal)	\
    (This)->lpVtbl -> put_time(This,newVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID300_Trk_Point_Type_INTERFACE_DEFINED__ */


#ifndef __ID301_Trk_Point_Type_INTERFACE_DEFINED__
#define __ID301_Trk_Point_Type_INTERFACE_DEFINED__

/* interface ID301_Trk_Point_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID301_Trk_Point_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CC178575-0663-49C0-BDEF-B64C5D7B93B5")
    ID301_Trk_Point_Type : public IDXXX_Trk_Point_Type
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_alt( 
            /* [retval][out] */ float __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_alt( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_dpth( 
            /* [retval][out] */ float __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_dpth( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_new_trk( 
            /* [retval][out] */ BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_new_trk( 
            /* [in] */ BOOL newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ID301_Trk_Point_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID301_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID301_Trk_Point_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID301_Trk_Point_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID301_Trk_Point_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID301_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID301_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID301_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID301_Trk_Point_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID301_Trk_Point_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lat )( 
            ID301_Trk_Point_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lat )( 
            ID301_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lon )( 
            ID301_Trk_Point_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lon )( 
            ID301_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_time )( 
            ID301_Trk_Point_Type __RPC_FAR * This,
            /* [retval][out] */ unsigned long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_time )( 
            ID301_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ unsigned long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_alt )( 
            ID301_Trk_Point_Type __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_alt )( 
            ID301_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_dpth )( 
            ID301_Trk_Point_Type __RPC_FAR * This,
            /* [retval][out] */ float __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_dpth )( 
            ID301_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ float newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_new_trk )( 
            ID301_Trk_Point_Type __RPC_FAR * This,
            /* [retval][out] */ BOOL __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_new_trk )( 
            ID301_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ BOOL newVal);
        
        END_INTERFACE
    } ID301_Trk_Point_TypeVtbl;

    interface ID301_Trk_Point_Type
    {
        CONST_VTBL struct ID301_Trk_Point_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID301_Trk_Point_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID301_Trk_Point_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID301_Trk_Point_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID301_Trk_Point_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID301_Trk_Point_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID301_Trk_Point_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID301_Trk_Point_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID301_Trk_Point_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID301_Trk_Point_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#define ID301_Trk_Point_Type_get_lat(This,pVal)	\
    (This)->lpVtbl -> get_lat(This,pVal)

#define ID301_Trk_Point_Type_put_lat(This,newVal)	\
    (This)->lpVtbl -> put_lat(This,newVal)

#define ID301_Trk_Point_Type_get_lon(This,pVal)	\
    (This)->lpVtbl -> get_lon(This,pVal)

#define ID301_Trk_Point_Type_put_lon(This,newVal)	\
    (This)->lpVtbl -> put_lon(This,newVal)

#define ID301_Trk_Point_Type_get_time(This,pVal)	\
    (This)->lpVtbl -> get_time(This,pVal)

#define ID301_Trk_Point_Type_put_time(This,newVal)	\
    (This)->lpVtbl -> put_time(This,newVal)


#define ID301_Trk_Point_Type_get_alt(This,pVal)	\
    (This)->lpVtbl -> get_alt(This,pVal)

#define ID301_Trk_Point_Type_put_alt(This,newVal)	\
    (This)->lpVtbl -> put_alt(This,newVal)

#define ID301_Trk_Point_Type_get_dpth(This,pVal)	\
    (This)->lpVtbl -> get_dpth(This,pVal)

#define ID301_Trk_Point_Type_put_dpth(This,newVal)	\
    (This)->lpVtbl -> put_dpth(This,newVal)

#define ID301_Trk_Point_Type_get_new_trk(This,pVal)	\
    (This)->lpVtbl -> get_new_trk(This,pVal)

#define ID301_Trk_Point_Type_put_new_trk(This,newVal)	\
    (This)->lpVtbl -> put_new_trk(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ID301_Trk_Point_Type_get_alt_Proxy( 
    ID301_Trk_Point_Type __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pVal);


void __RPC_STUB ID301_Trk_Point_Type_get_alt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ID301_Trk_Point_Type_put_alt_Proxy( 
    ID301_Trk_Point_Type __RPC_FAR * This,
    /* [in] */ float newVal);


void __RPC_STUB ID301_Trk_Point_Type_put_alt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ID301_Trk_Point_Type_get_dpth_Proxy( 
    ID301_Trk_Point_Type __RPC_FAR * This,
    /* [retval][out] */ float __RPC_FAR *pVal);


void __RPC_STUB ID301_Trk_Point_Type_get_dpth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ID301_Trk_Point_Type_put_dpth_Proxy( 
    ID301_Trk_Point_Type __RPC_FAR * This,
    /* [in] */ float newVal);


void __RPC_STUB ID301_Trk_Point_Type_put_dpth_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ID301_Trk_Point_Type_get_new_trk_Proxy( 
    ID301_Trk_Point_Type __RPC_FAR * This,
    /* [retval][out] */ BOOL __RPC_FAR *pVal);


void __RPC_STUB ID301_Trk_Point_Type_get_new_trk_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ID301_Trk_Point_Type_put_new_trk_Proxy( 
    ID301_Trk_Point_Type __RPC_FAR * This,
    /* [in] */ BOOL newVal);


void __RPC_STUB ID301_Trk_Point_Type_put_new_trk_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ID301_Trk_Point_Type_INTERFACE_DEFINED__ */


#ifndef __ID302_Trk_Point_Type_INTERFACE_DEFINED__
#define __ID302_Trk_Point_Type_INTERFACE_DEFINED__

/* interface ID302_Trk_Point_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID302_Trk_Point_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("08D674C1-E27D-471A-912D-34B699800D3D")
    ID302_Trk_Point_Type : public IDXXX_Trk_Point_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID302_Trk_Point_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID302_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID302_Trk_Point_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID302_Trk_Point_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID302_Trk_Point_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID302_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID302_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID302_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID302_Trk_Point_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID302_Trk_Point_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lat )( 
            ID302_Trk_Point_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lat )( 
            ID302_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_lon )( 
            ID302_Trk_Point_Type __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_lon )( 
            ID302_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_time )( 
            ID302_Trk_Point_Type __RPC_FAR * This,
            /* [retval][out] */ unsigned long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_time )( 
            ID302_Trk_Point_Type __RPC_FAR * This,
            /* [in] */ unsigned long newVal);
        
        END_INTERFACE
    } ID302_Trk_Point_TypeVtbl;

    interface ID302_Trk_Point_Type
    {
        CONST_VTBL struct ID302_Trk_Point_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID302_Trk_Point_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID302_Trk_Point_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID302_Trk_Point_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID302_Trk_Point_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID302_Trk_Point_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID302_Trk_Point_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID302_Trk_Point_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID302_Trk_Point_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID302_Trk_Point_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#define ID302_Trk_Point_Type_get_lat(This,pVal)	\
    (This)->lpVtbl -> get_lat(This,pVal)

#define ID302_Trk_Point_Type_put_lat(This,newVal)	\
    (This)->lpVtbl -> put_lat(This,newVal)

#define ID302_Trk_Point_Type_get_lon(This,pVal)	\
    (This)->lpVtbl -> get_lon(This,pVal)

#define ID302_Trk_Point_Type_put_lon(This,newVal)	\
    (This)->lpVtbl -> put_lon(This,newVal)

#define ID302_Trk_Point_Type_get_time(This,pVal)	\
    (This)->lpVtbl -> get_time(This,pVal)

#define ID302_Trk_Point_Type_put_time(This,newVal)	\
    (This)->lpVtbl -> put_time(This,newVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID302_Trk_Point_Type_INTERFACE_DEFINED__ */


#ifndef __ID310_Trk_Hdr_Type_INTERFACE_DEFINED__
#define __ID310_Trk_Hdr_Type_INTERFACE_DEFINED__

/* interface ID310_Trk_Hdr_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID310_Trk_Hdr_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("23423C4D-EB94-447C-A6CF-1635C4063321")
    ID310_Trk_Hdr_Type : public IGarminDataType
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID310_Trk_Hdr_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID310_Trk_Hdr_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID310_Trk_Hdr_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID310_Trk_Hdr_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID310_Trk_Hdr_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID310_Trk_Hdr_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID310_Trk_Hdr_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID310_Trk_Hdr_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID310_Trk_Hdr_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID310_Trk_Hdr_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        END_INTERFACE
    } ID310_Trk_Hdr_TypeVtbl;

    interface ID310_Trk_Hdr_Type
    {
        CONST_VTBL struct ID310_Trk_Hdr_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID310_Trk_Hdr_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID310_Trk_Hdr_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID310_Trk_Hdr_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID310_Trk_Hdr_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID310_Trk_Hdr_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID310_Trk_Hdr_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID310_Trk_Hdr_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID310_Trk_Hdr_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID310_Trk_Hdr_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID310_Trk_Hdr_Type_INTERFACE_DEFINED__ */


#ifndef __ID311_Trk_Hdr_Type_INTERFACE_DEFINED__
#define __ID311_Trk_Hdr_Type_INTERFACE_DEFINED__

/* interface ID311_Trk_Hdr_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID311_Trk_Hdr_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("05ABD889-E3EB-41EC-A0DD-837E023F30F6")
    ID311_Trk_Hdr_Type : public IGarminDataType
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID311_Trk_Hdr_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID311_Trk_Hdr_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID311_Trk_Hdr_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID311_Trk_Hdr_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID311_Trk_Hdr_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID311_Trk_Hdr_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID311_Trk_Hdr_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID311_Trk_Hdr_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID311_Trk_Hdr_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID311_Trk_Hdr_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        END_INTERFACE
    } ID311_Trk_Hdr_TypeVtbl;

    interface ID311_Trk_Hdr_Type
    {
        CONST_VTBL struct ID311_Trk_Hdr_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID311_Trk_Hdr_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID311_Trk_Hdr_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID311_Trk_Hdr_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID311_Trk_Hdr_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID311_Trk_Hdr_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID311_Trk_Hdr_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID311_Trk_Hdr_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID311_Trk_Hdr_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID311_Trk_Hdr_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID311_Trk_Hdr_Type_INTERFACE_DEFINED__ */


#ifndef __ID312_Trk_Hdr_Type_INTERFACE_DEFINED__
#define __ID312_Trk_Hdr_Type_INTERFACE_DEFINED__

/* interface ID312_Trk_Hdr_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID312_Trk_Hdr_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F1E2E227-ED1C-40F3-90DA-53337D17C9F4")
    ID312_Trk_Hdr_Type : public IGarminDataType
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID312_Trk_Hdr_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID312_Trk_Hdr_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID312_Trk_Hdr_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID312_Trk_Hdr_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID312_Trk_Hdr_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID312_Trk_Hdr_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID312_Trk_Hdr_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID312_Trk_Hdr_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID312_Trk_Hdr_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID312_Trk_Hdr_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        END_INTERFACE
    } ID312_Trk_Hdr_TypeVtbl;

    interface ID312_Trk_Hdr_Type
    {
        CONST_VTBL struct ID312_Trk_Hdr_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID312_Trk_Hdr_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID312_Trk_Hdr_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID312_Trk_Hdr_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID312_Trk_Hdr_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID312_Trk_Hdr_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID312_Trk_Hdr_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID312_Trk_Hdr_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID312_Trk_Hdr_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID312_Trk_Hdr_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID312_Trk_Hdr_Type_INTERFACE_DEFINED__ */


#ifndef __IDXXX_Prx_Wpt_Type_INTERFACE_DEFINED__
#define __IDXXX_Prx_Wpt_Type_INTERFACE_DEFINED__

/* interface IDXXX_Prx_Wpt_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXXX_Prx_Wpt_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("436FF720-6760-4036-ADFF-1B4CA206F6A8")
    IDXXX_Prx_Wpt_Type : public IGarminDataType
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IDXXX_Prx_Wpt_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXXX_Prx_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXXX_Prx_Wpt_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXXX_Prx_Wpt_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXXX_Prx_Wpt_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXXX_Prx_Wpt_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXXX_Prx_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXXX_Prx_Wpt_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            IDXXX_Prx_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            IDXXX_Prx_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        END_INTERFACE
    } IDXXX_Prx_Wpt_TypeVtbl;

    interface IDXXX_Prx_Wpt_Type
    {
        CONST_VTBL struct IDXXX_Prx_Wpt_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXXX_Prx_Wpt_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXXX_Prx_Wpt_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXXX_Prx_Wpt_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXXX_Prx_Wpt_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXXX_Prx_Wpt_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXXX_Prx_Wpt_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXXX_Prx_Wpt_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXXX_Prx_Wpt_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define IDXXX_Prx_Wpt_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDXXX_Prx_Wpt_Type_INTERFACE_DEFINED__ */


#ifndef __ID400_Prx_Wpt_Type_INTERFACE_DEFINED__
#define __ID400_Prx_Wpt_Type_INTERFACE_DEFINED__

/* interface ID400_Prx_Wpt_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID400_Prx_Wpt_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C6F61EAE-6D5A-4615-8393-533AC03E3828")
    ID400_Prx_Wpt_Type : public IDXXX_Prx_Wpt_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID400_Prx_Wpt_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID400_Prx_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID400_Prx_Wpt_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID400_Prx_Wpt_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID400_Prx_Wpt_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID400_Prx_Wpt_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID400_Prx_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID400_Prx_Wpt_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID400_Prx_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID400_Prx_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        END_INTERFACE
    } ID400_Prx_Wpt_TypeVtbl;

    interface ID400_Prx_Wpt_Type
    {
        CONST_VTBL struct ID400_Prx_Wpt_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID400_Prx_Wpt_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID400_Prx_Wpt_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID400_Prx_Wpt_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID400_Prx_Wpt_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID400_Prx_Wpt_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID400_Prx_Wpt_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID400_Prx_Wpt_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID400_Prx_Wpt_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID400_Prx_Wpt_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID400_Prx_Wpt_Type_INTERFACE_DEFINED__ */


#ifndef __ID403_Prx_Wpt_Type_INTERFACE_DEFINED__
#define __ID403_Prx_Wpt_Type_INTERFACE_DEFINED__

/* interface ID403_Prx_Wpt_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID403_Prx_Wpt_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C068C7CC-38A4-4ADF-87FC-EBC8C098836C")
    ID403_Prx_Wpt_Type : public IDXXX_Prx_Wpt_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID403_Prx_Wpt_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID403_Prx_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID403_Prx_Wpt_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID403_Prx_Wpt_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID403_Prx_Wpt_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID403_Prx_Wpt_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID403_Prx_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID403_Prx_Wpt_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID403_Prx_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID403_Prx_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        END_INTERFACE
    } ID403_Prx_Wpt_TypeVtbl;

    interface ID403_Prx_Wpt_Type
    {
        CONST_VTBL struct ID403_Prx_Wpt_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID403_Prx_Wpt_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID403_Prx_Wpt_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID403_Prx_Wpt_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID403_Prx_Wpt_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID403_Prx_Wpt_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID403_Prx_Wpt_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID403_Prx_Wpt_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID403_Prx_Wpt_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID403_Prx_Wpt_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID403_Prx_Wpt_Type_INTERFACE_DEFINED__ */


#ifndef __ID450_Prx_Wpt_Type_INTERFACE_DEFINED__
#define __ID450_Prx_Wpt_Type_INTERFACE_DEFINED__

/* interface ID450_Prx_Wpt_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID450_Prx_Wpt_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("23A98EA2-3BF2-4140-804B-8E8CFC572810")
    ID450_Prx_Wpt_Type : public IDXXX_Prx_Wpt_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID450_Prx_Wpt_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID450_Prx_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID450_Prx_Wpt_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID450_Prx_Wpt_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID450_Prx_Wpt_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID450_Prx_Wpt_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID450_Prx_Wpt_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID450_Prx_Wpt_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID450_Prx_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID450_Prx_Wpt_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        END_INTERFACE
    } ID450_Prx_Wpt_TypeVtbl;

    interface ID450_Prx_Wpt_Type
    {
        CONST_VTBL struct ID450_Prx_Wpt_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID450_Prx_Wpt_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID450_Prx_Wpt_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID450_Prx_Wpt_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID450_Prx_Wpt_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID450_Prx_Wpt_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID450_Prx_Wpt_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID450_Prx_Wpt_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID450_Prx_Wpt_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID450_Prx_Wpt_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID450_Prx_Wpt_Type_INTERFACE_DEFINED__ */


#ifndef __IDXXX_Almanac_Type_INTERFACE_DEFINED__
#define __IDXXX_Almanac_Type_INTERFACE_DEFINED__

/* interface IDXXX_Almanac_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDXXX_Almanac_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EA73540C-C0F6-4e60-B083-E1DA508D8138")
    IDXXX_Almanac_Type : public IGarminDataType
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IDXXX_Almanac_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDXXX_Almanac_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDXXX_Almanac_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDXXX_Almanac_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IDXXX_Almanac_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IDXXX_Almanac_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IDXXX_Almanac_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IDXXX_Almanac_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            IDXXX_Almanac_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            IDXXX_Almanac_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        END_INTERFACE
    } IDXXX_Almanac_TypeVtbl;

    interface IDXXX_Almanac_Type
    {
        CONST_VTBL struct IDXXX_Almanac_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDXXX_Almanac_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDXXX_Almanac_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDXXX_Almanac_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDXXX_Almanac_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IDXXX_Almanac_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IDXXX_Almanac_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IDXXX_Almanac_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IDXXX_Almanac_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define IDXXX_Almanac_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDXXX_Almanac_Type_INTERFACE_DEFINED__ */


#ifndef __ID500_Almanac_Type_INTERFACE_DEFINED__
#define __ID500_Almanac_Type_INTERFACE_DEFINED__

/* interface ID500_Almanac_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID500_Almanac_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("317AC2D3-C90B-4229-AC52-AEB80D4618BA")
    ID500_Almanac_Type : public IDXXX_Almanac_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID500_Almanac_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID500_Almanac_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID500_Almanac_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID500_Almanac_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID500_Almanac_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID500_Almanac_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID500_Almanac_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID500_Almanac_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID500_Almanac_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID500_Almanac_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        END_INTERFACE
    } ID500_Almanac_TypeVtbl;

    interface ID500_Almanac_Type
    {
        CONST_VTBL struct ID500_Almanac_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID500_Almanac_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID500_Almanac_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID500_Almanac_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID500_Almanac_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID500_Almanac_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID500_Almanac_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID500_Almanac_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID500_Almanac_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID500_Almanac_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID500_Almanac_Type_INTERFACE_DEFINED__ */


#ifndef __ID501_Almanac_Type_INTERFACE_DEFINED__
#define __ID501_Almanac_Type_INTERFACE_DEFINED__

/* interface ID501_Almanac_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID501_Almanac_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8238A7AD-E78C-47F2-9E28-F2E7488CDBC1")
    ID501_Almanac_Type : public IDXXX_Almanac_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID501_Almanac_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID501_Almanac_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID501_Almanac_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID501_Almanac_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID501_Almanac_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID501_Almanac_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID501_Almanac_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID501_Almanac_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID501_Almanac_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID501_Almanac_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        END_INTERFACE
    } ID501_Almanac_TypeVtbl;

    interface ID501_Almanac_Type
    {
        CONST_VTBL struct ID501_Almanac_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID501_Almanac_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID501_Almanac_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID501_Almanac_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID501_Almanac_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID501_Almanac_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID501_Almanac_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID501_Almanac_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID501_Almanac_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID501_Almanac_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID501_Almanac_Type_INTERFACE_DEFINED__ */


#ifndef __ID550_Almanac_Type_INTERFACE_DEFINED__
#define __ID550_Almanac_Type_INTERFACE_DEFINED__

/* interface ID550_Almanac_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID550_Almanac_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("49C2B829-07C0-4610-A4B6-1DDD708AD4C3")
    ID550_Almanac_Type : public IDXXX_Almanac_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID550_Almanac_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID550_Almanac_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID550_Almanac_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID550_Almanac_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID550_Almanac_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID550_Almanac_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID550_Almanac_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID550_Almanac_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID550_Almanac_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID550_Almanac_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        END_INTERFACE
    } ID550_Almanac_TypeVtbl;

    interface ID550_Almanac_Type
    {
        CONST_VTBL struct ID550_Almanac_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID550_Almanac_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID550_Almanac_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID550_Almanac_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID550_Almanac_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID550_Almanac_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID550_Almanac_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID550_Almanac_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID550_Almanac_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID550_Almanac_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID550_Almanac_Type_INTERFACE_DEFINED__ */


#ifndef __ID551_Almanac_Type_INTERFACE_DEFINED__
#define __ID551_Almanac_Type_INTERFACE_DEFINED__

/* interface ID551_Almanac_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID551_Almanac_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FA135063-1E92-40E2-98DE-13CCB19AFED8")
    ID551_Almanac_Type : public IDXXX_Almanac_Type
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID551_Almanac_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID551_Almanac_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID551_Almanac_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID551_Almanac_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID551_Almanac_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID551_Almanac_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID551_Almanac_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID551_Almanac_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID551_Almanac_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID551_Almanac_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        END_INTERFACE
    } ID551_Almanac_TypeVtbl;

    interface ID551_Almanac_Type
    {
        CONST_VTBL struct ID551_Almanac_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID551_Almanac_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID551_Almanac_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID551_Almanac_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID551_Almanac_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID551_Almanac_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID551_Almanac_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID551_Almanac_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID551_Almanac_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID551_Almanac_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)



#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID551_Almanac_Type_INTERFACE_DEFINED__ */


#ifndef __ID600_Date_Time_Type_INTERFACE_DEFINED__
#define __ID600_Date_Time_Type_INTERFACE_DEFINED__

/* interface ID600_Date_Time_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID600_Date_Time_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("85540371-1DB0-45D6-8916-592EAFAB1CA7")
    ID600_Date_Time_Type : public IGarminDataType
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_month( 
            /* [retval][out] */ unsigned int __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_month( 
            /* [in] */ unsigned int newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_day( 
            /* [retval][out] */ unsigned int __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_day( 
            /* [in] */ unsigned int newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_year( 
            /* [retval][out] */ unsigned int __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_year( 
            /* [in] */ unsigned int newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_hour( 
            /* [retval][out] */ unsigned int __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_hour( 
            /* [in] */ unsigned int newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_minute( 
            /* [retval][out] */ unsigned int __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_minute( 
            /* [in] */ unsigned int newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_second( 
            /* [retval][out] */ unsigned int __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_second( 
            /* [in] */ unsigned int newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ID600_Date_Time_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID600_Date_Time_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID600_Date_Time_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID600_Date_Time_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID600_Date_Time_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID600_Date_Time_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID600_Date_Time_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID600_Date_Time_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )( 
            ID600_Date_Time_Type __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IDXXX_Type )( 
            ID600_Date_Time_Type __RPC_FAR * This,
            /* [retval][out] */ IDispatch __RPC_FAR *__RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_month )( 
            ID600_Date_Time_Type __RPC_FAR * This,
            /* [retval][out] */ unsigned int __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_month )( 
            ID600_Date_Time_Type __RPC_FAR * This,
            /* [in] */ unsigned int newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_day )( 
            ID600_Date_Time_Type __RPC_FAR * This,
            /* [retval][out] */ unsigned int __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_day )( 
            ID600_Date_Time_Type __RPC_FAR * This,
            /* [in] */ unsigned int newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_year )( 
            ID600_Date_Time_Type __RPC_FAR * This,
            /* [retval][out] */ unsigned int __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_year )( 
            ID600_Date_Time_Type __RPC_FAR * This,
            /* [in] */ unsigned int newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_hour )( 
            ID600_Date_Time_Type __RPC_FAR * This,
            /* [retval][out] */ unsigned int __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_hour )( 
            ID600_Date_Time_Type __RPC_FAR * This,
            /* [in] */ unsigned int newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_minute )( 
            ID600_Date_Time_Type __RPC_FAR * This,
            /* [retval][out] */ unsigned int __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_minute )( 
            ID600_Date_Time_Type __RPC_FAR * This,
            /* [in] */ unsigned int newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_second )( 
            ID600_Date_Time_Type __RPC_FAR * This,
            /* [retval][out] */ unsigned int __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_second )( 
            ID600_Date_Time_Type __RPC_FAR * This,
            /* [in] */ unsigned int newVal);
        
        END_INTERFACE
    } ID600_Date_Time_TypeVtbl;

    interface ID600_Date_Time_Type
    {
        CONST_VTBL struct ID600_Date_Time_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID600_Date_Time_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID600_Date_Time_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID600_Date_Time_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID600_Date_Time_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID600_Date_Time_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID600_Date_Time_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID600_Date_Time_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ID600_Date_Time_Type_get_Type(This,pVal)	\
    (This)->lpVtbl -> get_Type(This,pVal)

#define ID600_Date_Time_Type_get_IDXXX_Type(This,pVal)	\
    (This)->lpVtbl -> get_IDXXX_Type(This,pVal)


#define ID600_Date_Time_Type_get_month(This,pVal)	\
    (This)->lpVtbl -> get_month(This,pVal)

#define ID600_Date_Time_Type_put_month(This,newVal)	\
    (This)->lpVtbl -> put_month(This,newVal)

#define ID600_Date_Time_Type_get_day(This,pVal)	\
    (This)->lpVtbl -> get_day(This,pVal)

#define ID600_Date_Time_Type_put_day(This,newVal)	\
    (This)->lpVtbl -> put_day(This,newVal)

#define ID600_Date_Time_Type_get_year(This,pVal)	\
    (This)->lpVtbl -> get_year(This,pVal)

#define ID600_Date_Time_Type_put_year(This,newVal)	\
    (This)->lpVtbl -> put_year(This,newVal)

#define ID600_Date_Time_Type_get_hour(This,pVal)	\
    (This)->lpVtbl -> get_hour(This,pVal)

#define ID600_Date_Time_Type_put_hour(This,newVal)	\
    (This)->lpVtbl -> put_hour(This,newVal)

#define ID600_Date_Time_Type_get_minute(This,pVal)	\
    (This)->lpVtbl -> get_minute(This,pVal)

#define ID600_Date_Time_Type_put_minute(This,newVal)	\
    (This)->lpVtbl -> put_minute(This,newVal)

#define ID600_Date_Time_Type_get_second(This,pVal)	\
    (This)->lpVtbl -> get_second(This,pVal)

#define ID600_Date_Time_Type_put_second(This,newVal)	\
    (This)->lpVtbl -> put_second(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ID600_Date_Time_Type_get_month_Proxy( 
    ID600_Date_Time_Type __RPC_FAR * This,
    /* [retval][out] */ unsigned int __RPC_FAR *pVal);


void __RPC_STUB ID600_Date_Time_Type_get_month_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ID600_Date_Time_Type_put_month_Proxy( 
    ID600_Date_Time_Type __RPC_FAR * This,
    /* [in] */ unsigned int newVal);


void __RPC_STUB ID600_Date_Time_Type_put_month_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ID600_Date_Time_Type_get_day_Proxy( 
    ID600_Date_Time_Type __RPC_FAR * This,
    /* [retval][out] */ unsigned int __RPC_FAR *pVal);


void __RPC_STUB ID600_Date_Time_Type_get_day_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ID600_Date_Time_Type_put_day_Proxy( 
    ID600_Date_Time_Type __RPC_FAR * This,
    /* [in] */ unsigned int newVal);


void __RPC_STUB ID600_Date_Time_Type_put_day_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ID600_Date_Time_Type_get_year_Proxy( 
    ID600_Date_Time_Type __RPC_FAR * This,
    /* [retval][out] */ unsigned int __RPC_FAR *pVal);


void __RPC_STUB ID600_Date_Time_Type_get_year_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ID600_Date_Time_Type_put_year_Proxy( 
    ID600_Date_Time_Type __RPC_FAR * This,
    /* [in] */ unsigned int newVal);


void __RPC_STUB ID600_Date_Time_Type_put_year_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ID600_Date_Time_Type_get_hour_Proxy( 
    ID600_Date_Time_Type __RPC_FAR * This,
    /* [retval][out] */ unsigned int __RPC_FAR *pVal);


void __RPC_STUB ID600_Date_Time_Type_get_hour_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ID600_Date_Time_Type_put_hour_Proxy( 
    ID600_Date_Time_Type __RPC_FAR * This,
    /* [in] */ unsigned int newVal);


void __RPC_STUB ID600_Date_Time_Type_put_hour_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ID600_Date_Time_Type_get_minute_Proxy( 
    ID600_Date_Time_Type __RPC_FAR * This,
    /* [retval][out] */ unsigned int __RPC_FAR *pVal);


void __RPC_STUB ID600_Date_Time_Type_get_minute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ID600_Date_Time_Type_put_minute_Proxy( 
    ID600_Date_Time_Type __RPC_FAR * This,
    /* [in] */ unsigned int newVal);


void __RPC_STUB ID600_Date_Time_Type_put_minute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ID600_Date_Time_Type_get_second_Proxy( 
    ID600_Date_Time_Type __RPC_FAR * This,
    /* [retval][out] */ unsigned int __RPC_FAR *pVal);


void __RPC_STUB ID600_Date_Time_Type_get_second_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ID600_Date_Time_Type_put_second_Proxy( 
    ID600_Date_Time_Type __RPC_FAR * This,
    /* [in] */ unsigned int newVal);


void __RPC_STUB ID600_Date_Time_Type_put_second_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ID600_Date_Time_Type_INTERFACE_DEFINED__ */


#ifndef __ID650_FlightBook_Record_Type_INTERFACE_DEFINED__
#define __ID650_FlightBook_Record_Type_INTERFACE_DEFINED__

/* interface ID650_FlightBook_Record_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID650_FlightBook_Record_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4B5F1508-CBF5-43ED-A98A-AEEC7302666B")
    ID650_FlightBook_Record_Type : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID650_FlightBook_Record_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID650_FlightBook_Record_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID650_FlightBook_Record_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID650_FlightBook_Record_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID650_FlightBook_Record_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID650_FlightBook_Record_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID650_FlightBook_Record_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID650_FlightBook_Record_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } ID650_FlightBook_Record_TypeVtbl;

    interface ID650_FlightBook_Record_Type
    {
        CONST_VTBL struct ID650_FlightBook_Record_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID650_FlightBook_Record_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID650_FlightBook_Record_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID650_FlightBook_Record_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID650_FlightBook_Record_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID650_FlightBook_Record_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID650_FlightBook_Record_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID650_FlightBook_Record_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID650_FlightBook_Record_Type_INTERFACE_DEFINED__ */


#ifndef __ID700_Position_Type_INTERFACE_DEFINED__
#define __ID700_Position_Type_INTERFACE_DEFINED__

/* interface ID700_Position_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID700_Position_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("52143944-06EE-45AC-9BCF-1CFC0A38DF58")
    ID700_Position_Type : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID700_Position_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID700_Position_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID700_Position_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID700_Position_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID700_Position_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID700_Position_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID700_Position_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID700_Position_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } ID700_Position_TypeVtbl;

    interface ID700_Position_Type
    {
        CONST_VTBL struct ID700_Position_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID700_Position_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID700_Position_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID700_Position_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID700_Position_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID700_Position_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID700_Position_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID700_Position_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID700_Position_Type_INTERFACE_DEFINED__ */


#ifndef __ID800_Pvt_Data_Type_INTERFACE_DEFINED__
#define __ID800_Pvt_Data_Type_INTERFACE_DEFINED__

/* interface ID800_Pvt_Data_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID800_Pvt_Data_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1509FB5F-1400-4E74-BAC0-424358B98089")
    ID800_Pvt_Data_Type : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID800_Pvt_Data_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID800_Pvt_Data_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID800_Pvt_Data_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID800_Pvt_Data_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID800_Pvt_Data_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID800_Pvt_Data_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID800_Pvt_Data_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID800_Pvt_Data_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } ID800_Pvt_Data_TypeVtbl;

    interface ID800_Pvt_Data_Type
    {
        CONST_VTBL struct ID800_Pvt_Data_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID800_Pvt_Data_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID800_Pvt_Data_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID800_Pvt_Data_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID800_Pvt_Data_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID800_Pvt_Data_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID800_Pvt_Data_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID800_Pvt_Data_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID800_Pvt_Data_Type_INTERFACE_DEFINED__ */


#ifndef __ID906_Lap_Type_INTERFACE_DEFINED__
#define __ID906_Lap_Type_INTERFACE_DEFINED__

/* interface ID906_Lap_Type */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ID906_Lap_Type;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FDAC05DF-DC76-400F-8677-6EA003BFD077")
    ID906_Lap_Type : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ID906_Lap_TypeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ID906_Lap_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ID906_Lap_Type __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ID906_Lap_Type __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ID906_Lap_Type __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ID906_Lap_Type __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ID906_Lap_Type __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ID906_Lap_Type __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } ID906_Lap_TypeVtbl;

    interface ID906_Lap_Type
    {
        CONST_VTBL struct ID906_Lap_TypeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ID906_Lap_Type_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ID906_Lap_Type_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ID906_Lap_Type_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ID906_Lap_Type_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ID906_Lap_Type_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ID906_Lap_Type_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ID906_Lap_Type_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID906_Lap_Type_INTERFACE_DEFINED__ */



#ifndef __GARMINLib_LIBRARY_DEFINED__
#define __GARMINLib_LIBRARY_DEFINED__

/* library GARMINLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_GARMINLib;

EXTERN_C const CLSID CLSID_Communication;

#ifdef __cplusplus

class DECLSPEC_UUID("F7ABA92D-DA5A-4522-A60F-0F29C103E299")
Communication;
#endif

EXTERN_C const CLSID CLSID_BodyPacket;

#ifdef __cplusplus

class DECLSPEC_UUID("E2C4B620-60DE-40F5-9E8D-CAB31B6456F6")
BodyPacket;
#endif

EXTERN_C const CLSID CLSID_Application;

#ifdef __cplusplus

class DECLSPEC_UUID("E881EB23-1EE8-4CA2-8FB6-E44BA19E8BF4")
Application;
#endif

EXTERN_C const CLSID CLSID_ProtocolArray;

#ifdef __cplusplus

class DECLSPEC_UUID("CCF8E6BB-01E6-4CBD-892F-F0021C98BC6D")
ProtocolArray;
#endif

EXTERN_C const CLSID CLSID_ProductData;

#ifdef __cplusplus

class DECLSPEC_UUID("27FB9C7C-881D-4342-8C95-B64789C12968")
ProductData;
#endif

EXTERN_C const CLSID CLSID_BodyPackets;

#ifdef __cplusplus

class DECLSPEC_UUID("B3528481-0DD5-47AA-969A-0068152CBC9D")
BodyPackets;
#endif

EXTERN_C const CLSID CLSID_Primitive;

#ifdef __cplusplus

class DECLSPEC_UUID("23507B85-EA6D-4CEC-B600-759CEE3E5E04")
Primitive;
#endif

EXTERN_C const CLSID CLSID_D100_Wpt_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("4C91C837-D229-4B4A-9709-D6C0F69BC39E")
D100_Wpt_Type;
#endif

EXTERN_C const CLSID CLSID_D101_Wpt_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("43F46BEF-7111-4DE7-AF7D-5E99F69B7040")
D101_Wpt_Type;
#endif

EXTERN_C const CLSID CLSID_D102_Wpt_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("1651EF90-A254-4BD7-BCD6-19710D336840")
D102_Wpt_Type;
#endif

EXTERN_C const CLSID CLSID_D103_Wpt_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("957512F9-9B2F-4FCE-BF24-1A84A50C5E5B")
D103_Wpt_Type;
#endif

EXTERN_C const CLSID CLSID_D104_Wpt_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("DEE6298F-D2DB-425E-A394-F22DD325FE3A")
D104_Wpt_Type;
#endif

EXTERN_C const CLSID CLSID_D105_Wpt_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("AD9B9FC8-A327-4C8E-A7E1-DC6A7E336FD8")
D105_Wpt_Type;
#endif

EXTERN_C const CLSID CLSID_D106_Wpt_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("008404F2-FAB2-4DF0-A7C4-90418D9C3DB2")
D106_Wpt_Type;
#endif

EXTERN_C const CLSID CLSID_D107_Wpt_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("4D008E69-1242-44D5-95F7-7DC960A3D036")
D107_Wpt_Type;
#endif

EXTERN_C const CLSID CLSID_D108_Wpt_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("DE648C25-FDA6-4E41-89E0-C8A2186C9B2D")
D108_Wpt_Type;
#endif

EXTERN_C const CLSID CLSID_D109_Wpt_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("43FDF269-1E47-4051-B0B0-D6656605CA01")
D109_Wpt_Type;
#endif

EXTERN_C const CLSID CLSID_D110_Wpt_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("32B41613-EFBF-4386-890F-291126A2E978")
D110_Wpt_Type;
#endif

EXTERN_C const CLSID CLSID_D150_Wpt_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("732E9B0F-5C43-4C31-8CD6-8A11600FFAA0")
D150_Wpt_Type;
#endif

EXTERN_C const CLSID CLSID_D151_Wpt_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("DA18A25F-ED7F-4911-BFBB-285A7831190F")
D151_Wpt_Type;
#endif

EXTERN_C const CLSID CLSID_D152_Wpt_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("9A125B74-713F-40FC-9595-E5E3F51E7277")
D152_Wpt_Type;
#endif

EXTERN_C const CLSID CLSID_D154_Wpt_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("CF96ADDF-BC58-4CA5-A54B-4397DEB3D13F")
D154_Wpt_Type;
#endif

EXTERN_C const CLSID CLSID_D155_Wpt_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("40777174-DDA7-49A9-B8A2-875625C2C3E0")
D155_Wpt_Type;
#endif

EXTERN_C const CLSID CLSID_D200_Rte_Hdr_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("D3EA58A3-4AC8-4078-97FC-B1B4455EF917")
D200_Rte_Hdr_Type;
#endif

EXTERN_C const CLSID CLSID_D201_Rte_Hdr_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("1B8CB1A8-C435-4CE0-AA67-60941AD75610")
D201_Rte_Hdr_Type;
#endif

EXTERN_C const CLSID CLSID_D202_Rte_Hdr_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("A31F833A-DDD1-497A-96B0-ACA997179440")
D202_Rte_Hdr_Type;
#endif

EXTERN_C const CLSID CLSID_D210_Rte_Link_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("EFF2F681-0349-4FD3-811A-F6882C169620")
D210_Rte_Link_Type;
#endif

EXTERN_C const CLSID CLSID_D301_Trk_Point_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("28D9CC60-6F9A-4CC9-BC0C-290CA58C3E0B")
D301_Trk_Point_Type;
#endif

EXTERN_C const CLSID CLSID_D300_Trk_Point_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("7B8D7DDE-7953-4EAF-BCB9-E35A88CFCC27")
D300_Trk_Point_Type;
#endif

EXTERN_C const CLSID CLSID_D302_Trk_Point_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("9366A030-F925-4B71-BBBE-D7F058EF1AC6")
D302_Trk_Point_Type;
#endif

EXTERN_C const CLSID CLSID_D310_Trk_Hdr_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("BA20AC05-864A-450A-9556-F99F1DD7EEA7")
D310_Trk_Hdr_Type;
#endif

EXTERN_C const CLSID CLSID_D311_Trk_Hdr_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("2C3FA6CA-EE25-439D-A754-0B621BB2C834")
D311_Trk_Hdr_Type;
#endif

EXTERN_C const CLSID CLSID_D312_Trk_Hdr_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("E3C7BEA2-0B59-4B95-9BDD-01058D91E76E")
D312_Trk_Hdr_Type;
#endif

EXTERN_C const CLSID CLSID_D400_Prx_Wpt_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("6D452F77-8412-41DC-B91D-DF250C6966B7")
D400_Prx_Wpt_Type;
#endif

EXTERN_C const CLSID CLSID_D403_Prx_Wpt_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("B549E0FF-8B83-4F4F-A235-67F497F556AA")
D403_Prx_Wpt_Type;
#endif

EXTERN_C const CLSID CLSID_D450_Prx_Wpt_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("564A6544-7671-4953-9D62-CB246C7D3B68")
D450_Prx_Wpt_Type;
#endif

EXTERN_C const CLSID CLSID_D500_Almanac_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("D34CC62D-139F-4381-A9DE-B51A64738654")
D500_Almanac_Type;
#endif

EXTERN_C const CLSID CLSID_D501_Almanac_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("414668FF-9032-4CAF-99B8-48FE137D4F0C")
D501_Almanac_Type;
#endif

EXTERN_C const CLSID CLSID_D550_Almanac_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("9DE54AB2-E63F-4395-BF93-C3AC20E301AA")
D550_Almanac_Type;
#endif

EXTERN_C const CLSID CLSID_D551_Almanac_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("77CFC408-3357-4E31-A802-40B6169888C2")
D551_Almanac_Type;
#endif

EXTERN_C const CLSID CLSID_D600_Date_Time_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("4A96C561-C3DC-4E9C-B2D9-985C6D9853AE")
D600_Date_Time_Type;
#endif

EXTERN_C const CLSID CLSID_D650_FlightBook_Record_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("8C8316B6-2F2C-462A-AA2E-7C2BC0220471")
D650_FlightBook_Record_Type;
#endif

EXTERN_C const CLSID CLSID_D700_Position_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("83DDA911-E86C-4EF5-803E-7775E8766953")
D700_Position_Type;
#endif

EXTERN_C const CLSID CLSID_D800_Pvt_Data_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("7D280D8B-5906-486E-826F-CDCC3191C0FE")
D800_Pvt_Data_Type;
#endif

EXTERN_C const CLSID CLSID_D906_Lap_Type;

#ifdef __cplusplus

class DECLSPEC_UUID("9CF110AD-34F8-4C88-B451-56BB486B201C")
D906_Lap_Type;
#endif
#endif /* __GARMINLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long __RPC_FAR *, unsigned long            , VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long __RPC_FAR *, VARIANT __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif

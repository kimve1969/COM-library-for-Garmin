#if !defined(_GARMIN_TYPES)
#define _GARMIN_TYPES

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
CONST DWORD MAX_LENGTH_OF_PACKET = 255;

CONST DWORD MAX_LENGTH_OF_DATA	 = MAX_LENGTH_OF_PACKET*2;

typedef enum _ERR_READ_BODYPACKET {
	RBP_S_OK					= 0,
	RBP_NOT_FOUND_HEADER_DLE	= 1,
	RBP_NOT_FOUND_TRAILER_DLE	= 2,
	RBP_NOT_FOUND_ETX			= 3,
	RBP_CRC_FAILED				= 4,
	RBP_E_FAIL					= 99

} ERR_READ_BODYPACKET;

// Request type - see IApplication->Request 
typedef enum _RESPONCE_TYPE {
	RESPONCE_UNKNOWN,
	RESPONCE_NOT_RELEASE,
	RESPONCE_NO,
	RESPONCE_ONE_BODYPACKET,
	RESPONCE_RECORDS

} RESPONCE_TYPE;

typedef struct _ProductInfo {
	int		ID;
	char	Link[5];
	char	Cmnd[5];
} ProductInfo;

typedef struct _ProductInfo2 {
	int		ID;
	double	Version;
	char	LinkProt[5];
	char	CmndProt[5];

	char	WptProt[5];
	char	WptDType[5];

	char	RteProt[5];
	char	RteHdrDType[5];
	char	RteWptDType[5];

	char	TrkProt[5];
	char	TrkDType[5];

	char	PrxProt[5];
	char	PrxDType[5];

	char	AlmProt[5];
	char	AlmDType[5];
} ProductInfo2;

/////////////////////////////////////////////////////////////////////////////////////////
// see IApplication::_GetProductCapabilitiesFromTable()
typedef enum _PRODUCT_INFO_FIELD {
	PRODUCT_ID				= 0,

	PRODUCT_LINK			= 2,
	PRODUCT_COMMAND			= 3,

	PRODUCT_WPT_PROTOCOL	= 4,
	PRODUCT_WPT_DATA_TYPE	= 5,

	PRODUCT_RTE_PROTOCOL	= 6,
	PRODUCT_RTE_HDR_DATA_TYPE	= 7,
	PRODUCT_RTE_WPT_DATA_TYPE	= 8,

	PRODUCT_TRK_PROTOCOL	= 9,
	PRODUCT_TRK_DATA_TYPE	= 10,

	PRODUCT_PRX_PROTOCOL	= 11,
	PRODUCT_PRX_DATA_TYPE	= 12,

	PRODUCT_ALM_PROTOCOL	= 13,
	PRODUCT_ALM_DATA_TYPE	= 14,
	// ADD FROM AT 15 index.... see table 
	PRODUCT_DATE_AND_TIME_INITIALIZATION_PROTOCOL	= 15,
	PRODUCT_FLIGHTBOOK_TRANSFER_PROTOCOL			= 16,
	PRODUCT_POSITION_INITIALIZATION_PROTOCOL		= 17,
	PRODUCT_PVT_DATA_PROTOCOL						= 18,
	PRODUCT_LAP_TRANSFER_PROTOCOL					= 19,

	PRODUCT_PHYSICAL_PROTOCOL						= 20

} PRODUCT_INFO_FIELD;

typedef enum _COMMAND_ID 
{
	CMND_ABORT_TRANSFER, /* abort current transfer */
	CMND_TRANSFER_ALM, /* transfer almanac */
	CMND_TRANSFER_POSN, /* transfer position */
	CMND_TRANSFER_PRX, /* transfer proximity waypoints */
	CMND_TRANSFER_RTE, /* transfer routes */
	CMND_TRANSFER_TIME, /* transfer time */
	CMND_TRANSFER_TRK, /* transfer track log */
	CMND_TRANSFER_WPT, /* transfer waypoints */
	CMND_TURN_OFF_PWR, /* turn off power */
	CMND_START_PVT_DATA, /* start transmitting PVT data */
	CMND_STOP_PVT_DATA, /* stop transmitting PVT data */
	CMND_FLIGHTBOOK_TRANSFER, /* start transferring flight records */
	CMND_TRANSFER_LAPS /* transfer laps */
} COMMAND_ID;

typedef enum _PACKET_ID
{
	PID_COMMAND_DATA,
	PID_XFER_CMPLT,
	PID_DATE_TIME_DATA,
	PID_POSITION_DATA,
	PID_PRX_WPT_DATA,
	PID_RECORDS,
	PID_RTE_HDR,
	PID_RTE_WPT_DATA,
	PID_ALMANAC_DATA,
	PID_TRK_DATA,
	PID_WPT_DATA,
	PID_PVT_DATA,
	PID_RTE_LINK_DATA,
	PID_TRK_HDR,
	PID_FLIGHTBOOK_RECORD, /* PACKET WITH FLIGHTBOOK DATA */
	PID_LAP /* PART OF FORERUNNER DATA */
} PACKET_ID;

/*typedef enum _BODYPACKET_ACCESS
{
	ACCESS_OR,
	ACCESS_OW,
	ACCESS_RW
} BODYPACKET_ACCESS;*/

typedef enum _BODYPACKET_USE_MODE
{
	MODE_READ,
	MODE_WRITE
} BODYPACKET_USE_MODE;

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

namespace GARMIN_TYPES{
	enum {
		DLE	= 16,
		ACK	= 6,
		NAK = 21,
		ETX	= 3
	};

	/******************************************************************************

		L000 – Basic Link Protocol

	******************************************************************************/
	namespace L000{
	enum
		{
			Pid_Ack_Byte = 6,
			Pid_Nak_Byte = 21,
			Pid_Protocol_Array = 253, /* may not be implemented in all products */
			Pid_Product_Rqst = 254,
			Pid_Product_Data = 255
		};
	}
	/******************************************************************************

		L001 – Link Protocol 1

	******************************************************************************/
	namespace L001{
		enum
		{
			Pid_Command_Data = 10,
			Pid_Xfer_Cmplt = 12,
			Pid_Date_Time_Data = 14,
			Pid_Position_Data = 17,
			Pid_Prx_Wpt_Data = 19,
			Pid_Records = 27,
			Pid_Rte_Hdr = 29,
			Pid_Rte_Wpt_Data = 30,
			Pid_Almanac_Data = 31,
			Pid_Trk_Data = 34,
			Pid_Wpt_Data = 35,
			Pid_Pvt_Data = 51,
			Pid_Rte_Link_Data = 98,
			Pid_Trk_Hdr = 99,
			Pid_FlightBook_Record = 134, /* packet with FlightBook data */
			Pid_Lap = 149 /* part of Forerunner data */
		};
	}
	/******************************************************************************

		L002 – Link Protocol 2

	******************************************************************************/
	namespace L002{
		enum
		{
			Pid_Almanac_Data = 4,
			Pid_Command_Data = 11,
			Pid_Xfer_Cmplt = 12,
			Pid_Date_Time_Data = 20,
			Pid_Position_Data = 24,
			Pid_Prx_Wpt_Data = 27,
			Pid_Records = 35,
			Pid_Rte_Hdr = 37,
			Pid_Rte_Wpt_Data = 39,
			Pid_Wpt_Data = 43
		};	
	}
	/******************************************************************************

		A000 – Product Data Protocol

	******************************************************************************/
	typedef struct{
		int product_ID;
		int software_version;
		/* char product_description[]; null-terminated string */
		/* ... zero or more additional null-terminated strings */
	} Product_Data_Type;
	/******************************************************************************

		GARMIN DATA TYPES

	******************************************************************************/
	typedef BYTE /*unsigned char*/		byte;
	typedef USHORT /*unsigned int*/		word;
	typedef ULONG32 /*unsigned long*/	longword;
	typedef BYTE /*unsigned char*/		boolean;

	typedef struct
	{
		LONG32 /*long*/ lat; /* latitude in semicircles */
		LONG32 /*long*/ lon; /* longitude in semicircles */
	} Semicircle_Type;

	typedef struct
	{
		double lat; /* latitude in radians */
		double lon; /* longitude in radians */
	} Radian_Type;

	typedef SHORT /*int*/ Symbol_Type;
	/******************************************************************************

		A001 – Protocol Capability Protocol

	******************************************************************************/
	typedef struct{
		byte tag;
		word data;
	} Protocol_Data_Type;

	typedef Protocol_Data_Type Protocol_Array_Type[];

	enum
	{
		Tag_Phys_Prot_Id = 'P', /* tag for Physical protocol ID */
		Tag_Link_Prot_Id = 'L', /* tag for Link protocol ID */
		Tag_Appl_Prot_Id = 'A', /* tag for Application protocol ID */
		Tag_Data_Type_Id = 'D'  /* tag for Data Type ID */
	};
	/******************************************************************************

		A010 – Device Command Protocol 1

	******************************************************************************/
	namespace A010{
		enum
		{
			Cmnd_Abort_Transfer = 0, /* abort current transfer */
			Cmnd_Transfer_Alm = 1, /* transfer almanac */
			Cmnd_Transfer_Posn = 2, /* transfer position */
			Cmnd_Transfer_Prx = 3, /* transfer proximity waypoints */
			Cmnd_Transfer_Rte = 4, /* transfer routes */
			Cmnd_Transfer_Time = 5, /* transfer time */
			Cmnd_Transfer_Trk = 6, /* transfer track log */
			Cmnd_Transfer_Wpt = 7, /* transfer waypoints */
			Cmnd_Turn_Off_Pwr = 8, /* turn off power */
			Cmnd_Start_Pvt_Data = 49, /* start transmitting PVT data */
			Cmnd_Stop_Pvt_Data = 50, /* stop transmitting PVT data */
			Cmnd_FlightBook_Transfer = 92, /* start transferring flight records */
			Cmnd_Transfer_Laps = 117 /* transfer laps */
		};
	}
	/******************************************************************************

		A011 – Device Command Protocol 2

	******************************************************************************/
	namespace A011{
		enum
		{
			Cmnd_Abort_Transfer = 0, /* abort current transfer */
			Cmnd_Transfer_Alm = 4, /* transfer almanac */
			Cmnd_Transfer_Rte = 8, /* transfer routes */
			Cmnd_Transfer_Prx = 17, /* transfer proximity waypoints */
			Cmnd_Transfer_Time = 20, /* transfer time */
			Cmnd_Transfer_Wpt = 21, /* transfer waypoints */
			Cmnd_Turn_Off_Pwr = 26 /* turn off power */
		};
	}
	/******************************************************************************

		Product-Specific Data Types

	******************************************************************************/	
	typedef struct
	{
		char ident[6]; /* identifier */
		Semicircle_Type posn; /* position */
		longword unused; /* should be set to zero */
		char cmnt[40]; /* comment */
	} D100_Wpt_Type;

	typedef struct
	{
		char ident[6]; /* identifier */
		Semicircle_Type posn; /* position */
		longword unused; /* should be set to zero */
		char cmnt[40]; /* comment */
		float dst; /* proximity distance (meters) */
		byte smbl; /* symbol id */
	} D101_Wpt_Type;

	typedef struct
	{
		char ident[6]; /* identifier */
		Semicircle_Type posn; /* position */
		longword unused; /* should be set to zero */
		char cmnt[40]; /* comment */
		float dst; /* proximity distance (meters) */
		Symbol_Type smbl; /* symbol id */
	} D102_Wpt_Type;

	typedef struct
	{
		char ident[6]; /* identifier */
		Semicircle_Type posn; /* position */
		longword unused; /* should be set to zero */
		char cmnt[40]; /* comment */
		byte smbl; /* symbol id */
		byte dspl; /* display option */
	} D103_Wpt_Type;

	// ------------- The enumerated values for the “smbl” member of the D103_Wpt_Type are shown below:
	enum
	{
		smbl_dot = 0, /* dot symbol */
		smbl_house = 1, /* house symbol */
		smbl_gas = 2, /* gas symbol */
		smbl_car = 3, /* car symbol */
		smbl_fish = 4, /* fish symbol */
		smbl_boat = 5, /* boat symbol */
		smbl_anchor = 6, /* anchor symbol */
		smbl_wreck = 7, /* wreck symbol */
		smbl_exit = 8, /* exit symbol */
		smbl_skull = 9, /* skull symbol */
		smbl_flag = 10, /* flag symbol */
		smbl_camp = 11, /* camp symbol */
		smbl_circle_x = 12, /* circle with x symbol */
		smbl_deer = 13, /* deer symbol */
		smbl_1st_aid = 14, /* first aid symbol */
		smbl_back_track = 15 /* back track symbol */
	};

	// ------------- The enumerated values for the “dspl” member of the D103_Wpt_Type are shown below:
	enum
	{
		dspl_name = 0, /* Display symbol with waypoint name */
		dspl_none = 1, /* Display symbol by itself */
		dspl_cmnt = 2 /* Display symbol with comment */
	};

	typedef struct
	{
		char ident[6]; /* identifier */
		Semicircle_Type posn; /* position */
		longword unused; /* should be set to zero */
		char cmnt[40]; /* comment */
		float dst; /* proximity distance (meters) */
		Symbol_Type smbl; /* symbol id */
		byte dspl; /* display option */
	} D104_Wpt_Type;

	// ------------- The enumerated values for the “dspl” member of the D104_Wpt_Type are shown below:
	enum
	{
		dspl_smbl_none = 0, /* Display symbol by itself */
		dspl_smbl_only = 1, /* Display symbol by itself */
		dspl_smbl_name = 3, /* Display symbol with waypoint name */
		dspl_smbl_cmnt = 5, /* Display symbol with comment */
	};

	typedef struct
	{
		Semicircle_Type posn; /* position */
		Symbol_Type smbl; /* symbol id */
		/* char wpt_ident[]; null-terminated string */
	} D105_Wpt_Type;

	typedef struct
	{
		byte wpt_class; /* class */
		byte subclass[13]; /* subclass */
		Semicircle_Type posn; /* position */
		Symbol_Type smbl; /* symbol id */
		/* char wpt_ident[]; null-terminated string */
		/* char lnk_ident[]; null-terminated string */
	} D106_Wpt_Type;

	typedef struct
	{
		char ident[6]; /* identifier */
		Semicircle_Type posn; /* position */
		longword unused; /* should be set to zero */
		char cmnt[40]; /* comment */
		byte smbl; /* symbol id */
		byte dspl; /* display option */
		float dst; /* proximity distance (meters) */
		byte color; /* waypoint color */
	} D107_Wpt_Type;

	// ------------- The enumerated values for the “color” member of the D107_Wpt_Type are shown below:
	enum
	{
		clr_default = 0, /* Default waypoint color */
		clr_red = 1, /* Red */
		clr_green = 2, /* Green */
		clr_blue = 3 /* Blue */
	};

	typedef struct /* size */
	{
		byte wpt_class; /* class (see below) 1 */
		byte color; /* color (see below) 1 */
		byte dspl; /* display options (see below) 1 */
		byte attr; /* attributes (see below) 1 */
		Symbol_Type smbl; /* waypoint symbol 2 */
		byte subclass[18]; /* subclass 18 */
		Semicircle_Type posn; /* 32 bit semicircle 8 */
		float alt; /* altitude in meters 4 */
		float dpth; /* depth in meters 4 */
		float dist; /* proximity distance in meters 4 */
		char state[2]; /* state 2 */
		char cc[2]; /* country code 2 */
		/* char ident[]; variable length string 1-51 */
		/* char comment[]; waypoint user comment 1-51 */
		/* char facility[]; facility name 1-31 */
		/* char city[]; city name 1-25 */
		/* char addr[]; address number 1-51 */
		/* char cross_road[]; intersecting road label 1-51 */
	} D108_Wpt_Type;

	// ------------- The enumerated values for the “wpt_class” member of the D108_Wpt_Type are defined as follows:
	enum
	{
		USER_WPT = 0x00, /* User waypoint */
		AVTN_APT_WPT = 0x40, /* Aviation Airport waypoint */
		AVTN_INT_WPT = 0x41, /* Aviation Intersection waypoint */
		AVTN_NDB_WPT = 0x42, /* Aviation NDB waypoint */
		AVTN_VOR_WPT = 0x43, /* Aviation VOR waypoint */
		AVTN_ARWY_WPT = 0x44, /* Aviation Airport Runway waypoint */
		AVTN_AINT_WPT = 0x45, /* Aviation Airport Intersection */
		AVTN_ANDB_WPT = 0x46, /* Aviation Airport NDB waypoint */
		MAP_PNT_WPT = 0x80, /* Map Point waypoint */
		MAP_AREA_WPT = 0x81, /* Map Area waypoint */
		MAP_INT_WPT = 0x82, /* Map Intersection waypoint */
		MAP_ADRS_WPT = 0x83, /* Map Address waypoint */
		MAP_LINE_WPT = 0x84, /* Map Line Waypoint */
	};

	enum
	{
		Black,
		Dark_Red,
		Dark_Green,
		Dark_Yellow,
		Dark_Blue,
		Dark_Magenta,
		Dark_Cyan,
		Light_Gray,
		Dark_Gray,
		Red,
		Green,
		Yellow,
		Blue,
		Magenta,
		Cyan,
		White,
		Default_Color = 0xFF 
	};

	typedef struct /* size */
	{
		byte dtyp; /* data packet type (0x01 for D109)1 */
		byte wpt_class; /* class 1 */
		byte dspl_color; /* display & color (see below) 1 */
		byte attr; /* attributes (0x70 for D109) 1 */
		Symbol_Type smbl; /* waypoint symbol 2 */
		byte subclass[18]; /* subclass 18 */
		Semicircle_Type posn; /* 32 bit semicircle 8 */
		float alt; /* altitude in meters 4 */
		float dpth; /* depth in meters 4 */
		float dist; /* proximity distance in meters 4 */
		char state[2]; /* state 2 */
		char cc[2]; /* country code 2 */
		longword ete; /* outbound link ete in seconds 4 */
		/* char ident[]; variable length string 1-51 */
		/* char comment[]; waypoint user comment 1-51 */
		/* char facility[]; facility name 1-31 */
		/* char city[]; city name 1-25 */
		/* char addr[]; address number 1-51 */
		/* char cross_road[]; intersecting road label 1-51 */
	} D109_Wpt_Type;

	typedef struct /* size */
	{
		byte dtyp; /* data packet type (0x01 for D110)1 */
		byte wpt_class; /* class 1 */
		byte dspl_color; /* display & color (see below) 1 */
		byte attr; /* attributes (0x80 for D110) 1 */
		Symbol_Type smbl; /* waypoint symbol 2 */
		byte subclass[18]; /* subclass 18 */
		Semicircle_Type posn; /* 32 bit semicircle 8 */
		float alt; /* altitude in meters 4 */
		float dpth; /* depth in meters 4 */
		float dist; /* proximity distance in meters 4 */
		char state[2]; /* state 2 */
		char cc[2]; /* country code 2 */
		longword ete; /* outbound link ete in seconds 4 */
		float temp; /* temperature 4 */
		longword time; /* timestamp 4 */
		int wpt_cat; /* category membership 2 */
		/* char ident[]; variable length string 1-51 */
		/* char comment[]; waypoint user comment 1-51 */
		/* char facility[]; facility name 1-31 */
		/* char city[]; city name 1-25 */
		/* char addr[]; address number 1-51 */
		/* char cross_road[]; intersecting road label 1-51 */
	} D110_Wpt_Type;

	typedef struct
	{
		char ident[6]; /* identifier */
		char cc[2]; /* country code */
		byte wpt_class; /* class */
		Semicircle_Type posn; /* position */
		SHORT/*int*/ alt; /* altitude (meters) */
		char city[24]; /* city */
		char state[2]; /* state */
		char name[30]; /* facility name */
		char cmnt[40]; /* comment */
	} D150_Wpt_Type;

	typedef struct
	{
		char ident[6]; /* identifier */
		Semicircle_Type posn; /* position */
		longword unused; /* should be set to zero */
		char cmnt[40]; /* comment */
		float dst; /* proximity distance (meters) */
		char name[30]; /* facility name */
		char city[24]; /* city */
		char state[2]; /* state */
		SHORT/*int*/ alt; /* altitude (meters) */
		char cc[2]; /* country code */
		char unused2; /* should be set to zero */
		byte wpt_class; /* class */
	} D151_Wpt_Type;

	typedef struct
	{
		char ident[6]; /* identifier */
		Semicircle_Type posn; /* position */
		longword unused; /* should be set to zero */
		char cmnt[40]; /* comment */
		float dst; /* proximity distance (meters) */
		char name[30]; /* facility name */
		char city[24]; /* city */
		char state[2]; /* state */
		SHORT/*int*/ alt; /* altitude (meters) */
		char cc[2]; /* country code */
		char unused2; /* should be set to zero */
		byte wpt_class; /* class */
	} D152_Wpt_Type;

	typedef struct
	{
		char ident[6]; /* identifier */
		Semicircle_Type posn; /* position */
		longword unused; /* should be set to zero */
		char cmnt[40]; /* comment */
		float dst; /* proximity distance (meters) */
		char name[30]; /* facility name */
		char city[24]; /* city */
		char state[2]; /* state */
		SHORT/*int*/ alt; /* altitude (meters) */
		char cc[2]; /* country code */
		char unused2; /* should be set to zero */
		byte wpt_class; /* class */
		Symbol_Type smbl; /* symbol id */
	} D154_Wpt_Type;

	typedef struct
	{
		char ident[6]; /* identifier */
		Semicircle_Type posn; /* position */
		longword unused; /* should be set to zero */
		char cmnt[40]; /* comment */
		float dst; /* proximity distance (meters) */
		char name[30]; /* facility name */
		char city[24]; /* city */
		char state[2]; /* state */
		SHORT/*int*/ alt; /* altitude (meters) */
		char cc[2]; /* country code */
		char unused2; /* should be set to zero */
		byte wpt_class; /* class */
		Symbol_Type smbl; /* symbol id */
		byte dspl; /* display option */
	} D155_Wpt_Type;

	typedef byte D200_Rte_Hdr_Type; /* route number */

	typedef struct
	{
		byte nmbr; /* route number */
		char cmnt[20]; /* comment */
	} D201_Rte_Hdr_Type;

	typedef struct
	{
		/* char rte_ident[]; null-terminated string */
	} D202_Rte_Hdr_Type;

	typedef struct
	{
		word _class; /* link class; see below */
		byte subclass[18]; /* subclass */
		/* char ident[]; variable length string */
	} D210_Rte_Link_Type;

	typedef struct
	{
		Semicircle_Type posn; /* position */
		longword time; /* time */
		boolean new_trk; /* new track segment? */
	} D300_Trk_Point_Type;

	typedef struct
	{
		Semicircle_Type posn; /* position */
		longword time; /* time */
		float alt; /* altitude in meters */
		float dpth; /* depth in meters */
		boolean new_trk; /* new track segment? */
	} D301_Trk_Point_Type;

	typedef struct
	{
		Semicircle_Type posn; /* position */
		longword time; /* time */
		float alt; /* altitude in meters */
		float dpth; /* depth in meters */
		float temp; /* temp in degrees C */
		boolean new_trk; /* new track segment? */
	} D302_Trk_Point_Type;

	typedef struct
	{
		boolean dspl; /* display on the map? */
		byte color; /* color (same as D108) */
		/* char trk_ident[]; null-terminated string */
	} D310_Trk_Hdr_Type;

	typedef struct
	{
		word index; /* unique among all tracks received from a unit */
	} D311_Trk_Hdr_Type;

	typedef struct
	{
		boolean dspl; /* display on the map? */
		byte color; /* color (same as D110) */
		/* char trk_ident[]; null-terminated string */
	} D312_Trk_Hdr_Type;

	typedef struct
	{
		D100_Wpt_Type wpt; /* waypoint */
		float dst; /* proximity distance (meters) */
	} D400_Prx_Wpt_Type;

	typedef struct
	{
		D103_Wpt_Type wpt; /* waypoint */
		float dst; /* proximity distance (meters) */
	} D403_Prx_Wpt_Type;

	typedef struct
	{
		SHORT/*int*/ idx; /* proximity index */
		D150_Wpt_Type wpt; /* waypoint */
		float dst; /* proximity distance (meters) */
	} D450_Prx_Wpt_Type;

	typedef struct
	{
		SHORT/*int*/ wn; /* week number (weeks) */
		float toa; /* almanac data reference time (s) */
		float af0; /* clock correction coefficient (s) */
		float af1; /* clock correction coefficient (s/s) */
		float e; /* eccentricity (-) */
		float sqrta; /* square root of semi-major axis (a) (m**1/2) */
		float m0; /* mean anomaly at reference time (r) */
		float w; /* argument of perigee (r) */
		float omg0; /* right ascension (r) */
		float odot; /* rate of right ascension (r/s) */
		float i; /* inclination angle (r) */
	} D500_Almanac_Type;

	typedef struct
	{
		SHORT/*int*/ wn; /* week number (weeks) */
		float toa; /* almanac data reference time (s) */
		float af0; /* clock correction coefficient (s) */
		float af1; /* clock correction coefficient (s/s) */
		float e; /* eccentricity (-) */
		float sqrta; /* square root of semi-major axis (a) (m**1/2) */
		float m0; /* mean anomaly at reference time (r) */
		float w; /* argument of perigee (r) */
		float omg0; /* right ascension (r) */
		float odot; /* rate of right ascension (r/s) */
		float i; /* inclination angle (r) */
		byte hlth; /* almanac health */
	} D501_Almanac_Type;

	typedef struct
	{
		char svid; /* satellite id */
		SHORT/*int*/ wn; /* week number (weeks) */
		float toa; /* almanac data reference time (s) */
		float af0; /* clock correction coefficient (s) */
		float af1; /* clock correction coefficient (s/s) */
		float e; /* eccentricity (-) */
		float sqrta; /* square root of semi-major axis (a) (m**1/2) */
		float m0; /* mean anomaly at reference time (r) */
		float w; /* argument of perigee (r) */
		float omg0; /* right ascension (r) */
		float odot; /* rate of right ascension (r/s) */
		float i; /* inclination angle (r) */
	} D550_Almanac_Type;

	typedef struct
	{
		char svid; /* satellite id */
		SHORT/*int*/ wn; /* week number (weeks) */
		float toa; /* almanac data reference time (s) */
		float af0; /* clock correction coefficient (s) */
		float af1; /* clock correction coefficient (s/s) */
		float e; /* eccentricity (-) */
		float sqrta; /* square root of semi-major axis (a) (m**1/2) */
		float m0; /* mean anomaly at reference time (r) */
		float w; /* argument of perigee (r) */
		float omg0; /* right ascension (r) */
		float odot; /* rate of right ascension (r/s) */
		float i; /* inclination angle (r) */
		byte hlth; /* almanac health bits 17:24 (coded) */
	} D551_Almanac_Type;

	typedef struct
	{
		byte month; /* month (1-12) */
		byte day; /* day (1-31) */
		word year; /* year (1990 means 1990) */
		SHORT /*int*/ hour; /* hour (0-23) */
		byte minute; /* minute (0-59) */
		byte second; /* second (0-59) */
	} D600_Date_Time_Type;

	typedef struct
	{
		longword takeoff_time; /* Time flight started */
		longword landing_time; /* Time flight ended */
		Semicircle_Type takeoff_posn; /* Takeoff lat/long */
		Semicircle_Type landing_posn; /* Takeoff lat/long */
		longword night_time; /* Time in seconds flown in night time conditions */
		longword num_landings; /* Number of landings during the flight */
		float max_speed; /* Max velocity during flight (meters/sec) */
		float max_alt; /* Max altitude above WGS 84 ellipsoid (meters) */
		float distance; /* Distance of flight (meters) */
		boolean cross_country_flag; /* Flight met cross country criteria */
		/* char departure_name[]; /* Name of airport <= 30+1 bytes */
		/* char departure_ident[]; /* ID of airport <= 10+1 bytes */
		/* char arrival_name[]; /* Name of airport <= 30+1 bytes */
		/* char arrival_ident[]; /* ID of airport <= 10+1 bytes */
		/* char ac_id[]; /* N Number of airplane <= 10+1 bytes */
	} D650_FlightBook_Record_Type;

	typedef Radian_Type D700_Position_Type;

	typedef struct
	{
		float alt; /* altitude above WGS 84 ellipsoid (meters) */
		float epe; /* estimated position error, 2 sigma (meters) */
		float eph; /* epe, but horizontal only (meters) */
		float epv; /* epe, but vertical only (meters) */
		SHORT/*int*/ fix; /* type of position fix */
		double tow; /* time of week (seconds) */
		Radian_Type posn; /* latitude and longitude (radians) */
		float east; /* velocity east (meters/second) */
		float north; /* velocity north (meters/second) */
		float up; /* velocity up (meters/second) */
		float msl_hght; /* height of WGS 84 ellipsoid above MSL (meters) */
		SHORT/*int*/ leap_scnds; /* difference between GPS and UTC (seconds) */
		long wn_days; /* week number days */
	} D800_Pvt_Data_Type;

	typedef struct
	{
		longword start_time; /* Number of seconds since */
		/* UTC 12:00 AM, December 31, 1989 */
		longword total_time; /* In hundredths of a second */
		float total_distance; /* In meters */
		Semicircle_Type begin; /* Invalid if both lat and lon are 0x7FFFFFFF */
		Semicircle_Type end; /* Invalid if both lat and lon are 0x7FFFFFFF */
		word calories; /* */
		byte track_index; /* See below */
		byte unused; /* Unused. Set to 0. */
	} D906_Lap_Type;

}


#endif
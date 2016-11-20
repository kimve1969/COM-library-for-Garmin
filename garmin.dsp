# Microsoft Developer Studio Project File - Name="garmin" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Dynamic-Link Library" 0x0102

CFG=garmin - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "garmin.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "garmin.mak" CFG="garmin - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "garmin - Win32 Debug" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "garmin - Win32 Unicode Debug" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "garmin - Win32 Release MinSize" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "garmin - Win32 Release MinDependency" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "garmin - Win32 Unicode Release MinSize" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "garmin - Win32 Unicode Release MinDependency" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""$/garmin_api", YDFAAAAA"
# PROP Scc_LocalPath "."
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "garmin - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MTd /W3 /Gm /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /FR /Yu"stdafx.h" /FD /GZ /c
# ADD BASE RSC /l 0x419 /d "_DEBUG"
# ADD RSC /l 0x419 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /debug /machine:I386 /pdbtype:sept
# Begin Custom Build - Performing registration
OutDir=.\Debug
TargetPath=.\Debug\garmin.dll
InputPath=.\Debug\garmin.dll
SOURCE="$(InputPath)"

"$(OutDir)\regsvr32.trg" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	regsvr32 /s /c "$(TargetPath)" 
	echo regsvr32 exec. time > "$(OutDir)\regsvr32.trg" 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "garmin - Win32 Unicode Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "DebugU"
# PROP BASE Intermediate_Dir "DebugU"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "DebugU"
# PROP Intermediate_Dir "DebugU"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MTd /W3 /Gm /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_USRDLL" /D "_UNICODE" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MTd /W3 /Gm /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_USRDLL" /D "_UNICODE" /Yu"stdafx.h" /FD /GZ /c
# ADD BASE RSC /l 0x419 /d "_DEBUG"
# ADD RSC /l 0x419 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /debug /machine:I386 /pdbtype:sept
# Begin Custom Build - Performing registration
OutDir=.\DebugU
TargetPath=.\DebugU\garmin.dll
InputPath=.\DebugU\garmin.dll
SOURCE="$(InputPath)"

"$(OutDir)\regsvr32.trg" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	if "%OS%"=="" goto NOTNT 
	if not "%OS%"=="Windows_NT" goto NOTNT 
	regsvr32 /s /c "$(TargetPath)" 
	echo regsvr32 exec. time > "$(OutDir)\regsvr32.trg" 
	goto end 
	:NOTNT 
	echo Warning : Cannot register Unicode DLL on Windows 95 
	:end 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "garmin - Win32 Release MinSize"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "ReleaseMinSize"
# PROP BASE Intermediate_Dir "ReleaseMinSize"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "ReleaseMinSize"
# PROP Intermediate_Dir "ReleaseMinSize"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /O1 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "_ATL_DLL" /D "_ATL_MIN_CRT" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MT /W3 /O1 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "_ATL_DLL" /Yu"stdafx.h" /FD /c
# ADD BASE RSC /l 0x419 /d "NDEBUG"
# ADD RSC /l 0x419 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /machine:I386
# Begin Custom Build - Performing registration
OutDir=.\ReleaseMinSize
TargetPath=.\ReleaseMinSize\garmin.dll
InputPath=.\ReleaseMinSize\garmin.dll
SOURCE="$(InputPath)"

"$(OutDir)\regsvr32.trg" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	regsvr32 /s /c "$(TargetPath)" 
	echo regsvr32 exec. time > "$(OutDir)\regsvr32.trg" 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "garmin - Win32 Release MinDependency"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "ReleaseMinDependency"
# PROP BASE Intermediate_Dir "ReleaseMinDependency"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "ReleaseMinDependency"
# PROP Intermediate_Dir "ReleaseMinDependency"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /O1 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "_ATL_STATIC_REGISTRY" /D "_ATL_MIN_CRT" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MT /W3 /O1 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "_ATL_STATIC_REGISTRY" /Yu"stdafx.h" /FD /c
# ADD BASE RSC /l 0x419 /d "NDEBUG"
# ADD RSC /l 0x419 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /machine:I386
# Begin Custom Build - Performing registration
OutDir=.\ReleaseMinDependency
TargetPath=.\ReleaseMinDependency\garmin.dll
InputPath=.\ReleaseMinDependency\garmin.dll
SOURCE="$(InputPath)"

"$(OutDir)\regsvr32.trg" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	regsvr32 /s /c "$(TargetPath)" 
	echo regsvr32 exec. time > "$(OutDir)\regsvr32.trg" 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "garmin - Win32 Unicode Release MinSize"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "ReleaseUMinSize"
# PROP BASE Intermediate_Dir "ReleaseUMinSize"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "ReleaseUMinSize"
# PROP Intermediate_Dir "ReleaseUMinSize"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /O1 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_USRDLL" /D "_UNICODE" /D "_ATL_DLL" /D "_ATL_MIN_CRT" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MT /W3 /O1 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_USRDLL" /D "_UNICODE" /D "_ATL_DLL" /Yu"stdafx.h" /FD /c
# ADD BASE RSC /l 0x419 /d "NDEBUG"
# ADD RSC /l 0x419 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /machine:I386
# Begin Custom Build - Performing registration
OutDir=.\ReleaseUMinSize
TargetPath=.\ReleaseUMinSize\garmin.dll
InputPath=.\ReleaseUMinSize\garmin.dll
SOURCE="$(InputPath)"

"$(OutDir)\regsvr32.trg" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	if "%OS%"=="" goto NOTNT 
	if not "%OS%"=="Windows_NT" goto NOTNT 
	regsvr32 /s /c "$(TargetPath)" 
	echo regsvr32 exec. time > "$(OutDir)\regsvr32.trg" 
	goto end 
	:NOTNT 
	echo Warning : Cannot register Unicode DLL on Windows 95 
	:end 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "garmin - Win32 Unicode Release MinDependency"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "ReleaseUMinDependency"
# PROP BASE Intermediate_Dir "ReleaseUMinDependency"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "ReleaseUMinDependency"
# PROP Intermediate_Dir "ReleaseUMinDependency"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /O1 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_USRDLL" /D "_UNICODE" /D "_ATL_STATIC_REGISTRY" /D "_ATL_MIN_CRT" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MT /W3 /O1 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_USRDLL" /D "_UNICODE" /D "_ATL_STATIC_REGISTRY" /Yu"stdafx.h" /FD /c
# ADD BASE RSC /l 0x419 /d "NDEBUG"
# ADD RSC /l 0x419 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /dll /machine:I386
# Begin Custom Build - Performing registration
OutDir=.\ReleaseUMinDependency
TargetPath=.\ReleaseUMinDependency\garmin.dll
InputPath=.\ReleaseUMinDependency\garmin.dll
SOURCE="$(InputPath)"

"$(OutDir)\regsvr32.trg" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	if "%OS%"=="" goto NOTNT 
	if not "%OS%"=="Windows_NT" goto NOTNT 
	regsvr32 /s /c "$(TargetPath)" 
	echo regsvr32 exec. time > "$(OutDir)\regsvr32.trg" 
	goto end 
	:NOTNT 
	echo Warning : Cannot register Unicode DLL on Windows 95 
	:end 
	
# End Custom Build

!ENDIF 

# Begin Target

# Name "garmin - Win32 Debug"
# Name "garmin - Win32 Unicode Debug"
# Name "garmin - Win32 Release MinSize"
# Name "garmin - Win32 Release MinDependency"
# Name "garmin - Win32 Unicode Release MinSize"
# Name "garmin - Win32 Unicode Release MinDependency"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\Application.cpp
# End Source File
# Begin Source File

SOURCE=.\BodyPacket.cpp
# ADD CPP /Yu
# End Source File
# Begin Source File

SOURCE=.\BodyPacketImpl.cpp
# End Source File
# Begin Source File

SOURCE=.\BodyPackets.cpp
# End Source File
# Begin Source File

SOURCE=.\Communication.cpp
# End Source File
# Begin Source File

SOURCE=.\D100_Wpt_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D101_Wpt_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D102_Wpt_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D103_Wpt_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D104_Wpt_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D105_Wpt_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D106_Wpt_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D107_Wpt_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D108_Wpt_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D109_Wpt_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D110_Wpt_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D150_Wpt_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D151_Wpt_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D152_Wpt_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D154_Wpt_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D155_Wpt_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D200_Rte_Hdr_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D201_Rte_Hdr_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D202_Rte_Hdr_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D210_Rte_Link_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D300_Trk_Point_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D301_Trk_Point_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D302_Trk_Point_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D310_Trk_Hdr_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D311_Trk_Hdr_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D312_Trk_Hdr_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D400_Prx_Wpt_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D403_Prx_Wpt_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D450_Prx_Wpt_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D500_Almanac_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D501_Almanac_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D550_Almanac_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D551_Almanac_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D600_Date_Time_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D650_FlightBook_Record_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D700_Position_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D800_Pvt_Data_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\D906_Lap_Type.cpp
# End Source File
# Begin Source File

SOURCE=.\garmin.cpp
# End Source File
# Begin Source File

SOURCE=.\garmin.def
# End Source File
# Begin Source File

SOURCE=.\garmin.idl

!IF  "$(CFG)" == "garmin - Win32 Debug"

# ADD MTL /tlb ".\garmin.tlb" /h "garmin.h" /iid "garmin_i.c" /Oicf
# SUBTRACT MTL /nologo /mktyplib203

!ELSEIF  "$(CFG)" == "garmin - Win32 Unicode Debug"

# ADD MTL /tlb ".\garmin.tlb" /h "garmin.h" /iid "garmin_i.c" /Oicf

!ELSEIF  "$(CFG)" == "garmin - Win32 Release MinSize"

# ADD MTL /tlb ".\garmin.tlb" /h "garmin.h" /iid "garmin_i.c" /Oicf

!ELSEIF  "$(CFG)" == "garmin - Win32 Release MinDependency"

# ADD MTL /tlb ".\garmin.tlb" /h "garmin.h" /iid "garmin_i.c" /Oicf

!ELSEIF  "$(CFG)" == "garmin - Win32 Unicode Release MinSize"

# ADD MTL /tlb ".\garmin.tlb" /h "garmin.h" /iid "garmin_i.c" /Oicf

!ELSEIF  "$(CFG)" == "garmin - Win32 Unicode Release MinDependency"

# ADD MTL /tlb ".\garmin.tlb" /h "garmin.h" /iid "garmin_i.c" /Oicf

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\garmin.rc
# End Source File
# Begin Source File

SOURCE=.\Primitive.cpp
# End Source File
# Begin Source File

SOURCE=.\ProductData.cpp
# End Source File
# Begin Source File

SOURCE=.\ProtocolArray.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\Application.h
# End Source File
# Begin Source File

SOURCE=.\BodyPacket.h
# End Source File
# Begin Source File

SOURCE=.\BodyPacketImpl.h
# End Source File
# Begin Source File

SOURCE=.\BodyPackets.h
# End Source File
# Begin Source File

SOURCE=.\Communication.h
# End Source File
# Begin Source File

SOURCE=.\D100_Wpt_Type.h
# End Source File
# Begin Source File

SOURCE=.\D101_Wpt_Type.h
# End Source File
# Begin Source File

SOURCE=.\D102_Wpt_Type.h
# End Source File
# Begin Source File

SOURCE=.\D103_Wpt_Type.h
# End Source File
# Begin Source File

SOURCE=.\D104_Wpt_Type.h
# End Source File
# Begin Source File

SOURCE=.\D105_Wpt_Type.h
# End Source File
# Begin Source File

SOURCE=.\D106_Wpt_Type.h
# End Source File
# Begin Source File

SOURCE=.\D107_Wpt_Type.h
# End Source File
# Begin Source File

SOURCE=.\D108_Wpt_Type.h
# End Source File
# Begin Source File

SOURCE=.\D109_Wpt_Type.h
# End Source File
# Begin Source File

SOURCE=.\D110_Wpt_Type.h
# End Source File
# Begin Source File

SOURCE=.\D150_Wpt_Type.h
# End Source File
# Begin Source File

SOURCE=.\D151_Wpt_Type.h
# End Source File
# Begin Source File

SOURCE=.\D152_Wpt_Type.h
# End Source File
# Begin Source File

SOURCE=.\D154_Wpt_Type.h
# End Source File
# Begin Source File

SOURCE=.\D155_Wpt_Type.h
# End Source File
# Begin Source File

SOURCE=.\D200_Rte_Hdr_Type.h
# End Source File
# Begin Source File

SOURCE=.\D201_Rte_Hdr_Type.h
# End Source File
# Begin Source File

SOURCE=.\D202_Rte_Hdr_Type.h
# End Source File
# Begin Source File

SOURCE=.\D210_Rte_Link_Type.h
# End Source File
# Begin Source File

SOURCE=.\D300_Trk_Point_Type.h
# End Source File
# Begin Source File

SOURCE=.\D301_Trk_Point_Type.h
# End Source File
# Begin Source File

SOURCE=.\D302_Trk_Point_Type.h
# End Source File
# Begin Source File

SOURCE=.\D310_Trk_Hdr_Type.h
# End Source File
# Begin Source File

SOURCE=.\D311_Trk_Hdr_Type.h
# End Source File
# Begin Source File

SOURCE=.\D312_Trk_Hdr_Type.h
# End Source File
# Begin Source File

SOURCE=.\D400_Prx_Wpt_Type.h
# End Source File
# Begin Source File

SOURCE=.\D403_Prx_Wpt_Type.h
# End Source File
# Begin Source File

SOURCE=.\D450_Prx_Wpt_Type.h
# End Source File
# Begin Source File

SOURCE=.\D500_Almanac_Type.h
# End Source File
# Begin Source File

SOURCE=.\D501_Almanac_Type.h
# End Source File
# Begin Source File

SOURCE=.\D550_Almanac_Type.h
# End Source File
# Begin Source File

SOURCE=.\D551_Almanac_Type.h
# End Source File
# Begin Source File

SOURCE=.\D600_Date_Time_Type.h
# End Source File
# Begin Source File

SOURCE=.\D650_FlightBook_Record_Type.h
# End Source File
# Begin Source File

SOURCE=.\D700_Position_Type.h
# End Source File
# Begin Source File

SOURCE=.\D800_Pvt_Data_Type.h
# End Source File
# Begin Source File

SOURCE=.\D906_Lap_Type.h
# End Source File
# Begin Source File

SOURCE=.\Primitive.h
# End Source File
# Begin Source File

SOURCE=.\ProductData.h
# End Source File
# Begin Source File

SOURCE=.\ProtocolArray.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\Application.rgs
# End Source File
# Begin Source File

SOURCE=.\BodyPacket.rgs
# End Source File
# Begin Source File

SOURCE=.\BodyPackets.rgs
# End Source File
# Begin Source File

SOURCE=.\Communication.rgs
# End Source File
# Begin Source File

SOURCE=.\D100_Wpt_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D101_Wpt_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D102_Wpt_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D103_Wpt_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D104_Wpt_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D105_Wpt_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D106_Wpt_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D107_Wpt_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D108_Wpt_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D109_Wpt_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D110_Wpt_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D150_Wpt_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D151_Wpt_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D152_Wpt_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D154_Wpt_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D155_Wpt_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D200_Rte_Hdr_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D201_Rte_Hdr_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D202_Rte_Hdr_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D210_Rte_Link_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D300_Trk_Point_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D301_Trk_Point_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D302_Trk_Point_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D310_Trk_Hdr_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D311_Trk_Hdr_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D312_Trk_Hdr_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D400_Prx_Wpt_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D403_Prx_Wpt_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D450_Prx_Wpt_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D500_Almanac_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D501_Almanac_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D550_Almanac_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D551_Almanac_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D600_Date_Time_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D650_FlightBook_Record_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D700_Position_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D800_Pvt_Data_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\D906_Lap_Type.rgs
# End Source File
# Begin Source File

SOURCE=.\Primitive.rgs
# End Source File
# Begin Source File

SOURCE=.\ProductData.rgs
# End Source File
# Begin Source File

SOURCE=.\ProtocolArray.rgs
# End Source File
# End Group
# End Target
# End Project

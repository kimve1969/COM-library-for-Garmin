// stdafx.h : include file for standard system include files,
//      or project specific include files that are used frequently,
//      but are changed infrequently

#if !defined(AFX_STDAFX_H__92471C39_1FA3_44DA_A597_C45BDFF09752__INCLUDED_)
#define AFX_STDAFX_H__92471C39_1FA3_44DA_A597_C45BDFF09752__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define STRICT
#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0400
#endif
#define _ATL_APARTMENT_THREADED
//#define _ATL_DISABLE_NO_VTABLE
#define _ATL_DEBUG_INTERFACES	// add Kim V.E. for debug count references....

#include <atlbase.h>
//You may derive a class from CComModule and use it if you want to override
//something, but do not change the name of _Module
extern CComModule _Module;
#include <atlcom.h>
#include "garmin_types.h"
#include <objsafe.h>
#include <comdef.h>


//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__92471C39_1FA3_44DA_A597_C45BDFF09752__INCLUDED)

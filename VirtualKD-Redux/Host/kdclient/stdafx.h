/*! \file stdafx.h
    $Id: stdafx.h,v 1.4 2008-12-30 18:47:44 Bazis Exp $
    \brief Precompiled header file
*/

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#define _CRT_SECURE_NO_WARNINGS
// Windows Header Files:
#include <windows.h>
#ifndef E_BOUNDS
#define E_BOUNDS _HRESULT_TYPEDEF_(0x8000000BL)	//Missing from the Windows 7.1A SDK, but required by modern ATL
#endif
#include <tchar.h>



// TODO: reference additional headers your program requires here

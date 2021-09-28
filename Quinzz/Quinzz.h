
// Quinzz.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols
#include "Owner.h"

// CQuinzzApp:
// See Quinzz.cpp for the implementation of this class
//

Owner owner;

class CQuinzzApp : public CWinApp
{
public:
	CQuinzzApp();

	//Owner owner;

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CQuinzzApp theApp;

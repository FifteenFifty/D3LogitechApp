// ColorAndMono.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CColorAndMonoApp:
// See ColorAndMono.cpp for the implementation of this class
//

class CColorAndMonoApp : public CWinApp
{
public:
    CColorAndMonoApp();

    // Overrides
public:
    virtual BOOL InitInstance();
    virtual INT ExitInstance();

    // Implementation

    DECLARE_MESSAGE_MAP()

protected:
    HANDLE m_hMutex;
    ULONG_PTR m_gdiplusToken;
    HANDLE ClaimMutex(LPCTSTR szMutex, LPCTSTR szWndClassName);
};

extern CColorAndMonoApp theApp;
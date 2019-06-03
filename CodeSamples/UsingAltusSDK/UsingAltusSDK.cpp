//////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2014 DigitalPersona, Inc.
//
// DigitalPersona Altus Authentication SDK
//
//////////////////////////////////////////////////////////////////////////////
//
// Sample code
//
// This source code is only intended to demonstrate the usage of the
// DigitalPersona Pro Authentication SDK for a few standard cases.  
// For more detailed information regarding the SDK, consult the documentation.
//
//////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "UsingAltusSDK.h"

int APIENTRY _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow) {
	//DPProInit(); // Uncomment this call to run SDK functions slightly faster.

	CMainDlg dlg;
	dlg.DoModal();

	//DPProTerm(); // Uncomment this call to run SDK functions slightly faster.

	return 0;
}

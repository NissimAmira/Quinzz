#pragma once
#include "Quinzz.h"
#include "QuinzzDlg.h"

// DashboardDlg dialog

class DashboardDlg : public CDialogEx
{
	DECLARE_DYNAMIC(DashboardDlg)

public:
	DashboardDlg(CString nameOfOwner, CWnd* pParent = nullptr);  
	virtual ~DashboardDlg();
	
	BOOL OnInitDialog();
	Owner owner;

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DASHBOARD_D };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	
};

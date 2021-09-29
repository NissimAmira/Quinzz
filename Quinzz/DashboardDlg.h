#pragma once
#include "Quinzz.h"

// DashboardDlg dialog

class DashboardDlg : public CDialogEx
{
	DECLARE_DYNAMIC(DashboardDlg)

public:
	DashboardDlg(CWnd* pParent = nullptr);   // standard constructor
	BOOL OnInitDialog();
	virtual ~DashboardDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DASHBOARD_D };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	
	CTreeCtrl quizTreeCtrl;
};

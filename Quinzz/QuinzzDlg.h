
// QuinzzDlg.h : header file
//

#pragma once
#include "Owner.h"
#include "DashboardDlg.h"



// CQuinzzDlg dialog
class CQuinzzDlg : public CDialogEx
{
// Construction
public:
	CQuinzzDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_QUINZZ_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedNewTest();
	CString nameOfOwner;
	afx_msg void OnEnChangeNameOfOwner();
};

#pragma once


// NewTestDlg dialog

class NewTestDlg : public CDialogEx
{
	DECLARE_DYNAMIC(NewTestDlg)

public:
	NewTestDlg(CWnd* pParent = nullptr);   // standard constructor
	virtual ~NewTestDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NEW_TEST };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};

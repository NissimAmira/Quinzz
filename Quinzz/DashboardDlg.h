#pragma once
#include "Quinzz.h"
#include "Owner.h"
#include "Quizz.h"


// DashboardDlg dialog

class DashboardDlg : public CDialogEx
{
	DECLARE_DYNAMIC(DashboardDlg)

public:
	DashboardDlg(CWnd* pParent=nullptr);   // standard constructor
	DashboardDlg(CWnd* pParent, CString ownerName);   // standard constructor
	virtual ~DashboardDlg();
	Owner owner;


// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DASHBOARD_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CString ownerNameT;
	
	CButton newQuizBtn1;
	CButton newQuizBtn2;
	CButton newQuizBtn3;
	CButton newQuizBtn4;
	CButton newQuizBtn5;
	CButton newQuizBtn6;
	CButton newQuizBtn7;
	CButton newQuizBtn8;
	CButton newQuizBtn9;
	CButton newQuizBtn10;

	void newQuiz(int quizNum, Owner&);
	afx_msg void OnBnClickedNewQuizBtn1();


	afx_msg void OnBnClickedNewQuizBtnRun9();
};

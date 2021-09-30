#pragma once
#include "Quizz.h"


// runQuizzDlgMain dialog

class runQuizzDlgMain : public CDialogEx
{
	DECLARE_DYNAMIC(runQuizzDlgMain)

public:
	runQuizzDlgMain(Quizz& q, CWnd* pParent);   // standard constructor
	virtual ~runQuizzDlgMain();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RUN_QUIZ_MAIN };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CString quiz_title;
	CString num_of_q_int;
	afx_msg void OnBnClickedButtonStart();
	afx_msg void OnBnClickedButtonExit();
};

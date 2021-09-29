#pragma once
#include "newQuizD.h"


// MainDashboard dialog

class MainDashboard : public CDialogEx
{
	DECLARE_DYNAMIC(MainDashboard)

public:
	MainDashboard(CString ownerName, CWnd* pParent = nullptr);   // standard constructor
	virtual ~MainDashboard();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NEW_DASHBOARD };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CButton existingQuizsBTN;
	CButton newQuizBTN;
	afx_msg void OnBnClickedNewQuiz();
};

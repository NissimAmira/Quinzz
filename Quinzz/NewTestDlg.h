#pragma once
#include "Owner.h"

// NewTestDlg dialog

class NewTestDlg : public CDialogEx
{
	DECLARE_DYNAMIC(NewTestDlg)

public:

	//NewTestDlg(CWnd* pParent = nullptr);   // standard constructor
	NewTestDlg(Quizz &q, CWnd* pParent = nullptr);
	virtual ~NewTestDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NEW_TEST };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	friend class DashboardDlg;
	int profileTypeID = 1;
	int NUM_OF_Q; //CComboBox NUM_OF_Q;
	CString QUIZ_TITLE;

	afx_msg void OnEnChangeQuizTitle();
	afx_msg void OnCbnSelchangeNumOfQ();

	CButton NEXT_BTN;
	afx_msg void OnBnClickedNextBtn();
	int radioStage = 0;
	CButton ageRadio;
	CButton genderRadio;
	CButton locationRadio;
	afx_msg void OnBnClickedAgeRadio();
	afx_msg void OnBnClickedGenderRadio();
	afx_msg void OnBnClickedLocationRadio();
};


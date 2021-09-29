#pragma once
#include "Owner.h"

// NewTestDlg dialog

class NewTestDlg : public CDialogEx
{
	DECLARE_DYNAMIC(NewTestDlg)

public:

	//NewTestDlg(CWnd* pParent = nullptr);   // standard constructor
	NewTestDlg(Owner &owner, CWnd* pParent = nullptr);
	virtual ~NewTestDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NEW_TEST };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	// Enter your name
	CString NAME_BOX;
	int profileTypeID = 1;
	afx_msg void OnEnChangeNameBox();
	Owner& owner;
	int NUM_OF_Q; //CComboBox NUM_OF_Q;
	CString QUIZ_TITLE;
	CButton NAME_CB;
	CButton GENDER_CB;
	CButton AGE_CB;
	CButton LOCATION_CB;
	afx_msg void OnEnChangeQuizTitle();
	afx_msg void OnCbnSelchangeNumOfQ();
	afx_msg void OnBnClickedNameCb();
	afx_msg void OnBnClickedGenderCb();
	afx_msg void OnBnClickedAgeCb();
	afx_msg void OnBnClickedLocationCb();
	CButton NEXT_BTN;
	afx_msg void OnBnClickedNextBtn();
};

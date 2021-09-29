// NewTestDlg.cpp : implementation file
//

#include "pch.h"
#include "Quinzz.h"
#include "NewTestDlg.h"
#include "afxdialogex.h"
#include "QuestionEditor.h"
#include "Owner.h"

// NewTestDlg dialog

IMPLEMENT_DYNAMIC(NewTestDlg, CDialogEx)

/*NewTestDlg::NewTestDlg(CWnd* pParent)
	: CDialogEx(IDD_NEW_TEST, pParent)
	, NAME_BOX(_T(""))
	, NUM_OF_Q(0)
	, QUIZ_TITLE(_T(""))
{
	
}
*/

NewTestDlg::NewTestDlg(Owner& o, CWnd* pParent)
	: CDialogEx(IDD_NEW_TEST, pParent)
	, NAME_BOX(_T(""))
	, NUM_OF_Q(0)
	, QUIZ_TITLE(_T(""))
	, owner(o)
{
}

NewTestDlg::~NewTestDlg()
{
}

void NewTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_NAME_BOX, NAME_BOX);
	DDV_MaxChars(pDX, NAME_BOX, 15);
	DDX_CBIndex(pDX, IDC_NUM_OF_Q, NUM_OF_Q);
	DDX_Text(pDX, IDC_QUIZ_TITLE, QUIZ_TITLE);
	DDV_MaxChars(pDX, QUIZ_TITLE, 50);
	DDX_Control(pDX, IDC_NAME_CB, NAME_CB);
	DDX_Control(pDX, IDC_GENDER_CB, GENDER_CB);
	DDX_Control(pDX, IDC_AGE_CB, AGE_CB);
	DDX_Control(pDX, IDC_LOCATION_CB, LOCATION_CB);
	DDX_Control(pDX, IDC_NEXT_BTN, NEXT_BTN);
}


BEGIN_MESSAGE_MAP(NewTestDlg, CDialogEx)
	ON_EN_CHANGE(IDC_NAME_BOX, &NewTestDlg::OnEnChangeNameBox)
	ON_EN_CHANGE(IDC_QUIZ_TITLE, &NewTestDlg::OnEnChangeQuizTitle)
	ON_CBN_SELCHANGE(IDC_NUM_OF_Q, &NewTestDlg::OnCbnSelchangeNumOfQ)
	ON_BN_CLICKED(IDC_NAME_CB, &NewTestDlg::OnBnClickedNameCb)
	ON_BN_CLICKED(IDC_GENDER_CB, &NewTestDlg::OnBnClickedGenderCb)
	ON_BN_CLICKED(IDC_AGE_CB, &NewTestDlg::OnBnClickedAgeCb)
	ON_BN_CLICKED(IDC_LOCATION_CB, &NewTestDlg::OnBnClickedLocationCb)
	ON_BN_CLICKED(IDC_NEXT_BTN, &NewTestDlg::OnBnClickedNextBtn)
END_MESSAGE_MAP()


// NewTestDlg message handlers


void NewTestDlg::OnEnChangeNameBox()
{
	UpdateData(TRUE);
}

void NewTestDlg::OnEnChangeQuizTitle()
{
	UpdateData(TRUE);
}


void NewTestDlg::OnCbnSelchangeNumOfQ()
{
	UpdateData(TRUE);
}


void NewTestDlg::OnBnClickedNameCb()
{
	UpdateData(TRUE);
}




void NewTestDlg::OnBnClickedGenderCb()
{
	UpdateData(TRUE);
}


void NewTestDlg::OnBnClickedAgeCb()
{
	UpdateData(TRUE);
}


void NewTestDlg::OnBnClickedLocationCb()
{
	UpdateData(TRUE);
}


void NewTestDlg::OnBnClickedNextBtn()
{

	// Calculate the correct data-profile type to be created

	profileTypeID *= 2;
	if (!GENDER_CB.GetCheck()) {
		profileTypeID++;
	}

	profileTypeID *= 2;
	if (!AGE_CB.GetCheck()) {
		profileTypeID++;
	}

	profileTypeID *= 2;
	if (!LOCATION_CB.GetCheck()) {
		profileTypeID++;
	}


	Quizz quiz(QUIZ_TITLE,NUM_OF_Q, profileTypeID);
	
	CDialogEx::OnCancel();
	QuestionEditor q_editor_dlg(NULL);
	q_editor_dlg.DoModal();

	
}

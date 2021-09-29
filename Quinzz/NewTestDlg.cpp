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

NewTestDlg::NewTestDlg(Quizz &q, CWnd* pParent)
	: CDialogEx(IDD_NEW_TEST, pParent)
	, NUM_OF_Q(0)
	, QUIZ_TITLE(_T(""))
{
}

NewTestDlg::~NewTestDlg()
{
}

void NewTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_CBIndex(pDX, IDC_NUM_OF_Q, NUM_OF_Q);
	DDX_Text(pDX, IDC_QUIZ_TITLE, QUIZ_TITLE);
	DDV_MaxChars(pDX, QUIZ_TITLE, 50);
	DDX_Control(pDX, IDC_NEXT_BTN, NEXT_BTN);
	DDX_Control(pDX, IDC_AGE_RADIO, ageRadio);
	DDX_Control(pDX, IDC_GENDER_RADIO, genderRadio);
	DDX_Control(pDX, IDC_LOCATION_RADIO, locationRadio);
}


BEGIN_MESSAGE_MAP(NewTestDlg, CDialogEx)
	ON_EN_CHANGE(IDC_QUIZ_TITLE, &NewTestDlg::OnEnChangeQuizTitle)
	ON_CBN_SELCHANGE(IDC_NUM_OF_Q, &NewTestDlg::OnCbnSelchangeNumOfQ)
	ON_BN_CLICKED(IDC_NEXT_BTN, &NewTestDlg::OnBnClickedNextBtn)
END_MESSAGE_MAP()


// NewTestDlg message handlers


void NewTestDlg::OnEnChangeQuizTitle()
{
	UpdateData(TRUE);
}


void NewTestDlg::OnCbnSelchangeNumOfQ()
{
	UpdateData(TRUE);
}



void NewTestDlg::OnBnClickedNextBtn()
{

	
}

void NewTestDlg::OnBnClickedAgeRadio()
{
	
}



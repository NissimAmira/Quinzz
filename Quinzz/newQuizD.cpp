// newQuizD.cpp : implementation file
//

#include "pch.h"
#include "Quinzz.h"
#include "newQuizD.h"
#include "afxdialogex.h"
#include "QuestionEditor.h"
#include "Quizz.h"


// newQuizD dialog

IMPLEMENT_DYNAMIC(newQuizD, CDialogEx)

newQuizD::newQuizD(Quizz& q, CWnd* pParent)
	: CDialogEx(IDD_NEW_QUIZ, pParent)
	, numOfQ(0)
	, quizTitle(_T(""))
{
}

newQuizD::~newQuizD()
{
}

void newQuizD::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_SIMPLE_QUIZ_RADIO, simpleRadio);
	DDX_Control(pDX, IDC_DCQUIZ_RADIO, dcRadio);
	DDX_CBIndex(pDX, IDC_NUM_QUESTIONS, numOfQ);
	DDX_Text(pDX, IDC_QUIZ_TITLE, quizTitle);
	DDX_Control(pDX, IDC_RADIO1_AGE, AgeRadio);
	DDX_Control(pDX, IDC_RADIO2_GENDER, genderRadio);
}


BEGIN_MESSAGE_MAP(newQuizD, CDialogEx)
	ON_BN_CLICKED(IDC_DCQUIZ_RADIO, &newQuizD::OnBnClickedDcquizRadio)
	ON_EN_CHANGE(IDC_QUIZ_TITLE, &newQuizD::OnEnChangeQuizTitle)
	ON_EN_CHANGE(IDC_QUIZ_TITLE, &newQuizD::OnEnChangeQuizTitle)
	ON_CBN_SELCHANGE(IDC_NUM_QUESTIONS, &newQuizD::OnCbnSelchangeNumQuestions)
	ON_BN_CLICKED(IDC_CREATE_QUIZ_BTN, &newQuizD::OnBnClickedCreateQuizBtn)
END_MESSAGE_MAP()


// newQuizD message handlers




void newQuizD::OnEnChangeQuizTitle()
{
	UpdateData(TRUE);
}


void newQuizD::OnCbnSelchangeNumQuestions()
{
	UpdateData(TRUE);
}


void newQuizD::OnBnClickedDcquizRadio()
{
	if (IsDlgButtonChecked(IDC_DCQUIZ_RADIO))
	{
		this->AgeRadio.EnableWindow(FALSE);
		this->genderRadio.EnableWindow(FALSE);
	}
	
}


void newQuizD::OnBnClickedCreateQuizBtn()
{
	CDialogEx::OnCancel();
	QuestionEditor q_editor_dlg(NULL);
	//QuestionEditor q_editor_dlg(&owner,&quizz, NULL);
	q_editor_dlg.DoModal();
}

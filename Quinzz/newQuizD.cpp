// newQuizD.cpp : implementation file
//

#include "pch.h"
#include "Quinzz.h"
#include "newQuizD.h"
#include "afxdialogex.h"


// newQuizD dialog

IMPLEMENT_DYNAMIC(newQuizD, CDialogEx)

newQuizD::newQuizD(CWnd* pParent /*=nullptr*/)
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
	DDX_Control(pDX, IDC_AGE_RADIO, ageRadio);
	DDX_Control(pDX, IDC_GENDER_RADIO, genderRadio);
	DDX_CBIndex(pDX, IDC_NUM_QUESTIONS, numOfQ);
	DDX_Text(pDX, IDC_QUIZ_TITLE, quizTitle);
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
	UpdateData(TRUE);
}


void newQuizD::OnBnClickedCreateQuizBtn()
{
	
}

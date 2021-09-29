// DashboardDlg.cpp : implementation file
//

#include "pch.h"
#include "Quinzz.h"
#include "DashboardDlg.h"
#include "afxdialogex.h"
#include "NewTestDlg.h"
#include "QuizBTN.h"


// DashboardDlg dialog

IMPLEMENT_DYNAMIC(DashboardDlg, CDialogEx)

DashboardDlg::DashboardDlg(CWnd* pParent, CString ownerName)
	: CDialogEx(IDD_DASHBOARD_DIALOG, pParent)
	, ownerNameT(_T(""))
{
	Quizz* quizes = new Quizz[10];
	this->owner.setQuizes(quizes);
	this->owner.setName(ownerName);
	this->ownerNameT = ownerName;
}

DashboardDlg::~DashboardDlg()
{
}

void DashboardDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_NEW_QUIZ_BTN1, newQuizBtn1);
	DDX_Text(pDX, IDC_OWNER_NAME_T, ownerNameT);
	DDX_Control(pDX, IDC_NEW_QUIZ_BTN2, newQuizBtn2);
	DDX_Control(pDX, IDC_NEW_QUIZ_BTN3, newQuizBtn3);
	DDX_Control(pDX, IDC_NEW_QUIZ_BTN4, newQuizBtn4);
	DDX_Control(pDX, IDC_NEW_QUIZ_BTN5, newQuizBtn5);
	DDX_Control(pDX, IDC_NEW_QUIZ_BTN6, newQuizBtn6);
	DDX_Control(pDX, IDC_NEW_QUIZ_BTN7, newQuizBtn7);
	DDX_Control(pDX, IDC_NEW_QUIZ_BTN8, newQuizBtn8);
	DDX_Control(pDX, IDC_NEW_QUIZ_BTN9, newQuizBtn9);
	DDX_Control(pDX, IDC_NEW_QUIZ_BTN10, newQuizBtn10);
}


BEGIN_MESSAGE_MAP(DashboardDlg, CDialogEx)
	ON_BN_CLICKED(IDC_NEW_QUIZ_BTN1, &DashboardDlg::OnBnClickedNewQuizBtn1)
END_MESSAGE_MAP()


// DashboardDlg message handlers



CString DashboardDlg::newQuiz(int quizNum, Owner& o)
{
	NewTestDlg newQuiz(o, nullptr);
	newQuiz.DoModal();
	newQuiz;

	return CString();
}

void DashboardDlg::OnBnClickedNewQuizBtn1()
{
	// TODO: Add your control notification handler code here



}

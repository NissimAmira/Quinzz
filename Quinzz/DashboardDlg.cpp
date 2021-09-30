// DashboardDlg.cpp : implementation file
//

#include "pch.h"
#include "Quinzz.h"
#include "DashboardDlg.h"
#include "runQuizzDlgMain.h"
#include "afxdialogex.h"
#include "newQuizD.h"

// DashboardDlg dialog

IMPLEMENT_DYNAMIC(DashboardDlg, CDialogEx)

DashboardDlg::DashboardDlg(CWnd* pParent)
	: CDialogEx(IDD_DASHBOARD_DIALOG, pParent)
	, ownerNameT(_T(""))
{
	Quizz* quizes = new Quizz[10];
	this->owner.setQuizes(quizes);
}
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
	ON_BN_CLICKED(IDC_NEW_QUIZ_BTN_RUN9, &DashboardDlg::OnBnClickedNewQuizBtnRun9)
END_MESSAGE_MAP()


// DashboardDlg message handlers


void DashboardDlg::newQuiz(int quizNum, Owner& o)
{
	newQuizD newQuiz(o.getQuizzAtIndex(quizNum), nullptr);
	newQuiz.DoModal();

}

void DashboardDlg::OnBnClickedNewQuizBtn1()
{

	newQuiz(1, owner);


}


void DashboardDlg::OnBnClickedNewQuizBtnRun9()
{
	CDialogEx::OnCancel();
	runQuizzDlgMain run_quiz(Quizz(),NULL);
	//QuestionEditor q_editor_dlg(&owner,&quizz, NULL);
	run_quiz.DoModal();
}

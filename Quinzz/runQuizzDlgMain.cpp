// runQuizzDlgMain.cpp : implementation file
//

#include "pch.h"
#include "Quinzz.h"
#include "runQuizzDlgMain.h"
#include "afxdialogex.h"


// runQuizzDlgMain dialog

IMPLEMENT_DYNAMIC(runQuizzDlgMain, CDialogEx)

runQuizzDlgMain::runQuizzDlgMain(Quizz& q, CWnd* pParent)
	: CDialogEx(IDD_RUN_QUIZ_MAIN, pParent)
	, quiz_title(_T(""))
	, num_of_q_int(_T(""))
{

}

runQuizzDlgMain::~runQuizzDlgMain()
{
}

void runQuizzDlgMain::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_STATIC_Q_TITLE, quiz_title);
	DDX_Text(pDX, IDC_STATIC_INT_OF_Q, num_of_q_int);
}


BEGIN_MESSAGE_MAP(runQuizzDlgMain, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_START, &runQuizzDlgMain::OnBnClickedButtonStart)
END_MESSAGE_MAP()


// runQuizzDlgMain message handlers


void runQuizzDlgMain::OnBnClickedButtonStart()
{

}

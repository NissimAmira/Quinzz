// MainDashboard.cpp : implementation file
//

#include "pch.h"
#include "Quinzz.h"
#include "MainDashboard.h"
#include "afxdialogex.h"


// MainDashboard dialog

IMPLEMENT_DYNAMIC(MainDashboard, CDialogEx)

MainDashboard::MainDashboard(CString ownerName, CWnd* pParent)
	: CDialogEx(IDD_NEW_DASHBOARD, pParent)
{

}

MainDashboard::~MainDashboard()
{
}

void MainDashboard::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EXIST_BTN, existingQuizsBTN);
	DDX_Control(pDX, IDC_NEW_QUIZ, newQuizBTN);
}


BEGIN_MESSAGE_MAP(MainDashboard, CDialogEx)
	ON_BN_CLICKED(IDC_NEW_QUIZ, &MainDashboard::OnBnClickedNewQuiz)
END_MESSAGE_MAP()


// MainDashboard message handlers


void MainDashboard::OnBnClickedNewQuiz()
{
	CWnd* p = this;
	//newQuizD newQ(p);
	//newQ.DoModal();
}
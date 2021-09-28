// NewTestDlg.cpp : implementation file
//

#include "pch.h"
#include "Quinzz.h"
#include "NewTestDlg.h"
#include "afxdialogex.h"


// NewTestDlg dialog

IMPLEMENT_DYNAMIC(NewTestDlg, CDialogEx)

NewTestDlg::NewTestDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_NEW_TEST, pParent)
{

}

NewTestDlg::~NewTestDlg()
{
}

void NewTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(NewTestDlg, CDialogEx)
END_MESSAGE_MAP()


// NewTestDlg message handlers

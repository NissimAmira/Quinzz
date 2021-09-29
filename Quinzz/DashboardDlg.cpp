// DashboardDlg.cpp : implementation file
//

#include "pch.h"
#include "Quinzz.h"
#include "DashboardDlg.h"
#include "afxdialogex.h"


// DashboardDlg dialog

IMPLEMENT_DYNAMIC(DashboardDlg, CDialogEx)


DashboardDlg::DashboardDlg(CString nameOfOwner, CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DASHBOARD_D, pParent)
{
	this->owner.setName(nameOfOwner);
	Quizz* q_arr = new Quizz[10];
	this->owner.setQuizes(q_arr); 
}

BOOL DashboardDlg::OnInitDialog() {
	CDialog::OnInitDialog();



	return (1);
}





DashboardDlg::~DashboardDlg()
{
}

void DashboardDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(DashboardDlg, CDialogEx)

END_MESSAGE_MAP()


// DashboardDlg message handlers






// DashboardDlg.cpp : implementation file
//

#include "pch.h"
#include "Quinzz.h"
#include "DashboardDlg.h"
#include "afxdialogex.h"


// DashboardDlg dialog

IMPLEMENT_DYNAMIC(DashboardDlg, CDialogEx)


DashboardDlg::DashboardDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DASHBOARD_D, pParent)
{


}

BOOL DashboardDlg::OnInitDialog() {
	CDialog::OnInitDialog();

	HTREEITEM hItem, hQuiz;
	CString title = L"Quiz ";

	hItem = quizTreeCtrl.InsertItem(L"Quizes", TVI_ROOT);
	for (wchar_t i = '0' ; i <= '9' ; i++) {
		CString
		hQuiz = quizTreeCtrl.InsertItem(L"Quiz ", hItem);
	
	}

}




DashboardDlg::~DashboardDlg()
{
}

void DashboardDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_QUIZ_TREE, quizTreeCtrl);
}


BEGIN_MESSAGE_MAP(DashboardDlg, CDialogEx)

END_MESSAGE_MAP()


// DashboardDlg message handlers



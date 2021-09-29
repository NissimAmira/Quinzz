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


	HTREEITEM hOwner, hQuizT, hQuiz;
	
	hOwner = quizTreeCtrl.InsertItem((this->owner.getName()), TVI_ROOT);
	hQuizT = quizTreeCtrl.InsertItem(L"Quizes", hOwner);
	hQuiz = quizTreeCtrl.InsertItem(L"New Quiz", hQuizT);

	return (1);
}

DashboardDlg::




DashboardDlg::~DashboardDlg()
{
}

void DashboardDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_QUIZ_TREE, quizTreeCtrl);
}


BEGIN_MESSAGE_MAP(DashboardDlg, CDialogEx)

	ON_NOTIFY(NM_DBLCLK, IDC_QUIZ_TREE, &DashboardDlg::OnNMDblclkQuizTree)
END_MESSAGE_MAP()


// DashboardDlg message handlers



void DashboardDlg::OnNMDblclkQuizTree(NMHDR* pNMHDR, LRESULT* pResult)
{
	// TODO: Add your control notification handler code here
	this->hSelected = quizTreeCtrl.GetSelectedItem();
	
	*pResult = 0;
}

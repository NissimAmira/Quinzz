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
	, NAME_BOX(_T(""))
	, NUM_OF_Q(0)
{

}

NewTestDlg::~NewTestDlg()
{
}

void NewTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_NAME_BOX, NAME_BOX);
	DDV_MaxChars(pDX, NAME_BOX, 15);
	//  DDX_Control(pDX, IDC_NUM_OF_Q, NUM_OF_Q);
	DDX_CBIndex(pDX, IDC_NUM_OF_Q, NUM_OF_Q);
}


BEGIN_MESSAGE_MAP(NewTestDlg, CDialogEx)
	ON_EN_CHANGE(IDC_NAME_BOX, &NewTestDlg::OnEnChangeNameBox)
END_MESSAGE_MAP()


// NewTestDlg message handlers


void NewTestDlg::OnEnChangeNameBox()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}

void NewTestDlg::OnBnDropDownNumOfQ(NMHDR* pNMHDR, LRESULT* pResult)
{
}



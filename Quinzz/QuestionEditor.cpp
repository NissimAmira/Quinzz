// QuestionEditor.cpp : implementation file
//

#include "pch.h"
#include "Quinzz.h"
#include "QuestionEditor.h"
#include "afxdialogex.h"


// QuestionEditor dialog

IMPLEMENT_DYNAMIC(QuestionEditor, CDialogEx)

QuestionEditor::QuestionEditor(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_QUESTION_EDITOR, pParent)
{

}

QuestionEditor::~QuestionEditor()
{
}

void QuestionEditor::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(QuestionEditor, CDialogEx)
END_MESSAGE_MAP()


// QuestionEditor message handlers

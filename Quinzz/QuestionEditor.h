#pragma once


// QuestionEditor dialog

class QuestionEditor : public CDialogEx
{
	DECLARE_DYNAMIC(QuestionEditor)

public:
	QuestionEditor(CWnd* pParent = nullptr);   // standard constructor
	virtual ~QuestionEditor();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_QUESTION_EDITOR };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};

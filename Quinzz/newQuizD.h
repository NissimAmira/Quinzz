#pragma once


// newQuizD dialog

class newQuizD : public CDialogEx
{
	DECLARE_DYNAMIC(newQuizD)

public:
	newQuizD(CWnd* pParent = nullptr);   // standard constructor
	virtual ~newQuizD();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NEW_QUIZ };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:

	CString quizTitle;
	int numOfQ;
	CButton simpleRadio;
	CButton dcRadio;
	CButton ageRadio;
	CButton genderRadio;
	afx_msg void OnBnClickedDcquizRadio();
	afx_msg void OnEnChangeQuizTitle();
	afx_msg void OnCbnSelchangeNumQuestions();
	afx_msg void OnBnClickedCreateQuizBtn();
};

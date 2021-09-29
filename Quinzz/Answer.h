#pragma once
#include <iostream>
#include <string>

using namespace std;

class Answer
{
private:
	//static CString id;
	bool correct; // T correct; F incorrect;
	CString answer;
public:
	Answer() : answer(""), correct(false) {};
	Answer(bool c, CString a);
	~Answer() {};

	void setFlag(bool c) ;
	void setAnswer(CString s) ;
	bool getFlag() const;
	CString getAnswer() const;
};


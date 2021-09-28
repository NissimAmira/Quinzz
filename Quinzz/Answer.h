#pragma once
#include <iostream>
#include <string>

using namespace std;

class Answer
{
private:
	static CString id;
	bool correct; // T correct; F incorrect;
	CString answer;
public:
	Answer() : correct(nullptr), answer(nullptr) {};
	Answer(bool c, CString a);
	Answer(const Answer&);
	~Answer() {};

	void setFlag(bool c) ;
	void setAnswer(CString s) ;
	bool getFlag() const;
	CString getAnswer() const;
};


#pragma once
#include <string>
#include <iostream>
#include "Answers_L.h"

using namespace std;

class Question {
private:
	/*static*/ CString id;
	int num_of_answers;
	CString question;
	Answers_L answers;
public:
	Question();
	Question(CString q);
	~Question() {};

	void setQuestion(CString q);
	void setAnswers(Answers_L a);

	CString getQuestion() const;
	Answers_L getAnswers() const;

};


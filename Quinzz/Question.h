#pragma once
#include <string>
#include <iostream>
#include "Answer.h"

using namespace std;

class Question {
private:
	//static CString id;
	int num_of_answers;
	CString question;
	Answer *answers;
public:
	Question() : num_of_answers(0), question(_T("")), answers(nullptr) {};
	Question(CString q);
	Question(CString q, Answer *a);
	~Question() { delete[] this->answers; };
	
	void setQuestion(CString q);
	void setAnswers(Answer* a);
	void addAnswer(Answer a);
	void deleteAnswer(Answer a);
	void deleteAnswer(int i);
	CString getQuestion() const;
	Answer* getAnswers() const;

};


#pragma once
#include <string>
#include <iostream>
#include "Answers_L.h"

using namespace std;

class Question {
private:
	/*static*/ string id;
	int num_of_answers;
	string question;
	Answers_L answers;
public:
	Question();
	Question(string q);
	~Question() {};

	void setQuestion(string q);
	void setAnswers(Answers_L a);

	string getQuestion() const;
	Answers_L getAnswers() const;

};


#pragma once
#include <string>
#include "Answers_L.h"

using namespace std;

class Question {
private:
	static string id;
	const int  num_of_answers;
	string question;
	Answers_L *answers;
public:
	Question() {};
	Question(int num, string q);
	~Question() { delete this->answers; };

	void setQuestion(string q) const;
	string getQuestion();

};


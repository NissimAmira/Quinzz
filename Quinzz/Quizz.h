#pragma once
#include <string>
#include "Question.h"

using namespace std;

class Quizz
{
private:
	static string id;
	string title;
	int num_of_questions;
	Question *questions;
public:

	Quizz(int num);
	~Quizz() { delete this->questions; };

	void setQuestions(Question* q);
	void setQuestionAtIndex(Question q, int index);
	Question* getQuestions() const;
	Question getQuestionAtIndex(int index) const;
	friend class Profile;
};


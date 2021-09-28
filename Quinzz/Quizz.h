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
	int typeID;

public:
	Quizz() : title(nullptr), num_of_questions(0), questions(nullptr), typeID(0) {};
	Quizz(int num_of_q, int typeP);
	~Quizz() { delete this->questions; };

	void setQuestions(Question* q);
	void setNumOfQuestions(int n);
	void setTypeId(int n);
	void setQuestionAtIndex(Question q, int index);
	Question* getQuestions() ;
	Question getQuestionAtIndex(int index) ;
	friend class Profile;
};


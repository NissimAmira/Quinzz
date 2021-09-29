#pragma once
#include <string>
#include "Question.h"

using namespace std;

class Quizz
{
private:
	//static int id;
	CString title;
	int num_of_questions;
	Question *questions;
	int typeID;

public:
	Quizz() : title(""), num_of_questions(0), questions(nullptr), typeID(-1) {};
	Quizz(int num_of_q, int typeP);
	~Quizz() { delete this->questions; };

	void setTitle(CString t);
	void setQuestions(Question* q);
	void setNumOfQuestions(int n);
	void setTypeId(int n);
	void setQuestionAtIndex(Question q, int index);

	CString getTitle() const;
	Question* getQuestions() const;
	Question getQuestionAtIndex(int index) const;
	friend class Profile;
};


#pragma once
#include <string>
#include "Question.h"
#include "Profile.h"

using namespace std;

class Quizz
{
private:
	CString title;
	int num_of_questions;
	Question *questions;
	int *grades_counter;

public:
	Quizz() : title(""), num_of_questions(0), questions(nullptr), grades_counter(nullptr) {};
	Quizz(CString t, int num_of_q);
	~Quizz() { delete[] this->questions; delete[] this->grades_counter;};

	void setTitle(CString t);
	void setNumOfQuestions(int n);
	void setQuestions(Question* q);
	void setQuestionAtIndex(Question q, int index);
	void setGrades(int* grades);
	void setCountForGrade(int grade);

	virtual void runQuiz() {};

	CString getTitle() const;
	Question* getQuestions() const;
	int getNumOfQ() const;
	Question getQuestionAtIndex(int index) const;

};


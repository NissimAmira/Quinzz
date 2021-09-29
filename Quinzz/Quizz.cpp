#include "pch.h"
#include "Quizz.h"
#include "Question.h"
#include "P_Age_Gender_Location.h"


Quizz::Quizz(CString t, int num_of_q) 
{
	this->setTitle(t);
	this->setNumOfQuestions(num_of_q);
	Question* q_arr = new Question[num_of_q];
	this->setQuestions(q_arr);
}

void Quizz::setTitle(CString t)
{
	this->title = t;
}

void Quizz::setQuestions(Question* q) 
{
	this->questions = q;
}

void Quizz::setNumOfQuestions(int n)
{
	this->num_of_questions = n;
}


void Quizz::setQuestionAtIndex(Question q, int index) 
{
	this->questions[index] = q;
}

void Quizz::setGrades(int* grades)
{
	this->grades_counter = grades;
}


CString Quizz::getTitle() const
{
	return this->title;
}

Question* Quizz:: getQuestions() const {
	return this->questions;

}

Question Quizz::getQuestionAtIndex(int index) const{
	return this->questions[index];
}


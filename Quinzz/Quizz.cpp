#include "pch.h"
#include "Quizz.h"
#include "Question.h"



Quizz::Quizz(CString t, int num_of_q, int typeP) 
{
	this->setTitle(t);
	this->setNumOfQuestions(num_of_q);
	this->setTypeId(typeP);
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

void Quizz::setTypeId(int n)
{
	this->typeID = n;
}

void Quizz::setQuestionAtIndex(Question q, int index) 
{
	this->questions[index] = q;
}

int Quizz::getTypeId()
{
	return this->typeID;
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

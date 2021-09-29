#include "pch.h"
#include "Quizz.h"


Quizz::Quizz(CString t, int num_of_q, int typeP) 
{
	
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

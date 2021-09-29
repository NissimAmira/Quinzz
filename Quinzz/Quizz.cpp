#include "pch.h"
#include "Quizz.h"


Quizz::Quizz(int num_of_q, int typeP) {
	
}

void Quizz::setTitle(CString t)
{
}

void Quizz::setQuestions(Question* q) {
	//this->questions = q;
}

void Quizz::setNumOfQuestions(int n)
{
}

void Quizz::setTypeId(int n)
{
}

void Quizz::setQuestionAtIndex(Question q, int index) {

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

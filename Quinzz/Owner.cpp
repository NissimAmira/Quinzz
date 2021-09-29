#include "pch.h"
#include "Owner.h"
#include "Quizz.h"
#include <string>
using namespace std;

Owner::Owner(Quizz* q, CString n) {
	setQuizes(q);
	this->setName(n);
}

void Owner::setQuizes(Quizz* q) {
	this->quizes = q;
}

void Owner::setQuizAtIndex(Quizz q, int index) {
	this->quizes[index] = q;
}

void Owner::addNewQuiz()
{
}

void Owner::deleteQuiz()
{
}

Quizz* Owner::getQuiz() {
	return this->quizes;
}

Quizz Owner::getQuizzAtIndex(int index) {
	return this->quizes[index];
}

void Owner::setTypeId()
{
	this->type_id = 1;
}


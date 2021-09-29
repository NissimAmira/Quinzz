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

void Owner::addNewQuiz(Quizz q)
{
	for (int i = 0; i < 10; i++) {
		if (this->getQuizzAtIndex(i).getTitle() == "") {
			this->setQuizAtIndex(q,i);
			break;
		}
	}
}

void Owner::deleteQuiz(int index)
{
	Quizz empty;
	this->getQuizes()[index] = empty;
}

void Owner::deleteQuiz(Quizz q)
{
	Quizz* tmp = this->getQuizes();
	for (int i = 0; i < 10; i++) {
		if (tmp[i].getTitle() == q.getTitle()) {
			this->deleteQuiz(i);
		};
	}
}

Quizz* Owner::getQuizes() {
	return this->quizes;
}

Quizz Owner::getQuizzAtIndex(int index) {
	return this->quizes[index];
}

void Owner::setTypeId()
{
	this->type_id = 1;
}

int Owner::numOfQuizes()
{
	int counter = 0;
	for (int i = 0; i < 10; i++)
	{
		/*if (quizes[i].getTypeId() != (-1))
		{
			counter++;
		}*/
	}
	return 0;
}


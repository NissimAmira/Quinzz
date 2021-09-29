#include "pch.h"
#include "SimpleQuizz.h"


SimpleQuizz::SimpleQuizz(CString t, int num_of_q) : Quizz(t,num_of_q)
{
	this->setLastSession(num_of_q);
}

void SimpleQuizz::setLastSession(int* arr)
{
	this->last_session = arr;
}

void SimpleQuizz::setLastSession(int size)
{
	int *tmp = new int[size];
	this->setLastSession(tmp);
}

int* SimpleQuizz::getLastSession() const
{
	return this->last_session;
}

void SimpleQuizz::runQuizz()
{
}

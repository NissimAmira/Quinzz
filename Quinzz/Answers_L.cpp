#include <iostream>
#include "pch.h"
#include "Answers_L.h"
#include "Answer.h"

Answers_L::Answers_L(int s) : size(s)
{
	setArray(new Answer[s]);
}

void Answers_L::setArray(Answer* arr)
{
	this->answers_arr = arr;
}

void Answers_L::setValueAtIndex(Answer answer, int index)
{
	Answer* arr = getArray();
	arr[index] = answer;
}

Answer* Answers_L::getArray() const
{
	return this->answers_arr;
}

Answer Answers_L::getValueAtIndex(int index) const
{
	return getArray()[index];
}

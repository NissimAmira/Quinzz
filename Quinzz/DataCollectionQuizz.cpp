#include "pch.h"
#include "DataCollectionQuizz.h"
#include "Question.h"

DataCollectionQuizz::DataCollectionQuizz(CString t, int num_of_q) : Quizz(t, num_of_q)
{
	int** tmp = new int*[num_of_q];
	for (int i = 0; i < num_of_q; i++) {
		tmp[i] = new int[4];
	}
	this->setAnswersCounter(tmp);
}

void DataCollectionQuizz::setAnswersCounter(int** arr)
{
	this->answers_counter = arr;
}

int** DataCollectionQuizz::getAnswersCounter() const
{
	return this->answers_counter;
}

Answer DataCollectionQuizz::mostCommonAnswerForQ(int index)
{
	Question* tmp = this->getQuestions();
	int maxValue = this->getAnswersCounter()[index][0];
	int maxIndex = 0;

	for (int i = 0; i < 4; i++) {
		if (this->getAnswersCounter()[index][i] > maxValue)  maxIndex = i;
	}

	return tmp[index].getAnswers()[maxIndex];
}

Answer DataCollectionQuizz::leastCommonAnswerForQ(int index)
{
	Question* tmp = this->getQuestions();
	int minValue = this->getAnswersCounter()[index][0];
	int minIndex = 0;

	for (int i = 0; i < 4; i++) {
		if (this->getAnswersCounter()[index][i] < minValue)  minIndex = i;
	}

	return tmp[index].getAnswers()[minIndex];
}


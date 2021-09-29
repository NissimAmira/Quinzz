#include "pch.h"
#include "DataCollectionQuizz.h"
#include "Question.h"

DataCollectionQuizz::DataCollectionQuizz(CString t, int num_of_q) : Quizz(t, num_of_q)
{
	int** tmp = new int*[num_of_q];
	for (int i = 0; i < num_of_q; i++) {

		tmp[i] = new int[4];

		for (int j = 0; j < 4; j++) {
			tmp[i][j] = 0;
		}

	}
	this->setAnswersCounter(tmp);
}

DataCollectionQuizz::~DataCollectionQuizz()
{
	for (int i = 0; i < this->getNumOfQ(); i++) {
		delete[] this->getAnswersCounter()[i];
	}

	delete[] this->getAnswersCounter();
}

void DataCollectionQuizz::setAnswersCounter(int** arr)
{
	this->answers_counter = arr;
}

int** DataCollectionQuizz::getAnswersCounter() const
{
	return this->answers_counter;
}

void DataCollectionQuizz::updateAnswersCounter(int* arr)
{
	for (int i = 0; i < this->getNumOfQ(); i++) {

		for (int j = 0; j < 4; i++) {
			if (arr[i] == j) this->getAnswersCounter()[i][j]++;
		}

	}
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


#include "pch.h"
#include "AgeQuizz.h"

AgeQuizz::AgeQuizz(CString t, int num_of_q) : DataCollectionQuizz(t, num_of_q)
{
	int* tmp = new int[4];
	this->setAgeCount(tmp);
}

void AgeQuizz::setAgeCount(int* arr)
{
	this->age_count = arr;
}

void AgeQuizz::updateAgeCount(int age) //the user can give only a range: 0 = 0-25, 1 = 25-50, 2 = 50-75, 3 = 75-100
{
	this->getAgeCount()[age]++;
}

int* AgeQuizz::getAgeCount()
{
	return this->age_count;
}

Question AgeQuizz::ageCollectionQuestion()
{
	Answer arr[4] = {
		Answer(1,_T("0-25")),
		Answer(1,_T("25-50")),
		Answer(1,_T("50-75")),
		Answer(1,_T("75-100"))
	};
	return Question(_T("How old are you?"), arr);
}

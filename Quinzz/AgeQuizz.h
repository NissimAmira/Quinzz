#pragma once
#include "DataCollectionQuizz.h"
class AgeQuizz :
    public DataCollectionQuizz
{
private:
    int *age_count;
public:
    AgeQuizz() : DataCollectionQuizz(), age_count(nullptr) {};
    AgeQuizz(CString t, int num_of_q);
    ~AgeQuizz() { delete[] this->age_count; };

    void setAgeCount(int* arr);
    void updateAgeCount(int age);
    int* getAgeCount();

    Question ageCollectionQuestion();

};


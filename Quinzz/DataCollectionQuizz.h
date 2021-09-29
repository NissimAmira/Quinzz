#pragma once
#include "Quizz.h"
class DataCollectionQuizz :
    public Quizz
{
private:
    int** answers_counter;
public:
    DataCollectionQuizz() : Quizz(), answers_counter(nullptr) {};
    DataCollectionQuizz(CString t, int num_of_q);
    ~DataCollectionQuizz() {};

};


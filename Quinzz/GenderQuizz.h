#pragma once
#include "DataCollectionQuizz.h"

class GenderQuizz :
    public DataCollectionQuizz
{
private:
    int **females;
    int **males;

public:
    GenderQuizz() : DataCollectionQuizz(), females(nullptr), males(nullptr) {};
    GenderQuizz(CString t, int num_of_q);
    ~GenderQuizz();

    void setFemaleAnswers(int **);
    void setMaleAnswers();

    bool isFemale();


};



#pragma once
#include "Profile.h"
#include "Quizz.h"
#include <string>
using namespace std;

class Owner :
    public Profile
{
private:
    Quizz* quizes;
public:
    Owner() : quizes(nullptr) { this->setTypeId(); };
    Owner(Quizz* q, CString n);
    ~Owner() { delete(this->quizes); };

    void setQuizes(Quizz* q);
    void setQuizAtIndex(Quizz q, int index);
    Quizz* getQuiz();
    Quizz getQuizzAtIndex(int index);
    void setTypeId();
};


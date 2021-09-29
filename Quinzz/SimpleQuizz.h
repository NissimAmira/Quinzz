#pragma once
#include "Quizz.h"
class SimpleQuizz :
    public Quizz
{
private:
    int* last_session;
public:
    SimpleQuizz() : last_session(nullptr) {};
    SimpleQuizz(CString t, int num_of_q);
    ~SimpleQuizz() { delete[] this->last_session; };

    void setLastSession(int* arr);
    void setLastSession(int size);
    int* getLastSession() const;

    void runQuizz();

};


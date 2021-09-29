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

    void setAnswersCounter(int **arr);
    int** getAnswersCounter() const;

    void updateAnswersCounter(int *arr); // recieve the answers array of the last quizz instance, and updates the counter accordingly

    Answer mostCommonAnswerForQ(int index); //returns the index of the most common answer for question at index
    Answer leastCommonAnswerForQ(int index); //returns the index of the least common answer for question at index

};


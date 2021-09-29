#include "pch.h"
#include "Quizz.h"
#include "Question.h"
#include "P_Age_Gender_Location.h"


Quizz::Quizz(CString t, int num_of_q) 
{
	this->setTitle(t);
	this->setNumOfQuestions(num_of_q);
	Question* q_arr = new Question[num_of_q];
	this->setQuestions(q_arr);
	int* g = new int[100 / num_of_q];
	for (int i = 0; i < num_of_q; i++) {
		g[i] = 0;
	}
	this->setGrades(g);
}

void Quizz::setTitle(CString t)
{
	this->title = t;
}

void Quizz::setQuestions(Question* q) 
{
	this->questions = q;
}

void Quizz::setNumOfQuestions(int n)
{
	this->num_of_questions = n;
}


void Quizz::setQuestionAtIndex(Question q, int index) 
{
	this->questions[index] = q;
}

void Quizz::setGrades(int* grades)
{
	this->grades_counter = grades;
}

void Quizz::setCountForGrade(int grade)
{
	this->grades_counter[100 / grade]++;
}


CString Quizz::getTitle() const
{
	return this->title;
}

Question* Quizz:: getQuestions() const {
	return this->questions;

}

int Quizz::getNumOfQ() const
{
	return this->num_of_questions;
}

Question Quizz::getQuestionAtIndex(int index) const{
	return this->questions[index];
}


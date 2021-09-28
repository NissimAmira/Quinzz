#include "pch.h"
#include "Quizz.h"


Quizz::Quizz(int num_of_q, int typeP) {
	
}

void Quizz::setQuestions(Question* q) {
	//this->questions = q;
}

void Quizz::setQuestionAtIndex(Question q, int index) {

}

Question* Quizz:: getQuestions(){
	return this->questions;

}

Question Quizz::getQuestionAtIndex(int index) {
	return this->questions[index];
}

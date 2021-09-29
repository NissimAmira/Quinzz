#include "pch.h"
#include "Question.h"
#include "Answer.h"


Question::Question(CString q)
{
	this->setQuestion(q);
	this->setAnswers(nullptr);
}

Question::Question(CString q, Answer* a)
{
	this->setQuestion(q);
	this->setAnswers(a);
}

void Question::setQuestion(CString q)
{
	this->question = q;
}

void Question::setAnswers(Answer* a)
{
	this->answers = a;
}

void Question::addAnswer(Answer a)
{
	for (int i = 0; i < 4; i++) {
		if (this->getAnswers()[i].getAnswer() == "") {
			this->getAnswers()[i] = a;
			break;
		} 
	}
}

void Question::deleteAnswer(Answer a)
{
	Answer* tmp = this->getAnswers();
	for (int i = 0; i < 4; i++) {
		if (tmp[i].getAnswer() == a.getAnswer()) {
			this->deleteAnswer(i);
			break;
		}
	}
}

void Question::deleteAnswer(int i)
{
	Answer empty;
	this->answers[i] = empty;
}

CString Question::getQuestion() const
{
	return this->question;
}

Answer* Question::getAnswers() const
{
	return this->answers;
}

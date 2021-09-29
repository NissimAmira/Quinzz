#include "pch.h"
#include "Answer.h"

Answer::Answer(bool c, CString a)
{
	this->setFlag(c);
	this->setAnswer(a);
}


void Answer::setFlag(bool c) 
{
	this->correct = c;
}

void Answer::setAnswer(CString s) 
{
	this->answer = s;

}

bool Answer::getFlag() const
{
	return this->correct;
}

CString Answer::getAnswer() const
{
	return this->answer;
}

#include "pch.h"
#include "Answer.h"

Answer::Answer(bool c, string a)
{
	setFlag(c);
	setAnswer(a);
}

Answer::Answer(const Answer& a)
{
	setFlag(a.getFlag());
	setAnswer(a.getAnswer());
}

void Answer::setFlag(bool c) 
{
	this->correct = c;
}

void Answer::setAnswer(string s) 
{
	this->answer = s;

}

bool Answer::getFlag() const
{
	return this->correct;
}

string Answer::getAnswer() const
{
	return this->answer;
}

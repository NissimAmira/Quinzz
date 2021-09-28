#pragma once
#include <string>
#include "Answer.h"

using namespace std;

class Answers_L
{
private:
	static CString id;
	const int size; // size of array
	Answer* answers_arr;
public:
	Answers_L(int s);
	~Answers_L() { delete this->answers_arr; };

	void setArray(Answer* arr);
	void setValueAtIndex(Answer answer, int index);
	Answer* getArray() const;
	Answer getValueAtIndex(int index) const;

};


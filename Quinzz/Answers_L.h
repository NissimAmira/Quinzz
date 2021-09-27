#pragma once
#include <string>
#include "Answer.h"

using namespace std;

class Answers_L
{
private:
	static string id;
	const int size; // size of array
	Answer* answers_arr;
public:
	Answers_L(int s);
	~Answers_L() { delete this->answers_arr; };

	void setArray(Answer* arr) const;
	void setArrayAtIndex(Answer* arr, int index) const;
	Answer& getArray();
	string getValueAtIndex(int index);

};


#pragma once
#include <string>

using namespace std;

class Answer
{
private:
	static string id;
	bool correct; // T correct; F incorrect;
	string answer;
public:
	Answer() : correct(nullptr), answer(nullptr) {};
	Answer(bool c, string a);
	Answer(const Answer&);
	~Answer() {};

	void setFlag(bool c) ;
	void setAnswer(string s) ;
	bool getFlag() const;
	string getAnswer() const;
};


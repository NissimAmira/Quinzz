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
	Answer(bool c, string a);
	~Answer() {};

	void setFlag(bool c) ;
	void setAnswer(string s) ;
	bool getFlag() const;
	string getAnswer() const;
};


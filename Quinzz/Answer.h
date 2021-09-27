#pragma once
#include <string>

using namespace std;

class Answer
{
private:
	static string id;
	int flag; // 1 correct; 0 incorrect;
	string answer;
public:
	Answer(int f);
	~Answer();

	void setFlag(int f) const;
	void setAnswer(string s) const;
	void getFlag(int f);
	void getAnswer(string s);
};


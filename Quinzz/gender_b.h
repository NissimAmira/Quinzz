#pragma once
#include<string>

using namespace std;

class gender_b
{
private:
	CString gender;

public:
	void setGender(CString);
	CString getGender();
	bool isBinary();

};


#pragma once
#include <string>

using namespace std;

class gender_b
{
private:
	CString gender;

public:

	gender_b() : gender("") {};
	gender_b(CString g);
	~gender_b() {}

	void setGender(CString g);
	CString getGender() const;
	bool isBinary();

};


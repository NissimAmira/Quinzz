#pragma once
#include <string>

using namespace std;

class Profile
{

private:
	static int profiles_counter;
	CString name;
	int type_id;

public:

	Profile() : type_id(1) {};
	Profile(CString n);
	virtual ~Profile() {};

	void setName(CString n);
	CString getName();
	int getTypeId();
	virtual void setTypeId() = 0;

};


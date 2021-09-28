#pragma once
#include <string>

using namespace std;

class Profile
{

private:
	static int profiles_counter;
	string name;
	int type_id;

public:

	Profile() : type_id(1) {};
	Profile(string n);
	virtual ~Profile() {};

	void setName(string n);
	string getName();
	int getTypeId();
	virtual void setTypeId() = 0;

};


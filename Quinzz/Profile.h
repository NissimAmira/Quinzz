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

	Profile();
	virtual ~Profile() = 0;

	void setName();
	string getName();
	virtual void setTypeId() = 0;
	int getTypeId();

};


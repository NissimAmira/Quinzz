#include "pch.h"
#include "Profile.h"
#include <string>

using namespace std;

Profile::Profile(string n) {
	this->setName(n);
}

void Profile::setName(string n) {
	this->name = n;
}

string Profile::getName() {
	return this->name;
}

int Profile::getTypeId() {
	return this->type_id;
}

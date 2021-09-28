#include "pch.h"
#include "Profile.h"
#include <string>

using namespace std;

Profile::Profile(CString n) {
	this->setName(n);
}

void Profile::setName(CString n) {
	this->name = n;
}

CString Profile::getName() {
	return this->name;
}

int Profile::getTypeId() {
	return this->type_id;
}

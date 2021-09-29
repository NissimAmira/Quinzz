#include "pch.h"
#include "gender_b.h"

gender_b::gender_b(CString g)
{
	this->setGender(g);
}

void gender_b::setGender(CString g)
{
	this->gender = g;
}

CString gender_b::getGender() const
{
	return this->gender;
}

bool gender_b::isBinary()
{
	if (gender == "Female" || gender == "Male") return TRUE;
	else return FALSE;
}

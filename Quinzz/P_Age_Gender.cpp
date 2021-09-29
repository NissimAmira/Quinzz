#include "pch.h"
#include "P_Age_Gender.h"

P_Age_Gender::P_Age_Gender() : P_Age(-1)
{
	this->setGender(_T(""));
}

P_Age_Gender::P_Age_Gender(int a, CString g) : P_Age(a)
{
	this->setGender(g);
}

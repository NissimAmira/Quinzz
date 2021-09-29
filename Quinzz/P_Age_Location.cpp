#include "pch.h"
#include "P_Age_Location.h"

P_Age_Location::P_Age_Location() : P_Age(-1)
{
	this->setLocation(_T(""));
}

P_Age_Location::P_Age_Location(int a, CString l) : P_Age(a)
{
	this->setLocation(l);
}


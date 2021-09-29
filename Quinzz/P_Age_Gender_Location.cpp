#include "pch.h"
#include "P_Age_Gender_Location.h"

P_Age_Gender_Location::P_Age_Gender_Location() : P_Age_Gender(-1,_T(""))
{
	this->setLocation(_T(""));
}

P_Age_Gender_Location::P_Age_Gender_Location(int a, CString g, CString l) : P_Age_Gender(a,g)
{
	this->setLocation(l);
}

#include "pch.h"
#include "P_Gender_Location.h"

P_Gender_Location::P_Gender_Location() : P_Gender()
{
	this->setLocation(_T(""));
}

P_Gender_Location::P_Gender_Location(CString g, CString l) : P_Gender(g)
{
	this->setLocation(l);
}

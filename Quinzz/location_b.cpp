#include "pch.h"
#include "location_b.h"

location_b::location_b(CString l)
{
	this->setLocation(l);
}

void location_b::setLocation(CString l)
{
	this->location = l;
}

CString location_b::getLocation()
{
	return this->location;
}

bool location_b::isIsraeli()
{
	if (this->getLocation() == "Israel") return TRUE;
	else return FALSE;
}

#include "pch.h"
#include "age_b.h"

age_b::age_b(int a)
{
	this->setAge(a);
}

void age_b::setAge(int a)
{
	this->age = a;
}

int age_b::getAge() const
{
	return this->age;
}

bool age_b::isLegal()
{
	if (this->getAge() >= 18) return TRUE;
	else return FALSE;
}

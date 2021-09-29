#pragma once
#include "Profile.h"
#include "age_b.h"

class P_Age :
    public Profile, age_b
{

public:
    P_Age() { this->setAge(-1); };
    P_Age(int a);
    ~P_Age() {};


};


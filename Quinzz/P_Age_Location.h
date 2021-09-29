#pragma once
#include "P_Age.h"
#include "location_b.h"
class P_Age_Location :
    public P_Age, location_b
{
    P_Age_Location();
    P_Age_Location(int a, CString l);
    ~P_Age_Location() {};

    void setTypeId() { this->type_id = 10; }

};


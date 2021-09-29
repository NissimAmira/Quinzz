#pragma once
#include "P_Gender.h"
#include "location_b.h"

class P_Gender_Location :
    public location_b, P_Gender
{
public:
    P_Gender_Location();
    P_Gender_Location(CString g, CString l);
    ~P_Gender_Location() {};

    void setTypeId() { this->type_id = 12; }
};


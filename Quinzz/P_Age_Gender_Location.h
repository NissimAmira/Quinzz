#pragma once
#include "P_Age_Gender.h"
#include "location_b.h"

#include<string>

using namespace std;

class P_Age_Gender_Location :
    public P_Age_Gender,location_b
{

public:
    P_Age_Gender_Location();
    P_Age_Gender_Location(int a, CString g, CString l);
    ~P_Age_Gender_Location() {};

    void setTypeId() { this->type_id = 8; }

};


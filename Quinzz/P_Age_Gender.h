#pragma once
#include "P_Age.h"
#include "gender_b.h"

using namespace std;

class P_Age_Gender :
    public P_Age, gender_b
{

public:
    P_Age_Gender();
    P_Age_Gender(int a, CString g);
    ~P_Age_Gender() {};
   
    void setTypeId() { this->type_id = 9; }

};


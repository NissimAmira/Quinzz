#pragma once
#include "Profile.h"
#include "gender_b.h"

class P_Gender :
    public Profile, gender_b
{
public:
    P_Gender() { this->setGender(_T("")); };
    P_Gender(CString g);
    ~P_Gender() {};

    void setTypeId() { this->type_id = 13; }

};


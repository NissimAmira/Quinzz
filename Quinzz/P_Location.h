#pragma once
#include "Profile.h"
#include "location_b.h"
class P_Location :
    public Profile, location_b
{
public:
    P_Location() { this->setLocation(_T("")); };
    P_Location(CString l);
    ~P_Location() {};
};


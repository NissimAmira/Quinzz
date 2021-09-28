#pragma once
#include<string>

using namespace std;

class location_b
{
private:
    CString location;
public: 

    virtual void setLocation(CString) = 0;
    CString getLocation();
    bool isIsraeli();
};


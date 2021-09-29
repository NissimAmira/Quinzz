#pragma once
#include<string>

using namespace std;

class location_b
{
private:
    CString location;
public: 

    location_b() : location("") {};
    location_b(CString l);
    ~location_b() {};

    void setLocation(CString l);
    CString getLocation();
    bool isIsraeli();
};


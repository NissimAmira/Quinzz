#pragma once
#include<string>

using namespace std;

class location_b
{
private:
    string location;
public: 

    virtual void setLocation(string) = 0;
    string getLocation();
    bool isIsraeli();
};


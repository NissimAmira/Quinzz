#pragma once
class location_b
{
private:
    string location;
public: 

    virtual void setLocation(string) = 0;
    string getLocation();
    bool isIsraeli();
};


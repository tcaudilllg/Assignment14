#pragma once
#include "Vehicle.h"
class Car :
    public Vehicle
{

    // member variable for the number of doors

private:
    
    int doorCount;

public:

    Car();
    int getDoorCount();
    void setDoorCount(int);

};


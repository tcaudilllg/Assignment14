#pragma once
#include "Vehicle.h"

class Truck :
    public Vehicle
{

    // member variable for the number of doors

private:

    double towingCapacity;

public:

    Truck();
    double getTowingCapacity();
    void setTowingCapacity(double);

};

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
    Truck(string, int, double);
    double getTowingCapacity();
    void setTowingCapacity(double);
    void displayInfo();
};

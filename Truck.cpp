#include "Truck.h"

Truck::Truck()
{
	setTowingCapacity(0);
}

Truck::Truck(string make, int model, double towing) : Vehicle (make, model)
{
	towingCapacity = towing;
}

void Truck::setTowingCapacity(double towing)
{
	towingCapacity = towing;
}

double Truck::getTowingCapacity()
{
	return towingCapacity;
}


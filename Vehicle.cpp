#include "Vehicle.h"

// Constructors

Vehicle::Vehicle ()
{
	manufacturer = "";
	year = 0;
}

// Constructors

Vehicle::Vehicle(string make, int model)
{
	manufacturer = make;
	year = model;
}

// Getters/setters


string Vehicle::getManufacturer()
{
	return manufacturer;
}

void Vehicle::setManufacturer (string make)
{
	manufacturer = make;
}

int Vehicle::getYear()
{
	return year;
}

void Vehicle::setYear(int model)
{
    year = model;

}

// behaviors

void Vehicle::displayInfo()
{

	cout << "Make: " << manufacturer << endl;
	cout << "Model: " << year << endl;

}
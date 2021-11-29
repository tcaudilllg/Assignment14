#include "Vehicle.h"

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

void Vehicle::displayInfo()
{

	cout << "Make: " << manufacturer << endl;
	cout << "Model: " << year << endl;

}
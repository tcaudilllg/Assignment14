#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
using namespace std;


class Vehicle
{

	// Define member variables for manufacturer and year built

private:

	string manufacturer;
	int year;

public:

	Vehicle();
	Vehicle(string, int);
	string getManufacturer();
	void setManufacturer(string);
	int getYear();
	void setYear(int);
	void displayInfo();
};

#endif

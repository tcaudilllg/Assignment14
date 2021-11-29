#pragma once
class Vehicle
{

	// Define member variables for manufacturer and year built

private:

	string manufacturer;
	int year;

public:

	Vehicle();

	string getManufacturer();
	void setManufacturer(string);
	int getYear();
	void setYear(int);

};


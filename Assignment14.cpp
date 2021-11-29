// Assignment14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

int main()
{

	// declarations/instantiations

	Vehicle vehicle = Vehicle();
	Car car = Car();
	Truck truck = Truck();

	string make = "";
	int model;
	int doorCount;
	double towingCapacity;


	cout << "Enter make of car: ";
	cin >> make;
	vehicle.setManufacturer(make);
	cout << endl;

	cout << "Enter model year of car: ";
	cin >> model;
	vehicle.setYear(model);
	cout << endl;

	cout << "Vehicle Info:" << endl;
	vehicle.displayInfo();

	cout << "Enter make of car: ";
	cin >> make;
	car.setManufacturer(make);
	cout << endl;

	cout << "Enter model year of car: ";
	cin >> model;
	car.setYear(model);
	cout << endl;

	cout << "How many doors does the car have? ";
	cin >> doorCount;
	car.setDoorCount(doorCount);

	cout << "Vehicle Info:" << endl;
	car.displayInfo();

	cout << "Enter make of truck: ";
	cin >> make;
	truck.setManufacturer(make);
	cout << endl;

	cout << "Enter model year of truck: ";
	cin >> model;
	truck.setYear(model);
	cout << endl;
	 
	cout << "Enter towing capacity of truck: ";
	cin >> towingCapacity;
	truck.setTowingCapacity(towingCapacity);

	cout << "Vehicle Info:" << endl;
	truck.displayInfo();



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

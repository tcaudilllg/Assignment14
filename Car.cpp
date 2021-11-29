#include "Car.h"


Car::Car()
{
	doorCount = 0;
}

Car::Car(string make, int model, int doors) : Vehicle(make, model)
{
	doorCount = doors;
}

void Car::setDoorCount(int doors)
{
	doorCount = doors;
}

int Car::getDoorCount()
{
	return doorCount;
}


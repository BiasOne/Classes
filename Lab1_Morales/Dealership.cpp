#include "Dealership.h"
#include "Showroom.h"
#include "Vehicle.h"

#include <iostream>
#include <limits>
#include <memory>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

Dealership::Dealership(string name, unsigned int capacity)
{
	this->name = name;
	this->capacity = capacity;
}

void Dealership::AddShowroom(const Showroom& s)
{
	
	if (numberOfShowrooms == capacity) {
		cout << "Dealership is full, can't add another showroom!" << endl;
	}
	else {
		showrooms.push_back(s);
		numberOfShowrooms = numberOfShowrooms + 1;
	}


}

float Dealership::GetAveragePrice() const
{
	float totalSum = 0;
	int numCars = 0;
	float averagePrice = 0.0;


	if (numberOfShowrooms == 0) 
	{
		return averagePrice;
	}

	else
	{
		for (unsigned int i = 0; i < showrooms.size(); i++)
		{
			vector<Vehicle> vehicles = showrooms[i].GetVehicleList();

			for (unsigned int j = 0; j < vehicles.size(); j++)
			{
				totalSum = totalSum + vehicles.at(j).GetPrice();
				numCars=numCars+1;

			}
		}
		averagePrice = totalSum / numCars;
		return averagePrice;
	}
}

void Dealership::ShowInventory() const
{	
	if (numberOfShowrooms > 0) {

		for (unsigned int j = 0; j < numberOfShowrooms; j++) {

			showrooms[j].ShowInventory();

		}
		cout << endl;

		cout << "Average car price: $" << GetAveragePrice();
	}
	else {
		cout << name << " is empty" << endl;
		cout << "Average car price: $" << GetAveragePrice();
	}
}



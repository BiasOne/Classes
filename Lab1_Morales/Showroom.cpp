#include "Vehicle.h"
#include "Showroom.h"

#include <iostream>
#include <limits>
#include <memory>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

Showroom::Showroom(string name, unsigned int capacity)
{
	this->name = name;
	this->capacity = capacity;

}

const vector<Vehicle>& Showroom::GetVehicleList() const
{
	return vehicles;
}

void Showroom::AddVehicle(const Vehicle& v)
{
	Vehicle vehicleObj;

		if (numberOfVehicles == capacity) {
		cout << "Showroom is full! Cannot add ";
		v.displayYearMakeModel();
		
	}
	else {
		vehicles.push_back(v);
				numberOfVehicles = numberOfVehicles + 1;
	}

}

void Showroom::ShowInventory() const
{
	if (numberOfVehicles == 0)
	{
		cout << name << " is empty!" << endl;

	}
	else {
		cout <<"Vehicles in " << name << endl;

		for (unsigned int i = 0; i < numberOfVehicles; i++) {

			vehicles[i].Display();
		}
		cout << endl;

	}
}





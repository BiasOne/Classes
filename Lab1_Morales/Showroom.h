#ifndef SHOWROOM_H
#define SHOWROOM_H


#include <iostream>
#include <limits>
#include <memory>
#include <iomanip>
#include <string>
#include <vector>
#include "Vehicle.h"

using namespace std;

class Showroom
{
private:
	string name;
	vector<Vehicle> vehicles;
	int capacity;
	int numberOfVehicles=vehicles.size();

public:
	Showroom(string name = "Unnamed Showroom", unsigned int capacity = 0);
	const vector<Vehicle>& GetVehicleList() const;
	void AddVehicle(const Vehicle& v);
	void ShowInventory() const;

};

#endif
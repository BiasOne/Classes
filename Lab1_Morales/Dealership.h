#ifndef DEALERSHIP_H
#define DEALERSHIP_H

#include <iostream>
#include <limits>
#include <memory>
#include <iomanip>
#include <string>
#include <vector>
#include "Showroom.h"
#include "Vehicle.h"

using namespace std;

class Dealership
{
private:
	vector<Showroom> showrooms;
	string name;
	int capacity, numberOfShowrooms;
	
public:
	Dealership(string name = "Generic Dealership", unsigned int capacity = 0);
	void AddShowroom(const Showroom& s);
	float GetAveragePrice() const;
	void ShowInventory() const;
};

#endif

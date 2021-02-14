#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <limits>
#include <memory>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class Vehicle
{
private:
	string make, model;
	int year, mileage;
	float price;
	string yearMakeModel;
	

public:
	Vehicle();
	Vehicle(string make, string model, int year, float price, int mileage);
	void Display() const;
	string GetYearMakeModel();
	void displayYearMakeModel() const;
	float GetPrice() const;
};

#endif


#pragma once
#include "CarbonFootprint.h"

class Vehicle : public CarbonFootprint
{
private:
	double milesdriven = {};
	double fuelEfficiency = {};
public:
	Vehicle() :CarbonFootprint() { cout << "Vehicle Class..." << endl; }
	Vehicle(double m,double f):milesdriven(m),fuelEfficiency(f){ cout << "Vehicle Class..." << endl; }
	Vehicle(const Vehicle& obj):CarbonFootprint(),fuelEfficiency(obj.fuelEfficiency),milesdriven(obj.milesdriven)
	{
		cout << "Vehicle Class..." << endl;
	}
	~Vehicle() { cout << "Destroying Vehicle..." << endl; }
	void setmilesdriven(double m) { milesdriven = m; }
	void setfuelEfficiency(double f) { fuelEfficiency = f; }
	double getmilesdriven() { return milesdriven; }
	double getfuelEfficiency() { return fuelEfficiency; }
	void getCarbonFootprint()
	{
		int weeksAYear = 55;
		double CarEmissionPerGallon = 20.0;
		double greenHouseGases = 80.00;
		double CFP = ((milesdriven * (float)weeksAYear) / fuelEfficiency) * CarEmissionPerGallon * greenHouseGases;
		cout << "Carbon Footprint of Vehicle is " << CFP << " ." << endl;
	}
};


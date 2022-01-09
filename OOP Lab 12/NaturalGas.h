#pragma once
#include "CarbonFootprint.h"

class NaturalGas :public CarbonFootprint
{
private:
	double averageAmountOfNGbill = {};
public:
	NaturalGas() :CarbonFootprint() { cout << "Natural Gas Class..." << endl; }
	NaturalGas(int b) :CarbonFootprint(), averageAmountOfNGbill(b) { cout << "Natural Gas Class..." << endl; }
	NaturalGas(const NaturalGas& obj) :CarbonFootprint(), averageAmountOfNGbill(obj.averageAmountOfNGbill)
	{
		cout << "Natural Gas Class..." << endl;
	}
	~NaturalGas() { cout << "Destroying Natural Gas..." << endl; }
	void setaverageAmountOfNGbill(double n) { averageAmountOfNGbill = n; }
	double getaverageAmountOfNGbill() { return averageAmountOfNGbill; }
	void getCarbonFootprint()
	{
		//Carbon Footprint==CFP
		double pricePerCubeF = 3.00;
		int months = 12;
		double NGEmissFac = 120.61;
		double CFP = (averageAmountOfNGbill / pricePerCubeF) * NGEmissFac * (float)months;
		cout << "Carbonn Footprint of Natural Gass is " << CFP << " ." << endl;
	}
};



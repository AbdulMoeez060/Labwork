#pragma once
#include "CarbonFootprint.h"

class Electricity :public CarbonFootprint
{
private:
	double averageAmountOfEbill = {};
public:
	Electricity():CarbonFootprint() { cout << "Electricity Class..." << endl; }
	Electricity(int b):CarbonFootprint(),averageAmountOfEbill(b){ cout << "Electricity Class..." << endl; }
	Electricity(const Electricity& obj):CarbonFootprint(),averageAmountOfEbill(obj.averageAmountOfEbill)
	{ cout << "Electricity Class..." << endl; }
	~Electricity() { cout << "Destroying Electricity..." << endl; }
	void setaverageAmountOfEbill(double e) { averageAmountOfEbill = e; }
	double getaverageAmountOfEbill() { return averageAmountOfEbill; }
	void getCarbonFootprint()
	{
		//Carbon Footprint==CFP
		double pricePerKW = 8.00;
		int months = 12;
		double ElecEmissFac = 1.37;
		double CFP = (averageAmountOfEbill / pricePerKW) * ElecEmissFac * (float)months;
		cout << "Carbonn Footprint of Electricity is " << CFP << " ." << endl;
	}
};


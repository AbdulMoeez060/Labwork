#pragma once
#include<iostream>
#include<string>
using namespace std;

class CarbonFootprint
{
public:
	CarbonFootprint() { cout << "Carbion Footprint Class..." << endl; }
	~CarbonFootprint() { cout << "Destroying Carbon Footprint class..." << endl; }
	virtual void getCarbonFootprint() = 0;
};


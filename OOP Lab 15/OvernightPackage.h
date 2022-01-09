#pragma once
#include "Package.h"

class OvernightPackage : public Package
{
private:
	double additionalCostOu;
public:
	OvernightPackage() :Package()
	{
		cout << "Constructing Overnight Package..." << endl;
		additionalCostOu = {};
	}
	OvernightPackage(string sn, string sa, string sc, string ss, int sz, string rn, string ra, string rc, string rs, int rz, double w, double c, double a)
		:Package(sn, sa, sc, ss, sz, rn, ra, rc, rs, rz, w, c), additionalCostOu(a)
	{
		cout << "Constructing Overnight Package..." << endl;
	}
	OvernightPackage(const OvernightPackage& o) :Package(o), additionalCostOu(o.additionalCostOu)
	{
		cout << "Constructing Overnight Package..." << endl;
	}
	~OvernightPackage()
	{
		cout << "Destructing Overnight Package..." << endl;
	}
	double getadditionalCostOu()const { return additionalCostOu; }
	void setadditionalCostOu(double a) { additionalCostOu = a; }
	double calculateCost() override
	{
		double cost = Package::calculateCost();
		cost *= additionalCostOu;
		return cost;
	}
	void display() override
	{
		Package::display();
		cout << "Additional Cost per Ou: " << additionalCostOu << endl;
	}
};


#pragma once
#include "Package.h"

class TwoDayPackage :public Package
{
private:
	double flatFee;
public:
	TwoDayPackage() :Package()
	{
		cout << "Constructing Two Day Package..." << endl;
		flatFee = {};
	}
	TwoDayPackage(string sn, string sa, string sc, string ss, int sz, string rn, string ra, string rc, string rs, int rz, double w, double c, double f)
		:Package(sn, sa, sc, ss, sz, rn, ra, rc, rs, rz, w, c), flatFee(f)
	{
		cout << "Constructing Two Day Package..." << endl;
	}
	TwoDayPackage(const TwoDayPackage& t) :Package(t), flatFee(t.flatFee)
	{
		cout << "Constructing Two Day Package..." << endl;
	}
	~TwoDayPackage()
	{
		cout << "Destructing Two Day Package..." << endl;
	}
	double getflatFee()const { return flatFee; }
	void setflatFee(double f) { flatFee = f; }
	double calculateCost() override
	{
		double cost = Package::calculateCost();
		cost += flatFee;
		return cost;
	}
	void display() override
	{
		Package::display();
		cout << "Flat Fee on Package: " << flatFee << endl;
	}
};


#include "HDD.h"

HDD::HDD()
{
	cout << "Default HDD constructor." << endl;
	model = {};
	capacity = {};
}
HDD::HDD(string m, double cap):model(m),capacity(cap)
{
	cout << "Parameterized HDD constructor." << endl;
}
HDD::HDD(const HDD& obj)
{
	cout << "Copy HDD constructor." << endl;
	model = obj.model;
	capacity = obj.capacity;
}
HDD::~HDD()
{
	cout << "HDD Destructor." << endl;
}
void HDD::setmodelhdd(string m)
{
	model = m;
}
void HDD::setcapacityhdd(double cap)
{
	capacity = cap;
}
string HDD::getmodelhdd()
{
	return model;
}
double HDD::getcapacityhdd()
{
	return capacity;
}
void HDD::displayhdd()
{
	cout << "HDD: " << endl << "Model: " << model << endl << "Capacity: " << capacity << endl;

}
#include"Electricity.h"
#include"NaturalGas.h"
#include"Vehicle.h"
#include<iostream>
using namespace std;

void display(CarbonFootprint* ptr)
{
	ptr->getCarbonFootprint();
}
int main()
{
	CarbonFootprint* obj = nullptr;
	Electricity e(1200.34);
	obj = &e;
	display(obj);
	NaturalGas n(150.35);
	obj = &n;
	display(obj);
	Vehicle v(45.00, 24.3);
	obj = &v;
	display(obj);
	return 0;
}
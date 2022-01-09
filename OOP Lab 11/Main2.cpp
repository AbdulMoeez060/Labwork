#include<iostream>
#include<string>
#include"SalariedEmployee.h"
#include"CommmissionedEmployee.h"
#include"HourlyEmployee.h"
using namespace std;

int main()
{
	
	Employee* ptr[3];
	cout << "=====Polymorphism======" << endl;
	cout << "=====Salaried Employee======" << endl;
	SalariedEmployee s("Abdul Moeez", 7.5, 10000);
	ptr[0] = &s;
	ptr[0]->salary();
	cout << "=====Hourly Employee======" << endl;
	HourlyEmployee h("Ali", 7.5, 45);
	ptr[1] = &h;
	ptr[1]->salary();
	cout << "=====Commissioned Employee======" << endl;
	CommmissionedEmployee c("Bilal", 8, 45000);
	ptr[2] = &c;
	ptr[2]->salary();

	ptr[0]->display();
	cout << "=====Employee Info======" << endl;
	for (int i = 0; i < 3; i++)
	{
		ptr[i]->display();
	}

	return 0;
}
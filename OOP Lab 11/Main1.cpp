#include<iostream>
#include"Rectangle.h"
#include"Square.h"
#include"Trapezium.h"
using namespace std;

int main()
{
	Shape* ptr;
	cout << "=======Polymorphism========" << endl;
	cout << "=======Square========" << endl;
	Square s(4.0);
	ptr = &s;
	ptr->area();
	ptr->parameter();

	cout << "=======Rectangle========" << endl;
	Rectangle r(3.0, 5.0);
	ptr = &r;
	ptr->area();
	ptr->parameter();

	cout << "=======Trapezium========" << endl;
	Trapezium t(3.8, 5.0, 3.0, 2.3, 1.8);
	ptr = &t;
	ptr->area();
	ptr->parameter();
	
	return 0;
}
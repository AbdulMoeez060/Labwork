//Write a program that calculates the area and circumference of a circle
#include<iostream>
using namespace std;

int main()
{
	int radius = 6, pie = 3.14;
	int Area = pie * radius * radius;
	int Circumference = 2 * pie * radius;
	cout << "Radius of a Circle=";
	cout << radius;
	cout << endl;
	cout << "Area of a Circle = Pie * Radius * Radius";
	cout << endl;
	cout << "Area of a Circle= ";
	cout << Area;
	cout << endl;
	cout << "Cirumference of a circle= 2 * Pie * Radius";
	cout << endl;
	cout << "Circumference= ";
	cout << Circumference;
	cout << endl;
	return 0;
}
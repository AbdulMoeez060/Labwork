#include "Trapezium.h"

Trapezium::Trapezium():Shape()
{
	cout << "Constructing Trapezium..." << endl;
}
Trapezium::Trapezium(double l, double h, double b, double c, double d) : Shape(l)
{
	cout << "Constructing Trapezium..." << endl;
	height = h;
	sideB = b;
	sideC = c;
	sideD = d;
}
Trapezium::Trapezium(const Trapezium& obj):Shape(obj.length)
{
	cout << "Constructing Trapezium..." << endl;
	height = obj.height;
	sideB = obj.sideB;
	sideC = obj.sideC;
	sideD = obj.sideD;
}
Trapezium::~Trapezium()
{
	cout << "Destructing Trapezium..." << endl;
}
void Trapezium::setheight(double h)
{
	height = h;
}
void Trapezium::setsideB(double b)
{
	sideB = b;
}
void Trapezium::setsideC(double c)
{
	sideC = c;
}
void Trapezium::setsideD(double d)
{
	sideD = d;
}
double Trapezium::getheight()
{
	return height;
}
double Trapezium::getsideB()
{
	return sideB;
}
double Trapezium::getsideC()
{
	return sideC;
}
double Trapezium::getsideD()
{
	return sideD;

}
void Trapezium::area()
{
	cout << "Area of trapezium is " << ((length + sideB) / 2) * height << endl;
}
void Trapezium::parameter()
{
	cout << "Parameter of trapezium is " << length+sideB+sideC+sideD << endl;
}
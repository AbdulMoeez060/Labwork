#include "Shape.h"

Shape::Shape()
{
	cout << "Constructing Shape..." << endl;
}
Shape::Shape(double le):length(le)
{
	cout << "Constructing Shape..." << endl;
}
Shape::Shape(const Shape& obj):length(obj.length)
{
	cout << "Constructing Shape..." << endl;
}
Shape::~Shape()
{
	cout << "Destructing Shape..." << endl;

}
void Shape::setlength(double l)
{
	length = l;
}
double Shape::getlength()
{
	return length;
}
void Shape::area()
{
	cout << "The Area of simple shape is " << length << endl;
}
void Shape::parameter()
{
	cout << "The Parameter of simple shape is " << 2*length << endl;

}
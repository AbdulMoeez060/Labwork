#include "Rectangle.h"

Rectangle::Rectangle():Shape()
{
	cout << "Constructing Rectangle..." << endl;
}
Rectangle::Rectangle(double l,double w) :Shape(l),width(w)
{
	cout << "Constructing Rectangle..." << endl;
}
Rectangle::Rectangle(const Rectangle& obj) : Shape(obj),width(obj.width)
{
	cout << "Constructing Rectangle..." << endl;
}
Rectangle::~Rectangle()
{
	cout << "Destructing Rectangle..." << endl;
}
void Rectangle::setwidth(double w)
{
	width = w;
}
double Rectangle::getwidth()
{
	return width;
}
void Rectangle::area()
{
	cout << "The area of the rectangle is " << length * width << endl;
}
void Rectangle::parameter()
{
	cout << "The Parameter of the rectangle is " << 2 * (length+width) << endl;
}
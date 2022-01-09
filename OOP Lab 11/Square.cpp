#include "Square.h"

Square::Square():Shape()
{
	cout << "Constructing Square..." << endl;
}
Square::Square(double l):Shape(l)
{
	cout << "Constructing Square..." << endl;
}
Square::Square(const Square& obj):Shape(obj)
{
	cout << "Constructing Square..." << endl;
}
Square::~Square()
{
	cout << "Destructing Square..." << endl;
}
void Square::area()
{
	cout << "The area of the square is " << length * length << endl;
}
void Square::parameter()
{
	cout << "The Parameter of the square is " << 4 * length << endl;
}
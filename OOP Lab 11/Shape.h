#pragma once
#include<iostream>
using namespace std;
class Shape
{
protected:
	double length;
public:
	Shape();
	Shape(double);
	Shape(const Shape& obj);
	~Shape();
	void setlength(double);
	double getlength();
	virtual void area();
	virtual void parameter();
};

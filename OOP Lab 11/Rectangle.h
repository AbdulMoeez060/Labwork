#pragma once
#include "Shape.h"
#include<iostream>
using namespace std;

class Rectangle :public Shape
{
private:
	double width;
public:
	Rectangle();
	Rectangle(double, double);
	Rectangle(const Rectangle& obj);
	~Rectangle();
	void setwidth(double);
	double getwidth();
	void area();
	void parameter();
};


#pragma once
#include<iostream>
using namespace std;
#include "Shape.h"


class Square :public Shape
{
public:
	Square();
	Square(double);
	Square(const Square& obj);
	~Square();
	void area();
	void parameter();
};


#pragma once
#include "Shape.h"
#include<iostream>
using namespace std;

class Trapezium : public Shape
{
private:
    double height;
    double sideB;
    double sideC;
    double sideD;
public:
    Trapezium();
    Trapezium(double, double, double, double, double);
    Trapezium(const Trapezium& obj);
    ~Trapezium();
    void setheight(double);
    void setsideB(double);
    void setsideC(double);
    void setsideD(double);
    double getheight();
    double getsideB();
    double getsideC();
    double getsideD();
    void area();
    void parameter();
};
#pragma once
#include "Employee.h"
#include<iostream>
#include<string>
using namespace std;


class SalariedEmployee :public Employee
{
private:
	double salaryPerM;
public:
	SalariedEmployee():Employee()
	{
		cout << "Constructing Salaried Employee..." << endl;
	}
	SalariedEmployee(const char n[], double tax, double sal) :Employee(n, tax), salaryPerM(sal)
	{
		cout << "Constructing Salaried Employee..." << endl;
	}
	SalariedEmployee(const SalariedEmployee& obj) :Employee(obj), salaryPerM(obj.salaryPerM)
	{
		cout << "Constructing Salaried Employee..." << endl;
	}
	~SalariedEmployee()
	{
		cout << "Destructing Salaried Employee..." << endl;
	}
	void setsalaryPerM(double sal)
	{
		salaryPerM = sal;
	}
	double getsalaryPerM()
	{
		return salaryPerM;
	}
	void salary()
	{
		double taxrate = gettaxRate();
		double tax = (taxrate / 100) * salaryPerM;
		cout << "Salary of the regular Salaried Employee is " << salaryPerM - tax << endl;
	}
	void display()
	{
		Employee::display();
		salary();
	}
};


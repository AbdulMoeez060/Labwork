#pragma once
#include "Employee.h"


class HourlyEmployee :public Employee
{
private:
	double salaryPerH;
public:
	HourlyEmployee() :Employee()
	{
		cout << "Constructing Hourly Employee..." << endl;
	}
	HourlyEmployee(const char n[], double tax, double sal) :Employee(n, tax), salaryPerH(sal)
	{
		cout << "Constructing Hourly Employee..." << endl;
	}
	HourlyEmployee(const HourlyEmployee& obj) :Employee(obj), salaryPerH(obj.salaryPerH)
	{
		cout << "Constructing Hourly Employee..." << endl;
	}
	~HourlyEmployee()
	{
		cout << "Destructing Hourly Employee..." << endl;
	}
	void setsalaryPerH(double sal)
	{
		salaryPerH = sal;
	}
	double getsalaryPerH()
	{
		return salaryPerH;
	}
	void salary()
	{
		double taxrate = gettaxRate();
		double sal = salaryPerH * 8 * 5 * 4;//Since salary is hourly so 8 hours in a dat, 5 working days and 4 weeks in a month
		double tax = (taxrate / 100) * sal;
		cout << "Salary of the regular hourly Employee is " << sal - tax << endl;
	}
	void display()
	{
		Employee::display();
		salary();
	}
};


#pragma once
#include "Employee.h"

class CommmissionedEmployee : public Employee
{
private:
	double salaryPerC;
public:
	CommmissionedEmployee() :Employee()
	{
		cout << "Constructing Commmissioned Employee..." << endl;
	}
	CommmissionedEmployee(const char n[], double tax, double sal) :Employee(n, tax), salaryPerC(sal)
	{
		cout << "Constructing Commmissioned Employee..." << endl;
	}
	CommmissionedEmployee(const CommmissionedEmployee& obj) :Employee(obj), salaryPerC(obj.salaryPerC)
	{
		cout << "Constructing Commmissioned Employee..." << endl;
	}
	~CommmissionedEmployee()
	{
		cout << "Destructing Commmissioned Employee..." << endl;
	}
	void setsalaryPerC(double sal)
	{
		salaryPerC = sal;
	}
	double getsalaryPerC()
	{
		return salaryPerC;
	}
	void salary()
	{
		double taxrate = gettaxRate();
		double tax = (taxrate / 100) * salaryPerC;
		cout << "Salary of the regular Commissioned Employee is " << salaryPerC - tax << endl;
	}
	void display()
	{
		Employee::display();
		salary();
	}
};


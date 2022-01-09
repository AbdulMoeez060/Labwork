#include"Person.h"
#include<iostream>
#include<string>

class Employee:public Person
{
private:
	double salary;
	int employeeId;
	
public:
	static int counte;
	Employee();
	Employee(const char[], int, double, int);
	Employee(const Employee& obj);
	~Employee();
	void setsalary(double);
	void setemployeeId(int);
	double getsalary();
	int getemployeeId();
	void displayemployee();
	static void getcounte();
};
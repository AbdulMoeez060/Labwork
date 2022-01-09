#include "Employee.h"

int Employee::counte = 0;
Employee::Employee():Person()
{
	cout << "Constructing Employee..." << endl;
	++counte;
}
Employee::Employee(const char n[], int a, double s, int ei) : Person(n, a)
{
	cout << "Constructing Employee..." << endl;
	salary = s;
	employeeId = ei;
	++counte;
}
Employee::Employee(const Employee& obj) :Person(obj)
{
	cout << "Copying Employee..." << endl;
	salary = obj.salary;
	employeeId = obj.employeeId;
	++counte;
}
Employee::~Employee()
{
	cout << "Destructing Employee..." << endl;
}
void Employee::setsalary(double s)
{
	salary = s;
}
void Employee::setemployeeId(int ei)
{
	employeeId = ei;
}
double Employee::getsalary()
{
	return salary;
}
int Employee::getemployeeId()
{
	return employeeId;
}
void Employee::displayemployee()
{
	cout << "Employee: " << endl;
	displayperson();
	cout << "Salary: " << salary << endl;
	cout << "Employee Id: " << employeeId << endl;
}
void Employee::getcounte()
{
	cout << "There are " << counte << " Employees." << endl;
}
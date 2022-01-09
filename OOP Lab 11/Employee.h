#pragma once
#include<iostream>
#include<string>
using namespace std;

class Employee
{
private:
	char* name;
	double taxRate;
public:
	Employee() 
	{
		cout << "Constructing Employee..." << endl;
		name = nullptr;
	}
	Employee(const char n[], double tax)
	{
		cout << "Constructing Employee..." << endl;
		name = nullptr;
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
		taxRate = tax;
	}
	Employee(const Employee& obj)
	{
		cout << "Constructing Employee..." << endl;
		this->name = nullptr;
		this->name = new char[strlen(obj.name) + 1];
		strcpy_s(this->name, strlen(obj.name) + 1, obj.name);
		taxRate = obj.taxRate;
	}
	~Employee()
	{
		cout << "Destructing Employee..." << endl;
		delete[] name;
	}
	void setname(const char n[])
	{
		if (name!=nullptr)
		{
			delete[] name;
		}
		name = nullptr;
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
	}
	void settaxRate(double tax)
	{
		taxRate = tax;
	}
	char* getname()
	{
		return name;
	}
	double gettaxRate()
	{
		return taxRate;
	}
	virtual void salary() = 0;
	virtual void display()
	{
		cout << "Name: ";
		for (int i = 0; name[i] != '\0'; i++)
		{
			cout << name[i];
		}
		cout << endl << "Tax Rate: " << taxRate << endl;
	}
};


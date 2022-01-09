#include "Person.h"

Person::Person()
{
	cout << "Constructing Person..."<<endl;
	name = NULL;
}
Person::Person(const char n[], int a)
{
	cout << "Constructing Person..." << endl;
	name = NULL;
	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
	age = a;
}
Person::Person(const Person& obj)
{
	if (name!=NULL)
	{
		delete[] name;
	}
	name = NULL;
	this->name = new char[strlen(obj.name) + 1];
	strcpy_s(this->name, strlen(obj.name) + 1, obj.name);
	age = obj.age;
}
Person::~Person()
{
	cout << "Deleting Person..." << endl;
	delete[] name;
}
void Person::setname(char n[])
{
	if (name != NULL)
	{
		delete[] name;
	}
	name = NULL;
	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
}
void Person::setage(int a)
{
	age = a;
}
char* Person::getname()
{
	return name;
}
int Person::getage() 
{
	return age;
}
void Person::displayperson()
{
	cout << "Name: ";
	for (int i = 0; name[i]!='\0' ; i++)
	{
		cout << name[i];
	}
	cout << endl;
	cout << "Age: " << age << endl;
}
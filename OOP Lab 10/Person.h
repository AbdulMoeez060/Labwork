#ifndef PERSON_H
#define PERSON_H


#include<iostream>
#include<string>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person();
	Person(const char[], int);
	Person(const Person& obj);
	~Person();
	void setname(char[]);
	void setage(int);
	char* getname();
	int getage();
	void displayperson();
};

#endif // !PERSON_H
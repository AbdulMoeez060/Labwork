#include<iostream>
#include<string>
#include"Name.h"
using namespace std;

int main()
{
	char* fname = NULL;
	char* lname = NULL;
	fname = new char[10];
	lname = new char[10];
	cout << "Enter First Name:";
	cin >> fname;
	cout << "Enter Last Name:";
	cin >> lname;
	Name n1(fname, lname);
	if (n1.isValid())
	{
		cout << "Name is valid" << endl;
		n1.display();
		cout << "This is name in all Capital letters:" << endl;
		n1.toUpper();
		n1.display();
		cout << "This is name in all lowercase letters:" << endl;
		n1.toLower();
		n1.display();
		cout << "This is name in camel case:" << endl;
		n1.camelCase();
		n1.display();
		Name n2 = n1;
		cout << "Name 2 is after swaping first and last names of name 1: " << endl;
		n2.swapNames();
		n2.display();
	}
	else
	{
		cout << "Name is invalid." << endl;
	}
	return 0;
}
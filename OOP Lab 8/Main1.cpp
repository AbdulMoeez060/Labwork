#include<iostream>
#include<string>
#include"Task1.h"
using namespace std;

void print(const SalonEmployees obj)
{
	cout << "Name: ";
	for (int i = 0; obj.name[i] != '\0'; i++)
	{
		cout << obj.name[i];
	}
	cout << endl;
	cout << "ID: " << obj.id << endl;
	cout << "Gender: ";
	for (int i = 0; obj.gender[i] != '\0'; i++)
	{
		cout << obj.gender[i];
	}
	cout<<endl;
	cout << "Contact Number: ";
	for (int i = 0; obj.contactNumber[i] != '\0'; i++)
	{
		cout << obj.contactNumber[i];
	}
	cout << endl;
	cout << "Salary: " << obj.salary << endl;
	cout << "Shift: ";
	for (int i = 0; obj.shift[i] != '\0'; i++)
	{
		cout << obj.shift[i];
	}
	cout << endl;
}
int main()
{
	SalonEmployees E1(878,"Ali", "Male", "03087030889", 1500, "morning");
	SalonEmployees E2 = E1;
	E2.setname("Moeez");
	E2.setcontactNumber("03360602154");
	cout << "Employee 1" << endl;
	print(E1);
	cout << "Employee 2" << endl;
	print(E2);
	return 0;
}
//Write a program in C++ to read any Month Number in integer and display the Name of the month and the number of days for this month
#include<iostream>
using namespace std;

int main()
{
	int a;
	cout << "Enter the number of the month: ";
	cin >> a;
	if (a==1)
	{
		cout << "January has 31 days." << endl;
	}
	else if (a == 2)
	{
		cout << "February has 28 days."<< endl;
	}
	else if (a == 3)
	{
		cout << "March has 31 days." << endl;
	}
	else if (a == 4)
	{
		cout << "April has 30 days." << endl;
	}
	else if (a == 5)
	{
		cout << "May has 31 days." << endl;
	}
	else if (a == 6)
	{
		cout << "June has 30 days." << endl;
	}
	else if (a == 7)
	{
		cout << "July has 31 days." << endl;
	}
	else if (a ==8)
	{
		cout << "August has 31 days." << endl;
	}
	else if (a == 9)
	{
		cout << "September has 30 days." << endl;
	}
	else if (a == 10)
	{
		cout << "October has 31 days." << endl;
	}
	else if (a == 11)
	{
		cout << "November has 30 days." << endl;
	}
	else if (a == 12)
	{
		cout << "Deember has 31 days." << endl;
	}
	else
	{
		cout << "The entered number is invalid";
	}
	return 0;
}
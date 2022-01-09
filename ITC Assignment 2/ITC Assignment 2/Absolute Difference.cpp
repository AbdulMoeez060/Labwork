//Write a C++ program that reads two numbers from user and calculate the absolute difference as (x − y) or (y − x), whichever is positive.Do not use the abs or fabs function in your solution.
#include<iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "Enter first number: ";
	cin >> x;
	cout << "Enter second number: ";
	cin >> y;
	if (x-y>0)
	{
		cout << "The absolute diference of |" << x <<"-" << y << "| is " << x - y << endl;
	}
	else if (x-y<0)
	{
		cout << "The absolute diference of |" << y <<"-" << x << "| is " << y - x << endl;
	}
	else
	{
		cout << "The differnce between two numbers is zero" << endl;
	}
	return 0;
}

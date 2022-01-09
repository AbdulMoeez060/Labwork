//Write a C++ program that reads two numbers from user and tell if the first number is the multiple of second number or not
#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter to numbers: ";
	cin >> a >> b;
	if (a%b==0)
	{
		cout << "The number " << a << " is the multiple of number " << b << " ." << endl;
	}
	else
	{
		cout<< "The number " << a << " is not the multiple of number " << b << " ." << endl;
	}
	return 0;
}
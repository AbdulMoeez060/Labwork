//Write a program which takes 3 inputs integers and tell the 2nd maximum. If all the numbers are equal then print second max doesn’t exist.
#include<iostream>
using namespace std;

int main()
{
	int n1, n2, n3;
	cout << "Enter three numbers: ";
	cin >> n1 >> n2 >> n3;
	if (n1>n2 && n2>n3)
	{
		cout << n2 << " is the second largest number." << endl;
	}
	else if (n2 > n1 && n3 > n2)
	{
		cout << n2 << " is the second largest number." << endl;
	}
	else if (n1 > n2 && n3 > n1)
	{
		cout << n1 << " is the second largest number." << endl;
	}
	else if (n1 > n3 && n2 > n1)
	{
		cout << n1 << " is the second largest number." << endl;
	}
	if (n3 > n2 && n1 > n3)
	{
		cout << n3 << " is the second largest number." << endl;
	}
	else if (n3 > n1 && n2 > n3)
	{
		cout << n3 << " is the second largest number." << endl;
	}
	else
	{
		cout << "Second largest does not exist." << endl;
	}
	return 0;
}
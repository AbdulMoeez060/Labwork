//. Given 3 integer values, a b c, return their sum. However, if one of the values is the same as another of the values, it does not count towards the sum.
#include<iostream>
using namespace std;

int main()
{
	int n1, n2, n3;
	cout << "Enter first Value: ";
	cin >> n1;
	cout << "Enter Second Value: ";
	cin >> n2;
	cout << "Enter Third Value: ";
	cin >> n3;
	if (n1!=n2 && n2!=n3 && n1!=n3)
	{
		cout << "Sum is " << n1 + n2 + n3 << " ." << endl;
	}
	else if (n1==n2 && n3!=n1)
	{
		cout << "Sum is " << n3 << " ." << endl;
	}
	else if (n1 == n3 && n2 != n1)
	{
		cout << "Sum is " << n2 << " ." << endl;
	}
	else if (n2 == n3 && n1 != n2)
	{
		cout << "Sum is " << n1 << " ." << endl;
	}
	else
	{
		cout << "Sum is none." << endl;
	}
	return 0;
}
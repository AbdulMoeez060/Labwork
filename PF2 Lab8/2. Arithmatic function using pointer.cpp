#include<iostream>
using namespace std;

int main()
{
	float n1, n2, * ptr1, * ptr2;
	char op, * optr;
	cout << "Enter two numbers: ";
	cin >> n1 >> n2;
	cout << "Enter aritmetic function you want to perform(+,-,*,/):";
	cin >> op;
	ptr1 = &n1;
	ptr2 = &n2;
	optr = &op;
	if (*optr == '+')
	{
		cout << *ptr1 << *optr << *ptr2 << " = " << *ptr1 + *ptr2 << endl;
	}
	else if (*optr == '-')
	{
		cout << *ptr1 << *optr << *ptr2 << " = " << *ptr1 - *ptr2 << endl;
	}
	else if (*optr == '*')
	{
		cout << *ptr1 << *optr << *ptr2 << " = " << *ptr1 * *ptr2 << endl;
	}
	else if (*optr == '/')
	{
		cout << *ptr1 << *optr << *ptr2 << " = " << *ptr1 / *ptr2 << endl;
	}
	else
	{
		cout << "Wrong operation" << endl;
	}
	return 0;
}
#include<iostream>
using namespace std;

float Add(float *ptr, float *ptr2);
float Sub(float* ptr, float* ptr2);
float Mul(float* ptr, float* ptr2);
float Div(float* ptr, float* ptr2);
int main()
{
	float n1, n2,result;
	char option = {};
	float* ptr1 = &n1, * ptr2 = &n2,*res=&result;
	char* ptr3 = &option;
	cout << "Enter 2 numbers: ";
	cin >> *ptr1 >>*ptr2;
	cout << "Choose a option (/,*,-,+):";
	cin >> *ptr3;
	if (*ptr3 == '+')
	{
		*res = Add(ptr1, ptr2);
		cout << "The sum of the two number is " << *res << endl;
	}
	else if (*ptr3 == '-')
	{
		*res = Sub(ptr1, ptr2);
		cout << "The difference of the two number is " << *res << endl;
	}
	else if (*ptr3 == '*')
	{
		*res = Mul(ptr1, ptr2);
		cout << "The product of the two number is " << *res << endl;
	}
	else if (*ptr3 == '/')
	{
		*res = Div(ptr1, ptr2);
		cout << "The division of the two number is " << *res << endl;
	}
	else
	{
		cout << "Wrong option choose from the given." << endl;
	}
	return 0;
}
float Add(float* ptr, float* ptr2)
{
	float sum = *ptr + *ptr2;
	return sum;
}
float Sub(float* ptr, float* ptr2)
{
	float sub = *ptr - *ptr2;
	return sub;
}
float Mul(float* ptr, float* ptr2)
{
	float mul = *ptr * *ptr2;
	return mul;
}
float Div(float* ptr, float* ptr2)
{
	float div = *ptr / *ptr2;
	return div;
}
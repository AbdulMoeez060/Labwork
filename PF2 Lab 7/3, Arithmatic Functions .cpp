#include<iostream>
using namespace std;

int Add(int num, int num2);
int Sub(int num, int num2);
int Mul(int num, int num2);
int Div(int num, int num2);
int main()
{
	int n1, n2, option;
	cout << "Enter 2 numbers: ";
	cin >> n1 >> n2;
	cout << "Choose a option 1 for addition, 2 for subtraction, 3 for multiplication and 4 for divisiion:";
	cin >> option;
	if (option==1)
	{
		int add = Add(n1, n2);
		cout << "The sum of the two number is " << add << endl;
	}
	else if (option == 2)
	{
		int sub = Sub(n1, n2);
		cout << "The difference of the two number is " << sub << endl;
	}
	else if (option == 3)
	{
		int mul = Mul(n1, n2);
		cout << "The product of the two number is " << mul << endl;
	}
	else if (option == 4)
	{
		int div = Div(n1, n2);
		cout << "The division of the two number is " << div << endl;
	}
	else
	{
		cout << "Wrong option choose from the given." << endl;
	}
	return 0;
}
int Add(int num, int num2)
{
	int sum = num + num2;
	return sum;
}
int Sub(int num, int num2)
{
	int sub = num - num2;
	return sub;
}
int Mul(int num, int num2)
{
	int mul = num * num2;
	return mul;
}
int Div(int num, int num2)
{
	int div = num / num2;
	return div;
}
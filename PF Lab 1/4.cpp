#include<iostream>
using namespace std;

int GetInput();
int Max(int num1, int num2);
void Display(int num);
int main()
{
	int num1, num2, max;
	num1 = GetInput();
	num2 = GetInput();
	max = Max(num1, num2);
	if (max<0)
	{
		cout << "Both num Are Equal." << endl;
		return 0;
	}
	Display(max);
	return 0;
}
int GetInput()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	return num;
}
int Max(int num1, int num2)
{
	int max;
	if (num1>num2)
	{
		max = num1;
		return max;
	}
	else if (num2>num1)
	{
		max = num2;
		return max;
	}
	else
	{
		return -1;
	}
}
void Display(int num)
{
	cout << "Larger number is " << num << endl;
}
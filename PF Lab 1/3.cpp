#include<iostream>
using namespace std;

int GetInput();
int Min(int num1, int num2);
void Display(int num);
int main()
{
	int num1, num2, min;
	num1 = GetInput();
	num2 = GetInput();
	min = Min(num1, num2);
	if (min<0)
	{
		cout << "Both num Are Equal." << endl;
		return 0;
	}
	Display(min);
	return 0;
}
int GetInput()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	return num;
}
int Min(int num1, int num2)
{
	int min;
	if (num1<num2)
	{
		min = num1;
		return min;
	}
	else if (num2<num1)
	{
		min = num2;
		return min;
	}
	else
	{
		return -1;
	}
}
void Display(int num)
{
	cout << "Smaller number is " << num << endl;
}
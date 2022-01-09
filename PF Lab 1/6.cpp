#include<iostream>
using namespace std;

int GetInput();
int IsEven(int num);
int main()
{
	int num;
	num = GetInput();
	int even = IsEven(num);
	if (even == 1)
	{
		cout << "The number you entered is even." << endl;
	}
	else
	{
		cout << "The number you entered is not even." << endl;
	}
	return 0;
}
int GetInput()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	return num;
}
int IsEven(int num)
{
	if (num % 2 == 0)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
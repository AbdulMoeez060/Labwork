#include<iostream>
using namespace std;

int GetInput();
int IsOdd(int num);
int main()
{
	int num;
	num = GetInput();
	int odd = IsOdd(num);
	if (odd==1)
	{
		cout << "The number you entered is odd." << endl;
	}
	else
	{
		cout<< "The number you entered is not odd." << endl;
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
int IsOdd(int num)
{
	if (num%2!=0)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
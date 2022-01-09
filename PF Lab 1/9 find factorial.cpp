#include<iostream>
using namespace std;

int GetInput();
int FindFact(int num);
void DisRes(int num);
int main()
{
	int num = 0;
	num = GetInput();
	if (num < 0)
	{
		cout << "Invalid Entry" << endl;
		return 0;
	}
	int fact = FindFact(num);
	DisRes(fact);
	return 0;
}
int GetInput()
{
	int num;
	cout << "Enter any positive integer: ";
	cin >> num;
	if (num<0)
	{
		return -1;
	}
	else
	{
		return num;
	}
}
int FindFact(int num)
{
	if (num<0)
	{
		return -1;
	} 
	else
	{
		int fact = 1;
		for (int i = 0; i < num; i++)
		{
			fact = fact*(i + 1);
		}
		return fact;
	}
}
void DisRes(int num)
{
	cout << "The factorial is " << num << endl;
}

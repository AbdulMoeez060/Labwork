#include<iostream>
using namespace std;

bool CheckPrime(int num);
int main()
{
	int n;
	cout << "Enter any Number: ";
	cin >> n;
	bool ifprime = true;
	if (n==0 || n==1)
	{
		ifprime = false;
	}
	else
	{
		ifprime = CheckPrime(n);
	}
	if (ifprime==1)
	{
		cout << "Given number is prime." << endl;
	}
	else
	{
		cout << "Given number is not prime." << endl;
	}
}
bool CheckPrime(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num%i==0)
		{
			return false;
		}
	}
	return true;

}
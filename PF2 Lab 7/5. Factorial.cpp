#include<iostream>
using namespace std;

int factorial(int num);
int main()
{
	int num, fact;
	cout << "Enter any number: ";
	cin >> num;
	fact = factorial(num);
	cout << "The faction of " << num << " is " << fact << endl;
	return 0;
}
int factorial(int num)
{
	int fact = 1;
	for (int i = 1; i <= num; i++)
	{
		fact = fact * i;
	}
	return fact;
}
#include<iostream>
using namespace std;

void Factorial();
int main()
{
	Factorial();
	return 0;
}
void Factorial()
{
	int num, factorial = 1;
	cout << "Enter a number: ";
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		factorial = factorial * i;
	}
	cout << "The factorial of " << num << " is " << factorial << endl;
}
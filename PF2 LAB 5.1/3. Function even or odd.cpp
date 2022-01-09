#include<iostream>
using namespace std;

void EvenOrOdd();
int main()
{
	EvenOrOdd();
	return 0;
}
void EvenOrOdd()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if (num%2==0)
	{
		cout << "The entered number is even." << endl;
	}
	else
	{
		cout << "The number is odd." << endl;
	}
}
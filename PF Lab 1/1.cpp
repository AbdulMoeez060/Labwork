#include<iostream>
using namespace std;

int GetInput();
int Sum(int num1, int num2);
void Display(int num);
int main()
{
	int num1, num2,sum;
	num1 = GetInput();
	num2 = GetInput();
	sum = Sum(num1, num2);
	Display(sum);
	return 0;
}
int GetInput()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	return num;
}
int Sum(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
void Display(int num)
{
	cout << "Sum of the numbers is " << num << endl;
}
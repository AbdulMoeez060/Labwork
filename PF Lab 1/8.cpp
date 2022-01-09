#include<iostream>
using namespace std;

int GetInput();
int Average(int n1, int n2, int n3);
void display(int num);
int main()
{
	int n1, n2, n3;
	n1 = GetInput();
	n2 = GetInput();
	n3 = GetInput();
	float average = Average(n1, n2, n3);
	display(average);
	return 0;
}
int GetInput()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	return num;
}
int Average(int n1, int n2, int n3)
{
	float average = (n1 + n2 + n3) / 3;
	return average;
}
void display(int num)
{
	cout << "The Average of the numbers is " << num << "." << endl;
}

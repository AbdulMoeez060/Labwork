#include<iostream>
using namespace std;

void swap(int& num1, int& num2);
int main()
{
	int n1, n2;
	cout << "Enter first numbers n1: ";
	cin >> n1;
	cout << "Enter Second numbers n2: ";
	cin >> n2;
	swap(n1, n2);
	cout << "Swapped:" << endl;
	cout << "N1 is " << n1 << endl;
	cout << "N2 is " << n2 << endl;
	return 0;
}
void swap(int& num1, int& num2)
{
	int temp = num2;
	num2 = num1;
	num1 = temp;
}
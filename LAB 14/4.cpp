#include<iostream>
using namespace std;

int main()
{
	const int size = 10;
	int a1[size];
	int n;
	int ind1, ind2, temp = 0;
	do
	{
		cout << "Enter n:";
		cin >> n;
	} while (n<1||n>size);
	cout << "Input Array Elements: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a1[i];
	}
	do
	{
	cout << "Enter index 1: ";
	cin >> ind1;
	cout << "Enter index 2: ";
	cin >> ind2;
	} while (ind1<0 || ind1>n || ind2<0 || ind2>n);
	temp = a1[ind1];
	a1[ind1] = a1[ind2];
	a1[ind2] = temp;
	cout << "Modified Array: ";
	for (int j = 0; j < n; j++)
	{
		cout << a1[j] << " ";
	}
	cout << endl;
	return 0;
}
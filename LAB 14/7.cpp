#include<iostream>
using namespace std;

int main()
{
	const int size = 10;
	int a1[size];
	int n, x = 1;
	do
	{
		cout << "Enter n:";
		cin >> n;
	} while (n<1 || n>size);
	cout << "Input Array elements: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a1[i];
	}
	for (int j = 0; j < n; j++)
	{
		a1[n - j] = a1[n - x];
		x++;
	}
	cout << "Modofied Array: ";
	for (int k = 0; k < n+1; k++)
	{
		cout << a1[k] << " ";
	}
	cout << endl;
	return 0;
}
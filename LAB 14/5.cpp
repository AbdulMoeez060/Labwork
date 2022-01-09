#include<iostream>
using namespace std;

int main()
{
	const int size = 10;
	int a1[size];
	int n, ind, temp;
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
	int min = a1[0];
	for (int i = 0; i < n; i++)
	{
		if (a1[i]<=min)
		{
			min = a1[i];
			ind = i;
		}
	}
	temp = a1[0];
	a1[0] = a1[ind];
	a1[ind] = temp;
	cout << "Modified Array: ";
	for (int i = 0; i < n; i++)
	{
		cout << a1[i] << " ";
	}
	cout << endl;
	return 0;

}
#include<iostream>
using namespace std;

int main()
{
	const int size = 10;
	int a1[size];
	int n,ind,temp,x=0;
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
	for (int i = 0; i < n; i++)
	{
		int min = a1[x];
		for (int i = x; i < n; i++)
		{
			if (a1[i] <= min)
			{
				min = a1[i];
				ind = i;
			}
		}
		temp = a1[x];
		a1[x] = a1[ind];
		a1[ind] = temp;
		x++;
	}
	cout << "Modified Array: ";
	for (int i = 0; i < n; i++)
	{
		cout << a1[i] << " ";
	}
	
	return 0;

}
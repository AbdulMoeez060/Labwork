#include<iostream>
using namespace std;

int main()
{
	const int size = 30;
	int arr[size];
	int n;
	cout << "Enter the size of array: ";
	cin >> n;
	int* arrptr;
	arrptr = arr;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter arr[" << i << "]: ";
		cin >> *(arrptr + i);//1
	}
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "]: ";
		cout << arrptr[i] << endl;//2 method 1 and can both be used
	}
	return 0;
}
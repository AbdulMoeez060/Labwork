#include<iostream>
using namespace std;

void inputArray(int* arrptr, int size);
void printArray(int* arrptr, int size);
int main()
{
	const int size = 20;
	int arr[size];
	int n;
	cout << "Enter the size of array: ";
	cin >> n;
	int* arrptr;
	arrptr = arr;
	inputArray(arrptr, n);
	printArray(arrptr, n);
	return 0;
}
void inputArray(int* arrptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter arr[" << i << "]: ";
		cin >> *(arrptr + i);//1
	}
}
void printArray(int* arrptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "arr[" << i << "]: ";
		cout << arrptr[i] << endl;//2 method 1 and can both be used
	}
}
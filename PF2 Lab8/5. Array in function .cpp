#include<iostream>
using namespace std;

void inputArray(int arr[], int size);
void printArray(int arr[], int size);
int main()
{
	const int size = 5;
	int arr[size];
	inputArray(arr, size);
	printArray(arr, size);
	return 0;
}
void inputArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter arr[" << i << "]: ";
		cin >> arr[i];
	}
}
void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Arr[" << i << "]: ";
		cout << arr[i] << " ";
	}
}
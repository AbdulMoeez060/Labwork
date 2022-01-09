#include<iostream>
using namespace std;

void inputArray(int arr[], int size);
void printArray(int arr[], int size);
void separateEvenOdd(int arr[], int size, int evenArr[], int& evenSize, int oddArr[], int& oddSize);
int main()
{
	const int size = 10;
	int arr[size] = {};
	inputArray(arr, size);
	int evenArr[size] = {};
	int oddArr[size] = {};
	int evenSize = 0, oddSize = 0;
	separateEvenOdd(arr, size, evenArr, evenSize, oddArr, oddSize);
	cout << "Even array is: " << endl;
	printArray(evenArr, evenSize);
	cout << endl;
	cout << "Odd array is: " << endl;
	printArray(oddArr, oddSize);
	cout << endl;
}
void inputArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter arr[" << i << "]: ";
		cin >> arr[i];
	}
}
void separateEvenOdd(int arr[], int size, int evenArr[], int& evenSize, int oddArr[], int& oddSize)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i]%2==0)
		{
			evenArr[evenSize] = arr[i];
			evenSize++;
		}
		else if (arr[i] % 2 != 0)
		{
			oddArr[oddSize] = arr[i];
			oddSize++;
		}
	}
}
void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
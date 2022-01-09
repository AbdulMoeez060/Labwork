#include<iostream>
using namespace std;

void GetInput(int arr[], int size);
void DivideArray(int arr[], int arr2[], int arr3[], int size, int size2);
void Ascending(int arr[], int size);
void Descending(int arr[], int size);
void dis(int arr2[], int arr3[], int size2);
void display(int arr2[], int arr3[], int size2);
int main()
{
	const int size = 10;
	const int size2 = 5;
	int arr[size] = {};
	int arr2[size2] = {};
	int arr3[size2] = {};
	GetInput(arr, size);
	DivideArray(arr, arr2, arr3, size, size2);
	dis(arr2, arr3, size2);
	Ascending(arr2, size2);
	Descending(arr3, size2);
	display(arr2, arr3, size2);
	return 0;
}
void GetInput(int arr[], int size)
{
	cout << "Enter 10 numbers in the Array: ";
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}
void DivideArray(int arr[], int arr2[], int arr3[], int size, int size2)
{
	int count = 0;
	for (int i = 0; i < size2; i++)
	{
		arr2[i] = arr[i];
		count++;
	}
	for (int i = 0; i < size2; i++)
	{
		arr3[i] = arr[count];
		count++;
	}
}
void dis(int arr2[], int arr3[], int size2)
{
	cout << "First Half Array is: ";
	for (int i = 0; i < size2; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;
	cout << "Second Half Array is: ";
	for (int i = 0; i < size2; i++)
	{
		cout << arr3[i] << " ";
	}
	cout << endl;
}
void Ascending(int arr[], int size)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[j] > arr[i])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}
void Descending(int arr[], int size)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[j] < arr[i])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}
void display(int arr2[], int arr3[], int size2)
{
	cout << "The Modified Ascending Array of First half is: ";
	for (int i = 0; i < size2; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;
	cout << "The Modified Descending Array of Second half is: ";
	for (int i = 0; i < size2; i++)
	{
		cout << arr3[i] << " ";
	}
	cout << endl;
}
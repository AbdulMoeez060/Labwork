#include<iostream>
using namespace std;

void inputArray(int arr[], int size);
void printArray(int arr[], int size);
void rotateclockwisenthtimes(int arr[], int size, int n);
int main()
{
	const int size = 10;
	int arr[size] = {};
	inputArray(arr, size);
	int n;
	cout << "Enter the number of times you want to rotate the array: ";
	cin >> n;
	cout << "Given Array: ";
	printArray(arr, size);
	cout << endl;
	rotateclockwisenthtimes(arr, size, n);
	cout << "Array After rotation: ";
	printArray(arr, size);
	cout << endl;
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
		cout << arr[i] << " ";
	}
}
void rotateclockwisenthtimes(int arr[], int size,int n)
{
	for (int j = 0; j < n; j++)
	{
		int temp = 0;
		int x = size - 1;
		temp = arr[x];
		int i;
		for (i = x; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[i] = temp;
	}
}
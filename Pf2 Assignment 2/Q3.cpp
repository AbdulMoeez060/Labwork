#include<iostream>
using namespace std;

int Sum(int arr[], int size);
int Average(int sum, int size);
int SumEven(int arr[], int size);
int SumOdd(int arr[], int size);
int main()
{
	const int size = 5;
	int arr[size] = {};
	for (int i = 0; i < size; i++)
	{
		cout << "Enter arr[" << i << "]: ";
		cin >> arr[i];
	}
	int sum = Sum(arr, size);
	int avg = Average(sum, size);
	int odd = SumOdd(arr, size);
	int even = SumEven(arr, size);
	cout << "The sum of whole array is " << sum << endl;
	cout << "The average of array is " << avg << endl;
	cout << "The sum of even num in array is " << even << endl;
	cout << "The sum of odd num in array is " << odd << endl;
	return 0;
}
int Sum(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}
int Average(int sum, int size)
{
	int avg = sum / size;
	return avg;
}
int SumOdd(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i]%2!=0)
		{
			sum = sum + arr[i];
		}
		
	}
	return sum;
}
int SumEven(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			sum = sum + arr[i];
		}

	}
	return sum;
}
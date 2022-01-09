#include<iostream>
using namespace std;

double Average(int arr[], int size);
void CompareAverage(int arr[], int size, double num);
int main()
{
	const int size = 10;
	int arr[size] = { 5,6,2,2,8,6,4,5,4,9 };
	cout << "Array is ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " " ;
	}
	cout << endl;
	double average = Average(arr,size);
	cout << "Average is "<< average << endl;
	CompareAverage(arr,size,average);
	cout << "Modified Array is ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
double Average(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + arr[i];
	}
	double average = sum / 10.0;
	return average;
}
void CompareAverage(int arr[], int size, double num)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i]>=num)
		{
			arr[i] = 1;
		}
		else
		{
			arr[i] = 0;
		}
	}
}

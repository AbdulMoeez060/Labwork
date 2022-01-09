#include<iostream>
using namespace std;

void input(int arr2d[][4], int rows, int cols);
void display(int arr2d[][4], int rows, int cols);
void convert(int arr2d[][4], int arr[], int rows, int cols, int& count);
int main()
{
	const int rows = 3, cols = 4;
	int arr2d[rows][cols] = {};
	const int size = 15;
	int arr[size];
	int count = 0;
	input(arr2d, rows, cols);
	convert(arr2d, arr, rows, cols, count);
	display(arr2d, rows, cols);
	cout << "1d Array is:";
	for (int i = 0; i < count; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
void input(int arr2d[][4], int rows, int cols)
{
	cout << "Enter 2d array: ";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "Enter arr[" << i << "][" << j << "]: ";
			cin >> arr2d[i][j];
		}
	}
}
void display(int arr2d[][4], int rows, int cols)
{
	cout << "2d Array is: " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr2d[i][j] << " ";
		}
		cout << endl;
	}
}
void convert(int arr2d[][4], int arr[], int rows, int cols,int& count)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[count] = arr2d[i][j];
			count++;
		}
	}
}
#include<iostream>
using namespace std;

void input(int arr2d[][3], int rows, int col);
void display(int arr2d[][3], int rows, int col);
void sumofrowsandcols(int arr2d[][3], int rows, int col);
int main()
{
	const int rows = 2, col = 3;
	int arr2d[rows][col] = {};
	input(arr2d, rows, col);
	display(arr2d, rows, col);
	sumofrowsandcols(arr2d, rows, col);
	return 0;
}
void input(int arr2d[][3], int rows, int col)
{
	cout << "Enter Matrix:";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Enter arr[" << i << "][" << j << "]: ";
			cin >> arr2d[i][j];
		}
	}
}void display(int arr2d[][3], int rows, int col)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr2d[i][j] << " ";
		}
		cout << endl;
	}
}
void sumofrowsandcols(int arr2d[][3], int rows, int col)
{
	int sumc = 0, sumr = 0;
	cout << "Sum of rows data: ";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			sumr = sumr + arr2d[i][j];
		}
		cout << sumr << " ";
		sumr = 0;
	}
	cout << endl;
	cout << "Sum of col data: ";
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			sumc = sumc + arr2d[j][i];
		}
		cout << sumc << " ";
		sumc = 0;
	}
}
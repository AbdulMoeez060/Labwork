#include<iostream>
using namespace std;

void input(int arr2d[][3], int rows, int col);
void display(int arr2d[][3], int rows, int col);
int main()
{
	const int rows = 2, col = 3;
	int arr2d[rows][col] = {};
	input(arr2d, rows, col);
	display(arr2d, rows, col);
	return 0;
}
void input(int arr2d[][3], int rows, int col)
{
	cout << "Enter 2d array: ";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Enter arr[" << i << "][" << j << "]: ";
			cin >> arr2d[i][j];
		}
	}
}void display (int arr2d[][3], int rows, int col)
{
	cout << "Matrix is: " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr2d[i][j] << " ";
		}
		cout << endl;
	}
}
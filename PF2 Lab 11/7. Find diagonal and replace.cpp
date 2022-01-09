#include<iostream>
using namespace std;

void input(int arr2d[][3], int rows, int col);
void display(int arr2d[][3], int rows, int col);
void diagonal(int arr2d[][3], int rows, int col);
int main()
{
	const int rows = 3, col = 3;
	int arr2d[rows][col] = {};
	input(arr2d, rows, col);
	display(arr2d, rows, col);
	diagonal(arr2d, rows, col);
	cout << "After replacing diagonals matrix is:" << endl;
	display(arr2d, rows, col);
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
void diagonal(int arr2d[][3], int rows, int col)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i==j)
			{
				arr2d[i][j] = 1;
			}
		}

	}
}
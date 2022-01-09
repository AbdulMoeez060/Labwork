#include<iostream>
using namespace std;

void declare(int**& arr2d, int rows, int cols);
void input(int**& arr2d, int rows, int col);
void display(int**& arr2d, int rows, int col);
void diagonal(int**& arr2d, int rows, int col);
int main()
{
	int rows = 0, cols = 0;
	int** arr2d = NULL;
	cout << "Enter rows: ";
	cin >> rows;
	cout << "Enter cols: ";
	cin >> cols;
	declare(arr2d, rows, cols);
	input(arr2d, rows, cols);
	display(arr2d, rows, cols);
	diagonal(arr2d, rows, cols);
	cout << "After replacing diagonals matrix is:" << endl;
	display(arr2d, rows, cols);
	return 0;
}
void declare(int**& arr2d, int rows, int cols)
{
	arr2d = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr2d[i] = new int[cols];
	}
}
void input(int**& arr2d, int rows, int col)
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
}void display(int**& arr2d, int rows, int col)
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
void diagonal(int**& arr2d, int rows, int col)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i == j)
			{
				arr2d[i][j] = 1;
			}
		}

	}
}
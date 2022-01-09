#include<iostream>
using namespace std;

void input(int arr2d[][3], int rows, int col);
void display(int arr2d[][3], int rows, int col);
void subtract(int a[][3], int b[][3], int sub[][3], int rows, int col);
int main()
{
	const int rows = 2, col = 3;
	int A[rows][col] = {};
	int B[rows][col] = {};
	int sub[rows][col] = {};
	cout << "Enter matrix A: ";
	input(A, rows, col);
	cout << "Enter matrix B: ";
	input(B, rows, col);
	cout << "Matrix A is: " << endl;
	display(A, rows, col);
	cout << "Matrix B is: " << endl;
	display(B, rows, col);
	subtract(A, B, sub, rows, col);
	cout << "A-B: " << endl;
	display(sub, rows, col);
	return 0;
}
void input(int arr2d[][3], int rows, int col)
{
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
void subtract(int a[][3], int b[][3], int sub[][3], int rows, int col)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			sub[i][j] = a[i][j] - b[i][j];
		}
	}
}
#include<iostream>
using namespace std;

void declaringd2d(int**& dptr, int rows, int cols);
void inputmatrix(int**& dptr, int rows, int cols);
void displaymatrix(int**& dptr, int rows, int cols);
void transpose(int**& dptr, int& rows, int& cols);
void del(int**& dptr, int rows);
int main()
{
	int rows = 0, cols = 0;
	cout << "Enter number of rows: ";
	cin >> rows;
	cout << "Enter number of cols: ";
	cin >> cols;
	int** dptr = new int* [rows];
	declaringd2d(dptr, rows, cols);
	inputmatrix(dptr, rows, cols);
	cout << "Entered Matrix is " << endl;
	displaymatrix(dptr, rows, cols);
	transpose(dptr, rows, cols);
	cout << "Transpose Matrix is " << endl;
	displaymatrix(dptr, rows, cols);
	del(dptr, rows);
	return 0;
}
void declaringd2d(int**& dptr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		dptr[i] = new int[cols];
	}
}
void inputmatrix(int**& dptr, int rows, int cols)
{
	cout << "Enter Matrix: " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "Enter dptr[" << i << "][" << j << "]:";
			cin >> dptr[i][j];
		}
	}
}
void displaymatrix(int**& dptr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << dptr[i][j] << " ";
		}
		cout << endl;
	}
}
void transpose(int**& dptr, int& rows, int& cols)
{
	int trows = cols, tcols = rows;
	int** temp = new int* [trows];
	declaringd2d(temp, trows, tcols);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			temp[j][i] = dptr[i][j];
		}
	}
	dptr = temp;
	rows = trows;
	cols = tcols;
}
void del(int**& dptr, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] dptr[i];
	}
	delete[] dptr;
}
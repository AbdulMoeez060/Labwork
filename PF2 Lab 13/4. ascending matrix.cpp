#include<iostream>
using namespace std;

void declaringd2d(int**& dptr, int rows, int cols);
void inputmatrix(int**& dptr, int rows, int cols);
void displaymatrix(int**& dptr, int rows, int cols);
void ascending(int**& dptr, int rows, int cols);
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
	ascending(dptr, rows, cols);
	cout << "Ascending Matrix is " << endl;
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
void ascending(int**& dptr, int rows, int cols)
{
	int temp = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			for (int k = 0; k < rows; k++)
			{
				for (int l = 0; l <cols; l++)
				{
					if (dptr[i][j]<dptr[k][l])
					{
						temp = dptr[i][j];
						dptr[i][j] = dptr[k][l];
						dptr[k][l] = temp;
					}
				}
			}
		}
	}
}
void del(int**& dptr, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] dptr[i];
	}
	delete[] dptr;
}
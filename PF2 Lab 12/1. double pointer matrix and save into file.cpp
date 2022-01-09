#include<iostream>
#include<fstream>
using namespace std;

void input(int**& dptr, int rows, int col);
void writeintofile(int**& dptr, int rows, int col,char filename[]);
void create2dDynamicArray(int**& dptr, int rows, int cols);
int main()
{
	char filename[50] = {};
	cout << "Enter a filename please add .txt at the end: ";
	cin >> filename;
	int rows = 0, cols = 0;
	cout << "Enter number of rows: ";
	cin >> rows;
	cout << "Enter number of columns: ";
	cin >> cols;
	int** dptr = NULL;
	create2dDynamicArray(dptr, rows, cols);
	input(dptr, rows, cols);
	writeintofile(dptr, rows, cols, filename);
	for (int i = 0; i < rows; i++)
	{
		delete[] dptr[i];
	}
	delete[] dptr;
	return 0;
}
void create2dDynamicArray(int**& dptr, int rows, int cols)
{
	dptr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		dptr[i] = new int[cols];
	}
}
void input(int **&dptr, int rows, int col)
{
	cout << "Enter MATRIX: ";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Enter matrix[" << i << "][" << j << "]: ";
			cin >> dptr[i][j];
		}
	}
}
void writeintofile(int**& dptr, int rows, int col, char filename[])
{
	ofstream fout;
	fout.open(filename,ios::app);
	if (fout)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < col; j++)
			{
				fout << dptr[i][j] << " ";
			}
			fout<< endl;
		}
	}
}
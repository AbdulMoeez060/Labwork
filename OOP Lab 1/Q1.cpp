#include<iostream>
#include<fstream>
using namespace std;

void declare(int**& dptr, int rows, int cols);
void del(int**& dptr, int rows);
void readfromfile(int**& dptr, int& rows, int& cols);
void minrows(int** dptr, int rows, int cols, int**& minrows);
void maxcols(int** dptr, int rows, int cols, int**& maxcols);
int main()
{
	int rows = 0, cols = 0;
	int** dptr = NULL;
	readfromfile(dptr, rows, cols);
	int** rowsmin = NULL;
	int r1 = rows,c1 = 0;
	declare(rowsmin, r1, c1);
	int** colsmax = new int*[1];
	colsmax[0] = new int[cols];
	int r2 = 1, c2 = cols;
	cout << "Minimum values in rows:" << endl;
	minrows(dptr, rows, cols, rowsmin);
	for (int i = 0; i < rows; i++)
	{
		cout << rowsmin[i][0] << endl;
	}
	cout << "Maximum values in cols:" << endl;
	maxcols(dptr, rows, cols, colsmax);
	for (int i = 0; i < cols; i++)
	{
		cout << colsmax[0][i] << " ";
	}
	del(dptr, rows);
	return 0;
}
void declare(int**& dptr, int rows, int cols)
{
	dptr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		dptr[i] = new int[cols];
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
void readfromfile(int**& dptr, int& rows, int& cols)
{
	char filename[20] = {};
	cout << "Enter Filename to get the matrix from (add .txt at the end):";
	cin >> filename;
	ifstream fin;
	fin.open(filename);
	if (fin)
	{
		fin >> rows;
		fin >> cols;
		declare(dptr, rows, cols);
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				fin >> dptr[i][j];
			}
		}
	}
	else
	{
		cout << "File not found." << endl;
	}
	fin.close();
}
void minrows(int** dptr, int rows, int cols, int**& minrows)
{
	for (int i = 0; i < rows; i++)
	{
		minrows[i][0] = dptr[i][0];
		for (int j = 0; j < cols; j++)
		{
			if (dptr[i][j] < minrows[i][0])
			{
				minrows[i][0] = dptr[i][j];
			}
		}
	}
	
}
void maxcols(int** dptr, int rows, int cols, int**& maxcols)
{
	for (int i = 0; i < cols; i++)
	{
		maxcols[0][i] = dptr[0][i];
		for (int j = 0; j < rows; j++)
		{
			if (dptr[j][i]>maxcols[0][i])
			{
				maxcols[0][i] = dptr[j][i];
			}
		}
	}
}
#include<iostream>
#include<fstream>
using namespace std;

void readfromfile(int**& dptr, int rows, int col);
void create2dDynamicArray(int**& dptr, int rows, int cols);
void sumofrc(int*& srows, int*& scols, int**& dptr, int rows, int cols,int& average);
void display(int* srows, int* scols, int average, int rows, int cols);
int main()
{
	int rows = 3, cols = 6;
	int** dptr = NULL;
	int* srows = new int[rows];
	int* scols = new int[cols];
	int average = 0;
	create2dDynamicArray(dptr, rows, cols);
	readfromfile(dptr, rows, cols);
	sumofrc(srows, scols, dptr, rows, cols, average);
	display(srows, scols, average, rows, cols);
	for (int i = 0; i < rows; i++)
	{
		delete[] dptr[i];
	}
	delete[] dptr;
	delete[] srows, scols;
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
void readfromfile(int**& dptr, int rows, int col)
{
	ifstream fin;
	fin.open("nums.txt");
	if (fin)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < col; j++)
			{
				fin >> dptr[i][j];
			}
		}
	}
	else
	{
		cout << "File Not found" << endl;
	}
}
void sumofrc(int*& srows, int*& scols, int**& dptr, int rows, int cols,int& average)
{
	int rsum = 0, csum = 0, count = 0, sumAll = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			rsum = rsum + dptr[i][j];
		}
		srows[i] = rsum;
		rsum = 0;
	}
	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			csum = csum + dptr[j][i];
		}
		scols[i] = csum;
		csum = 0;
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sumAll = sumAll + dptr[i][j];
			count++;
		}
	}
	average = sumAll / count;
}
void display(int* srows, int* scols, int average, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		cout << "The sum of row " << i + 1 << "= " << srows[i] << endl;
	}
	cout << "=====================================" << endl;
	for (int i = 0; i < cols; i++)
	{
		cout << "The sum of col " << i + 1 << "= " << scols[i] << endl;
	}
	cout << "=====================================" << endl;
	cout << "Average of all values is " << average << endl;
}
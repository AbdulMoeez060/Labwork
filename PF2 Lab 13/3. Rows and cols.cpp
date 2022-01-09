#include<iostream>
#include<fstream>
using namespace std;

void input(int**& dptr, int rows, int col);
void create2dDynamicArray(int**& dptr, int rows, int cols);
void sumofrc(int*& srows, int*& scols, int**& dptr, int rows, int cols, int& average, int*& raverage, int*& caverage);
void display(int* srows, int* scols, int average, int rows, int cols, int* raverage, int* caverage);
int main()
{
	int rows, cols;
	cout << "Enter rows: ";
	cin >> rows;
	cout << "Enter cols: ";
	cin >> cols;
	int** dptr = NULL;
	int* srows = new int[rows];
	int* scols = new int[cols];
	int average = 0;
	int *raverage = new int[rows], *caverage = new int[cols];
	create2dDynamicArray(dptr, rows, cols);
	input(dptr, rows, cols);
	sumofrc(srows, scols, dptr, rows, cols, average,raverage,caverage);
	display(srows, scols, average, rows, cols,raverage,caverage);
	for (int i = 0; i < rows; i++)
	{
		delete[] dptr[i];
	}
	delete[] dptr;
	delete[] srows, scols,caverage,raverage;
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
void input(int**& dptr, int rows, int col)
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

void sumofrc(int*& srows, int*& scols, int**& dptr, int rows, int cols, int& average, int*& raverage, int*& caverage)
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
	for (int i = 0; i < rows; i++)
	{
		raverage[i] = srows[i] / cols;
	}
	for (int i = 0; i < cols; i++)
	{
		caverage[i] = scols[i] / rows;
	}
	average = sumAll / count;
}
void display(int* srows, int* scols, int average, int rows, int cols, int* raverage, int* caverage)
{
	for (int i = 0; i < rows; i++)
	{
		cout << "The sum of row " << i + 1 << "= " << srows[i] << endl;
	}
	for (int i = 0; i < rows; i++)
	{
		cout << "The average of row " << i + 1 << "= " << raverage[i] << endl;
	}
	cout << "=====================================" << endl;
	for (int i = 0; i < cols; i++)
	{
		cout << "The sum of col " << i + 1 << "= " << scols[i] << endl;
	}
	for (int i = 0; i < cols; i++)
	{
		cout << "The average of col " << i + 1 << "= " << caverage[i] << endl;
	}
	cout << "=====================================" << endl;
	cout << "Average of all values is " << average << endl;
}
#include<iostream>
#include<fstream>
using namespace std;

void ReadJagged(int**& dptr, int& rows, int*& cols);
void display(int**& dptr, int rows, int* cols);
int main()
{
	int** dptr = NULL;
	int rows = 0;
	int* cols = NULL;
	ReadJagged(dptr, rows, cols);
	display(dptr, rows, cols);
	for (int i = 0; i < rows; i++)
	{
		delete[] dptr[i];
	}
	delete[] dptr;
}
void ReadJagged(int**& dptr, int& rows, int*& cols)
{
	ifstream fin("jagged.txt");
	fin >> rows;
	cols = new int[rows];
	dptr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		fin >> cols[i];
		dptr[i] = new int[cols[i]];
		for (int j = 0; j < cols[i]; j++)
			fin >> dptr[i][j];
	}
}
void display(int**& dptr, int rows, int* cols)
{
	cout << "Jagged Array is: " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols[i]; j++)
		{
			cout << dptr[i][j] << " ";
		}
		cout << endl;
	}
}
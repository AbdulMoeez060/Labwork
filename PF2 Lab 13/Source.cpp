#include<iostream>
using namespace std;

int main()
{
	int rows = 3, cols = 4;
	int** dptr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		dptr[i] = new int[cols];
	}
	cout << "Enter 2d dynamic array: " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "Enter dptr[" << i << "][" << j << "]:";
			cin >> dptr[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << dptr[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < rows; i++)
	{
		delete[] dptr[i];
	}
	delete[] dptr;
}
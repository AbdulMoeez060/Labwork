#include<iostream>
#include<fstream>
using namespace std;

void declare(int**& dptr, int rows, int cols);
void del(int**& dptr, int rows);
void readfromfile(int**& dptr, int& rows, int& cols);
void writetofile(int** dptr, int rows, int cols);
void copyincorner(int**& dptr1, int r1, int c1, int** dptr2, int r2, int c2);
int main()
{
	int r1 = 0, c1 = 0, r2 = 0, c2 = 0;
	int** dptr1 = NULL;
	int** dptr2 = NULL;
	cout << "For matrix 1:" << endl;
	readfromfile(dptr1, r1, c1);
	cout << "For matrix 2:" << endl;
	readfromfile(dptr2, r2, c2);
	copyincorner(dptr1, r1, c1, dptr2, r2, c2);
	writetofile(dptr1, r1, c1);
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c1; j++)
		{
			cout << dptr1[i][j] << " ";
		}
		cout << endl;
	}
	del(dptr1, r1);
	//del(dptr2, r2);
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
void copyincorner(int**& dptr1, int r1, int c1, int** dptr2, int r2, int c2)
{
	int x = 0, y = c1-1;
	if (r2>r1||c2>c1)
	{
		cout << "r1=" << r1 << " c1=" << c1 << " r2=" << r2 << " c2=" << c2 << endl;
		cout << "The matrix 2 cannot be larger than matrix 2" << endl;
	}
	else
	{
		for (int i = 0; i < r2; i++)
		{
			for (int j = c2 - 1; j >= 0; j--)
			{
				dptr1[x][y] = dptr2[i][j];
				y--;
			}
			x++;
			y = c1 - 1;
		}
	}
}
void writetofile(int** dptr, int rows, int cols)
{
	char filename[20] = {};
	cout << "Enter Filename to save the matrix into (add .txt at the end):";
	cin >> filename;
	ofstream fout;
	fout.open(filename);
	if (fout)
	{
		fout << rows << " ";
		fout << cols << endl;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				fout << dptr[i][j] << " ";
			}
			fout << endl;
		}
	}
	fout.close();
}
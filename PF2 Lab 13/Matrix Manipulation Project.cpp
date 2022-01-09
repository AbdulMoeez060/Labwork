#include<iostream>
#include<fstream>
using namespace std;

void declaringd2d(int**& dptr, int rows, int cols);
void inputmatrix(int**& dptr, int rows, int cols);
void displaymatrix(int**& dptr, int rows, int cols);
void transpose(int**& dptr, int& rows, int& cols);
void ascending(int**& dptr, int rows, int cols);
void descending(int**& dptr, int rows, int cols);
void del(int**& dptr, int rows);
void readmatrix(int**& dptr, int rows, int cols, char filename[]);
void writematrix(int**& dptr, int rows, int cols, char filename[]);
void inputrandc(int& rows, int& cols);
void add(int**& a, int**& b, int**& add, int rows, int cols);
void subtract(int** a, int** b, int**& sub, int rows, int cols);
void sumofrows(int**& dptr, int rows, int cols, int*& srows);
void sumofcols(int**& dptr, int rows, int cols, int*& scols);
void sumall(int**& dptr, int rows, int cols, int& sumall);
int average(int sum, int count);
void multiply(int**& a, int**& b, int**& mul, int rows, int cols);
void menu(int& choice);
void getfromfileoruser(int**& dptr, int& rows, int& cols);
void outputtofileoruser(int**& dptr, int rows, int cols);
void sum(int* ptr, int count, int& sum);
int main()
{
	int** a = NULL, ** b = NULL, ** sub = NULL;
	int rows = 0, cols = 0;
	cout << "Enter rows of the matrix: ";
	cin >> rows;
	cout << "Enter columns of the matrix; ";
	cin >> cols;
	declaringd2d(a, rows, cols);
	inputmatrix(a, rows, cols);
	displaymatrix(a, rows, cols);
	//declaringd2d(b, rows, cols);
	//declaringd2d(sub, rows, cols);
	
	//inputmatrix(b, rows, cols);
	//subtract(a, b, sub, rows, cols);
	//displaymatrix(sub, rows, cols);
	/*int** a = NULL, ** b = NULL, ** c = NULL;
	int r1 = 0, r2 = 0, r3 = 0, c1 = 0, c2 = 0, c3 = 0;
	int* srow = NULL, * scols = NULL;
	int sum = 0, count = 0, average = 0, rsumm = 0, csum = 0;
	int control;
	do
	{
		int choice = 0;
		menu(choice);
		switch (choice)
		{
		case 1:
			getfromfileoruser(a, r1, c1);
			getfromfileoruser(b, r2, c2);
			r3 = r2;
			c3 = c2;
			declaringd2d(c, r3, c3);
			add(a, b, c, r1, c1);
			outputtofileoruser(c, r1, c1);
			break;
		}
		cout << "Enter 1 to start or resume and any other digit to end the program: ";
		cin >> control;
	} while (control==1);*/
	return 0;
}
void menu(int& choice)
{
	cout << "Enter\n 1 for Sum of a digits in the matrix. \n 2 for Sum of Rows. \n 3 for sum of columns. \n 4 for Average of All digits. \n 5 for Average of all rows. \n 6 for Average of all columns. \n 7 for Sorting Matrix in Ascending order. \n 8 for Sorting Matrix in Descending order. \n 9 for Addition of two matrix. \n 10 for Subtraction of two Matrix. \n 11 for Multiplication. \n";
	cin >> choice;
}
void getfromfileoruser(int**& dptr, int& rows, int& cols)
{
	int x;
	cout << "If you want to enter the matrix manually press 1 or if you want to enter from file press 2: ";
	cin >> x;
	inputrandc(rows, cols);
	declaringd2d(dptr, rows, cols);
	if (x==1)
	{
		inputmatrix(dptr, rows, cols);
	}
	else if (x==2)
	{
		char filename[20] = {};
		cout << "Enter Filename you want to wite to please add .txt at the end:";
		cin >> filename;
		readmatrix(dptr, rows, cols, filename);
	}
	else
	{
		cout << "Invalid entry";
	}
}
void outputtofileoruser(int**& dptr, int rows, int cols)
{
	int x;
	cout << "If you want to display the matrix on console press 1 or if you want to write into file press 2: ";
	cin >> x;
	if (x == 1)
	{
		cout << "The Result is " << endl;
		displaymatrix(dptr, rows, cols);
	}
	else if (x == 2)
	{
		char filename[20] = {};
		cout << "Enter Filename you want to read from please add .txt at the end:";
		cin >> filename;
		writematrix(dptr, rows, cols, filename);
	}
	else
	{
		cout << "Invalid entry";
	}
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
void ascending(int**& dptr, int rows, int cols)
{
	int temp = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			for (int k = 0; k < rows; k++)
			{
				for (int l = 0; l < cols; l++)
				{
					if (dptr[i][j] < dptr[k][l])
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
void descending(int**& dptr, int rows, int cols)
{
	int temp = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			for (int k = 0; k < rows; k++)
			{
				for (int l = 0; l < cols; l++)
				{
					if (dptr[i][j] > dptr[k][l])
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
void sumofrows(int**& dptr, int rows, int cols, int*& srows)
{
	srows = new int[rows];
	int rsum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			rsum = rsum + dptr[i][j];
		}
		srows[i] = rsum;
		rsum = 0;
	}
}
void sumofcols(int**& dptr, int rows, int cols, int*& scols)
{
	scols = new int[cols];
	int csum = 0;
	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			csum = csum + dptr[j][i];
		}
		scols[i] = csum;
		csum = 0;
	}
}
void sumall(int**& dptr, int rows, int cols, int& sumall)
{
	sumall = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sumall = sumall + dptr[i][j];
		}
	}
}
void sum(int* ptr, int count, int& sum)
{
	sum = 0;
	for (int i = 0; i < count; i++)
	{
		sum = sum + ptr[i];
	}
}
int average(int sum, int count)
{
	int average = sum / count;
	return average;
}
void subtract(int** a, int** b, int**& sub, int rows, int cols)
{
	/*declaringd2d(a, rows, cols);
	declaringd2d(b, rows, cols);
	declaringd2d(sub, rows, cols);
	inputmatrix(a, rows, cols);
	inputmatrix(b, rows, cols);*/
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sub[i][j] = a[i][j] - b[i][j];
		}
	}
}
void add(int**& a, int**& b, int**& add, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			add[i][j] = a[i][j] + b[i][j];
		}
	}
}
void readmatrix(int**& dptr, int rows, int cols, char filename[])
{
	ifstream fin;
	fin.open(filename);
	if (fin)
	{
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
void writematrix(int**& dptr, int rows, int cols, char filename[])
{
	ofstream fout;
	fout.open(filename, ios::app);
	if (fout)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				fout << dptr[i][j] << " ";
			}
			fout << endl;
		}
	}
	else
	{
		cout << "File not found." << endl;
	}
	fout.close();
}
void inputrandc(int& rows, int& cols)
{
	cout << "Enter rows of the matrix: ";
	cin >> rows;
	cout << "Enter columns of the matrix; ";
	cin >> cols;
}
void multiply(int**& a, int**& b, int**& mul, int rows, int cols,int rows2,int cols2)
{
	if (rows==cols2)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				mul[i][j] = 0;
				for (int k = 0; k < cols; k++)
				{
					mul[i][j] = mul[i][j] + (a[i][k] * b[k][j]);
				}
			}
		}
	}
	else
	{
		cout << "Sorry matric multiplication can not be done." << endl;
	}
}
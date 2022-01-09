#include<iostream>
#include<fstream>
using namespace std;

void declare(int**& dptr, int rows, int* cols);
void read(int**& dptr, int rows, int*& cols);
void printHistogram(int** dptr, int rows, int* cols);
void del(int**& dptr, int rows);
int main()
{
	int rows = 5;
	int* cols = new int[rows];
	for (int i = 0; i < rows; i++)
	{
		cols[i] = 0;
	}
	int** freq = NULL;
	declare(freq, rows, cols);
	read(freq, rows, cols);
	printHistogram(freq, rows, cols);
	del(freq, rows);
	delete[] cols;
}
void declare(int**& dptr, int rows, int* cols)
{
	dptr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		dptr[i] = new int[cols[i]];
	}
}
void read(int**& dptr, int rows, int*& cols)
{
	char getdata[100] = {};
	ifstream fin;
	fin.open("data.txt");
	if (fin)
	{
		fin.getline(getdata, 100);
		
	}
	else
	{
		cout << "File not found." << endl;
	}
	fin.close();
	for (int i = 0; getdata[i]!='\0' ; i++)
	{ 
		if (getdata[i]=='a' || getdata[i] == 'A')
		{
			dptr[0][cols[0]] = 1;
			cols[0]++;
		}
		else if (getdata[i] == 'e' || getdata[i] == 'E')
		{
			dptr[1][cols[1]] = 1;
			cols[1]++;
		}
		else if (getdata[i] == 'i' || getdata[i] == 'I')
		{
			dptr[2][cols[2]] = 1;
			cols[2]++;
		}
		else if (getdata[i] == 'o' || getdata[i] == 'O')
		{
			dptr[3][cols[3]] = 1;
			cols[3]++;
		}
		else if (getdata[i] == 'u' || getdata[i] == 'U')
		{
			dptr[4][cols[4]] = 1;
			cols[4]++;
		}
	}
}
void printHistogram(int** dptr, int rows, int* cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols[i]; j++)
		{
			cout << "*" << " ";
		}
		cout << endl;
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
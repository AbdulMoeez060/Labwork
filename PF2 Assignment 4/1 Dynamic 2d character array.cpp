#include <iostream>
using namespace std;
void getNames(char**& names, int rows, int cols);
void printNames(char** names, int rows, int cols, int* sizes);

int main()
{
	int rows = 5, cols = 100;
	char** names = new char* [rows];
	int* sizes = new int[rows];
	for (int i = 0; i < rows; i++)
	{
		names[i] = new char[cols];
	}
	getNames(names, rows, cols);
	for (int i = 0; i < rows; i++)
	{
		sizes[i] = strlen(names[i]);
	}
	cout << "List of Names " << endl;
	printNames(names, rows, cols, sizes);
	for (int i = 0; i < rows; i++)
	{
		delete[] names[i];
	}
	delete[] names;
	delete[]sizes;
	return 0;
}
void getNames(char**& names, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		cout << "Enter Name " << i + 1 << " : ";
		cin.getline(names[i], cols);
	}
}
void printNames(char** names, int rows, int cols, int* sizes)
{
	for (int i = 0; i < rows; i++)
	{
		cout << names[i] << " , " << sizes[i] << endl;
	}
}
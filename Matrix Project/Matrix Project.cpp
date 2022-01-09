#include<iostream>
#include<fstream>
using namespace std;

void declare(int**& dptr, int rows, int cols);
void input(int**& dptr, int rows, int cols);
void display(int**& dptr, int rows, int cols);
void del(int**& dptr, int rows);
void addition(int** a, int** b, int** c, int& rows, int& cols);
void subtraction(int** a, int** b, int** c, int& rows, int& cols);
void multiplication(int** a, int** b, int** c);
void ascending(int** a, int& rows, int& cols);
void descending(int** a, int& rows, int& cols);
void sumofrows(int** a, int& rows, int& cols);
void sumofcols(int** a, int& rows, int& cols);
void sumofall(int** a, int& rows, int& cols);
void writetofile(int** a, int rows, int cols);
void readfromfile(int**& a, int rows, int cols);
int main()
{
	char ch;
	cout << "Press s or r to start and any other key to quit: ";
	cin >> ch;
	while (ch=='r' || ch=='s')
	{
		int** a = NULL;
		int** b = NULL;
		int** c = NULL;
		int rows, cols;
		int choose;
		cout << "Press \n 1 for addition \n 2 for subtraction \n 3 for Multiplication \n 4 to sort in ascending order \n 5 to sort in descending order \n 6 for sum of rows \n 7 for sum of cols \n 8 for sum of all digits and average: ";
		cin >> choose;
		if (choose == 1)
		{
			addition(a, b, c, rows, cols);
		}
		else if (choose == 2)
		{
			subtraction(a, b, c, rows, cols);
		}
		else if (choose == 3)
		{
			multiplication(a, b, c);
		}
		else if (choose == 4)
		{
			ascending(a, rows, cols);
		}
		else if (choose == 5)
		{
			descending(a, rows, cols);
		}
		else if (choose == 6)
		{
			sumofrows(a, rows, cols);
		}
		else if (choose == 7)
		{
			sumofcols(a, rows, cols);
		}
		else if (choose == 8)
		{
			sumofall(a, rows, cols);
		}
		delete[] a, b, c;
		cout << "Press s or r to start or resume and any other key to quit: ";
		cin >> ch;
	}

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
void input(int**& dptr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "Enter [" << i << "][" << j << "]: ";
			cin >> dptr[i][j];
		}
	}
}
void display(int**& dptr, int rows, int cols)
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
void del(int**& dptr, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] dptr[i];
	}
	delete[] dptr;
}
void addition(int** a, int** b, int** c, int& rows, int& cols)
{
	cout << "Enter rows: ";
	cin >> rows;
	cout << "Enter Columns: ";
	cin >> cols;
	declare(a, rows, cols);
	declare(b, rows, cols);
	declare(c, rows, cols);
	int choice;
	cout << "Enter 1 to add manually 2 to add from file: ";
	cin >> choice;
	if (choice==1)
	{
		cout << "Enter matrix A:" << endl;
		input(a, rows, cols);
	}
	else if (choice==2)
	{
		readfromfile(a, rows, cols);
		cout << "Matrix saved." << endl;
	}
	cout << "Enter 1 to add manually 2 to add from file: ";
	cin >> choice;
	if (choice == 1)
	{
		cout << "Enter matrix B:" << endl;
		input(b, rows, cols);
	}
	else if (choice == 2)
	{
		readfromfile(b, rows, cols);
		cout << "Matrix saved." << endl;
	}
	cout << "Matrix A:" << endl;
	display(a, rows, cols);
	cout << "Matrix B:" << endl;
	display(b, rows, cols);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	cout << "Sum is " << endl;
	display(c, rows, cols);
	cout << "If you want to save in file press 1: ";
	int x;
	cin >> x;
	if (x==1)
	{
		writetofile(c, rows, cols);
		cout << "File saved" << endl;
	}
	
	del(a, rows);
	del(b, rows);
	del(c, rows);
}
void subtraction(int** a, int** b, int** c, int& rows, int& cols)
{
	cout << "Enter rows: ";
	cin >> rows;
	cout << "Enter Columns: ";
	cin >> cols;
	declare(a, rows, cols);
	declare(b, rows, cols);
	declare(c, rows, cols);
	int choice;
	cout << "Enter 1 to add manually 2 to add from file: ";
	cin >> choice;
	if (choice == 1)
	{
		cout << "Enter matrix A:" << endl;
		input(a, rows, cols);
	}
	else if (choice == 2)
	{
		readfromfile(a, rows, cols);
		cout << "Matrix saved." << endl;
	}
	cout << "Enter 1 to add manually 2 to add from file: ";
	cin >> choice;
	if (choice == 1)
	{
		cout << "Enter matrix B:" << endl;
		input(b, rows, cols);
	}
	else if (choice == 2)
	{
		readfromfile(b, rows, cols);
		cout << "Matrix saved." << endl;
	}
	cout << "Matrix A:" << endl;
	display(a, rows, cols);
	cout << "Matrix B:" << endl;
	display(b, rows, cols);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			c[i][j] = a[i][j] - b[i][j];
		}
	}
	cout << "Differnce is " << endl;
	display(c, rows, cols);
	cout << "If you want to save in file press 1: ";
	int x;
	cin >> x;
	if (x == 1)
	{
		writetofile(c, rows, cols);
		cout << "File saved" << endl;
	}

	del(a, rows);
	del(b, rows);
	del(c, rows);
}
void multiplication(int** a, int** b, int** c)
{
	int r1, r2, r3 = 0, c1, c2, c3 = 0;
	cout << "Enter rows for Matrix A: ";
	cin >> r1;
	cout << "Enter Columns for Matrix A: ";
	cin >> c1;
	cout << "Enter rows for Matrix B: ";
	cin >> r2;
	cout << "Enter Columns for Matrix B: ";
	cin >> c2;
	if (c1 == r2)
	{
		r3 = r1;
		c3 = c2;
		declare(a, r1, c1);
		declare(b, r2, c2);
		declare(c, r3, c3);
		int choice;
		cout << "Enter 1 to add manually 2 to add from file: ";
		cin >> choice;
		if (choice == 1)
		{
			cout << "Enter matrix A:" << endl;
			input(a, r1, c1);
		}
		else if (choice == 2)
		{
			readfromfile(a, r1, c1);
			cout << "Matrix saved." << endl;
		}
		cout << "Enter 1 to add manually 2 to add from file: ";
		cin >> choice;
		if (choice == 1)
		{
			cout << "Enter matrix B:" << endl;
			input(b, r2, c2);
		}
		else if (choice == 2)
		{
			readfromfile(b, r2, c2);
			cout << "Matrix saved." << endl;
		}
		cout << "Matrix A:" << endl;
		display(a, r1, c1);
		cout << "Matrix B:" << endl;
		display(b, r2, c2);
		for (int i = 0; i < r1; i++)
		{
			for (int j = 0; j < c2; j++)
			{
				c[i][j] = 0;
				for (int k = 0; k < c1; k++)
				{
					c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
				}
			}
		}
		cout << "Multiplication is " << endl;
		display(c, r3, c3);
		cout << "If you want to save in file press 1: ";
		int x;
		cin >> x;
		if (x == 1)
		{
			writetofile(c, r3, c3);
			cout << "File saved" << endl;
		}

		del(a, r1);
		del(b, r2);
		del(c, r3);
	}
	else
	{
		cout << "Multiplication cannot be done." << endl;
	}
}
void ascending(int** a, int& rows, int& cols)
{
	cout << "Enter rows: ";
	cin >> rows;
	cout << "Enter Columns: ";
	cin >> cols;
	declare(a, rows, cols);
	int choice;
	cout << "Enter 1 to add manually 2 to add from file: ";
	cin >> choice;
	if (choice == 1)
	{
		cout << "Enter matrix A:" << endl;
		input(a, rows, cols);
	}
	else if (choice == 2)
	{
		readfromfile(a, rows, cols);
		cout << "Matrix saved." << endl;
	}
	cout << "Matrix A:" << endl;
	display(a, rows, cols);
	int temp = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			for (int k = 0; k < rows; k++)
			{
				for (int l = 0; l < cols; l++)
				{
					if (a[i][j] < a[k][l])
					{
						temp = a[i][j];
						a[i][j] = a[k][l];
						a[k][l] = temp;
					}
				}
			}
		}
	}
	cout << "Ascending order is " << endl;
	display(a, rows, cols);
	cout << "If you want to save in file press 1: ";
	int x;
	cin >> x;
	if (x == 1)
	{
		writetofile(a, rows, cols);
		cout << "File saved" << endl;
	}

	del(a, rows);
}
void descending(int** a, int& rows, int& cols)
{
	cout << "Enter rows: ";
	cin >> rows;
	cout << "Enter Columns: ";
	cin >> cols;
	declare(a, rows, cols);
	int choice;
	cout << "Enter 1 to add manually 2 to add from file: ";
	cin >> choice;
	if (choice == 1)
	{
		cout << "Enter matrix A:" << endl;
		input(a, rows, cols);
	}
	else if (choice == 2)
	{
		readfromfile(a, rows, cols);
		cout << "Matrix saved." << endl;
	}
	cout << "Matrix A:" << endl;
	display(a, rows, cols);
	int temp = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			for (int k = 0; k < rows; k++)
			{
				for (int l = 0; l < cols; l++)
				{
					if (a[i][j] > a[k][l])
					{
						temp = a[i][j];
						a[i][j] = a[k][l];
						a[k][l] = temp;
					}
				}
			}
		}
	}
	cout << "Descending order is " << endl;
	display(a, rows, cols);
	cout << "If you want to save in file press 1: ";
	int x;
	cin >> x;
	if (x == 1)
	{
		writetofile(a, rows, cols);
		cout << "File saved" << endl;
	}

	del(a, rows);
}
void sumofrows(int** a, int& rows, int& cols)
{
	cout << "Enter rows: ";
	cin >> rows;
	cout << "Enter Columns: ";
	cin >> cols;
	declare(a, rows, cols);
	int choice;
	cout << "Enter 1 to add manually 2 to add from file: ";
	cin >> choice;
	if (choice == 1)
	{
		cout << "Enter matrix A:" << endl;
		input(a, rows, cols);
	}
	else if (choice == 2)
	{
		readfromfile(a, rows, cols);
		cout << "Matrix saved." << endl;
	}
	cout << "Matrix A:" << endl;
	display(a, rows, cols);
	int* srows = new int[rows];
	int sum = 0;
	for (int i = 0; i < rows ;i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum = sum + a[i][j];
		}
		srows[i] = sum;
		sum = 0;
	}
	for (int i = 0; i < rows; i++)
	{
		cout << "The sum of row " << i << " is " << srows[i] << endl;
	}
	cout << "If you want to save in file press 1: ";
	int x;
	cin >> x;
	if (x == 1)
	{
		char filename[20];
		cout << "Enter filename you want to save in(Add .txt in the end) :";
		cin >> filename;
		ofstream fout;
		fout.open(filename, ios::app);
		if (fout)
		{
			for (int i = 0; i < rows; i++)
			{
				fout << "The sum of row " << i << " is " << srows[i] << endl;
			}
		}
		fout.close();
		cout << "File saved" << endl;
	}

	del(a, rows);
	delete[] srows;
}
void sumofcols(int** a, int& rows, int& cols)
{
	cout << "Enter rows: ";
	cin >> rows;
	cout << "Enter Columns: ";
	cin >> cols;
	declare(a, rows, cols);
	int choice;
	cout << "Enter 1 to add manually 2 to add from file: ";
	cin >> choice;
	if (choice == 1)
	{
		cout << "Enter matrix A:" << endl;
		input(a, rows, cols);
	}
	else if (choice == 2)
	{
		readfromfile(a, rows, cols);
		cout << "Matrix saved." << endl;
	}
	cout << "Matrix A:" << endl;
	display(a, rows, cols);
	int* scols = new int[cols];
	int sum = 0;
	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			sum = sum + a[j][i];
		}
		scols[i] = sum;
		sum = 0;
	}
	for (int i = 0; i < cols; i++)
	{
		cout << "The sum of col " << i << " is " << scols[i] << endl;
	}
	cout << "If you want to save in file press 1: ";
	int x;
	cin >> x;
	if (x == 1)
	{
		char filename[20];
		cout << "Enter filename you want to save in(Add .txt in the end) :";
		cin >> filename;
		ofstream fout;
		fout.open(filename, ios::app);
		if (fout)
		{
			for (int i = 0; i < cols; i++)
			{
				fout << "The sum of col " << i << " is " << scols[i] << endl;
			}
		}
		fout.close();
		cout << "File saved" << endl;
	}

	del(a, rows);
	delete[] scols;
}
void sumofall(int** a, int& rows, int& cols)
{
	cout << "Enter rows: ";
	cin >> rows;
	cout << "Enter Columns: ";
	cin >> cols;
	declare(a, rows, cols);
	int choice;
	cout << "Enter 1 to add manually 2 to add from file: ";
	cin >> choice;
	if (choice == 1)
	{
		cout << "Enter matrix A:" << endl;
		input(a, rows, cols);
	}
	else if (choice == 2)
	{
		readfromfile(a, rows, cols);
		cout << "Matrix saved." << endl;
	}
	cout << "Matrix A:" << endl;
	display(a, rows, cols);
	int sum = 0;
	int count = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum = sum + a[i][j];
			count++;
		}
	}
	cout << "The sum of all digits in matrix is " << sum << endl;
	int average = sum / count;
	cout << "The average is " << average << endl;
	cout << "If you want to save in file press 1: ";
	int x;
	cin >> x;
	if (x == 1)
	{
		char filename[20];
		cout << "Enter filename you want to save in(Add .txt in the end) :";
		cin >> filename;
		ofstream fout;
		fout.open(filename, ios::app);
		if (fout)
		{
			fout << "The sum of all digits in matrix is " << sum << endl;
			fout << "The average is " << average << endl;
		}
		fout.close();
		cout << "File saved" << endl;
	}

	del(a, rows);
}
void writetofile(int** a, int rows, int cols)
{
	char filename[20];
	cout << "Enter filename you want to save in(Add .txt in the end) :";
	cin >> filename;
	ofstream fout;
	fout.open(filename, ios::app);
	if (fout)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				fout << a[i][j] << " ";
			}
			fout << endl;
		}
	}
	fout.close();
}
void readfromfile(int**& a, int rows, int cols)
{
	char filename[20];
	cout << "Enter filename you want to read from (Add .txt in the end) :";
	cin >> filename;
	ifstream fin;
	fin.open(filename);
	if (fin)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				fin >> a[i][j];
			}
		}
	}
	else
	{
		cout << "File not found." << endl;
	}
}
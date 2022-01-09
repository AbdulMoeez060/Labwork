#include<iostream>
using namespace std;

void Input(double *ptr, int size, int& count);
void Display(double* ptr, int count);
void regrowbyFactor(double*& ptr, int& size,float factor);
int main()
{
	int size = 10;
	double* arrptr = new double[size];
	int flag = 0, count = 0;
	cout << "=============Note: ENTER ZERO 0 IN ARRAY TO END THE PROGRAM===========" << endl;
	float factor=1.0;
	do
	{
		Input(arrptr, size, count);
		for (int i = 0; i < size; i++)
		{
			if (arrptr[i] == 0)
			{
				flag++;
			}
		}
		if (flag == 0)
		{
			cout << "Enter the factor to grow the array: ";
			cin >> factor;
			regrowbyFactor(arrptr, size,factor);
		}
	} while (flag == 0);
	if (flag > 0)
	{
		Display(arrptr, count);
	}
	delete[] arrptr;
	return 0;
}
void Input(double* ptr, int size, int& count)
{
	cout << "Enter the array(enter 0 in array to end the program) : " << endl;
	for (int i = count; i < size; i++)
	{
		cout << "Enter arr[" << i << "] : ";
		cin >> ptr[i];
		count++;
		if (ptr[i] == 0)
		{
			break;
		}
	}
}
void Display(double* ptr, int count)
{
	cout << "The entered array is: ";
	for (int i = 0; i < count; i++)
	{
		cout << ptr[i] << " ";
	}
	cout << endl;
}
void regrowbyFactor(double*& ptr, int& size, float factor)
{
	double* temp = new double[size * factor];
	for (int i = 0; i < size; i++)
	{
		temp[i] = ptr[i];
	}
	size = size * factor;
	delete[] ptr;
	ptr = temp;
}
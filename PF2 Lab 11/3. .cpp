#include<iostream>
using namespace std;

void input(int*& arrptr, int size);
void copy(int*& arrptr, int*& arrptr2, int size);
void display(int*& arrptr, int size);
int main()
{
	int size;
	cout << "Input size of the array you want to make: ";
	cin >> size;
	int* arrptr = new int[size];
	int* arrptr2 = new int[size];
	input(arrptr, size);
	cout << "THE ARRAY OF NUMS YOU ENTERED IS:" << endl;
	display(arrptr, size);
	cout << "THE COPIED ARRAY IS:" << endl;
	copy(arrptr, arrptr2, size);
	display(arrptr2, size);
	delete[] arrptr, arrptr2;
	return 0;
}
void input(int*& arrptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the arr[" << i << "] :";
		cin >> arrptr[i];
	}
}
void copy(int*& arrptr,int*& arrptr2, int size)
{
	for (int i = 0; i < size; i++)
	{
		arrptr2[i] = arrptr[i];
	}
}
void display(int*& arrptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Arr[" << i << "] : " << arrptr[i] << endl;
	}
}
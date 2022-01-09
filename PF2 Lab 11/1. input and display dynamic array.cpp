#include<iostream>
using namespace std;

void input(int*& arrptr, int size);
void display(int*& arrptr, int size);
int main()
{
	int size;
	cout << "Input size of the array you want to make: ";
	cin >> size;
	int* arrptr = new int[size];
	input(arrptr, size);
	display(arrptr, size);
	delete[] arrptr;
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
void display(int*& arrptr, int size)
{
	cout << "THE ARRAY OF NUMS YOU ENTERED IS:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Arr[" << i << "] : " << arrptr[i] << endl;
	}
}
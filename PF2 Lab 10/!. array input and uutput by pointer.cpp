#include<iostream>
using namespace std;

void Input(int* ptr, int size);
void Display(int* ptr, int size);
int main()
{
	int size = 0;
	cout << "Enter the size of array: ";
	cin >> size;
	int* arrptr = new int[size];
	Input(arrptr, size);
	cout << endl;
	Display(arrptr, size);
	delete[]  arrptr;
	return 0;
}
void Input(int* ptr, int size)
{
	cout << "Enter the array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter arr[" << i << "] : ";
		cin >> ptr[i];
	}
}
void Display(int* ptr, int size)
{
	cout << "The entered array is: ";
	for (int i = 0; i < size; i++)
	{
		cout << ptr[i] << " " ;
	}
	cout << endl;
}
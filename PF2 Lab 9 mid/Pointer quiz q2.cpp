#include<iostream>
using namespace std;

void Input(int* ptr, int size);
void Remove(int* ptr, int& size, int key);
void display(int* ptr, int size);
int main()
{
	int size = 0;
	cout << "Enter the size of array: ";
	cin >> size;
	int* ptr = new int[size];
	int key = 0;
	Input(ptr, size);
	cout << "Array before deletion: ";
	display(ptr, size);
	cout << endl;
	cout << "Enter the number you to delete: ";
	cin >> key;
	Remove(ptr, size, key);
	cout << "Array after deletion: ";
	display(ptr, size);
	delete[]  ptr;
	return 0;
}
void Input(int* ptr, int size)
{
	cout << "Enter the array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter arr[" << i << "] :";
		cin >> ptr[i];
	}
}
void Remove(int* ptr, int& size, int key)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (ptr[i] == key)
		{
			for (int j = i; j < size; j++)
			{
				ptr[j] = ptr[j + 1];
			}
			size--;
		}
	}
}
void display(int* ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << ptr[i] << " ";
	}
}
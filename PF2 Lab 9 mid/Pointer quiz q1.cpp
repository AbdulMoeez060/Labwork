#include<iostream>
using namespace std;

void Input(int* ptr,int size);
int Count(int* ptr, int size, int key);
int main()
{
	int size = 0;
	cout << "Enter the size of array: ";
	cin >> size;
	int* ptr = new int[size];
	int key = 0;
	Input(ptr, size);
	cout << "Enter the number you to check: ";
	cin >> key;
	int count = Count(ptr, size, key);
	cout << "Number repeats " << count << " times." << endl;
	delete[]  ptr;
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
int Count(int* ptr, int size, int key)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (ptr[i]==key)
		{
			count++;
		}
	}
	return count;
}
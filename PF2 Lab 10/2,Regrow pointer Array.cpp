#include<iostream>
using namespace std;

void Input(int* ptr, int size,int& count);
void Display(int* ptr, int count);
void regrow(int*& ptr, int& size);
int main()
{
	int size = 10;
	int* arrptr = new int[size];
	int flag = 0, count = 0;
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
			regrow(arrptr, size);
		}
	} while (flag==0);
	if (flag>0)
	{
		Display(arrptr, count);
	}
	return 0;
}
void Input(int* ptr, int size,int& count)
{
	cout << "Enter the array: " << endl;
	for (int i = count; i < size; i++)
	{
		cout << "Enter arr[" << i << "] : ";
		cin >> ptr[i];
		count++;
		if (ptr[i]==0)
		{
			break;
		}
	}
}
void Display(int* ptr, int count)
{
	cout << "The entered array is: ";
	for (int i = 0; i < count; i++)
	{
		cout << ptr[i] << " ";
	}
	cout << endl;
}
void regrow(int*& ptr, int& size)
{
	int* temp = new int[size + size];
	for (int i = 0; i < size; i++)
	{
		temp[i] = ptr[i];
	}
	size=size+size;
	delete[] ptr;
	ptr = temp;
}
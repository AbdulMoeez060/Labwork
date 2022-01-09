#include<iostream>
using namespace std;

void EvenAscending(int arr[], int size);
int main()
{
	const int size = 10;
	int arr[size] = { 5,6,2,2,6,8,4,5,4,9 };
	cout << "Array is ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	EvenAscending(arr, size);
	cout << "Modified Array is ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
void EvenAscending(int arr[], int size)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[j] > arr[i])
			{
				if (arr[j] % 2 == 0)
				{
					temp = arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
				}
			}
		}
	}
}
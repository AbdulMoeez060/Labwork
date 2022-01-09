#include<iostream>
using namespace std;

int main()
{
	const int size = 7;
	int arr[size];
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter array[" << i << "] :";
		cin >> arr[i];
		count++;
	}
	cout << "Orignal Array: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < count; i++)
	{
		for (int j = i+1; j < count;)
		{
			if (arr[i]==arr[j])
			{
				for (int k = j; k < count; k++)
				{
					arr[k] = arr[k + 1];
				}
				count--;
			}
			else
			{
				j++;
			}
		}
	}
	cout << "Modified Array: ";
	for (int i = 0; i < count; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
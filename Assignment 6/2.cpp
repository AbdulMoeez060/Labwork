#include<iostream>
using namespace std;

int main()
{
	int smallest, largest;
	const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter arr[" << i << "] : ";
		cin >> arr[i];
	}
	smallest = arr[0];
	largest = arr[0];
	for (int j = 0; j < size ; j++)
	{
		if (arr[j] < smallest)
		{
			smallest = arr[j];
		}
		if (arr[j]>largest)
		{
			largest = arr[j];
		}
	}
	cout << "Difference of " << largest << " and " << smallest << " is " << largest - smallest << endl;
	return 0;
}
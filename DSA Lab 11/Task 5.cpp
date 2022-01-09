#include<iostream>
using namespace std;


int sumofArray(int* arr,int size)
{
	static int sum = 0;
	sum += arr[size - 1];
	if (size==1)
	{
		return sum;
	}
	else
	{
		sumofArray(arr, size - 1);

	}

}


int main()
{
	int size;
	cout << "Enter the size of array: ";
	cin >> size;
	int *arr=new int[size];
	cout << "Enter the array: "<<endl;
	for (int i = 0; i < size; i++)
	{
		cout << "arr[" << i << "]: ";
		cin >> arr[i];
	}
	cout << " ===> " << sumofArray(arr,size) << " is the sum of numbers of array ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
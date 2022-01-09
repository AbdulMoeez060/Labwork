#include<iostream>
using namespace std;

int GetInput();
void Compare(int arr[], int size, int num);
int main()
{
	const int size = 10;
	int arr[size] = { 5,6,2,2,8,6,4,5,4,9 };
	cout << "Array is ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	int repnum = GetInput();
	Compare(arr,size,repnum);
	cout << "Modified Array is ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
int GetInput()
{
	int num;
	cout << "Enter number you Want to replace: ";
	cin >> num;
	return num;
}
void Compare(int arr[], int size, int num)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == num)
		{
			arr[i] = 0;
		}
	}
}
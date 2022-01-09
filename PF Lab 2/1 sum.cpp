#include<iostream>
using namespace std;

int GetSum(int arr[], int size);
void display(int num);
int main()
{
	const int size = 10;
	int arr[size] = { 2,7,47,3,7,3,78,4,74,2 };
	int sum = GetSum(arr, size);
	display(sum);
	return 0;
}
int GetSum(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}
void display(int num)
{
	cout << "The sum of integers in the array is " << num << endl;
}
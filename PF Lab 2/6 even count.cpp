#include<iostream>
using namespace std;

int CountEven(int arr[], int size);
void display(int num);
int main()
{
	const int size = 10;
	int arr[size] = { 2,53,5,3,8,4,7,97,88,5 };
	int ecount = CountEven(arr, size);
	display(ecount);
	return 0;

}
int CountEven(int arr[], int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i]%2==0)
		{
			count++;
		}
	}
	return count;
}
void display(int num)
{
	cout << "The number of even numbers in the array is " << num << endl;
}
#include<iostream>
using namespace std;

float MinimumIndex(float arr[], int size);
void display(int num);
int main()
{
	const int size = 10;
	float arr[size] = { 2.3,7,47.6,1.3,7.8,3,78,4,7.4,2.9 };
	int index = MinimumIndex(arr, size);
	display(index);
	return 0;
}
float MinimumIndex(float arr[], int size)
{
	float minimum = arr[0];
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (minimum > arr[j])
			{
				minimum = arr[j];
				index = j;
			}
		}
	}
	return index;
}
void display(int num)
{
	cout << "The index of minimum num is  " << num << endl;
}
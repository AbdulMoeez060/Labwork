#include<iostream>
using namespace std;

float MaxIndex(float arr[], int size);
void display(int num);
int main()
{
	const int size = 10;
	float arr[size] = { 2.3,7,47.6,1.3,7.8,3,78,4,7.4,2.9 };
	int index = MaxIndex(arr, size);
	display(index);
	return 0;
}
float MaxIndex(float arr[], int size)
{
	float max = arr[0];
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (max < arr[j])
			{
				max = arr[j];
				index = j;
			}
		}
	}
	return index;
}
void display(int num)
{
	cout << "The index of maximum num is  " << num << endl;
}
#include<iostream>
using namespace std;

float Maximum(float arr[], int size);
void display(float num);
int main()
{
	const int size = 10;
	float arr[size] = { 2.3,7,47.6,3,7.8,3,78,4,7.4,2.1 };
	float max = Maximum(arr, size);
	display(max);
	return 0;
}
float Maximum(float arr[], int size)
{
	float maximum = arr[0];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (maximum < arr[j])
			{
				maximum = arr[j];
			}
		}
	}
	return maximum;
}
void display(float num)
{
	cout << "The maximum num is  " << num << endl;
}
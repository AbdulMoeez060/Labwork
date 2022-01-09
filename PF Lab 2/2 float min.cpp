#include<iostream>
using namespace std;

float Minimum(float arr[], int size);
void display(float num);
int main()
{
	const int size = 10;
	float arr[size] = { 2.3,7,47.6,3,7.8,3,78,4,7.4,2.1 };
	float min = Minimum(arr, size);
	display(min);
	return 0;
}
float Minimum(float arr[], int size)
{
	float minimum = arr[0];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (minimum > arr[j])
			{
				minimum = arr[j];
			}
		}
	}
	return minimum;
}
void display(float num)
{
	cout << "The minimum num is  " << num << endl;
}
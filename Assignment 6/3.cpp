#include<iostream>
using namespace std;

int main()
{
	int count = 0;
	const int size = 10;
	int num1[size];
	int num2[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter num1[" << i << "] : ";
		cin >> num1[i];
	}
	for (int j = 0; j < size; j++)
	{
		cout << "Enter num2[" << j << "] : ";
		cin >> num2[j];
	}
	for (int k = 0; k < size; k++)
	{
		if ((num1[k] == num2[k] + 2) || (num1[k] == num2[k] - 2) || (num2[k] == num1[k] + 2) || (num2[k] == num1[k] - 2))
		{
			count = count + 1;
		}
	}
	cout << "There are " << count << " corresponding elements whose difference is exactly 2" << endl;
	return 0;
}
#include<iostream>
using namespace std;

int countElements(int arr[], int key);
int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter arr[" << i << "]: ";
		cin >> arr[i];
	}
	int key;
	cout << "Enter the number whose count you want to find: ";
	cin >> key;
	int count = countElements(arr, key);
	cout << "Total count: " << count << endl;
	return 0;
}
int countElements(int arr[], int key)
{
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		if (key==arr[i])
		{
			count++;
		}
	}
	return count;
}
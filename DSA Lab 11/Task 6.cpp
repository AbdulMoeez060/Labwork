#include<iostream>
#include<string>
using namespace std;

template<typename T>
void reverse(T* arr, int size)
{
	if (size==0)
	{
		return;
	}
	reverse((arr+1), size - 1);
	cout << arr[0];
}

int main()
{
	int size;
	cout << "Enter the size of array: ";
	cin >> size;
	cin.ignore();
	char* arr = new char[size] ;
	cout << "Enter a string to reverse: ";
	cin.getline(arr, size+1);
	
	cout << "The reverse of string ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
	}
	cout << " is ";
	reverse(arr, size);
	cout << endl;
	return 0;
}
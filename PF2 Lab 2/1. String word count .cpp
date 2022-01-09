#include<iostream>
using namespace std;

int main()
{
	const int size = 50;
	char arr[size];
	cout << "Enter any word or a sentence :";
	cin.getline(arr, 50);
	int count = 0;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		count++;
	}
	cout << "The word count is " << count << endl;
	return 0;
}
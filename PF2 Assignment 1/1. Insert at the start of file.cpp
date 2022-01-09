#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	const int size = 15;
	int arr[size] = {};
	int n, count = 0;
	cout << "Enter a Number: ";
	cin >> n;
	ifstream fin;
	fin.open("integers.txt");
	if (fin.is_open())
	{
		for (int i = 0; !fin.eof(); i++)
		{
			fin >> arr[i];
			count++;
		}
	}
	else
	{
		cout << "File not found." << endl;
	}
	fin.close();
	ofstream fout;
	fout.open("integers.txt");
	if (fout.is_open())
	{
		fout << n << " ";
		for (int i = 0; i < count - 1; i++)
		{
			fout << arr[i] << " ";
		}
	}
	else
	{
		cout << "File not found." << endl;
	}
	fout.close();
	return 0;
}
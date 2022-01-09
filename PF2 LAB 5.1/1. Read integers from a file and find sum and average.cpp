#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	const int size = 5;
	int arr[size] = {};
	ifstream fin;
	fin.open("integer.txt");
	if (fin.is_open())
	{
		for (int i = 0; !fin.eof(); i++)
		{
			fin >> arr[i];
		}
	}
	else
	{
		cout << "File not found" << endl;
	}
	fin.close();
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + arr[i];
	}
	float average = sum / size;
	ofstream fout;
	fout.open("Result.txt", ios::app);
	if (fout.is_open())
	{
		fout << "Sum is " << sum << endl;
		fout << "Average is " << average << endl;
	}
	else
	{
		cout << "File Not found" << endl;
	}
	fout.close();
	return 0;
}
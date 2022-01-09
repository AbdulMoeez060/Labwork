#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	const int size = 50;
	int arr[size] = {};
	int num;
	cout << "Enter number you want to remove: ";
	cin >> num;
	ifstream fin;
	fin.open("integer.txt");
	int i = 0;
	if (fin.is_open())
	{
		for ( i; !fin.eof() ; i++)
		{
			fin >> arr[i];
		}
	}
	else
	{
		cout << "File not found." << endl;
	}
	fin.close();
	ofstream fout;
	fout.open("integer.txt");
	if (fout)
	{
		for (int j= 0; j < i; j++)
		{
			if (arr[j]!=num)
			{
				fout << arr[j] << " ";

			}
		}
	}
	else
	{
		cout << "File not open.";
	}
	fout.close();
	return 0;
}
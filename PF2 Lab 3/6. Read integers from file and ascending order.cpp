#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	const int size = 10;
	int arr[size] = {};
	ifstream fin;
	fin.open("data.txt");
	if (fin.is_open())
	{
		for (int i = 0; !fin.eof() ; i++)
		{
			fin >> arr[i];
		}
	}
	else
	{
		cout << "Error";
	}
	fin.close();
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i]<=arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	ofstream fout;
	fout.open("sortedData.txt", ios::app);
	if (fout)
	{
		for (int i = 0; i < size; i++)
		{
			fout << arr[i] << " ";
		}
	}
	else
	{
		cout << "Error" << endl;
	}
	fout.close();
	return 0;
}
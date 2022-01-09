#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("integer.txt");
	int num[50] = {};
	if (fin.is_open())
	{
		while (!fin.eof())
		{
			int j = 0;
			fin >> num[j];
			cout << num[j] << endl;
			j++;
		}
	}
	else
	{
		cout << "File not find." << endl;
	}
	fin.close();
	fin.open("character.txt");
	char letters[100] = {};
	if (fin.is_open())
	{
		while (!fin.eof())
		{
			int i = 0;
			fin >> letters[i];
			cout << letters[i];
			i++;
		}
	}
	else
	{
		cout << "File not find." << endl;
	}
	fin.close();
	return 0;
}
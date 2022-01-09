#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("integer.txt");
	int num;
	if (fin.is_open())
	{
		while (!fin.eof())
		{
			fin >> num;
			cout << num << endl;
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
		int i = 0;
		while (!fin.eof())
		{
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
	ofstream fout;
	fout.open("newfile.txt");
	if (fout.is_open())
	{
		fout << num;
	}
	fout.close();
	fout.open("newfile1.txt");
	if (fout.is_open())
	{
		fout << letters;
	}
	fout.close();
	return 0;
}
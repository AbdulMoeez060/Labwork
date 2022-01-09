#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	const int size = 200;
	char first[size] = {};
	char second[size] = {};
	ifstream Fin, Sin;
	Fin.open("file1.txt");
	Sin.open("file2.txt");
	ofstream fout;
	fout.open("final.txt", ios::app);
	if (Fin.is_open() && Sin.is_open() && fout.is_open())
	{
		Fin.getline(first,size);
		Sin.getline(second,size);
		fout << first << endl;
		fout << second;
	}
	else
	{
		cout << "Not found" << endl;
	}
	return 0;
}

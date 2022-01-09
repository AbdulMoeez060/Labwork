#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	const int size = 100;
	char sen[size] = {};
	ifstream fin;
	fin.open("input.txt");
	if (fin.is_open())
	{
		fin.getline(sen,size);
	}
	int count = 0;
	for (int i = 0; sen[i]!='\0'; i++)
	{
		count++;
	}
	cout << "There are " << count << " characters in the given sentence." << endl;
	return 0;
}
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char var;
	fstream file;
	file.open("alpha.txt", ios::in);
	if (file)
	{
		while (!file.eof())
		{
			file >> var;
			cout << var;
		}
	}
	else
	{
		cout << "Not found.";
	}
	file.close();
	return 0;
}
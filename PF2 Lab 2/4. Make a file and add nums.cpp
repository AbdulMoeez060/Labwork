#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream file;
	file.open("numbers.txt", ios::out);
	for (int i = 0; i <= 100; i++)
	{
		file << i <<' ';

	}
	file.close();
	return 0;
}
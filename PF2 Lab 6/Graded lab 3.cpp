#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	const int size = 200;
	char sen[size] = {};
	int count = 0;
	ifstream fin;
	fin.open("inputFile.txt");
	if (fin.is_open())
	{
		for (int i = 0; !fin.eof(); i++)
		{
			fin.getline(sen, size);
			for (int i = 0; sen[i] != '\0'; i++)
			{
				if (sen[i] == ' ')
				{
					count++;
				}
			}
			count++;
		}
	}
	else
	{
		cout << "File not found";
	}
	cout << "There are " << count << " words in the given file." << endl;
	return 0;
}
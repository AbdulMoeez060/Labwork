#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	const int size = 100;
	char words[size] = {};
	char tofind[5] = { "Good" };
	int count = 0, flag = 0, len = 4;
	ifstream fin;
	fin.open("words.txt");
	if (fin)
	{
		for (int i = 0; !fin.eof(); i++)
		{
			fin >> words;
			for (int j = 0; words[j] != '\0'; j++)
			{
				if (words[j] == tofind[j])
				{
					count++;
				}
				else
				{
					break;
				}
				if (count == len)
				{
					flag++;
				}
			}
			count = 0;
		}
	}
	else
	{
		cout << "File not found" << endl;
	}
	fin.close();
	cout << "The Word 'Good' is repeated " << flag << " Times" << endl;
	return 0;
}
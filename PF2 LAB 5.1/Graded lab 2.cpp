#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	const int size = 20;
	char word[size] = {};
	ifstream fin;
	fin.open("word.txt");
	if (fin)
	{
		fin >> word;
	}
	else
	{
		cout << "Error" << endl;
	}
	int i = 0;
	for (i; word[i] != '\0'; i++)
	{

	}
	int flag = i - 1;
	int count = 0;
	for (int j = 0; j < i/2; j++)
	{
		if (word[j]!=word[flag])
		{
			cout << "String is not Palindrom." << endl;
			break;
		}
		else
		{
			count++;
		}
		flag--;
	}
	if (count==i/2)
	{
		cout << "String is Palindrom." << endl;
	}
	return 0;
}
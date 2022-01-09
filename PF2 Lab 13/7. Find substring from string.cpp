#include<iostream>
#include<string>
using namespace std;

int main()
{
	int size = 50;
	int size2 = 25;
	char* string = new char[size];
	char* substring = new char[size2];
	cout << "Enter string: ";
	cin.getline(string, size);
	cout << "Enter substring: ";
	cin.getline(substring, size2);
	int len = strlen(substring);
	int x = 0;
	for (int i = 0; string[i] != '\0'; i++)
	{
		if (substring[x]==string[i])
		{
			x++;
			if (x==len)
			{
				break;
			}
		}
		else
		{
			x = 0;
		}
	}
	if (x == len)
	{
		cout << "Substring is matched" << endl;
	}
	else
	{
		cout << "Substring is not matched." << endl;
	}
	return 0;
}
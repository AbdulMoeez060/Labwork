#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	const int size = 20;
	char name1[size] = {};
	char name2[size] = {};
	float m1=0, m2=0;
	cout << "Enter the name of student 1: ";
	cin.getline(name1, 20);
	cout << "Enter the name of student 2: ";
	cin.getline(name2, 20);
	cout << "Enter the marks of student 1 in quiz:";
	cin >> m1;
	cout << "Enter the marks of student 2 in quiz:";
	cin >> m2;
	ofstream fout;
	fout.open("Record.txt", ios::app);
	if (fout)
	{
		fout << name1 << " " << m1 << endl;
		fout << name2 << " " << m2 << endl;
	}
	else
	{
		cout << "File not found" << endl;
	}
	int len1 = 0, len2 = 0;
	for (int i = 0; name1[i] != '\0'; i++)
	{
		len1++;
	}
	for (int i = 0; name2[i] != '\0'; i++)
	{
		len2++;
	}
	int count = 0;
	if (len1==len2 && m1==m2)
	{
		for (int i = 0; i < len1; i++)
		{
			if (name1[i] != name2[i])
			{
				cout << "Records not same." << endl;
				break;
			}
			else
			{
				count++;
			}
		}
		if (count == len1)
		{
			cout << "Records same." << endl;
		}
	}
	else
	{
		cout << "Records not same." << endl;
	}
	return 0;
}
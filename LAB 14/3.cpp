#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	const int size = 20;
	char fname[size];
	char sname[size];
	cout << "Enter your first name: ";
	cin.getline(fname, 20);
	cout << "Enter your second name: ";
	cin.getline(sname, 20);
	int count = strlen(fname);
	int count2 = strlen(sname);
	for (int i = 0; i < count; i++)
	{
		if (fname[i] >= 'A'&&fname[i] <= 'Z')
		{
			fname[i] = char(fname[i] + 32);
		}
	}
	for (int j = 0; j < count; j++)
	{
		if (sname[j] >= 'A'&&sname[j] <= 'Z')
		{
			sname[j] = char(sname[j] + 32);
		}
	}
	if (strcmp(fname,sname)==0)
	{
		cout << "Both names are same." << endl;
	}
	else
	{
		cout << "Both names are not same." << endl;
	}
	return 0;
}
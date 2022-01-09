#include<iostream>
using namespace std;

int main()
{
	const int size = 20;
	char fname[size];
	char lname[size];
	char fullname[size];
	cout << "Enter your First Name :";
	cin >> fname;
	cout << "Enter your Last Name :";
	cin >> lname;
	int i;
	for (i = 0; fname[i] != '\0' ; i++)
	{
		fullname[i] = fname[i];
	}
	fullname[i] = ' ';
	i++;
	for (int j=0; lname[j] != '\0'; j++)
	{
		fullname[i] = lname[j];
		i++;
	}
	fullname[i] = '\0';
	cout << "Full Name is " << fullname << endl;
	return 0;
}
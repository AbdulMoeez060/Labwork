#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	const int size = 50;
	char uname[size] = {};
	char pword[size] = {};
	cout << "Enter your Username: ";
	cin.getline(uname, size);
	cout << "Enter your Password: ";
	cin.getline(pword, size);
	ofstream Uout, Pout;
	Uout.open("username.txt");
	Pout.open("password.txt");
	if (Uout.is_open() && Pout.is_open())
	{
		Uout << uname;
		Pout << pword;
	}
	else
	{
		cout << "File not Find";
	}
	return 0;
}
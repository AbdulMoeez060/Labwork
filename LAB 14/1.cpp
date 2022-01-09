#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	const int size = 20;
	char fname[size];
	char lname[size];
	cout << "Enter your First name: ";
	cin >> fname;
	cout << "Enter your Last name:";
	cin >> lname;
	if (fname[0]==lname[0]||fname[0]==lname[0]-32||lname[0]==fname[0]-32)
	{
		cout << "Both have same starting number." << endl;
	}
	else
	{
		cout << "Both have different letters." << endl;
	}
	return 0;
}
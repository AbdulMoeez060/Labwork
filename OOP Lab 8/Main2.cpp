#include<iostream>
#include"Task2.h"
using namespace std;

int main()
{
	HugeInteger h1, h2;
	cout << "Enter the digits for h1 without spaces: " << endl;
	cin >> h1;
	cout << "H1:" << endl;
	cout << h1 << endl;
	h2 = h1;
	cout << "H2:" << endl;
	cout << h2 << endl;
	cout << "H3=h1+h2:" << endl;
	HugeInteger h3 = h1 + h2;
	cout << h3 << endl;
	cout << "H4=h1-h2:" << endl;
	HugeInteger h4 = h1 - h2;
	cout << h4 << endl;
	if (h3>=h4)
	{
		cout << "H3 is greater tha h4." << endl;
	}
	else if (h4<=h3)
	{
		cout << "H4 is lesser than h3." << endl;
	}
	if (h1 == h2)
	{
		cout << "H1 is equal to h2" << endl;
	}
	{

	}
	return 0;
}
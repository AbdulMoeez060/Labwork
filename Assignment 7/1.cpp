#include<iostream>
#include<string>
using namespace std;

int main()
{
	int s1 = 0;
	int s2 = 0;
	const int size = 12;
	int bar[size];
	cout << "Type 12 Digits Barcode(Enter Space after every digit.):";
	for (int i = 0; i < size; i++)
	{
		cin >> bar[i];
	}
	cout << "First Step: (";
	for (int j = 0; j < size; j++)
	{
		if (j % 2 == 0 && j<10)
		{
			cout << bar[j]<<"+";
			s1 = s1 + bar[j];
		}
		if (j==10)
		{
			cout << bar[j] << ")*3 = ";
			s1 = s1 + bar[j];
		}
	}
	int step1 = s1 * 3;
	cout << s1 << "*3 = " << step1 << endl;
	cout << "Second Step: (";
	for (int k = 0; k < size-1; k++)
	{
		if (k % 2 != 0 && k < 9)
		{
			cout << bar[k] << "+";
			s2 = s2 + bar[k];
		}
		if (k == 9)
		{
			cout << bar[k] << ") + " << step1 << " = ";
			s2 = s2 + bar[k];
		}
	}
	int step2 = s2 + step1;
	cout << s2 << " + " << step1 << " = " << step2 << endl;
	int rem = step2 % 10;
	if (step2==0 && step2==bar[11])
	{
		cout << "Validated." << endl;
	}
	else if (10-rem==bar[11])
	{
		cout << "Validated." << endl;
	}
	else
	{
		cout << "invalid." << endl;
	}
	return 0;
}
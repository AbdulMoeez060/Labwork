#include<iostream>
using namespace std;

int main()
{
	const int size = 50;
	char orig[size];
	cout << "Enter a word: ";
	cin >> orig;
	for (int i = 0; orig[i] != '\0'; i++)
	{
		if (int(orig[i])>=65 && int(orig[i]) <= 90)
		{
			orig[i] = orig[i] + 32;
		}
		else if (int(orig[i]) >= 97 && int(orig[i]) <= 122)
		{
			orig[i] = orig[i] - 32;
		}
	}
	cout << "Changed String is : " << orig << endl;
	return 0;
}
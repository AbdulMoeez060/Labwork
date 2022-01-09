#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	const int size = 20;
	char fullname[size];
	cout << "Enter your full name: ";
	cin.getline(fullname, 20);
	int count = strlen(fullname);
	for (int i = 0; i < count; i++)
	{
		if (fullname[i]>='A'&&fullname[i]<='Z')
		{
			fullname[i] = char(fullname[i] + 32);
		}
	}
	cout << fullname << endl;
	return 0;
}
#include<iostream>
using namespace std;

bool IsVowel(char letter);
int main()
{
	char lett;
	cout << "Enter a letter :";
	cin >> lett;
	bool res = IsVowel(lett);
	if (res==1)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	return 0;
}
bool IsVowel(char letter)
{
	if (letter == 'a' || letter == 'o' || letter == 'e'||letter=='i'||letter=='u')
	{
		return true;
	}
	else
	{
		return false;
	}
}
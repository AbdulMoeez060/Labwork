#include<iostream>
using namespace std;

void ConvertLetter(char letters[]);
int main()
{
	const int size = 50;
	char sen[size];
	cout << "Enter a word or string: ";
	cin.getline(sen, size);
	ConvertLetter(sen);
	cout << "The letters after conversion are '" << sen << "'" << endl;
	return 0;
}
void ConvertLetter(char letters[])
{
	for (int i = 0; letters[i]!= '\0'; i++)
	{
		if (letters[i]>=65 && letters[i]<=90)
		{
			letters[i] = letters[i] + 32;
		}
		else if (letters[i] >= 97 && letters[i] <= 122)
		{
			letters[i] = letters[i] - 32;
		}
	}
}
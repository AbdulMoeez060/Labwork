#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	const int size = 11;
	char word[size];
	char guess[size];
	strcpy_s(word, "pakistan");
	int wcount = strlen(word);
	char gletter;
	int count = 1;
	for (int i = 0; i < wcount; i++)
	{
		guess[i] = '_';
	}
	for (int j = 1; j <= 6; j++)
	{
		cout << "Enter your Guess # " << j << ": " << endl;
		cin >> gletter;
		if (gletter=='$')
		{
			j = 7;
		}
		else
		{
			for (int k = 0; k < wcount; k++)
			{
				if (gletter == word[k])
				{
					guess[k] = gletter;
				}
			}
			for (int l = 0; l < wcount; l++)
			{
				cout << guess[l] << " ";
			}
			cout << endl;
		}
		count++;
	}
	cout << "Enter the word you guessed: ";
	cin >> guess;
	if (strcmp(word,guess)==0)
	{
		cout << "Congratulations you have guessed the word." << endl;
	}
	else
	{
		cout << "Your guess is wrong." << endl;
	}
	return 0;
}
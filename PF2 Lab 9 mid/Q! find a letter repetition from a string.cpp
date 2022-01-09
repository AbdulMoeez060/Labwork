#include<iostream>
using namespace std;

void Input(char str[], int size, char& word);
int CheckRepeat(char str[], char word);
void display(int num);
int main()
{
	const int size = 100;
	char str[size] = {};
	char word = {};
	Input(str, size, word);
	int count = CheckRepeat(str, word);
	display(count);
	return 0;
}
void Input(char str[], int size, char& word)
{
	cout << "Enter a sentence: ";
	cin.getline(str, size);
	cout << "Enter the word to find how many times it repeats: ";
	cin >> word;
}
int CheckRepeat(char str[], char word)
{
	int count = 0;
	for (int i = 0; str[i]!= '\0'; i++)
	{
		if (str[i]==word)
		{
			count++;
		}
	}
	return count;
}
void display(int num)
{
	cout << "The given word repeaats " << num << " times." << endl;
}
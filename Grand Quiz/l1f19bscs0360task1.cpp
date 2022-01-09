#include<iostream>
using namespace std;

void GetInput(char string[],int size);
void FirstChar(char string[],char &fchar);
void LastChar(char string[],char &lchar);
void Display(char fchar, char lchar);
int main()
{
	const int size = 20;
	char word[size] = {};
	GetInput(word, size);
	char fchar = {}, lchar = {};
	FirstChar(word, fchar);
	LastChar(word, lchar);
	Display(fchar, lchar);
}
void GetInput(char string[],int size)
{
	cout << "Please enter a word: ";
	cin.getline(string, size);
}
void FirstChar(char string[], char& fchar)
{
	fchar = string[0];
}
void LastChar(char string[], char& lchar)
{
	int count;
	for (int i = 0; string[i]!='\0'; i++)
	{
		count = i;
	}
	lchar = string[count];
}
void Display(char fchar, char lchar)
{
	cout << "First Character: " << fchar << endl;
	cout << "Last Character: " << lchar << endl;
}
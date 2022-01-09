#include<iostream>
using namespace std;

void GetInput(char string[],int size);
void ChangeDollar(char string[]);
void display(char sting[]);
int main()
{
	const int size = 50;
	char dollars[size] = {};
	GetInput(dollars, size);
	ChangeDollar(dollars);
	display(dollars);
}
void GetInput(char string[], int size)
{
	cout << "Please enter small alphabets with dollars in between: ";
	cin.getline(string, size);
}
void ChangeDollar(char string[])
{
	char x = 'u';
	int y = int(x);
	for (int i = 0; string[i]!='\0'; i++)
	{
		if (string[i]=='$')
		{
			string[i] = char(y);
			y++;
			if (y==122)//Since Acii for z is 122 
			{
				y = 97;//since ascii for a is 97
			}
		}
	}
}
void display(char string[])
{
	cout << "Modified String is: " << string << endl;
}
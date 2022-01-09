#include<iostream>
using namespace std;

int FindPak(char string[], char string2[]);
void display(int num);
int main()
{
	char string[100] = { "Our country Pakistan was formed in 1947" };
	char pak[10] = { "Pakistan" };
	int check = FindPak(string, pak);
	display(check);
	return 0;
}
int FindPak(char string[], char string2[])
{
	int count = 0;
	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i]==string2[count])
		{
			count++;
		}
		else
		{
			count = 0;
		}
		if (count == 8)
		{
			return 1;
		}
	}
	return 0;
	
}
void display(int num)
{
	if (num==1)
	{
		cout << "Pakistan exists in the sentence" << endl;
	}
	else
	{
		cout << "Pakistan does not exists in the sentence" << endl;
	}
}
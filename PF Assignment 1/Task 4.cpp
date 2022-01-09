#include<iostream>
using namespace std;

void MatchChar(char str[], char str2[],char str3[], int arr[]);
void display(char str[], int arr[]);
int main()
{
	const int size = 15;
	char str[size] = { "anisnoanind" };
	char str2[size] = { "athsjuazwqd" };
	char str3[size] = {};
	int arr[size] = {};
	MatchChar(str, str2, str3, arr);
	display(str3, arr);
	return 0;
}
void MatchChar(char str[], char str2[], char str3[], int arr[])
{
	int num = 0;
	for ( int i = 0; str[i] !='\0'; i++)
	{
		if (str[i]==str2[i])
		{
			str3[num] = str[i];
			arr[num] = i;
			num++;
		}
	}
}
void display(char str[], int arr[])
{
	cout << "The Matching word is : " << str << endl;
	int count = 0;
	for (int i = 0; str[i]!= '\0' ; i++)
	{
		count++;
	}
	cout << "The indexes are: ";
	for (int i = 0; i < count; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
#include<iostream>
using namespace std;

int main()
{
	const int size = 100;
	char sen[size] = {};
	cout << "Enter a sentence: ";
	cin.getline(sen, size);
	int len = 0;
	for (int i = 0; sen[i]!='\0'; i++)
	{
		len++;
	}
	int start, end, x = 0;
	for (int j = 0; j <= len; j++)
	{
		if (sen[j]==' ' || sen[j]=='\0')
		{
			end = j - 1;
			start = x;
			for (int k = start; k < (j+x)/2 ; k++)
			{
				char temp = sen[start];
				sen[start] = sen[end];
				sen[end] = temp;
				start++;
				end--;
			}
			x = j + 1;
		}
	}
	cout << "The scrambled sentence is: " << sen << endl;
	return 0;
}
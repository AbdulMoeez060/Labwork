#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	const int size = 50;
	const int size2 = 10;
	char sen[size] = {};
	char word[size2] = {};
	int count = 0;
	ifstream Sin, Win;
	Sin.open("input1.txt");
	Win.open("input2.txt");
	if (Sin.is_open() && Win.is_open())
	{
		Sin.getline(sen, size);
		Win >> word;
	}
	else
	{
		cout << "Not found" << endl;
	}
	Sin.close();
	Win.close();
	int len = 0;
	for (int i = 0; word[i] !='\0' ; i++)
	{
		len++;
	}
	int j = 0;
	for (int i = 0; sen[i]!='\0' ; i++)
	{
		
		
		if (word[j]==sen[i])
		{
			count++;
			j++;
		}
		else
		{
			count = 0;
			j = 0;
		}
		
		if (len==count)
		{
			break;
		}
	}
	if (len==count)
	{
		cout << "Word found" << endl;
	}
	else
	{
		cout << "Word not found" << endl;
	}
	return 0;
}
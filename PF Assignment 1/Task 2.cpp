#include<iostream>
using namespace std;

int Sentences(char string[]);
void display(int num);
int main()
{
	const int size = 500;
	char string[size] = {"A paragraph is a series of sentences that are organized and coherent. and are all related to a single topic. Almost every piece of writing you do that is longer than a few sentences should be organized into paragraphs. This is because paragraphs show a reader where the subdivisions of an essay begin and end, and thus help the reader see the organization of the essay and grasp its main points."}; 
	int sen = Sentences(string);
	display(sen);
	return 0;
}
int Sentences(char string[])
{
	int count = 0;
	for (int i = 0; string[i]!= '\0'; i++)
	{
		if (string[i]=='.')
		{
			count++;
		}
	}
	return count;
}
void display(int num)
{
	cout << "The given paragraph has " << num << " sentences." << endl;
}
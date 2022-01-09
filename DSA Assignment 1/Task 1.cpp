#include"Stack.h"
#include<string>
//Reverse a string using stack

string reverse(string s)
{
	int len = s.length();
	Stack<char> rev(len);
	for (int i = 0; i < len; i++)
	{
		rev.push(s[i]);
	}
	for (int i = 0; i < len; i++)
	{
		s[i] = rev.pop();
	}
	return s;
}
int main()
{
	string str;
	cout << "Enter the string to Reverse: ";
	getline(cin, str);
	cout << "Reversed string is: " << reverse(str) << endl;
	return 0;

}
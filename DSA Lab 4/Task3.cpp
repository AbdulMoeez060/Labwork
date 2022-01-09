#include"Stack.h"


bool isBalanced(string ch)
{
	Stack<char> obj(ch.size());
	char c;
	for (int i = 0; i < ch.size(); i++)
	{
		if (ch[i]=='(' || ch[i] == '{'|| ch[i] == '[')
		{
			obj.push(ch[i]);
			//obj.display();
		}
		if (obj.empty())
		{
			//cout << "Stack is empty" << endl;
			//obj.display();
			return false;
		}
		if (ch[i]==')')
		{
			c = obj.pop();
			if (c=='['||c=='{')
			{
				//cout << "Not matching" << endl;
				//obj.display();
				return false;
			}
		}
		else if (ch[i] == '}')
		{
			
			c = obj.pop();
			if (c == '[' || c == '(')
			{
				//cout << "Not matching" << endl;
				//obj.display();
				return false;
			}
		}
		else if(ch[i] == ']')
		{
			
			c = obj.pop();
			if (c == '(' || c == '{')
			{
				//cout << "Not matching" << endl;
				//obj.display();
				return false;
			}
		}
		
	}
	return (obj.empty());
}
int main()
{
	string check;
	cout << "Enter the brackets you want to check brackets for: ";
	cin >> check;
	if (isBalanced(check))
	{
		cout << "Balanced" << endl;
	}
	else
	{
		cout << "Not Balanced" << endl;
	}

	return 0;
}
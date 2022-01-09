#include"Stack.h"
#include<string>

int getDepth(string ch)
{
	int len = ch.length();
	Stack<char> obj(len);
	char c;
	int totalMax = 0, cmax = 0;
	for (int i = 0; i < len; i++)
	{
		if (ch[i] == '(' || ch[i] == '{' || ch[i] == '[')
		{
			obj.push(ch[i]);
			//obj.display();
			cmax++;
			if (cmax>totalMax)
			{
				totalMax = cmax;
			}
		}
		if (obj.empty())
		{
			//cout << "Stack is empty" << endl;
			//obj.display();
			return -1;
		}
		if (ch[i] == ')')
		{
			c = obj.pop();
			if (c == '[' || c == '{')
			{
				//cout << "Not matching" << endl;
				//obj.display();
				return -1;
			}
			if (cmax>0)
			{
				cmax--;
			}
			
		}
		else if (ch[i] == '}')
		{

			c = obj.pop();
			if (c == '[' || c == '(')
			{
				//cout << "Not matching" << endl;
				
				return -1;
			}
			if (cmax > 0)
			{
				cmax--;
			}
			
		}
		else if (ch[i] == ']')
		{

			c = obj.pop();
			if (c == '(' || c == '{')
			{
				//cout << "Not matching" << endl;
				//obj.display();
				return -1;
			}
			if (cmax > 0)
			{
				cmax--;
			}
			
		}

	}
	if (obj.empty())
	{
		return totalMax;
	}
	else
	{
		return -1;
	}
}
int main()
{
	string check;
	cout << "Enter the brackets you want to check brackets for: ";
	getline(cin, check);
	
	cout << "Max depth of nested parentesis(if -1 then it is unbalanced) is : " << getDepth(check) << endl;
	return 0;
}




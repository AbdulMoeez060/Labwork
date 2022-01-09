#include"Stack.h"

int checkpriorty(char ch)
{
	if (ch == '-' || ch == '+')
	{
		return 1;
	}
	else if (ch == '/' || ch == '*')
	{
		return 2;
	}
	else if (ch == '^')
	{
		return 3;
	}
	else
		return -1;
}
string topostfix(string infix)
{
	Stack<char> oper(infix.size());
	string postfix = {};
	for (int i = 0; i < infix.size(); i++)
	{
		if (infix[i]>='a' && infix[i]<='z' || infix[i] >= 'A' && infix[i] <= 'Z'|| infix[i] >= '0' && infix[i] <= '9')
		{
			postfix.push_back(infix[i]);
		}
		else if (infix[i]=='(' || infix[i] == '{'|| infix[i] == '[')
		{
			oper.push(infix[i]);
		}
		else if (infix[i] == ')' || infix[i] == '}' || infix[i] == ']')
		{
			if (infix[i] == ')')
			{
				while (oper.top() != '(' && !oper.empty())
				{
					postfix.push_back(oper.pop());
				}
				if (oper.top()=='(')
				{
					oper.pop();
				}
				
			}
			if (infix[i] == '}')
			{
				while (oper.top() != '{' && !oper.empty())
				{
					postfix.push_back(oper.pop());
				}
				if (oper.top() == '{')
				{
					oper.pop();
				}
			}
			if (infix[i] == ']')
			{
				while (oper.top() != '[' && !oper.empty())
				{
					postfix.push_back(oper.pop());
				}
				if (oper.top() == ']')
				{
					oper.pop();
				}
			}
		}
		else
		{
			while (!oper.empty() && checkpriorty(infix[i])<=checkpriorty(oper.top()))
			{
				if (oper.top() != '(' || oper.top() != '{'|| oper.top() != '[')
				{
					postfix += oper.pop();

				}
			}
			oper.push(infix[i]);
			/*if (oper.empty())
			{
				oper.push(infix[i]);
			}
			else if (checkpriorty(infix[i])<=checkpriorty(oper.top()))
			{
				postfix.push_back(oper.pop());
				while (checkpriorty(oper.top())==checkpriorty(infix[i]))
				{
					postfix.push_back(oper.pop());
					if (oper.empty())
					{
						break;
					}
				}
				oper.push(infix[i]);
			}
			else if (checkpriorty(infix[i]) > checkpriorty(oper.top()))
			{
				oper.push(infix[i]);
			}*/
		}
	}
	while (!oper.empty())
	{
		postfix.push_back(oper.pop());
	}
	cout << "Postfix Expression of given infix is " << postfix << endl;
	return postfix;
}
int evaluatePostfix(string postfix)
{
	Stack<int> st(postfix.size());
	for (int i = 0; i < postfix.size(); i++)
	{
		if (isdigit(postfix[i]))//checks if element in string is a digit
		{
			st.push(postfix[i] - '0');
		}
		else
		{
			int num1 = st.pop();
			int num2 = st.pop();
			if (postfix[i]=='+')
			{
				st.push(num2 + num1);
			}
			else if (postfix[i] == '-')
			{
				st.push(num2 - num1);
			}
			else if (postfix[i] == '/')
			{
				st.push(num2 / num1);
			}
			else if (postfix[i] == '*')
			{
				st.push(num2 * num1);
			}
			else if (postfix[i] == '^')
			{
				for (int i = 0; i < num1; i++)
				{
					num2 *= num2;
				}
				st.push(num2);
			}
		}
	}
	return st.pop();
}
int main()
{
	string infix;
	cout << "Enter infix to convert into postfix: ";
	cin >> infix;
	topostfix(infix);
	string postfix;
	cout << "Enter postfix to evaluate:";
	cin >> postfix;
	int n = evaluatePostfix(postfix);
	cout << "The ealuation of " << postfix << " is " << n << endl;
	return 0;
}
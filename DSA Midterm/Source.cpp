#include"myLL.h"

int main()
{
	myLL<int> l;
	l.insertAtEnd(1);
	l.insertAtEnd(2);
	l.insertAtEnd(3);
	l.insertAtEnd(2);
	l.insertAtEnd(1);
	l.display();
	if (l.checkp())
	{
		cout << "Palindrome" << endl;
	}
	else
	{
		cout << "Not Palindrome" << endl;
	}
	l.display();
}
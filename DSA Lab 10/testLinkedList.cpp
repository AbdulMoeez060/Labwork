#include"myLL.h"

int main()
{
	cout << "******	TEST LINKED LIST CPP	****** \n" << endl;

	myLL<char> obj;
	if (obj.isEmpty())
	{
		cout << "Obj Is Empty" << endl;
	}
	else
	{
		cout << "Not empty" << endl;
	}
	cout << "Adding Values" << endl;


	obj.insertAtEnd('L');
	obj.insertAtEnd('i');
	obj.insertAtEnd('n');
	obj.insertAtEnd('k');
	obj.insertAtEnd('e');
	obj.insertAtEnd('d');


	cout << "Displaying" << endl;
	obj.display();

	cout << "Removing" << endl;

	obj.deleteFromHead();
	obj.deleteFromHead();

	cout << "Display After Removing" << endl;

	obj.display();
}
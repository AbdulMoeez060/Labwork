#include"MyLinkedList.h"
//Menu in tasK one all the files in the zip is task while task two is the last Function/methhod of MyLinkedList.h

template<class T>
void menu(MyLinkedList <T>& obj)
{
	char ch = 'r';
	while (ch=='r')
	{
		int choice;
		cout << "Press " << endl
			<< "1 to insert at any position." << endl
			<< "2 to insert at start." << endl
			<< "3 to insert at the end" << endl
			<< "4 to insert as sorted." << endl
			<< "5 to remove from any position" << endl
			<< "6 to remove from start" << endl
			<< "7 to remove from end" << endl
			<< "8 to reverse the list " << endl//Task 2
			<< "9 to print the list" << endl
			<< "10 to check the size" << endl;
		cin >> choice;
		if (choice == 1)
		{
			int index;
			T val;
			cout << "Enter value you want to enter: ";
			cin >> val;
			cout << "Enter index you want to enter it in: ";
			cin >> index;
			obj.insertAtPosition(index,val);
			obj.printList();

		}
		else if (choice == 2)
		{
			T val;
			cout << "Enter value you want to enter: ";
			cin >> val;
			obj.insertAtFront(val);
			obj.printList();
		}
		else if (choice == 3)
		{
			T val;
			cout << "Enter value you want to enter: ";
			cin >> val;
			obj.insertAtEnd(val);
			obj.printList();
		}
		else if (choice == 4)
		{
			T val;
			cout << "Enter value you want to enter: ";
			cin >> val;
			obj.insertSorted(val);
			obj.printList();
		}
		else if (choice == 5)
		{
			T val;
			cout << "Enter value you want to remove: ";
			cin >> val;
			obj.removeFromPosition(val);
			obj.printList();
		}
		else if (choice == 6)
		{
			obj.removeFromFront();
			obj.printList();
		}
		else if (choice == 7)
		{
			obj.removeFromEnd();
			obj.printList();

		}
		else if (choice == 8)
		{
			obj.reverseList();//Task 2
			obj.printList();
		}
		else if (choice == 9)
		{
			obj.printList();
		}
		else if (choice == 10)
		{
			cout << "Size of linked list is " << obj.size() << endl;
			
		}
		else
			cout << "Wrong choice" << endl;
		cout << "Enter r to countinue and press anyother key to abort: " << endl;
		cin >> ch;
	}
}
int main()
{
	
	int choice;
	cout << "Press " << endl
		<< "1 to make List of int" << endl
		<< "2 to make List of char" << endl
		<< "3 to make List of float" << endl
		<< "4 to make List of double" << endl;
	cin >> choice;
	if (choice==1)
	{
		MyLinkedList<int> obj;
		menu(obj);
	}
	else if(choice == 2)
	{
		MyLinkedList<char> obj;
		menu(obj);
	}
	else if(choice == 3)
	{
		MyLinkedList<float> obj;
		menu(obj);
	}
	else if(choice == 4)
	{
		MyLinkedList<double> obj;
		menu(obj);
	}
	return 0;
}
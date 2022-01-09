#include"MyCircularLinkedList.h"

template<class T>
void menu(MyCircularLinkedList <T>& obj)
{
	char ch = 'r';
	while (ch == 'r')
	{
		int choice;
		cout << "Press " << endl
			<< "1 to insert at start." << endl
			<< "2 to insert at the tail" << endl
			<< "3 to remove  any value" << endl
			<< "4 to remove from start" << endl
			<< "5 to remove from end" << endl
			<< "6 to search the list to see if elememt exist" << endl
			<< "7 to search the list to see if elememt exist and get index" << endl
			<< "8 to sort the list in ascending order the list" << endl
			<< "9 to sort the list in descending order the list" << endl
			<< "10 to delete the list" << endl
			<< "11 to print the list" << endl;

		cin >> choice;
		if (choice == 1)
		{
			int index;
			T val;
			cout << "Enter value you want to enter: ";
			cin >> val;
			obj.insertFirstNode(val);
			obj.print();

		}
		else if (choice == 2)
		{
			T val;
			cout << "Enter value you want to enter: ";
			cin >> val;
			obj.insertAtTail(val);
			obj.print();
		}
		else if (choice == 3)
		{
			T val;
			cout << "Enter value you want to remove: ";
			cin >> val;
			obj.deleteAValue(val);
			obj.print();
		}
		else if (choice == 4)
		{
			obj.deleteFirstNode();
			obj.print();
		}
		else if (choice == 5)
		{
			obj.deleteFromTail();
			obj.print();
		}
		else if (choice == 6)
		{
			T val;
			cout << "Enter value you want to search: ";
			cin >> val;
			if (obj.search(val))
			{
				cout << "Value Exists." << endl;
			}
			else
			{
				cout << "Value does not exist." << endl;
			}
			obj.print();
		}
		else if (choice == 7)
		{
			T val;
			cout << "Enter value you want to search: ";
			cin >> val;
			cout << "The index at which value exists is(if the value does not exists output is -1): " << obj.searchPositionOfValue(val) << endl;
			obj.print();
		}
		else if (choice == 8)
		{
			obj.sortCircularListInAscendingOrder();
			obj.print();
		}
		else if (choice == 9)
		{
			obj.sortCircularListInDescendingOrder();
			obj.print();
		}
		else if (choice == 10)
		{
			obj.destroyCircularLinkedList();
			obj.print();
		}
		else if (choice == 11)
		{
			obj.print();
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
	if (choice == 1)
	{
		MyCircularLinkedList<int> obj;
		menu(obj);
	}
	else if (choice == 2)
	{
		MyCircularLinkedList<char> obj;
		menu(obj);
	}
	else if (choice == 3)
	{
		MyCircularLinkedList<float> obj;
		menu(obj);
	}
	else if (choice == 4)
	{
		MyCircularLinkedList<double> obj;
		menu(obj);
	}
	
	return 0;
}
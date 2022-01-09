#include"MyArray.h"

int main()
{
	int size;
	char ch = 'r';
	do
	{
		int choice;
		cout << "Enter 1 to make array of int, 2 for float, 3 for double, 4 for char:";
		cin >> choice;
		if (choice==1)
		{
			cout << "Enter the size of the array you want to make:";
			cin >> size;
			MyArray<int> obj(size);
			char ch2 = 'r';
			while (ch2=='r')
			{
				int choice2;
				cout << "Enter 1 to add element, 2 to delete from rear, 3 to delete from rear, 4 for count, 5 for display:";
				cin >> choice2;
				if (choice2==1)
				{
					int temp;
					cout << "Enter the integer you want to add:";
					cin >> temp;
					obj.insert(temp);
				}
				else if (choice2==2)
				{
					obj.delete1();
				}
				else if (choice2 == 3)
				{
					obj.delete2();
				}
				else if (choice2 == 4)
				{
					cout << "Count is " << obj.size();
				}
				else if (choice2 == 5)
				{
					obj.display();
				}
				else
				{
					cout << "Wrong Choice." << endl;
				}
				cout << "Press r to continue operations with integers and any other key to exit:";
				cin >> ch2;
			}

		}
		else if (choice==2)
		{
			cout << "Enter the size of the array you want to make:";
			cin >> size;
			MyArray<float> obj(size);
			char ch2 = 'r';
			while (ch2 == 'r')
			{
				int choice2;
				cout << "Enter 1 to add element, 2 to delete from rear, 3 to delete from rear, 4 for count, 5 for display:";
				cin >> choice2;
				if (choice2 == 1)
				{
					float temp;
					cout << "Enter the float you want to add:";
					cin >> temp;
					obj.insert(temp);
				}
				else if (choice2 == 2)
				{
					obj.delete1();
				}
				else if (choice2 == 3)
				{
					obj.delete2();
				}
				else if (choice2 == 4)
				{
					cout << "Count is " << obj.size();
				}
				else if (choice2 == 5)
				{
					obj.display();
				}
				else
				{
					cout << "Wrong Choice." << endl;
				}
				cout << "Press r to continue operations with float and any other key to exit:";
				cin >> ch2;
			}

		}
		else if (choice == 3)
		{
			cout << "Enter the size of the array you want to make:";
			cin >> size;
			MyArray<double> obj(size);
			char ch2 = 'r';
			while (ch2 == 'r')
			{
				int choice2;
				cout << "Enter 1 to add element, 2 to delete from rear, 3 to delete from rear, 4 for count, 5 for display:";
				cin >> choice2;
				if (choice2 == 1)
				{
					double temp;
					cout << "Enter the double you want to add:";
					cin >> temp;
					obj.insert(temp);
				}
				else if (choice2 == 2)
				{
					obj.delete1();
				}
				else if (choice2 == 3)
				{
					obj.delete2();
				}
				else if (choice2 == 4)
				{
					cout << "Count is " << obj.size();
				}
				else if (choice2 == 5)
				{
					obj.display();
				}
				else
				{
					cout << "Wrong Choice." << endl;
				}
				cout << "Press r to continue operations with doubles and any other key to exit:";
				cin >> ch2;
			}

		}
		else if (choice == 4)
		{
			cout << "Enter the size of the array you want to make:";
			cin >> size;
			MyArray<char> obj(size);
			char ch2 = 'r';
			while (ch2 == 'r')
			{
				int choice2;
				cout << "Enter 1 to add element, 2 to delete from rear, 3 to delete from rear, 4 for count, 5 for display:";
				cin >> choice2;
				if (choice2 == 1)
				{
					char temp;
					cout << "Enter the char you want to add:";
					cin >> temp;
					obj.insert(temp);
				}
				else if (choice2 == 2)
				{
					obj.delete1();
				}
				else if (choice2 == 3)
				{
					obj.delete2();
				}
				else if (choice2 == 4)
				{
					cout << "Count is " << obj.size();
				}
				else if (choice2 == 5)
				{
					obj.display();
				}
				else
				{
					cout << "Wrong Choice." << endl;
				}
				cout << "Press r to continue operations with chars and any other key to exit:";
				cin >> ch2;
			}
		}
		else
		{
			cout << "Wrong Choice." << endl;
		}
		cout << "Press r to continue making arrays and any other key to exit:";
		cin >> ch;
	} while (ch=='r');
	/*obj.insert(7);
	obj.insert(9);
	obj.insert(43);
	obj.insert(54);
	obj.display();
	obj.delete2();
	obj.display();
	obj.insert(32);
	obj.display();
	obj.delete1();
	obj.display();*/
	return 0;
}
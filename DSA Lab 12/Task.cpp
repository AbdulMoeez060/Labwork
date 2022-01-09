#include"MyBST.h"

template<class T>
void menu(MyBST<T> obj)
{
	int choice = 1;
	while (choice!=0)
	{
		cout << "Enter 1 for the output of task 1" << endl
			<< "2 for insertion" << endl
			<< "3 for searching" << endl
			<< "4 for Preorder Traversal" << endl
			<< "5 for Inorder Traversal" << endl
			<< "6 for Postorder Traversal" << endl
			<< "0 to exit" << endl;
		cin >> choice;
		if (choice==1)
		{
			MyBST<int> b1;
			b1.insert(60);
			b1.insert(50);
			b1.insert(70);
			b1.insert(30);
			b1.insert(53);
			b1.insert(80);
			b1.insert(75);
			b1.insert(77);
			b1.insert(35);
			b1.insert(57);
			b1.insert(32);
			b1.insert(40);
			b1.insert(48);
			b1.insert(45);

			b1.search(75);
			b1.search(40);
			b1.search(1001);
		}
		else if (choice == 2)
		{
			T temp;
			cout << "Enter the value you want to insert:";
			cin >> temp;
			obj.insert(temp);
		}
		else if (choice == 3)
		{
			T temp;
			cout << "Enter the value you want to search:";
			cin >> temp;
			cout << "====>";
			obj.search(temp);
		}
		else if (choice == 4)
		{
			cout << "====>Preorder Traversal: ";
			obj.preorder();
			cout << endl;
		}
		else if (choice == 5)
		{
			cout << "====>Inorder Traversal: ";
			obj.inorder();
			cout << endl;
		}
		else if (choice == 6)
		{
			cout << "====>Postorder Traversal: ";
			obj.postorder();
			cout << endl;
		}
		else if (choice == 0)
		{
			cout << "You have entered 0 so exiting the program." << endl;
		}
		else
		{
			cout << "You have entered a wrong choice." << endl;
		}
	}

}
int main()
{
	int choice;
	cout << "Enter 1 to make tree of int" << endl
		<< "2 to make tree of char" << endl
		<< "3 to make tree of double" << endl
		<< "4 to make tree of float" << endl;
	cin >> choice;
	if (choice==1)
	{
		MyBST<int> b;
		menu(b);
	}
	else if (choice == 2)
	{
		MyBST<char> b;
		menu(b);
	}
	else if (choice == 3)
	{
		MyBST<double> b;
		menu(b);
	}
	else if (choice == 4)
	{
		MyBST<float> b;
		menu(b);
	}
	
}
#include"MyLinkedList.h"
//All tasks Are in  file MyLinkedList.h and are all labeled and number from task 1 to 6
int main()
{
	MyLinkedList<int> obj;
	cout << "==============================================" << endl;
	cout << "List one that is inserted in ascending order using function insertAscending() which is task 5" << endl;
	cout << "==============================================" << endl;
	obj.insertAscending(1);//task 5
	obj.insertAscending(7);
	obj.insertAscending(6);
	obj.insertAscending(24);
	obj.printList();
	cout << "==============================================" << endl;
	cout << "List two that is inserted in descending order using function insertDescending() which is task 6" << endl;
	cout << "==============================================" << endl;
	MyLinkedList<int> obj1;
	obj1.insertDescending(3);//task 6
	obj1.insertDescending(32);
	obj1.insertDescending(4);
	obj1.insertDescending(42);
	obj1.printList();
	cout << "==============================================" << endl;
	cout << "Merge or list one and two than sorted in descending using function mergeSort() which is task 3" << endl;
	cout << "==============================================" << endl;
	obj.mergeSort(obj1);//task 3
	obj.printList();
	cout << "==============================================" << endl;
	cout << "Checking for the values greater than key in List one after merging using greaterThanKey() which is task 1" << endl;
	cout << "==============================================" << endl;
	obj.greaterThanKey(3);//task 1
	cout << "==============================================" << endl;
	cout << "List 3" << endl;
	cout << "==============================================" << endl;
	MyLinkedList<char> obj2;
	obj2.insertAtEnd('M');
	obj2.insertAtEnd('A');
	obj2.insertAtEnd('D');
	obj2.insertAtEnd('a');
	obj2.insertAtEnd('M');
	obj2.printList();
	cout << "==============================================" << endl;
	cout << "Checking for occurence of key in List 3 using presenceOfKey() which is task 2" << endl;
	cout << "==============================================" << endl;
	obj2.presenceOfKey('M');//task 2
	cout << "==============================================" << endl;
	cout << "Checking for the Palaindrome in List 3 using checkPalondrome() which is task 4" << endl;
	cout << "==============================================" << endl;
	if (obj2.checkPalindrome())//task 4
	{
		cout << "List is palindrome" << endl;
	}
	else
	{
		cout << "List is not palindrome" << endl;
	}
	return 0;
}
#include"MyLinkedList.h"
//The Funtion for task one is in MyLinkedList.h this is the main function to check its working

int main()
{
	MyLinkedList<char> l;
	l.insertAtEnd('f');
	l.insertAtEnd('o');
	l.insertAtEnd('o');
	l.insertAtEnd('l');
	l.printList();
	l.reverseList(l.head);
	l.printList();
}
#pragma once
#include "LinkedList.h"
#include<stack>
//Task 1
template<class T>
class myLL : public LinkedList<T>
{
public:
	myLL() :LinkedList<T>() {  }
	bool isEmpty()
	{
		return (LinkedList<T>::head==NULL);
	}
	void insertAtEnd(T value)
	{
		Node<T>* nnode = new Node<T>;
		nnode->data = value;
		Node<T>* cnode = LinkedList<T>::head;
		if (cnode==NULL)
		{
			LinkedList<T>::head = nnode;
		}
		else
		{
			while (cnode->next != NULL)
			{
				cnode = cnode->next;
			}
			cnode->next = nnode;
		}
	}
	T deleteFromHead()
	{
		Node<T>* cnode = LinkedList<T>::head;
		if (cnode==NULL)
		{
			cout << "List is Empty Nothing to remove." << endl;
			return 0;
		}
		LinkedList<T>::head = LinkedList<T>::head->next;
		T temp = cnode->data;
		free (cnode);
		return temp;
	}
	void display()
	{
		cout << "Value: " ;
		Node<T> *cnode = LinkedList<T>::head;
		if (!cnode)
		{
			cout << "List/Queue Empty" << endl;
		}
		else
		{
			while (cnode)
			{
				cout << cnode->data << " ";
				cnode = cnode->next;
			}
			cout << endl;
		}
	}
	int size()
	{
		Node<T>* cnode = LinkedList<T>::head;
		int size = 0;
		while (cnode)
		{
			cnode = cnode->next;
			size++;
		}
		return size;
	}
	void reverseList()//Task 2
	{
		cout << "Reversing." << endl;
		Node<T>* currnode = LinkedList<T>::head;
		Node<T>* prevnode = NULL, * nextnode = NULL;
		while (currnode != NULL)
		{
			nextnode = currnode->next;
			currnode->next = prevnode;
			prevnode = currnode;
			currnode = nextnode;
		}
		LinkedList<T>::head = prevnode;
	}
	bool isPalindrome()
	{
		//fuction to check whether a list is palindrome or not
		stack<T> temp;
		Node<T>* currnode = LinkedList<T>::head;

		while (currnode)
		{
			temp.push(currnode->data);
			currnode = currnode->next;//moving to the next node
		}
		Node<T>* checknode = LinkedList<T>::head;
		while (checknode)
		{
			T palin = temp.top();
			T palin2 = checknode->data;
			temp.pop();
			//cout << palin << endl;
			//to get it in capital letters
			if (palin >= 65 && palin <= 90)
			{
				palin += 32;
			}
			if (palin2 >= 65 && palin2 <= 90)
			{
				palin2 += 32;
			}
			if (palin != palin2)
			{
				return false;
			}
			checknode = checknode->next;
		}
		return true;
	}
	bool checkp()
	{
		myLL<T> obj = LinkedList<T>::head;
		obj.reverseList();
		if (obj==this)
		{
			return 1;
		}

		return 0;
	}
};


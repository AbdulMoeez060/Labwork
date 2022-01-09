#pragma once
#include "LinkedList.h"
template<class T>
LinkedList<T>::LinkedList()
{
	head = NULL;
}

template<class T>
class myLL : public LinkedList<T>
{
public:
	myLL():LinkedList<T>()
	{
	}
	bool isEmpty()
	{
		return (LinkedList<T>::head == NULL);
	}
	void insertAtEnd(T value)
	{
		Node<T>* nnode = new Node<T>;
		nnode->data = value;
		Node<T>* cnode = LinkedList<T>::head;
		if (cnode == NULL)
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
		if (cnode == NULL)
		{
			cout << "List is Empty Nothing to remove." << endl;
			return 0;
		}
		LinkedList<T>::head = LinkedList<T>::head->next;
		T temp = cnode->data;
		free(cnode);
		return temp;
	}
	void display()
	{
		Node<T>* cnode = LinkedList<T>::head;
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
};


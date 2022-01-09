#pragma once
#include "LinkedList.h"
//Part of task 1 and task 2 is the last method defined 
template <class T>
class MyLinkedList : public LinkedList<T>
{
public:
	MyLinkedList() :LinkedList<T>() {}
	~MyLinkedList() {}
	bool isEmpty()
	{
		if (LinkedList<T>::head == NULL)
			return 1;
		else
			return 0;
	}
	int size()
	{
		int num = 0;
		node<T>* currNode = LinkedList<T>::head;
		while (currNode != NULL) {

			currNode = currNode->next;
			num++;
		}
		return num;
	}
	void insertAtFront(T val)
	{
		cout << "Adding to the List" << endl;
		node<T>* tempnode = new node<T>;
		tempnode->data = val;
		tempnode->next = LinkedList<T>::head;
		LinkedList<T>::head = tempnode;
	}
	void insertAtEnd(T val)
	{
		cout << "Adding to the List" << endl;
		node<T> *currnode = LinkedList<T>::head;
		//cout << "check 1" << endl;
		while (currnode->next !=NULL)
		{
			//cout << "check 2" << endl;
			currnode = currnode->next;
		}
		//cout << "check 3" << endl;
		node<T>* newnode = new node<T>;
		newnode->data = val;
		newnode->next = NULL;
		currnode->next = newnode;
		//cout << "check 4" << endl;

	}
	node<T>* insertAtPosition(int index,T val)
	{
		cout << "Adding to the List" << endl;
		if (index<0)//checks if value index is less than zero and returns NULL
		{
			return NULL;
		}
		int currindex = 1;
		node<T>* currnode = LinkedList<T>::head;;
		while (currnode && index>currindex)//Runs till the index given by the user
		{
			currnode = currnode->next;//moving to the next node
			currindex++;
		}
		if (index>0 && currnode==NULL)//if the index provided by user is more than the links(indexes/elements) in the list returns null
		{
			return NULL;
		}
		node<T>* newnode = new node<T>;//making a new node and adding data in it
		newnode->data = val;
		if (index==0)//adding new node at the start
		{
			newnode->next = LinkedList<T>::head;
			LinkedList<T>::head = newnode;
		}
		else//new node at any other position
		{
			newnode->next = currnode->next;
			currnode->next = newnode;
		}
		return newnode;
	}
	void insertSorted(T val)
	{
		cout << "Adding to the List" << endl;
		node<T>* currnode = LinkedList<T>::head;
		node<T> *newnode = new node<T>;
		node<T>* prevnode = LinkedList<T>::head;
		newnode->data = val;
		while (currnode && currnode->data<val)
		{
			prevnode = currnode;
			//cout<<currnode->data << endl;
			currnode = currnode->next;
		}
		newnode->next = prevnode->next;
		prevnode->next = newnode;
	}
	void removeFromFront()
	{
		cout << "Removing from the List" << endl;
		if (LinkedList<T>::head->next!=NULL)
		{
			LinkedList<T>::head = LinkedList<T>::head->next;
		}
		else
		{
			cout << "List is empty. Nothing to remove." << endl;
		}
	}
	void removeFromEnd()
	{
		if (LinkedList<T>::head !=NULL)
		{
			node<T>* currnode = LinkedList<T>::head;
			node<T>* prevnode = NULL;
			int currindex = 0;
			//cout << "check 1" << endl;
			while (currnode->next!= NULL)
			{
				prevnode = currnode;
				//cout << "check 2" << endl;
				currnode = currnode->next;
				currindex++;
			}
			cout << "Removing From end of the list." << endl;
			if (currindex==0)
			{
				LinkedList<T>::head = NULL;
			}
			else
			{
				prevnode->next = NULL;
			}
			
			//cout << "check 4" << endl;
		}
		else
		{
			cout << "List is empty nothing to remove" << endl;
		}
	}
	int removeFromPosition(T pos)
	{
		cout << "Removing from the List" << endl;
		node<T>* currnode = LinkedList<T>::head;
		node<T>* prevnode = NULL;
		int currindex = 1;
		while (currnode && pos!=currnode->data)
		{
			prevnode = currnode;
			currnode = currnode->next;
			currindex++;
		}
		if (currnode)
		{
			if (prevnode)
			{
				prevnode->next = currnode->next;
				delete currnode;
			}
			else
			{
				LinkedList<T>::head = currnode->next;
				delete currnode;
			}
			return currindex;
		}
		return 0;
	}
	void remove(T from, T to)
	{
		node<T>* currnode = LinkedList<T>::head;
		node<T>* fnode = NULL, * tnode = NULL;
		while (currnode && currnode->data!=from)
		{
			currnode = currnode->next;
		}
		fnode = currnode;
		while (currnode && currnode->data != to)
		{
			currnode = currnode->next;
		}
		tnode = currnode;
		fnode->next = tnode->next;
		currnode = fnode;
	}
	void printList()
	{
		int num = 0;
		node<T>* currNode = LinkedList<T>::head;
		while (currNode != NULL) {
			cout << currNode->data << endl;
			
			currNode = currNode->next;
			num++;
		}
		cout << "Number of nodes in the list: " << num << endl;

	}
	//This last Function is Task 2
	void reverseList()//Task 2
	{
		cout << "Reversing." << endl;
		node<T>* currnode = LinkedList<T>::head;
		node<T>* prevnode = NULL, * nextnode = NULL;
		while (currnode!=NULL)
		{
			nextnode = currnode->next;
			currnode->next = prevnode;
			prevnode = currnode;
			currnode = nextnode;
		}
		LinkedList<T>::head = prevnode;
	}
};


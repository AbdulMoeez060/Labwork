#pragma once
#include "LinkedList.h"
//Task 1 is the reverselist fuction at the end
template <class T>
class MyLinkedList : public LinkedList<T>
{
public:
	MyLinkedList() :LinkedList<T>() {}
	~MyLinkedList() {}
	
	
	
	void insertAscending(T val)//Task 5 graded task
	{
		//funtion to insert into the list iin ascending order
		//cout << "Adding to the List" << endl;
		node<T>* currnode = LinkedList<T>::head;
		node<T> *newnode = new node<T>;
		newnode->data = val;
		if (LinkedList<T>::head==NULL || LinkedList<T>::head->data>=val)
		{
			newnode->next = LinkedList<T>::head;
			LinkedList<T>::head = newnode;
		}
		else
		{
			while (currnode->next && currnode->next->data < val)
			{
				
				currnode = currnode->next;
			}
			
			newnode->next = currnode->next;
			currnode->next = newnode;
		}
		
	}
	void insertDescending(T val)//Task 6
	{
		//funtion to insert into the list iin descending order
		//cout << "Adding to the List" << endl;
		node<T>* currnode = LinkedList<T>::head;
		node<T>* newnode = new node<T>;
		newnode->data = val;
		if (LinkedList<T>::head == NULL || LinkedList<T>::head->data <= val)
		{
			newnode->next = LinkedList<T>::head;
			LinkedList<T>::head = newnode;
		}
		else
		{
			while (currnode->next && currnode->next->data > val)
			{

				currnode = currnode->next;
			}

			newnode->next = currnode->next;
			currnode->next = newnode;
		}

	}
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
		//cout << "Adding to the List" << endl;
		node<T>* tempnode = new node<T>;
		tempnode->data = val;
		tempnode->next = LinkedList<T>::head;
		LinkedList<T>::head = tempnode;
	}
	void insertAtEnd(T val)
	{
		//cout << "Adding to the List" << endl;
		node<T>* newnode = new node<T>;
		newnode->data = val;
		newnode->next = NULL;

		node<T>* currnode = LinkedList<T>::head;
		if (!currnode)
		{
			LinkedList<T>::head = newnode;
		}
		else
		{
			while (currnode->next != NULL)
			{
				currnode = currnode->next;
			}

			currnode->next = newnode;
		}

		//cout << "check 4" << endl;

	}
	node<T>* insertAtPosition(int index, T val)
	{
		cout << "Adding to the List" << endl;
		if (index < 0)//checks if value index is less than zero and returns NULL
		{
			return NULL;
		}
		int currindex = 1;
		node<T>* currnode = LinkedList<T>::head;;
		while (currnode && index > currindex)//Runs till the index given by the user
		{
			currnode = currnode->next;//moving to the next node
			currindex++;
		}
		if (index > 0 && currnode == NULL)//if the index provided by user is more than the links(indexes/elements) in the list returns null
		{
			return NULL;
		}
		node<T>* newnode = new node<T>;//making a new node and adding data in it
		newnode->data = val;
		if (index == 0)//adding new node at the start
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
	
	void printList()
	{
		cout << "Printing List" << endl;
		int num = 0;
		node<T>* currNode = LinkedList<T>::head;
		while (currNode != NULL) {
			cout << currNode->data << " ";
			
			currNode = currNode->next;
			num++;
		}
		cout << endl;
		cout << "Number of nodes in the list: " << num << endl;

	}
	//Task 1
	node<T>* reverseList(node<T>* hnode)
	{
		
		if (hnode ==NULL || hnode->next == NULL)
		{
			return hnode;
		}
		
		node<T>* tempnode = reverseList(hnode->next);
		hnode->next->next = hnode;
		hnode->next = NULL;
		LinkedList<T>::head = tempnode;
		return tempnode;
	}
};


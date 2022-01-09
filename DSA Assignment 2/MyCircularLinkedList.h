#pragma once
#include "CircularLinkedList.h"

template<class T>
class MyCircularLinkedList : public CircularLinkedList<T>
{
public:
	MyCircularLinkedList() :CircularLinkedList<T>(){}
	~MyCircularLinkedList() { }
	void insertFirstNode(T val)
	{
		Node<T>* newnode = new Node<T>;
		newnode->data = val;
		if (CircularLinkedList<T>::tail==NULL)//Checks if list is empty
		{
			cout << "Adding Value:" << endl;
			CircularLinkedList<T>::tail = newnode;//adds valus in the first place/node/index
			newnode->next = CircularLinkedList<T>::tail;//circles the new node back to tail

		}
		else
		{
			cout << "Adding Value:" << endl;
			//This is in the case the are already some values in the list
			newnode->next = CircularLinkedList<T>::tail->next;//connects to the the previous first node 
			CircularLinkedList<T>::tail->next = newnode;//adds new node as new first node
		}
	}
	void insertAtTail(T val)
	{
		Node<T>* newnode = new Node<T>;
		newnode->data = val;
		if (CircularLinkedList<T>::tail == NULL)//Same as previous function this works in case list is empty
		{
			cout << "Adding Value:" << endl;
			CircularLinkedList<T>::tail = newnode;
			newnode->next = CircularLinkedList<T>::tail;

		}
		else
		{
			cout << "Adding Value:" << endl;

			newnode->next = CircularLinkedList<T>::tail->next;
			CircularLinkedList<T>::tail->next = newnode;
			CircularLinkedList<T>::tail = CircularLinkedList<T>::tail->next;//moves tail ahead to point to first node
		}
	}
	bool search(T val)
	{
		Node<T>* currnode = CircularLinkedList<T>::tail->next;
		if (currnode == NULL)
		{
			cout << "List is Empty" << endl;
			return false;
		}
		else
		{
			do
			{
				if (currnode->data==val)
				{
					return true;
				}
				currnode = currnode->next;
			} while (currnode != CircularLinkedList<T>::tail->next);//using do while beacause loop must iterate one time as its point to tail-> next in first place
		}
		return false;
	}
	int searchPositionOfValue(T val)
	{
		Node<T>* currnode = CircularLinkedList<T>::tail->next;
		int index = 0;
		if (currnode == NULL)
		{
			cout << "List is Empty" << endl;
			return -1;
		}
		else
		{
			do
			{
				if (currnode->data == val)
				{
					return index;
				}
				currnode = currnode->next;
				index++;
			} while (currnode != CircularLinkedList<T>::tail->next);//using do while beacause loop must iterate one time as its point to tail-> next in first place
		}
		return -1;
	}
	bool deleteAValue(T val)
	{
		if (CircularLinkedList<T>::tail==NULL)
		{
			cout << "List is empty" << endl;
			return 0;
		}
		Node<T>* currnode = CircularLinkedList<T>::tail->next;
		if (CircularLinkedList<T>::tail->next== CircularLinkedList<T>::tail && CircularLinkedList<T>::tail->data==val)
		{//checks if there is only one value in list or data in tail is same as value 
			free(CircularLinkedList<T>::tail);//deletes or frees tail
			CircularLinkedList<T>::tail = NULL;
			return 1;
		}
		while (currnode->next!= CircularLinkedList<T>::tail && currnode->next->data!=val)
		{//iterates till the previous node from value
			currnode = currnode->next;
		}
		Node<T>* temp = currnode->next;//temp node as a place holder for deleting node
		currnode->next = temp->next;//disconnecting the deleting node
		if (temp== CircularLinkedList<T>::tail)
		{
			CircularLinkedList<T>::tail = currnode;
		}
		free(temp);// iam using free() instead of delete as it was showing an error
		temp = NULL;
		return 1;
	}
	bool deleteFromTail()
	{
		if (CircularLinkedList<T>::tail == NULL)
		{
			cout << "List is empty" << endl;
			return 0;
		}
		Node<T>* currnode = CircularLinkedList<T>::tail->next;
		if (CircularLinkedList<T>::tail->next == CircularLinkedList<T>::tail)//checks if there is only one value in list 
		{
			free(CircularLinkedList<T>::tail);//if it is the it deletes/frees the tail where the value us store
			CircularLinkedList<T>::tail = NULL;
			return 1;
		}
		while (currnode->next!=CircularLinkedList<T>::tail)//Travels till last node
		{
			currnode = currnode->next;
		}
		currnode->next = CircularLinkedList<T>::tail->next;//connects to the first node
		free(CircularLinkedList<T>::tail);
		CircularLinkedList<T>::tail = currnode;
		return 1;
	}
	bool deleteFirstNode()
	{
		if (CircularLinkedList<T>::tail == NULL)
		{
			cout << "List is empty" << endl;
			return 0;
		}
		if (CircularLinkedList<T>::tail->next == CircularLinkedList<T>::tail)//checks if there is only one value in list 
		{
			free(CircularLinkedList<T>::tail);//if it is the it deletes/frees the tail where the value us store
			CircularLinkedList<T>::tail = NULL;
			return 1;
		}
		Node<T>* currnode = CircularLinkedList<T>::tail->next;
		CircularLinkedList<T>::tail->next = currnode->next;
		free(currnode);
		currnode = NULL;
		return 1;
	}
	void sortCircularListInAscendingOrder()
	{
		if (CircularLinkedList<T>::tail == NULL)
		{
			cout << "List is empty" << endl;
			return;
		}
		Node<T>* currnode = CircularLinkedList<T>::tail->next, * index = NULL;
		while (currnode != CircularLinkedList<T>::tail)
		{
			index = currnode->next;
			while (index!= CircularLinkedList<T>::tail->next)
			{
				if (currnode->data>index->data)
				{
					T temp;
					temp = currnode->data;
					currnode->data = index->data;
					index->data = temp;
				}
				index = index->next;
			}
			currnode = currnode->next;

		}

	}
	void sortCircularListInDescendingOrder()
	{
		if (CircularLinkedList<T>::tail == NULL)
		{
			cout << "List is empty" << endl;
			return;
		}
		Node<T>* currnode = CircularLinkedList<T>::tail->next, * index = NULL;
		while (currnode != CircularLinkedList<T>::tail)
		{
			index = currnode->next;
			while (index != CircularLinkedList<T>::tail->next)
			{
				if (currnode->data < index->data)
				{
					T temp;
					temp = currnode->data;
					currnode->data = index->data;
					index->data = temp;
				}
				index = index->next;
			}
			currnode = currnode->next;

		}
	}
	void print()
	{
		Node<T>* currnode = CircularLinkedList<T>::tail->next;
		int num = 0;
		if (currnode==NULL)
		{
			cout << "List is Empty" << endl;
		}
		else
		{
			cout << "List:" << endl;
			do
			{
				cout << currnode->data << endl;
				currnode = currnode->next;
				num++;
			} while (currnode != CircularLinkedList<T>::tail->next);//using do while beacause loop must iterate one time as its point to tail-> next in first place
			cout << "The length of Circular linked list is " << num << endl;
		}
	}
	void destroyCircularLinkedList()
	{
		Node < T>* currnode = CircularLinkedList<T>::tail->next, * nextnode = NULL;
		while (currnode != CircularLinkedList<T>::tail)
		{
			nextnode = currnode->next;
			delete currnode;
			currnode = NULL;
			currnode = nextnode;
		}
		//cout << "Linked List Destroyed" << endl;
	}
};


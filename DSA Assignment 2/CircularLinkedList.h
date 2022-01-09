#pragma once
#include<iostream>
using namespace std;

template <class T>
class Node {
public:
	T data;
	Node* next=NULL;
	~Node()
	{
		delete next;
	}
};
template <class T>
class CircularLinkedList
{

protected:
	Node<T>* tail;

public:
	CircularLinkedList()//Default costructor
	{
		tail == NULL;
	}
	~CircularLinkedList()//Destructor
	{
		Node < T>* currnode = tail->next,* nextnode = NULL;
		while (currnode!=tail)
		{
			nextnode = currnode->next;
			free( currnode);
			currnode = NULL;
			currnode = nextnode;
		}
		//cout << "Dectructor" << endl;
	}
	//All Folowing are implemented in MyCircularLinkedList.h
	virtual void insertAtTail(T) = 0;

	virtual void insertFirstNode(T) = 0; 	//similar to insertAtHead

	virtual bool search(T) = 0;

	virtual int searchPositionOfValue(T) = 0; 	//return position of 
//Node where value is //present or return 
//-1 if value is not //present in List

	virtual bool deleteAValue(T) = 0;

	virtual bool deleteFromTail() = 0;

	virtual bool deleteFirstNode() = 0;

	virtual void sortCircularListInAscendingOrder() = 0;

	virtual void sortCircularListInDescendingOrder() = 0;

	virtual void print() = 0;

	virtual void destroyCircularLinkedList() = 0;

};



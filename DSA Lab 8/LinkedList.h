#pragma once
#include<iostream>
#include<stack>
using namespace std;
//All tasks Are in  file MyLinkedList.h and are all labeled and number from task 1 to 6
template<class T>
class node {
public:
	T data;
	node* next=NULL;
	~node()
	{
		delete next;
	}
};
template<class T>
class LinkedList
{
protected:
	node<T>* head;
public:
	LinkedList() {
		head = NULL;
	}
	~LinkedList()
	{
		node<T>* currNode = head, * nextNode = NULL;
		while (currNode != NULL)
		{
			nextNode = currNode->next;
			// destroy the current node
			delete currNode;
			currNode = nextNode;
		}
	}
	//virtual T getHead() = 0; //Returns the value of the first node in the linked list.
	//virtual T getTail() = 0; //Returns the value of the last node in the linked list.
	virtual void insertAtFront(T) = 0; //Adds a new node with the given value at the beginning of the linked list.

};


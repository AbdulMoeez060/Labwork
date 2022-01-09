#pragma once
#include<iostream>
using namespace std;
//Task 1
template<class T>
class Node {
public:
	T data;
	Node* next = NULL;
	~Node()
	{
		delete next;
	}
};
template<class T>
class LinkedList
{
protected:
	Node<T>* head;

public:
	LinkedList()
	{
		head = NULL;
	}
	

	virtual void insertAtEnd(T) = 0;
	virtual T deleteFromHead() = 0;
	virtual bool isEmpty() = 0;
	virtual void display() = 0;

};




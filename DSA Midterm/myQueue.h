#pragma once
#include "Queue.h"
//Task 2
template<class T>
class myQueue : public Queue<T>
{
public:
	bool isEmpty()
	{
		return Queue<T>::obj.isEmpty();
	}
	void enqueue(T val)
	{
		Queue<T>::obj.insertAtEnd(val);
	}
	T dequeue()
	{
		return Queue<T>::obj.deleteFromHead();
	}
	void display()
	{
		Queue<T>::obj.display();
	}
	int size()
	{
		return Queue<T>::obj.size();
	}
};


#pragma once
#include"myLL.h"
//Task 2
template<class T>
class Queue
{
protected:
	myLL<T> obj;
public:
	virtual bool isEmpty() = 0;
	virtual void enqueue(T) = 0;
	virtual T dequeue() = 0;
	virtual void display() = 0;
};



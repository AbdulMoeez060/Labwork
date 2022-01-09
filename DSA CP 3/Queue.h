#pragma once
#include<iostream>
using namespace std;

template<class T>
class Queue
{
protected:
	T* arr;
	int maxSize;
	int front,rear;
public:
	Queue(int size = 10)
	{
		maxSize = size;
		front = -1;
		rear = -1;
		this->arr = new T[maxSize];
	}
	
	
	~Queue()
	{
		delete[] arr;
	}
	virtual void enqueue(T val) = 0;
	virtual T dequeue() = 0;
	virtual void display() = 0;
};


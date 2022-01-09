#pragma once
#include<iostream>
using namespace std;

template<class T>
class QueueADT
{
protected:
	T* arr;
	int maxSize;
	int currentSize;
	int front,rear;
public:
	QueueADT(int size = 10)
	{
		maxSize = size;
		front = -1;
		currentSize=0;
		rear = -1;
		this->arr = new T[maxSize];
	}
	QueueADT(const QueueADT& obj)
	{
		maxSize = obj.maxSize;
		front = obj.front;
		currentSize = obj.currentSize;
		rear = obj.rear;
		this->arr = new T[maxSize];
		int i = front;
		if (front == -1 && rear == -1)
		{
			//queue empty;
		}
		else
		{
			while (i != rear)
			{
				this->arr[i]=obj.arr[i];
				i = (i + 1) % maxSize;
			}
			this->arr[rear]=obj.arr[rear];
		}
	}
	~QueueADT()
	{
		delete[] arr;
	}
	virtual void insertElement(T val) = 0;
	virtual T removeElement() = 0;
	virtual void DisplayCQ() = 0;
};


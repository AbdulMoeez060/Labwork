#pragma once
#include "Queue.h"

template<class T>
class CircularQueue :public Queue<T>
{
public:
	CircularQueue(int size = 10) :Queue<T>(size) {}
	~CircularQueue(){}
	bool isEmpty()
	{
		return (Queue<T>::front == -1 && Queue<T>::rear == -1);
	}
	bool isFull()
	{
		return ((Queue<T>::front == 0 && Queue<T>::rear == Queue<T>::maxSize - 1) || (Queue<T>::rear + 1) % Queue<T>::maxSize == Queue<T>::front);
	}
	void enqueue(T val)
	{
		if (isEmpty())
		{
			Queue<T>::front = Queue<T>::rear = 0;
			cout << "Adding " << val << " at index " << Queue<T>::rear << endl;
			Queue<T>::arr[Queue<T>::rear] = val;
		}
		else if (isFull())
		{
			cout << "Queue is full. Cannot add " << val << endl;
		}
		else
		{
			Queue<T>::rear = (Queue<T>::rear + 1) % Queue<T>::maxSize;
			cout << "Adding " << val << " at index " << Queue<T>::rear << endl;
			Queue<T>::arr[Queue<T>::rear] = val;
		}
	}
	T dequeue()
	{
		
		if (isEmpty())
		{
			cout << "Queue is Empty so cannot dequeue. Returning 0" << endl;
			return 0;
		}
		else if (Queue<T>::rear== Queue<T>::front)
		{
			T x;
			x = Queue<T>::arr[Queue<T>::rear];
			Queue<T>::rear = Queue<T>::front = -1;
			cout << "Dequeueing " << x << " from queue." << endl;
			return x;
		}
		else 
		{
			T x;
			x = Queue<T>::arr[Queue<T>::rear];
			Queue<T>::front = (Queue<T>::front + 1) % Queue<T>::maxSize;
			cout << "Dequeueing " << x << " from queue." << endl;
			return x;
		}
		
	}
	void display()
	{
		int i = Queue<T>::front;
		cout << "Max Size: " << Queue<T>::maxSize << endl;
		cout << "Front: " << Queue<T>::front << endl;
		cout << "Rear: " << Queue<T>::rear << endl;
		if (isEmpty())
		{
			cout << "Queue is empty nothing to display." << endl;
		}
		else
		{
			cout << "Queue: ";
			while (i!= Queue<T>::rear)
			{
				cout << Queue<T>::arr[i] << " ";
				i = (i+1) % Queue<T>::maxSize;
			}
			cout << Queue<T>::arr[Queue<T>::rear];
			cout << endl;
		}
	}
};


#pragma once
#include "QueueADT.h"

template<class T>
class Queue :public QueueADT<T>
{
public:
	Queue(int size = 10) :QueueADT<T>(size) {}
	Queue(T* a, int ms = 10, int cs = 0):QueueADT<T>(a,ms,cs){}
	Queue(const Queue<T>& obj) :QueueADT<T>(obj) {}
	~Queue() {}
	bool isEmpty()
	{
		return (QueueADT<T>::currentSize == 0);
	}
	bool isFull()
	{
		return (QueueADT<T>::currentSize == QueueADT<T>::maxSize);
	}
	T front()
	{
		return QueueADT<T>::arr[0];
	}
	int size()
	{
		return QueueADT<T>::currentSize;
	}
	bool insertElement(T val)
	{
		if (isFull())
		{
			cout << "Queue is Full cannot add " << val << "." << endl;
			return 0;
		}
		//cout << "Adding " << val << " to queue." << endl;
		QueueADT<T>::arr[QueueADT<T>::currentSize] = val;
		QueueADT<T>::currentSize++;
		return 1;
	}
	T removeElement()
	{
		if (isEmpty())
		{
			cout << "Queue is empty cannot remove value." << endl;
			return 0;
		}
		else
		{
			T temp = QueueADT<T>::arr[0];
			//cout << "Removing " << QueueADT<T>::arr[0] << " from queue." << endl;
			for (int i = 0; i < QueueADT<T>::currentSize; i++)
			{
				QueueADT<T>::arr[i] = QueueADT<T>::arr[i + 1];
			}
			QueueADT<T>::currentSize--;
			return temp;
		}
	}
	void enqueue(T val)
	{
		insertElement(val);
	}
	T dequeue()
	{
		return removeElement();
	}
	void display()
	{
		cout << "Max Size: " << QueueADT<T>::maxSize << endl;
		cout << "Rear/Current Size: " << QueueADT<T>::currentSize << endl;
		for (int i = 0; i < QueueADT<T>::currentSize; i++)
		{
			cout << "Queue[" << i << "]: " << QueueADT<T>::arr[i] << endl;
		}
	}
};


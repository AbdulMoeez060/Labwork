#pragma once
#include "QueueADT.h"

template<class T>
class CircularQueue :public QueueADT<T>
{
public:
	CircularQueue(int size = 10) :QueueADT<T>(size) {}
	CircularQueue(const CircularQueue<T>& obj) :QueueADT<T>(obj) {}
	~CircularQueue(){}
	bool isEmpty()
	{
		return (QueueADT<T>::front == -1 && QueueADT<T>::rear == -1);
	}
	bool isFull()
	{
		return ((QueueADT<T>::front == 0 && QueueADT<T>::rear == QueueADT<T>::maxSize - 1) || (QueueADT<T>::rear + 1) % QueueADT<T>::maxSize == QueueADT<T>::front);
	}
	int size()
	{
		return QueueADT<T>::currentSize;
	}
	int maxSize()
	{
		return QueueADT<T>::maxSize;
	}
	T front()//the time complexity is O(1) as there is only one function being performed and there is no loop
	{
		return QueueADT<T>::arr[QueueADT<T>::front];
	}
	void insertElement(T val)//the time complexity is O(1) as there is no loop
	{
		if (isEmpty())
		{
			QueueADT<T>::front = QueueADT<T>::rear = 0;
			cout << "Adding " << val << " at index " << QueueADT<T>::rear << endl;
			QueueADT<T>::arr[QueueADT<T>::rear] = val;
			QueueADT<T>::currentSize++;
		}
		else if (isFull())
		{
			cout << "Queue is full. Cannot add " << val << endl;
		}
		else
		{
			QueueADT<T>::rear = (QueueADT<T>::rear + 1) % QueueADT<T>::maxSize;
			cout << "Adding " << val << " at index " << QueueADT<T>::rear << endl;
			QueueADT<T>::arr[QueueADT<T>::rear] = val;
			QueueADT<T>::currentSize++;
		}
	}
	T removeElement()//the time complexity is O(1) as there is no loop
	{
		if (isEmpty())
		{
			cout << "Queue is Empty so cannot dequeue. Returning 0" << endl;
			return 0;
		}
		else if (QueueADT<T>::rear == QueueADT<T>::front)
		{
			T x;
			x = QueueADT<T>::arr[QueueADT<T>::front];
			QueueADT<T>::rear = QueueADT<T>::front = -1;
			cout << "Dequeueing " << x << " from queue." << endl;
			QueueADT<T>::currentSize--;
			return x;
		}
		else
		{
			T x;
			x = QueueADT<T>::arr[QueueADT<T>::front];
			QueueADT<T>::front = (QueueADT<T>::front + 1) % QueueADT<T>::maxSize;
			cout << "Dequeueing " << x << " from queue." << endl;
			QueueADT<T>::currentSize--;
			return x;
		}
	}
	void enqueue(T val)//the time complexity is O(1) as there is only one function being performed and there is no loop
	{
		insertElement(val);
		/*if (isEmpty())
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
		}*/
	}
	T dequeue()//the time complexity is O(1) as there is only one function being performed and there is no loop
	{
		return removeElement();
		/*if (isEmpty())
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
		}*/
		
	}
	void DisplayCQ()
	{
		int i = QueueADT<T>::front;
		cout << "Max Size: " << QueueADT<T>::maxSize << endl;
		cout << "Current Size: " << QueueADT<T>::currentSize << endl;
		cout << "Front: " << QueueADT<T>::front << endl;
		cout << "Rear: " << QueueADT<T>::rear << endl;

		if (isEmpty())
		{
			cout << "Queue is empty nothing to display." << endl;
		}
		else
		{
			cout << "Queue: ";
			while (i!= QueueADT<T>::rear)
			{
				cout << QueueADT<T>::arr[i] << " ";
				i = (i+1) % QueueADT<T>::maxSize;
			}
			cout << QueueADT<T>::arr[QueueADT<T>::rear];
			cout << endl;
		}
	}
};


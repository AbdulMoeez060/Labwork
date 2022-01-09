#pragma once
#include "Array.h"

template<class T>
class MyArray :public Array<T>
{
public:
	MyArray(int size)
	{
		Array<T>::capacity = size;
		Array<T>::arr = new T[Array<T>::capacity];
		Array<T>::rear = -1;
		Array<T>::front = 0;
		Array<T>::count = 0;
	}
	void insert(T val)
	{
		if (isFull())
		{
			cout << "Array is already full." << endl;


		}
		cout << "Adding " << val << endl;
		Array<T>::rear++;
		Array<T>::arr[Array<T>::rear] = val;
		Array<T>::count++;
	}
	void delete1()
	{
		if (isEmpty())
		{
			cout << "Array is empty." << endl;
			EXIT_FAILURE;
		}
		cout << "Deleting " << Array<T>::arr[Array<T>::rear] << " from end." << endl;
		Array<T>::rear--;
		Array<T>::count--;
	}
	void delete2()
	{
		if (isEmpty())
		{
			cout << "Array is empty." << endl;
			EXIT_FAILURE;
		}
		cout << "Deleting " << Array<T>::arr[Array<T>::front] << " from front." << endl;
		Array<T>::front++;
		Array<T>::count--;
	}
	T last()
	{
		if (!isEmpty())
		{
			return (Array<T>::arr[Array<T>::rear]);
		}
		else
		{
			cout << "Array is empty." << endl;
			return 0;
		}
	}
	int size()
	{
		return Array<T>::count;
	}
	bool isEmpty()
	{
		return (size() == 0);
	}
	bool isFull()
	{
		return (size() == Array<T>::capacity);
	}
	void display()
	{
		cout << "Size: " << MyArray<T>::capacity << endl;
		cout << "No of indexes filled: " << MyArray<T>::count << endl;
		cout << "Rear: " << MyArray<T>::rear << endl;
		cout << "Front: " << MyArray<T>::front << endl;
		for (int i = MyArray<T>::front; i <= MyArray<T>::rear; i++)
		{
			cout << "Array[" << i << "]: ";
			cout << MyArray<T>::arr[i] << endl;
		}
	}
};


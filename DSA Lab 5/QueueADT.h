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
public:
	QueueADT(int size = 10)
	{
		maxSize = size;
		currentSize = 0;
		this->arr = new T[maxSize];
	}
	QueueADT(T* a, int ms = 10, int cs = 0)
	{
		maxSize = ms;
		currentSize = cs;
		arr = new T[maxSize];
		for (int i = 0; i < currentSize; i++)
		{
			arr[i] = a[i];
		}
	}
	QueueADT(const QueueADT<T>& obj)
	{
		maxSize = obj.maxSize;
		currentSize = obj.currentSize;
		this->arr = new T[maxSize];
		for (int i = 0; i < currentSize; i++)
		{
			this->arr[i] = obj.arr[i];
		}
	}
	~QueueADT()
	{
		delete[] arr;
	}
	virtual bool insertElement(T val) = 0;
	virtual T removeElement() = 0;

};


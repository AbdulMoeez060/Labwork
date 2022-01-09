#pragma once
#include<iostream>
using namespace std;

template<class T>
class List
{
protected:
	T* arr;
	int maxSize;
	int currentSize;
public:
	List(int size = 10)
	{
		maxSize = size;
		currentSize = 0;
		this->arr = new T[maxSize];
	}
	List(T* a, int ms = 10, int cs = 0)
	{
		maxSize = ms;
		currentSize = cs;
		this->arr = new T[maxSize];
		for (int i = 0; i < currentSize; i++)
		{
			this->arr[i] = a[i];
		}
	}
	List(const List<T>& obj)
	{
		maxSize = obj.maxSize;
		currentSize = obj.currentSize;
		this->arr = new T[maxSize];
		for (int i = 0; i < currentSize; i++)
		{
			this->arr[i] = obj.arr[i];
		}
	}
	~List()
	{
		delete[] arr;
	}
	virtual void addElement(T val) = 0;
	virtual T removeElement() = 0;
	

};


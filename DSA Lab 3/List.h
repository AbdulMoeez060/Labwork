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
	int start;
public:
	List(int size=10)
	{
		maxSize = size;
		currentSize = 0;
		start = 0;
		this->arr = new T[maxSize];
	}
	List(T* a, int ms = 10, int cs = 0,int s=0)
	{
		maxSize = ms;
		currentSize = cs;
		start = s;
		this->arr = new T[maxSize];
		for (int i = start; i < currentSize; i++)
		{
			this->arr[i] = a[i];
		}
	}
	List(const List<T>& obj)
	{
		maxSize = obj.maxSize;
		currentSize = obj.currentSize;
		start = obj.start;
		this->arr = new T[maxSize];
		for (int i = start; i < currentSize; i++)
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
protected:
	void regrow()
	{
		T* temp=new T[maxSize + 1];
		for (int i = start; i < currentSize; i++)
		{
			temp[i] = arr[i];
		}
		cout << endl;
		delete[] arr;
		maxSize += 1;
		arr = temp;
	}
};


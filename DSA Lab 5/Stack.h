#pragma once
#include "List.h"

template<class T>
class Stack :public List<T>
{
public:
	Stack(int size = 10) :List<T>(size) {}
	Stack(T* arr, int ms = 10, int cs = 0, int s = 0) :List<T>(arr, ms, cs, s) {}
	Stack(const Stack& obj) :List<T>(obj) {}
	~Stack() {}
	int size()
	{
		return List<T>::currentSize;
	}
	bool empty()
	{
		return (size() == 0);
	}
	bool full()
	{
		return (size() == List<T>::maxSize);
	}
	T top()
	{
		return List<T>::arr[List<T>::currentSize - 1];
	}
	T operator[](int index)
	{
		if (index >= List<T>::maxSize)
		{
			cout << "Wrong Index. Returning 0." << endl;
			return 0;
		}
		else if (index < 0)
		{
			cout << "Wrong Index. Returning 0." << endl;
			return 0;
		}
		return List<T>::arr[index];
	}
	void addElement(T val)
	{
		if (full())
		{
			cout << "List is Full, Cannot add " << val << " to the Stack. " << endl;
		}
		else {
			//cout << "Adding " << val << " to the Stack." << endl;
			List<T>::arr[List<T>::currentSize] = val;
			List<T>::currentSize++;
		}
	}
	T removeElement()
	{
		if (empty())
		{
			cout << "Stack is empty. So element can't be removed." << endl;
			return 0;
		}
		//cout << "Removing " << List<T>::arr[List<T>::currentSize - 1] << " from the Stack." << endl;
		List<T>::currentSize--;
		return List<T>::arr[List<T>::currentSize];
	}
	void push(T val)
	{
		addElement(val);
	}
	T pop()
	{
		return removeElement();
	}
	void display()
	{
		
		for (int i = 0; i < List<T>::currentSize; i++)
		{
			cout << "X[" << i << "]: " << List<T>::arr[i] << endl;
		}
	}
};


#pragma once
#include "List.h"

template<class T>
class MyList :public List<T>
{
public:
	MyList(int size = 10) :List<T>(size) {}
	MyList(T* arr, int ms = 10, int cs = 0,int s=0) :List<T>(arr, ms, cs,s) {}
	MyList(const MyList& obj) :List<T>(obj) {}
	~MyList() {}
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
	T last()
	{
		return List<T>::arr[List<T>::currentSize-1];
	}
	T operator[](int index)
	{
		if (index>= List<T>::maxSize)
		{
			cout << "Wrong Index. Returning 0." << endl;
			return 0;
		}
		else if (index<0)
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
			cout << "List is Full, Cannot add " << val << " to the list. So resizing the list." << endl;
			List<T>::regrow();
		}
		
		cout << "Adding " << val << " to the list." << endl;
		List<T>::arr[List<T>::currentSize] = val;
		List<T>::currentSize++;
		
	}
	T removeElement()
	{
		if (empty())
		{
			cout << "List is empty. So element can't be removed." << endl;
			return 0;
		}
		cout << "Removing " << List<T>::arr[List<T>::currentSize - 1] << " from the list." << endl;
		List<T>::currentSize--;
		return List<T>::arr[List<T>::currentSize];
	}
	void insertAtStart(T val)
	{
		if (List<T>::start>0)
		{
			cout << "Adding " << val << " To the start of list." << endl;
			List<T>::arr[List<T>::start - 1] = val;
			List<T>::start -= 1;
		}
		else
		{
			cout << "The start of the list already has values Please remove them first." << endl;
		}
	}
	void removeFromStart()
	{
		if (List<T>::start== List<T>::currentSize)
		{
			cout << "List is empty Cannot remove from start." << endl;
		}
		else
		{
			cout << "Removing " << List<T>::arr[List<T>::start] << " from the list." << endl;
			List<T>::start++;
		}
	}
	T rear()
	{
		return List<T>::start;
	}
	void display()
	{
		cout << "Start: " << List<T>::start << endl;
		cout << "Current Index: " << List<T>::currentSize << endl;
		cout << "Max Size: " << List<T>::maxSize << endl;
		for (int i = List<T>::start; i < List<T>::currentSize; i++)
		{
			cout << "List[" << i << "]: " << List<T>::arr[i] << endl;
		}
	}
};


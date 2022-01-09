#pragma once
#include<iostream>
using namespace std;

template<typename T>
class Stack
{
private:
	T* arr = nullptr;
	int size;
	int currLoc = 0;
public:
	Stack()
	{
		size = 10;
		arr = new T[size];
	}
	Stack(int s)
	{
		size = s;
		arr = new T[size];
	}
	~Stack()
	{
		delete[] arr;
	}
	bool isEmpty()
	{
		if (currLoc == 0)
		{
			cout << "Stack is Empty.." << endl;
			return 1;
		}
		return 0;
	}
	bool isFull()
	{
		if (currLoc == size)
		{
			cout << "Stack Full." << endl;
			return 1;
		}
		return 0;
	}
	void push(T x)
	{
		if (!isFull())
		{
			arr[currLoc] = x;
			currLoc++;
		}
		else
		{
			cout << "Error Stack Full.." << endl;
		}
	}
	T pop()
	{
		if (isEmpty())
		{
			cout << "Stack Empty." << endl;
			return 0;
		}
		T x = arr[currLoc - 1];
		currLoc -= 1;
		return x;
	}
	T getTop()
	{
		if (isEmpty())
		{
			cout << "Stack Empty." << endl;
			return 0;
		}
		return arr[currLoc - 1];
	}
	void displayStack()
	{
		cout << "Stack: ";
		for (int i = 0; i < currLoc; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};


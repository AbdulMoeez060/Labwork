#pragma once
#include<iostream>
using namespace std;

class Stack
{
private:
	int* arr=nullptr;
	int size;
	int currLoc=0;
public:
	Stack()
	{
		size = 10;
		arr = new int[size];
	}
	Stack(int s)
	{
		size = s;
		arr = new int[size];
	}
	~Stack()
	{
		delete[] arr;
	}
	bool isEmpty()
	{
		if (currLoc==0)
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
	void push(int num)
	{
		if (!isFull())
		{
			arr[currLoc] = num;
			currLoc++;
		}
		else
		{
			cout << "Error Stack Full.." << endl;
		}
	}
	int pop()
	{
		if (isEmpty())
		{
			cout << "Stack Empty." << endl;
			return 0;
		}
		int x = arr[currLoc - 1];
		currLoc -= 1;
		return x;
	}
	int getTop()
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


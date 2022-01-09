#pragma once
#include<iostream>
using namespace std;

class Queue
{
	int* arr = nullptr;
	int rear = -1;
	int front = -1;
	int currLoc = 0;
	int size;
public:
	Queue()
	{
		size = 10;
		arr = new int[size];
		front = 0;
	}
	Queue(int s)
	{
		size = s;
		arr = new int[size];
		front = 0;
	}
	~Queue()
	{
		delete[] arr;
	}
	bool isEmpty()
	{
		if (currLoc==0)
		{
			return 1;
		}
		return 0;
	}
	bool isFull()
	{
		if (currLoc==size)
		{
			return 1;
		}
		return 0;
	}
	void EnQueue(int n)
	{
		if (!isFull())
		{
			arr[rear + 1] = n;
			rear += 1;
			currLoc++;
		}
		else
		{
			cout << "Error: Queue Full." << endl;
		}
	}
	int DeQueue()
	{
		if (isEmpty())
		{
			cout << "Queue Empty." << endl;
			return 0;
		}
		int x = arr[front];
		front += 1;
		currLoc--;
		return x;
	}
	void displayQueue()
	{
		cout << "Queue: ";
		for (int i = front; i <= rear ; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};


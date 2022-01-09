//#pragma once
#include "Stack.h"

template<class T>
class MyStack : public Stack<T>
{
public:
	MyStack(int s)
	{
		Stack<T>::top = -1;
		Stack<T>::size = s;
		Stack<T>::arr = new T[Stack<T>::size];
	}
	bool isEmpty()
	{
		return (Stack<T>::top == -1);//returns 1 if top is -1 meaning stack is empty.
	}
	bool isFull()
	{
		return (Stack<T>::top + 1 == Stack<T>::size);
	}
	void push(T val)
	{
		if (!isFull())//(not)isFull() push if stack is not full.
		{
			cout << "Pushing " << val << " into the stack." << endl;
			Stack<T>::top++;
			Stack<T>::arr[Stack<T>::top] = val;
		}
		else
		{
			cout << "Stack is full can't push " << val << " into it." << endl;
		}
	}
	T pop()
	{
		if (!isEmpty())//(not)isEmpty() pop if stack is not empty.
		{
			
			cout << "Poping " << Stack<T>::arr[Stack<T>::top] << " out of stack." << endl;
			Stack<T>::top--;
			return Stack<T>::arr[Stack<T>::top + 1];
		}
		else
		{
			cout << "Stack is empty, there are no elements to be poped." << endl;
			return 0;
		}
	}
	void display()
	{
		cout << "Size of stack: " << Stack<T>::size << endl;
		cout << "Top of the stack: " << Stack<T>::top << endl;
		cout << "Stack: " << endl;
		for (int i = Stack<T>::top; i >= 0; i--)
		{
			cout << "Stack[" << i << "]: " << Stack<T>::arr[i] << endl;
		}
	}
};


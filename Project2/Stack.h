//#pragma once
#include<iostream>
using namespace std;

template<class T>
class Stack
{
protected:
	T* arr;
	int size;
	int top;
public:
	virtual void push(T val) = 0;
	virtual T pop() = 0;
	virtual void display() = 0;
};


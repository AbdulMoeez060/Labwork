#pragma once
#include<iostream>
using namespace std;

template<class T>
class Array
{
protected:
	T* arr;
	int capacity;
	int front, rear;
	int count;
public:
	virtual void insert(T) = 0;
	virtual void delete1() = 0;
	virtual void delete2() = 0;
};


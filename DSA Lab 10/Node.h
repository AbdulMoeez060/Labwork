#pragma once
#include<iostream>
using namespace std;

template<class T>
class Node {
public:
	T data;
	Node* next = NULL;
	~Node()
	{
		delete next;
	}
};

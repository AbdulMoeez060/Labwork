#pragma once
#include<iostream>
using namespace std;

template<class T>
class node {
public:
	node<T>* left ;
	node<T>* right ;
	T key;
};
template<class T>
class BST
{
protected:
	node<T>* root;
public:
	BST()
	{
		root = NULL;
	}
	~BST()
	{
		destroyTree(root);
	}
	void destroyTree(node<T> *node)
	{
		if (node)
		{
			destroyTree(node->left);
			destroyTree(node->right);
			delete node;

		}
	}
	virtual void insert(T val) = 0;
	virtual node<T>* search(T val) = 0;
	virtual void inorder() = 0;
	virtual void postorder() = 0;
	virtual void preorder() = 0;
};


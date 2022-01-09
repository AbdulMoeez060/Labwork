#pragma once
#include<iostream>
#include<windows.h>
using namespace std;

enum Color { red, black };
template<class T>
class node {
public:
	node<T>* left ;
	node<T>* right;
	node<T>* parent;
	T key;
	Color color;

	node(T val)
	{
		this->key = val;
		//cout << this->key << endl;
		this->color = Color::red;
		left = NULL;
		right = NULL;
		parent = NULL;
	}

};
template<class T>
class RBTree
{
protected:
	node<T>* root;
public:
	RBTree()
	{
		root = NULL;
	}
	~RBTree() {
		destroyAll(root);
	}
	void destroyAll(node<T>* root)
	{
		if (root==NULL)
		{
			return;
		}
		destroyAll(root->left);

		destroyAll(root->right);

		delete root;

		root = NULL;
		//cout << "hehe";
	}

	virtual void insertVal(T val) = 0;
	virtual void inorder() = 0;
	virtual void postorder() = 0;
	virtual void preorder() = 0;
};


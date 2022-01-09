#pragma once
#include "BST.h"

template<class T>
class MyBST :public BST<T>
{
public:
	MyBST() :BST<T>() {  }
	~MyBST(){}
	void insert(T val)
	{
		if (BST<T>::root!=NULL)
		{
			insert(val, BST<T>::root);
		}
		else
		{
			BST<T>::root = new node<T>;
			BST<T>::root->key = val;
			BST<T>::root->left = NULL;
			BST<T>::root->right = NULL;
		}
	}
	
	node<T>* search(T val)
	{
		return search(val, BST<T>::root);
	}

	void preorder()
	{
		preorder(BST<T>::root);
	}
	void inorder()
	{
		inorder(BST<T>::root);
	}
	void postorder()
	{
		postorder(BST<T>::root);
	}
private:
	void insert(T val, node<T>* leaf)
	{
		if (val<leaf->key)
		{
			if (leaf->left!=NULL)
			{
				insert(val, leaf->left);
			}
			else
			{
				leaf->left = new node<T>;
				leaf->left->key = val;
				leaf->left->left = NULL;
				leaf->left->right = NULL;
			}
		}
		else if (val >= leaf->key)
		{
			if (leaf->right != NULL)
			{
				insert(val, leaf->right);
			}
			else
			{
				leaf->right = new node<T>;
				leaf->right->key = val;
				leaf->right->left = NULL;
				leaf->right->right = NULL;
			}
		}
	}
	node<T>* search(T val, node<T>* leaf)
	{
		if (leaf != NULL)
		{
			if (val == leaf->key)
			{
				cout << "The key " << leaf->key<<" is found in Binary Search Tree "  << endl;
				return leaf;
			}
			if (val<leaf->key)
			{
				search(val, leaf->left);
			}
			else
			{
				search(val, leaf->right);
			}
			
		}
		else
		{
			cout << "Key " << val << "Not found" << endl;
			return NULL;
		}
	}
	void preorder(node<T>* node)
	{
		if (node==NULL)
		{
			return;
		}
		cout << node->key << " ";
		preorder(node->left);
		preorder(node->right);
	}
	void inorder(node<T>* node)
	{
		if (node == NULL)
		{
			return;
		}
		
		inorder(node->left);
		cout << node->key << " ";
		inorder(node->right);
	}
	void postorder(node<T>* node)
	{
		if (node == NULL)
		{
			return;
		}
		
		postorder(node->left);
		postorder(node->right);
		cout << node->key << " ";
	}
};


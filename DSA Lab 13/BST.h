#pragma once
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
//All the tasks are in this file and the number of task is commented above the task
template<class T>
class node {
public:
	node<T>* left = NULL;
	node<T>* right = NULL;
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
	void destroyTree(node<T>* leaf) {
		if (leaf)
		{
			destroyTree(leaf->left);
			destroyTree(leaf->right);
			delete(leaf);
		}
	}
	virtual void insert(T key) = 0;
	virtual node<T>* search(T val) = 0;
	//virtual node<T>* delete(T val) = 0;
};
template<class T>
class MyBST: public BST<T>
{
public:
	MyBST() :BST<T>() { }
	~MyBST() {}

	void insert(T key)
	{
		if (BST<T>::root != NULL)
		{
			insert(BST<T>::root, key);
		}
		else
		{
			BST<T>::root = new node<T>;
			//BST<T>::root->left = NULL;
			//BST<T>::root->right = NULL;
			BST<T>::root->key = key;
		}
	}

	node<T>* search(T val)
	{
		return search(BST<T>::root, val);
	}

	void update(T val, T toupdate)
	{
		update(BST<T>::root, val, toupdate);
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
	
	
	int height()
	{
		return height(BST<T>::root);
	}
	int leafCount()
	{
		return leafCount(BST<T>::root);
	}

	
	bool isleaf(node<T>* leaf)
	{
		return isleaf(leaf,BST<T>::root);
	}


	void display()
	{
		cout << "Preorder: ";
		preorder();
		cout << endl;
		cout << "Inorder: ";
		inorder();
		cout << endl;
		cout << "Postorder: ";
		postorder();
		cout << endl;
		cout << "Height of tree is: " << height() << endl;
		//cout << "Leaf Count: " << leafCount();
		//cout << endl;

	}
	node<T>* deleteNode(T delkey)
	{
		node<T>* temp = search(BST<T>::root, delkey);
		if (temp==NULL)
		{
			cout << "Key " << delkey << " Not found can't delete." << endl;
			return NULL;
		}
		else if (temp!=NULL)
		{
			return deleteNode(BST<T>::root, delkey);
		}
		
	}
	bool isLeaf(node<T>* node)
	{
		return (node->left == NULL && node->right == NULL);
	}
	//The following 5 are public functions for the tasks in assignment
	void printRootToLeaf()
	{
		cout << "The root to leaf connections are: " << endl;
		printRootToLeaf(BST<T>::root);
	}
	void mirrorBST()
	{
		mirrorBST(BST<T>::root);
	}
	void Lowest_common_ancestor(T val1, T val2)
	{
		node<T>* temp= Lowest_common_ancestor(BST<T>::root, val1, val2);
		cout << "The nearest common ancestor of " << val1 << " and " << val2 << " is " << temp->key << endl;
	}
	void printLeftView()
	{
		cout << "The left view of tree is: " << endl;
		printLeftView(BST<T>::root);
	}
	void printRightView()
	{
		cout << "The Right view of tree is: " << endl;
		printRightView(BST<T>::root);
	}
	//till here
private:
	void insert(node<T>* leaf, T key) {
		if (leaf->key>key)
		{
			if (leaf->left!=NULL)
			{
				insert(leaf->left, key);
			}
			else
			{
				leaf->left = new node<T>;
				leaf->left->left = NULL;
				leaf->left->right = NULL;
				leaf->left->key = key;
			}
		}
		else if (leaf->key<=key)
		{
			if (leaf->right != NULL)
			{
				insert(leaf->right, key);
			}
			else
			{
				leaf->right = new node<T>;
				leaf->right->left = NULL;
				leaf->right->right = NULL;
				leaf->right->key = key;
			}
		}
	}
	node<T>* search(node<T>* leaf, T val)
	{
		if (leaf)
		{
			if (leaf->key == val)
			{
				cout << "====>The key " << val << " is found" << endl;
				return leaf;
			}
			if (leaf->key > val)
			{
				search(leaf->left, val);
			}
			else
			{
				search(leaf->right, val);
			}
		}
		else
		{
			cout << "====>The key " << val << " is not in the tree" << endl;
			return NULL;
		}
	}
	void update(node<T>* leaf, T val, T toupdate)
	{
		if (leaf)
		{
			if (leaf->key == val)
			{
				leaf->key = toupdate;
				return;
			}
			if (leaf->key > val)
			{
				update(leaf->left, val, toupdate);
			}
			else
			{
				update(leaf->right, val, toupdate);
			}
		}
		else
		{
			cout << "====>The key " << val << " is not in the tree" << endl;
			return;
		}
	}
	void preorder(node<T>* leaf)
	{
		if (leaf==NULL)
		{
			return;
		}
		cout << leaf->key << " ";
		preorder(leaf->left);
		preorder(leaf->right);
	}
	void inorder(node<T>* leaf)
	{
		if (leaf == NULL)
		{
			return;
		}
		inorder(leaf->left);
		cout << leaf->key << " ";
		inorder(leaf->right);
	}
	void postorder(node<T>* leaf)
	{
		if (leaf == NULL)
		{
			return;
		}
		postorder(leaf->left);
		postorder(leaf->right);
		cout << leaf->key << " ";

	}
	int height(node<T>* leaf)
	{
		if (leaf==NULL)
		{
			return 0;
		}
		else
		{
			int maxLeft = height(leaf->left);
			int maxRight = height(leaf->right);
			int max = (maxRight > maxLeft) ? maxRight : maxLeft;
			return max + 1;
		}
	}
	int leafCount(node<T>* leaf)
	{
		if (leaf==NULL)
		{
			return 0;
		}
		else if (leaf->left==NULL && leaf->right==NULL)
		{
			//cout << "Check 11" << endl;
			return 1;
		}
		else
		{
			//cout << "Check" << (leafCount(leaf->left) + leafCount(leaf->left)) << endl;;
			return (leafCount(leaf->left) + leafCount(leaf->left));
		}
	}
	
	node<T>* minValue(node<T>* leaf)
	{
		node<T>* temp = leaf;
		while (temp->left != NULL)
		{
			temp = temp->left;
		}
		return temp;
	}
	node<T> ISnode(node<T>* root, node<T>* leaf)//fids inorder successor
	{
		if (leaf->right!=NULL)
		{
			return minValue(leaf->right);
		}
		node<T>* succ = NULL;
		while (root!=NULL)
		{
			if (leaf->key < root->key)
			{
				succ = root;
				root = root->left;
			}
			else if (leaf->key > root->key)
			{
				root = root->right;
			}
			else
				break;
		}
		return succ;
	}
	node<T>* deleteNode(node<T>* root, T delkey)
	{
		if (root==NULL)
		{
			return NULL;
		}
		else if (delkey<root->key)
		{
			root->left = deleteNode(root->left, delkey);
		}
		else if (delkey>root->key)
		{
			root->right = deleteNode(root->right, delkey);
		}
		else 
		{
			//In case of leaf
			if (root->left==NULL && root->right==NULL)
			{
				delete root;
				root = NULL;
			}
			//In case on one Chile on the right side
			else if (root->left==NULL)
			{
				node<T>* temp = root;
				root = root->right;
				delete temp;
			}
			//in case of one childe on the left side
			else if (root->right==NULL)
			{
				node<T>* temp = root;
				root = root->left;
				delete temp;
			}
			//in case of both childs
			else
			{
				node<T>* temp = minValue(root->right);
				root->key = temp->key;
				root->right = deleteNode(root->right, temp->key);
			}
		}
		return root;
	}
	//Assignment task a
	node<T>* Lowest_common_ancestor(node<T>* root, T val1, T val2)
	{
		if (root==NULL)
		{
			return NULL;
		}
		 
		if (root->key<val1 && root->key<val2)
		{
			return Lowest_common_ancestor(root->right, val1, val2);
		}
		if (root->key > val1 && root->key > val2)
		{
			return Lowest_common_ancestor(root->left, val1, val2);
		}
		
		return root;
		
	}
	//Assignment task b
	void mirrorBST(node<T>* leaf)
	{
		if (leaf == NULL)
		{
			return;
		}
		else
		{
			mirrorBST(leaf->left);
			mirrorBST(leaf->right);

			node<T>* temp;

			temp = leaf->left;
			leaf->left = leaf->right;
			leaf->right = temp;
		}
	}
	
	//Assignment task c
	void printRootToLeaf(node<T>* root)
	{
		vector<T> paths;
		//cout << "Working";
		printRootToLeaf(root, paths);
	}
	void printRootToLeaf(node<T>* root, vector<T>& path)
	{
		if (root == NULL)
		{
			return;
		}

		path.push_back(root->key);
		//cout << "Working";

		if (root->left == NULL && root->right == NULL)
		{
			//cout << "Working";

			for (int i = 0; i < path.size(); i++)
			{

				cout << path[i] << " ";
			}
			cout << endl;
		}
		printRootToLeaf(root->left, path);
		printRootToLeaf(root->right, path);

		path.pop_back();
	}
	//Assignment task d
	void printLeftView(node<T>* root)
	{
		if (root==NULL)
		{
			return;
		}
		queue<node<T>*> queue;

		queue.push(root);

		while (!queue.empty())
		{
			int size = queue.size();
			for (int i = 0; i < size; i++)
			{
				node<T>* temp = queue.front();

				queue.pop();

				if (i==0)
				{
					cout << temp->key << " ";

				}
				if (temp->left!=NULL)
				{
					queue.push(temp->left);
				}
				if (temp->right != NULL)
				{
					queue.push(temp->right);
				}
			}
			

		}
		cout << endl;
	}
	//Assignment task e
	void printRightView(node<T>* root)
	{
		if (root == NULL)
		{
			return;
		}
		queue<node<T>*> queue;

		queue.push(root);

		while (!queue.empty())
		{
			int size = queue.size();
			for (int i = 0; i < size; i++)
			{
				node<T>* temp = queue.front();

				queue.pop();

				if (i == 0)
				{
					cout << temp->key << " ";

				}
				
				if (temp->right != NULL)
				{
					queue.push(temp->right);
				}
				if (temp->left != NULL)
				{
					queue.push(temp->left);
				}
			}


		}
		cout << endl;
	}
};


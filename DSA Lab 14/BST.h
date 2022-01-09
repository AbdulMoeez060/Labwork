#pragma once
#include<iostream>
#include<vector>
using namespace std;
// All the tasks for the lab are in MyBST class which is the last class out of three in this BST.h file
//Task one has 5 function which are further divided into private and public functions
//task 2 only has one funtion but it is also divided into private and public part
//Every task has a comment above it

//node class is a class which is used to build trees
template<class T>
class node {
public:
	node<T>* left=NULL;
	node<T>* right=NULL;
	T key = {};
};

//A abstract class that is used to make MyBSt class in which all the functions are implemented
template<class T>
class BST
{
protected:
	node<T>* root;
public:
	BST() {
		root = NULL;
	}
	~BST()
	{
		destroyTree(root);
	}
	void destroyTree(node<T>* root)
	{
		if (root)
		{
			destroyTree(root->left);
			destroyTree(root->right);
			delete root;
		}
	}
	virtual void insert(T key) = 0;
	virtual node<T>* deleteNode(T key) = 0;
	virtual void inorder() = 0;
};

//Child class of BST which is a abstract class
template<class T>
class MyBST : public BST<T> {
public:
	MyBST() :BST<T>() {}
	~MyBST() {  }
	//public function to insert a node
	void insert(T key)
	{
		if (BST<T>::root)
		{
			insert(BST<T>::root, key);
		}
		else
		{
			BST<T>::root = new node<T>;
			BST<T>::root->key = key;
		}
	}
	//public function to delete node
	node<T>* deleteNode(T key)
	{
		return deleteNode(BST<T>::root, key);
	}
	//Public function to display three
	void inorder()
	{
		cout << "The tree is: ";
		inorder(BST<T>::root);
		cout << endl;
	}
	//Public function for task 1
	void printKthSmallest(int k)
	{
		node<T>* temp = printKthSmallest(BST<T>::root, k, 1);
		if (temp==NULL)
		{
			cout << "The k value is larger than the height of the tree." << endl;
		}
		else
		{
			cout << "The Kth smallest value is " << temp->key << endl;
		}
	}
	//Public function for task 1
	void printKthLargest(int k)
	{
		node<T>* temp = printKthLargest(BST<T>::root, k, 1);
		if (temp == NULL)
		{
			cout << "The k value is larger than the height of the tree." << endl;
		}
		else
		{
			cout << "The Kth largest value is " << temp->key << endl;
		}
	}
	//Public function for task 1
	void printNSmallestValues(int n)
	{
		vector<T> temp;
		getNValues(BST<T>::root, temp);
		if (temp.size()<n)
		{
			cout << "The value of n is larger than the number of nodes" << endl;
			return;
		}
		cout << "The " << n << " smallest values in Tree are: ";
		for (int i = 0; i < n; i++)
		{
			cout << temp[i] << " ";
		}
		cout << endl;
	}
	//Public function for task 1
	void printNLargestValues(int n)
	{
		vector<T> temp;
		getNValues(BST<T>::root, temp);
		if (temp.size() < n)
		{
			cout << "The value of n is larger than the number of nodes" << endl;
			return;
		}
		cout << "The " << n << " largest values in Tree are: ";
		for (int i = temp.size() - n; i < temp.size(); i++)
		{
			cout << temp[i] << " ";
		}
		cout << endl;
	}
	//Public function for task 1
	int height()
	{
		int temp = height(BST<T>::root);
		cout << "The height of tree is " << temp << endl;
		return temp;

	}
	//Public function for task 1
	bool isBalanced()
	{
		return isBalanced(BST<T>::root);
	}
	//Public function for task 2
	void removeInRange(T start, T end)
	{
		removeInRange(BST<T>::root, start, end);
	}
private:
	//private function to insert
	void insert(node<T>* root, T key)
	{
		if (root->key>key)
		{
			if (root->left!=NULL)
			{
				insert(root->left, key);
			}
			else
			{
				root->left = new node<T>;
				root->left->key = key;
			}
		}
		if (root->key < key)
		{
			if (root->right != NULL)
			{
				insert(root->right, key);
			}
			else
			{
				root->right = new node<T>;
				root->right->key = key;
			}
		}
	}
	//Private function to delete a node
	node<T>* deleteNode(node<T>* root, T key)
	{
		if (root==NULL)
		{
			return NULL;
		}
		else if (root->key>key)
		{
			root->left = deleteNode(root->left, key);
		}
		else if (root->key<key)
		{
			root->right = deleteNode(root->right, key);
		}
		else
		{
			if (root->left==NULL && root->right==NULL)
			{
				delete root;
				root = NULL;
			}
			else if (root->right==NULL)
			{
				node<T>* temp = root;
				root = root->left;
				delete temp;
			}
			else if (root->left==NULL)
			{
				node<T>* temp = root;
				root = root->right;
				delete temp;
			}
			else
			{
				node<T>* temp = minValue(root->right);
				root->key = temp->key;
				root->right = deleteNode(root->right, temp->key);
			}
		}
		return root;
	}
	//A function used in  deleteNode to get smallest value in a tree or subtree
	node<T>* minValue(node<T>* root)
	{
		node<T>* temp = root;
		while (temp->left != NULL)
		{
			temp = temp->left;
		}
		return temp;
	}
	//Funstion to display tree
	void inorder(node<T>* root)
	{
		if (root==NULL)
		{
			return;
		}
		inorder(root->left);
		cout << root->key << " ";
		inorder(root->right);
	}
	//Private function for task 1
	node<T>* printKthSmallest(node<T>* root, int k, int level)
	{
		if (root==NULL)
		{
			return NULL;
		}
		if (level==k)
		{
			return root;
		}
		if (root->left==NULL)
		{
			return printKthSmallest(root->right, k, level + 1);
		}
		
		return printKthSmallest(root->left, k, level + 1);
		
	}
	//Private function for task 1
	node<T>* printKthLargest(node<T>* root, int k, int level)
	{
		if (root == NULL)
		{
			return NULL;
		}
		if (level == k)
		{
			return root;
		}
		if (root->right == NULL)
		{
			return printKthLargest(root->left, k, level + 1);
		}

		return printKthLargest(root->right, k, level + 1);

	}
	//Private function for task 1 
	// this function is used to get sorted tree in a vector then used to get n smallest or largest values
	void getNValues(node<T>* root, vector<T>& temp)
	{
		if (root==NULL)
		{
			
			return;
		}
		getNValues(root->left, temp);
		temp.push_back(root->key);
		getNValues(root->right, temp);
	}
	//Private function for task 1
	//this is used to get height of a tree then used to check balance
	int height(node<T>* root)
	{
		if (root==NULL)
		{
			return 0;
		}
		else
		{
			int mLeft = height(root->left);
			int mRight = height(root->right);
			int max = (mLeft > mRight) ? mLeft : mRight;
			return max + 1;
			
		}
	}
	//Private function for task 1
	bool isBalanced(node<T>* root)
	{
		if (root==NULL)
		{
			return 1;
		}
		int hLeft = height(root->left);
		int hRight = height(root->right);
		if (abs(hLeft-hRight)<=1 && isBalanced(root->left) && isBalanced(root->right))
		{
			return 1;
		}
		return 0;
	}
	//Private function for task 2
	node<T>* removeInRange(node<T>* root, T start, T end)
	{
		if (root==NULL)
		{
			return NULL;
		}

		root->left = removeInRange(root->left, start, end);
		root->right = removeInRange(root->right, start, end);
		
		if (root->key>= start && root->key<=end)
		{
			return deleteNode(root,root->key);//function deleteNode is used to delete the nodes in range.
		}

		return root;
	}
};


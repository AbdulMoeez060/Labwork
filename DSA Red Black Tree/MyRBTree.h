#pragma once
#include "RBTree.h"

template<class T>
class MyRBTree : public RBTree<T>
{
public:

	MyRBTree() :RBTree<T>() {  }
	~MyRBTree() {  }

	void insertVal(T val)
	{
		node<T>* temp = new node<T>(val);

		RBTree<T>::root=insertBST(RBTree<T>::root, temp);

		fixInsertRBT(temp);
		//cout << RBTree<T>::root->left->key << endl;
	}
	void inorder()
	{
		cout << "Inorder Traversal: ";
		inorder(RBTree<T>::root);
		cout << endl;
	}
	void postorder() {
		cout << "Postorder Traversal: ";

		postorder(RBTree<T>::root);
		cout << endl;
	}
	void preorder() {
		cout << "Preorder Traversal: ";

		preorder(RBTree<T>::root);
		cout << endl;
	}

	int getColor(node<T>* node)
	{
		if (node==NULL)
		{
			return Color::black;
		}
		
		return node->color;
	}

	void setColor(node<T>* node, Color color)
	{
		if (node==NULL)
		{
			return;
		}

		node->color = color;
	}

private:
	

	node<T>* insertBST(node<T>*& root, node<T>*& nnode)
	{
		if (root==NULL)
		{
			//root = new node<T>(val);
			//cout << root->key << endl;
			return nnode;
		}
		

		if (root->key>nnode->key)
		{

			root->left=insertBST(root->left, nnode);

			root->left->parent = root;
		}
		else if(root->key<nnode->key)
		{

			root->right=insertBST(root->right,nnode);
			root->right->parent = root;


		}
		return root;
	}


	void rotateLeft(node<T>*& parent)
	{
		node<T>* rchild = parent->right;
		parent->right = rchild->left;

		if (parent->right!=NULL)
		{
			parent->right->parent = parent;
		}

		rchild->parent = parent->parent;

		if (parent->parent==NULL)
		{
			RBTree<T>::root = rchild;
		}
		else if(parent==parent->parent->left)
		{
			parent->parent->left = rchild;
		}
		else {
			parent->parent->right = rchild;
		}

		rchild->left = parent;
		parent->parent = rchild;

	}
	void rotateRight(node<T>*& parent)
	{
		node<T>* lchild = parent->left;
		parent->left = lchild->right;

		if (parent->left != NULL)
		{
			parent->left->parent = parent;
		}

		lchild->parent = parent->parent;

		if (parent->parent == NULL)
		{
			RBTree<T>::root = lchild;
		}
		else if (parent == parent->parent->left)
		{
			parent->parent->left = lchild;
		}
		else {
			parent->parent->right = lchild;
		}

		lchild->right = parent;
		parent->parent = lchild;

	}

	void fixInsertRBT(node<T>*& nnode)
	{
		node<T>* parent = NULL;
		node<T>* grandparent = NULL;

		while ((nnode->color == Color::red) && (nnode != RBTree<T>::root) && (nnode->parent->color == Color::red))
		{
			//cout << root->key << " " << nnode->key << endl;

			parent = nnode->parent;
			grandparent = parent->parent;

			if (parent==grandparent->left)
			{
				node<T>* uncle = grandparent->right;
				if (getColor(uncle)==Color::red)
				{
					setColor(uncle, Color::black);
					setColor(parent, Color::black);
					setColor(grandparent, Color::red);
					nnode = grandparent;
				}
				else 
				{
					if (nnode==parent->right)
					{
						rotateLeft(parent);
						nnode = parent;
						parent = nnode->parent;
					}
					rotateRight(grandparent);
					swap(parent->color, grandparent->color);
					nnode = parent;
				}
			}
			else
			{
				node<T>* uncle = grandparent->left;
				if (getColor(uncle) == Color::red)
				{
					setColor(uncle, Color::black);
					setColor(parent, Color::black);
					setColor(grandparent, Color::red);
					nnode = grandparent;
				}
				else
				{
					if (nnode == parent->left)
					{
						rotateRight(parent);
						nnode = parent;
						parent = nnode->parent;
					}
					rotateLeft(grandparent);
					swap(parent->color, grandparent->color);
					nnode = parent;
				}
			}
		}
		//cout << " f";
		setColor(RBTree<T>::root, Color::black);

	}
	void inorder(node<T>* root)
	{
		HANDLE Hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		if (root == NULL)
		{
			return;

		}

		inorder(root->left);
		if (root->color == Color::red)
		{
			SetConsoleTextAttribute(Hconsole, 4);

		}
		else if (root->color == Color::black)
		{
			SetConsoleTextAttribute(Hconsole, 1);

		}

		cout << root->key << " ";


		inorder(root->right);
		SetConsoleTextAttribute(Hconsole, 7);

	}
	void preorder(node<T>* root)
	{
		HANDLE Hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		if (root == NULL)
		{
			return;

		}

		if (root->color == Color::red)
		{
			SetConsoleTextAttribute(Hconsole, 4);

		}
		else if (root->color == Color::black)
		{
			SetConsoleTextAttribute(Hconsole, 1);

		}

		cout << root->key << " ";

		preorder(root->left);
		


		preorder(root->right);
		SetConsoleTextAttribute(Hconsole, 7);

	}

	void postorder(node<T>* root)
	{
		HANDLE Hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		if (root == NULL)
		{
			return;

		}

		

		postorder(root->left);



		postorder(root->right);

		if (root->color == Color::red)
		{
			SetConsoleTextAttribute(Hconsole, 4);

		}
		else if (root->color == Color::black)
		{
			SetConsoleTextAttribute(Hconsole, 1);

		}

		cout << root->key << " ";
		SetConsoleTextAttribute(Hconsole, 7);

	}



};


#pragma once
#include "LinkedList.h"
//All tasks Are in this file MyLinkedList  and are all labeled and number from task 1 to 6

template <class T>
class MyLinkedList : public LinkedList<T>
{
public:
	MyLinkedList() :LinkedList<T>() {}
	~MyLinkedList() {}
	//Task 1
	void greaterThanKey(T key)//Task 1
	{
		//Funtion to check the links greater than the key provided
		node<T>* currnode = LinkedList<T>::head;
		int count = 0;
		cout << "Data Greater than key:" << endl;
		while (currnode)
		{
			if (currnode->data>key)
			{
				cout << currnode->data << endl;
				count++;
			}
			currnode = currnode->next;
		}
		cout << "The number of links greater than key are: " << count << endl;
	}
	//Task 2
	void presenceOfKey(T key)//Task 2
	{
		//the function to check the occurence of key and count
		node<T>* currnode = LinkedList<T>::head;
		int count = 0;
		while (currnode)
		{
			if (currnode->data == key)
			{
				count++;
			}
			currnode = currnode->next;
		}
		cout << "The number of time key is in the list is : " << count << endl;
	}
	//Task 3
	void mergeSort(const MyLinkedList<T> &obj)//Task 3 graded task
	{
		//Function to merge two lists and then sorting them in descending order
		node<T>* l1 = LinkedList<T>::head;
		
		/*node<T>* tempnode = new node<T>;
		node<T>* currnode = tempnode;
		while (l1 != NULL&& l2!=NULL)
		{
			if (l1->data<l2->data)
			{
				currnode->next = l1;
				l1 = l1->next;
			}
			else
			{
				currnode->next = l2;
				l2 = l2->next;
			}
			currnode = currnode->next;
		}

		if (l1!=NULL)
		{
			currnode->next = l1;
			l1 = l1->next;
		}
		if (l2 != NULL)
		{
			currnode->next = l2;
			l2 = l2->next;
		}

		LinkedList<T>::head = tempnode->next;*/
		while (l1->next!=NULL)
		{
			l1 = l1->next;//iterrate to the last position
		}
		l1->next = obj.head;//the other list
		//sorting
		node<T>* currnode = LinkedList<T>::head,*index=NULL;
		T temp;
		if (LinkedList<T>::head==NULL)
		{
			return;
		}
		else
		{
			while (currnode != NULL)
			{
				index = currnode->next;
				while (index!=NULL)
				{
					if (currnode->data<index->data)
					{
						temp = currnode->data;
						currnode->data = index->data;
						index->data = temp;
					}
					index = index->next;
				}
				currnode = currnode->next;
			}
		}
	}
	//Task 4
	bool checkPalindrome()	//Task 4
	{
		//fuction to check whether a list is palindrome or not
		stack<T> temp;
		node<T>* currnode = LinkedList<T>::head;

		while (currnode)
		{
			temp.push(currnode->data);
			currnode = currnode->next;//moving to the next node
		}
		node<T>* checknode = LinkedList<T>::head;
		while (checknode)
		{
			T palin = temp.top();
			T palin2 = checknode->data;
			temp.pop();
			//cout << palin << endl;
			//to get it in capital letters
			if (palin>=65 && palin <=90)
			{
				palin += 32;
			}
			if (palin2 >= 65 && palin2 <= 90)
			{
				palin2 += 32;
			}
			if (palin!=palin2)
			{
				return false;
			}
			checknode = checknode->next;
		}
		return true;
	}
	//Task 5
	void insertAscending(T val)//Task 5 graded task
	{
		//funtion to insert into the list iin ascending order
		//cout << "Adding to the List" << endl;
		node<T>* currnode = LinkedList<T>::head;
		node<T> *newnode = new node<T>;
		newnode->data = val;
		if (LinkedList<T>::head==NULL || LinkedList<T>::head->data>=val)
		{
			newnode->next = LinkedList<T>::head;
			LinkedList<T>::head = newnode;
		}
		else
		{
			while (currnode->next && currnode->next->data < val)
			{
				
				currnode = currnode->next;
			}
			
			newnode->next = currnode->next;
			currnode->next = newnode;
		}
		
	}
	//Task 6
	void insertDescending(T val)//Task 6
	{
		//funtion to insert into the list iin descending order
		//cout << "Adding to the List" << endl;
		node<T>* currnode = LinkedList<T>::head;
		node<T>* newnode = new node<T>;
		newnode->data = val;
		if (LinkedList<T>::head == NULL || LinkedList<T>::head->data <= val)
		{
			newnode->next = LinkedList<T>::head;
			LinkedList<T>::head = newnode;
		}
		else
		{
			while (currnode->next && currnode->next->data > val)
			{

				currnode = currnode->next;
			}

			newnode->next = currnode->next;
			currnode->next = newnode;
		}

	}
	bool isEmpty()
	{
		if (LinkedList<T>::head == NULL)
			return 1;
		else
			return 0;
	}
	int size()
	{
		int num = 0;
		node<T>* currNode = LinkedList<T>::head;
		while (currNode != NULL) {

			currNode = currNode->next;
			num++;
		}
		return num;
	}
	void insertAtFront(T val)
	{
		//cout << "Adding to the List" << endl;
		node<T>* tempnode = new node<T>;
		tempnode->data = val;
		tempnode->next = LinkedList<T>::head;
		LinkedList<T>::head = tempnode;
	}
	void insertAtEnd(T val)
	{
		//cout << "Adding to the List" << endl;
		node<T>* newnode = new node<T>;
		newnode->data = val;
		newnode->next = NULL;

		node<T>* currnode = LinkedList<T>::head;
		if (!currnode)
		{
			LinkedList<T>::head = newnode;
		}
		else
		{
			while (currnode->next != NULL)
			{
				currnode = currnode->next;
			}

			currnode->next = newnode;
		}

		//cout << "check 4" << endl;

	}
	node<T>* insertAtPosition(int index, T val)
	{
		cout << "Adding to the List" << endl;
		if (index < 0)//checks if value index is less than zero and returns NULL
		{
			return NULL;
		}
		int currindex = 1;
		node<T>* currnode = LinkedList<T>::head;;
		while (currnode && index > currindex)//Runs till the index given by the user
		{
			currnode = currnode->next;//moving to the next node
			currindex++;
		}
		if (index > 0 && currnode == NULL)//if the index provided by user is more than the links(indexes/elements) in the list returns null
		{
			return NULL;
		}
		node<T>* newnode = new node<T>;//making a new node and adding data in it
		newnode->data = val;
		if (index == 0)//adding new node at the start
		{
			newnode->next = LinkedList<T>::head;
			LinkedList<T>::head = newnode;
		}
		else//new node at any other position
		{
			newnode->next = currnode->next;
			currnode->next = newnode;
		}
		return newnode;
	}
	void removeFromEnd()
	{
		if (LinkedList<T>::head !=NULL)
		{
			node<T>* currnode = LinkedList<T>::head;
			node<T>* prevnode = NULL;
			int currindex = 0;
			//cout << "check 1" << endl;
			while (currnode->next!= NULL)
			{
				prevnode = currnode;
				//cout << "check 2" << endl;
				currnode = currnode->next;
				currindex++;
			}
			cout << "Removing From end of the list." << endl;
			if (currindex==0)
			{
				LinkedList<T>::head = NULL;
			}
			else
			{
				prevnode->next = NULL;
			}
			
			//cout << "check 4" << endl;
		}
		else
		{
			cout << "List is empty nothing to remove" << endl;
		}
	}
	int removeFromPosition(T pos)
	{
		cout << "Removing from the List" << endl;
		node<T>* currnode = LinkedList<T>::head;
		node<T>* prevnode = NULL;
		int currindex = 1;
		while (currnode && pos!=currnode->data)
		{
			prevnode = currnode;
			currnode = currnode->next;
			currindex++;
		}
		if (currnode)
		{
			if (prevnode)
			{
				prevnode->next = currnode->next;
				delete currnode;
			}
			else
			{
				LinkedList<T>::head = currnode->next;
				delete currnode;
			}
			return currindex;
		}
		return 0;
	}
	
	void printList()
	{
		cout << "Printing List" << endl;
		int num = 0;
		node<T>* currNode = LinkedList<T>::head;
		while (currNode != NULL) {
			cout << currNode->data << endl;
			
			currNode = currNode->next;
			num++;
		}
		cout << "Number of nodes in the list: " << num << endl;

	}
	
	void reverseList()
	{
		cout << "Reversing." << endl;
		node<T>* currnode = LinkedList<T>::head;
		node<T>* prevnode = NULL, * nextnode = NULL;
		while (currnode!=NULL)
		{
			nextnode = currnode->next;
			currnode->next = prevnode;
			prevnode = currnode;
			currnode = nextnode;
		}
		LinkedList<T>::head = prevnode;
	}
};


#include"Node.h"
template<class T>
class LinkedList
{
	protected:
		Node<T>* head;
	
	public:
		LinkedList();
		virtual void insertAtEnd(T) = 0;
		virtual T deleteFromHead() = 0;
		virtual bool isEmpty() = 0;
		virtual void display() = 0;

};

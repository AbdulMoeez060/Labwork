#include<iostream>
#include"myQueue.h"
using namespace std;

template<class T>			//add this line before the function to make it work as template
myQueue <T> reverseQueue(myQueue <T> obj)
{
	int size = obj.size();
	//cout << "Size: " << size << endl;
	myQueue<T> temp;
	for (int i = 0; i < size; i++)
	{
		
		for (int i = 0; i < obj.size()-1; i++)
		{
			//T x = obj.dequeue();
			obj.enqueue(obj.dequeue());
		}
		temp.enqueue(obj.dequeue());
	}
	return temp;
}

//Task 4
int main()
{
	
	myQueue<char> q;
	q.enqueue('D');
	q.enqueue('A');
	q.enqueue('A');
	q.enqueue(' ');
	q.enqueue('L');
	q.enqueue('A');
	q.enqueue('B');
	q.display();
	myQueue<char> q2 = reverseQueue(q);
	cout << "Reversed: " << endl;
	q2.display();
	return 0;
}
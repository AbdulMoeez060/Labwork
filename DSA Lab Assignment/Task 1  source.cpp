#include"CircularQueue.h"

template<class T>
void showCircularQueue(CircularQueue<T> s)
{
	cout << "size:" << s.size() << endl;
	cout << "Queue: ";
	for (int i = 0; i < s.size(); i++)
	{
		cout << s[i] << " ";
	}
	cout << endl;
}
template <class T>
CircularQueue<T> copyQueue(CircularQueue<T> s)
{
	

	CircularQueue<T> copy(s.maxSize());
	for (int i = 0; i < s.size(); i++)
	{
		copy.enqueue(s[i]);
	}
	return copy;
}
int main()
{
	
	cout << "===============INT=======================" << endl;
	CircularQueue<int> obj(4);
	obj.DisplayCQ();//this shows and empty CQ as we havent enqueued anything and also uses isEmpty() function and will show queue is empty on console
	obj.enqueue(6);
	obj.enqueue(9);
	obj.enqueue(1);
	obj.enqueue(6);
	showCircularQueue(obj);//Global function
	obj.enqueue(6);//this uses isFull() function as the CQ is already full so it won't enqueue and show that C is full
	obj.dequeue();
	obj.dequeue();
	obj.DisplayCQ();//class method
	obj.enqueue(5);
	obj.enqueue(7);
	obj.enqueue(3);//this uses isFull() function as the CQ is already full so it won't enqueue and show that C is full
	showCircularQueue(obj);//Global function
	cout << "Size of CQueue " << obj.size() << endl;
	cout << "MaxSize of CQueue " << obj.maxSize() << endl;
	cout << "Front of CQueue " << obj.front() << endl;
	cout << "===============Char=======================" << endl;
	CircularQueue<char> obj2(4);
	obj2.DisplayCQ();//this shows and empty CQ as we havent enqueued anything and also uses isEmpty() function and will show queue is empty on console
	obj2.enqueue('h');
	obj2.enqueue('e');
	obj2.enqueue('y');
	obj2.enqueue('o');
	showCircularQueue(obj2);//Global function
	obj2.enqueue('y');//this uses isFull() function as the CQ is already full so it won't enqueue and show that C is full
	obj2.dequeue();
	obj2.dequeue();
	obj2.DisplayCQ();
	obj2.enqueue('y');
	obj2.enqueue('o');
	obj2.enqueue('o');//this uses isFull() function as the CQ is already full so it won't enqueue and show that C is full
	showCircularQueue(obj2);//Global function
	cout << "Size of CQueue " << obj2.size() << endl;
	cout << "MaxSize of CQueue " << obj2.maxSize() << endl;
	cout << "Front of CQueue " << obj2.front() << endl;
	
	cout << "======================Copy Function==================" << endl;
	CircularQueue<char> obj3 = copyQueue(obj2);
	cout << "Orignal: " << endl;
	showCircularQueue(obj2);
	cout << "Copied: " << endl;
	showCircularQueue(obj3);
	if (obj2==obj3)
	{
		cout << "Copied and orignal are same." << endl;
	}
	else
	{
		cout << "Copied and orignal are not same." << endl;

	}
	return 0;
}
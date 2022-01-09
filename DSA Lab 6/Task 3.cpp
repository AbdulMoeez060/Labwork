#include"CircularQueue.h"

int main()
{
	cout << "===============INT=======================" << endl;
	CircularQueue<int> obj(4);
	obj.DisplayCQ();//this shows and empty CQ as we havent enqueued anything and also uses isEmpty() function and will show queue is empty on console
	obj.enqueue(6);
	obj.enqueue(9);
	obj.enqueue(1);
	obj.enqueue(6);
	obj.DisplayCQ();
	obj.enqueue(6);//this uses isFull() function as the CQ is already full so it won't enqueue and show that C is full
	obj.dequeue();
	obj.dequeue();
	obj.DisplayCQ();
	obj.enqueue(5);
	obj.enqueue(7);
	obj.enqueue(3);//this uses isFull() function as the CQ is already full so it won't enqueue and show that C is full
	obj.DisplayCQ();
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
	obj2.DisplayCQ();
	obj2.enqueue('y');//this uses isFull() function as the CQ is already full so it won't enqueue and show that C is full
	obj2.dequeue();
	obj2.dequeue();
	obj2.DisplayCQ();
	obj2.enqueue('y');
	obj2.enqueue('o');
	obj2.enqueue('o');//this uses isFull() function as the CQ is already full so it won't enqueue and show that C is full
	obj2.DisplayCQ();
	cout << "Size of CQueue " << obj2.size() << endl;
	cout << "MaxSize of CQueue " << obj2.maxSize() << endl;
	cout << "Front of CQueue " << obj2.front() << endl;
	cout << "===============Double=======================" << endl;
	CircularQueue<double> obj3(4);
	obj3.DisplayCQ();//this shows and empty CQ as we havent enqueued anything and also uses isEmpty() function and will show queue is empty on console
	obj3.enqueue(6.24);
	obj3.enqueue(7.9);
	obj3.enqueue(0.1);
	obj3.enqueue(6.633);
	obj3.DisplayCQ();
	obj3.enqueue(5.6);//this uses isFull() function as the CQ is already full so it won't enqueue and show that C is full
	obj3.dequeue();
	obj3.dequeue();
	obj3.DisplayCQ();
	obj3.enqueue(5.64);
	obj3.enqueue(7.25);
	obj3.enqueue(3.7);//this uses isFull() function as the CQ is already full so it won't enqueue and show that C is full
	obj3.DisplayCQ();
	cout << "Size of CQueue " << obj3.size() << endl;
	cout << "MaxSize of CQueue " << obj3.maxSize() << endl;
	cout << "Front of CQueue " << obj3.front() << endl;
	return 0;
}
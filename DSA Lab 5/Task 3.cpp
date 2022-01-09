#include"Queue.h"

int main()
{
	cout << "=============Queue Int=============" << endl;
	Queue<int> obj(5);
	obj.dequeue();//uses isEmpty()
	obj.enqueue(6);
	obj.enqueue(2);
	obj.enqueue(7);
	obj.enqueue(1);
	obj.enqueue(5);
	obj.enqueue(5);//uses is full
	obj.display();
	obj.dequeue();
	obj.display();

	obj.enqueue(5);
	obj.display();
	cout << "=============Queue Char=============" << endl;
	Queue<char> obj2(5);
	obj2.dequeue();//uses isEmpty()
	obj2.enqueue('H');
	obj2.enqueue('E');
	obj2.enqueue('L');
	obj2.enqueue('L');
	obj2.enqueue('O');
	obj2.enqueue('O');//uses is full
	obj2.display();
	obj2.dequeue();
	obj2.display();

	obj2.enqueue('O');
	obj2.display();

	cout << "=============Queue DOUBLE=============" << endl;
	Queue<double> obj3(5);
	obj3.dequeue();//uses isEmpty()
	obj3.enqueue(3.6);
	obj3.enqueue(2.5);
	obj3.enqueue(7.2);
	obj3.enqueue(1.8);
	obj3.enqueue(5.7);
	obj3.enqueue(5.7);//uses is full
	obj3.display();
	obj3.dequeue();
	obj3.display();

	obj3.enqueue(5.9);
	obj3.display();
	return 0;
}
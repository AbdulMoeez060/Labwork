#include"CircularQueue.h"

int main()
{
	CircularQueue<int> obj(4);
	obj.display();
	obj.enqueue(6);
	obj.enqueue(9);
	obj.enqueue(1);
	obj.enqueue(6);
	obj.display();
	obj.enqueue(6);
	obj.dequeue();
	obj.dequeue();
	obj.display();
	obj.enqueue(5);
	obj.enqueue(7);
	obj.enqueue(3);
	obj.display();
	return 0;
}
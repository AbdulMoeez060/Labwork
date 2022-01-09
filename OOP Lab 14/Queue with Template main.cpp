#include<iostream>
#include"tQueue.h"
using namespace std;

int main()
{
	cout << "========Queue with Integer=========" << endl;
	Queue<int> qu_obj(5);
	qu_obj.EnQueue(3);
	qu_obj.EnQueue(6);
	qu_obj.EnQueue(4);
	qu_obj.displayQueue();
	int value = qu_obj.DeQueue();
	cout << "Queue After Dequeueing: " << endl;
	qu_obj.displayQueue();
	qu_obj.EnQueue(-9);
	qu_obj.displayQueue();

	cout << "========Queue with Double=========" << endl;
	Queue <double> qu_obj1(5);
	qu_obj1.EnQueue(3.4);
	qu_obj1.EnQueue(6.2);
	qu_obj1.EnQueue(4.9);
	qu_obj1.displayQueue();
	double value1 = qu_obj1.DeQueue();
	cout << "Queue After Dequeueing: " << endl;
	qu_obj1.displayQueue();
	qu_obj1.EnQueue(-9.3);
	qu_obj1.displayQueue();

	cout << "========Queue with Char=========" << endl;
	Queue<char> qu_obj2(5);
	qu_obj2.EnQueue('h');
	qu_obj2.EnQueue('e');
	qu_obj2.EnQueue('y');
	qu_obj2.displayQueue();
	int value2 = qu_obj2.DeQueue();
	cout << "Queue After Dequeueing: " << endl;
	qu_obj2.displayQueue();
	qu_obj2.EnQueue('i');
	qu_obj2.displayQueue();
	return 0;
}
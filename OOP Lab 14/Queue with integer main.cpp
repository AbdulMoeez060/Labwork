#include<iostream>
#include"iQueue.h"
using namespace std;

int main()
{
	Queue qu_obj(5);
	qu_obj.EnQueue(3);
	qu_obj.EnQueue(6);
	qu_obj.EnQueue(4);
	qu_obj.displayQueue();
	int value = qu_obj.DeQueue();
	cout << "Queue After Dequeueing: " << endl;
	qu_obj.displayQueue();
	qu_obj.EnQueue(-9);
	qu_obj.displayQueue();
	return 0;
}
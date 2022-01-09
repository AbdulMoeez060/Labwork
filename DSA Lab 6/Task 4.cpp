#include<stack>
#include"CircularQueue.h"

template<class T>
CircularQueue<T> reverseCircularQueue(CircularQueue<T> &obj)
{
	CircularQueue<T> obj2(obj.maxSize());
	int len = obj.size();
	stack<T> temp;
	for (int i = 0; i < len; i++)
	{
		temp.push(obj.dequeue());
	}
	for (int i = 0; i < len; i++)
	{
		obj2.enqueue(temp.top());
		temp.pop();
	}
	return obj2;
}
int main()
{
	cout << "==============INT======================" << endl;
	CircularQueue<int> obj(4);
	obj.enqueue(4);
	obj.enqueue(3);
	obj.enqueue(2);
	obj.enqueue(1);
	cout << "Before Reverse: " << endl;
	obj.DisplayCQ();
	CircularQueue<int> obj2= reverseCircularQueue(obj);
	cout << "After Reverse: " << endl;
	obj2.DisplayCQ();
	cout << "==============Char======================" << endl;
	CircularQueue<char> obj3(4);
	obj3.enqueue('t');
	obj3.enqueue('e');
	obj3.enqueue('l');
	obj3.enqueue('l');
	cout << "Before Reverse: " << endl;
	obj3.DisplayCQ();
	CircularQueue<char> obj4 = reverseCircularQueue(obj3);
	cout << "After Reverse: " << endl;
	obj4.DisplayCQ();

	return 0;
}
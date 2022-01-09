#pragma once
#include "myQueue.h"


template<class T>			//add this line before the function to make it work as template
myQueue <T> reverseQueue(myQueue <T> obj)
{
	int size = obj.size();
	myQueue<T> temp;
	for (int i = 0; i < size; i++)
	{

		for (int i = 0; i < obj.size() - 1; i++)
		{
			T x = obj.dequeue();
			obj.enqueue(x);
		}
		temp.enqueue(obj.dequeue());
	}
	return temp;
}


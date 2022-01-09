#include"myQueue.h"

int main()
{
	cout << "******	TEST QUEUE CPP	****** \n" << endl;
	myQueue<char> obj;
	if (obj.isEmpty())
	{
		cout << "Queue Is Empty" << endl;
	}
	else
	{
		cout << "Not empty" << endl;
	}
	cout << "Enqueueing" << endl;


	obj.enqueue('M');
	obj.enqueue('y');
	obj.enqueue('Q');
	obj.enqueue('u');
	obj.enqueue('e');
	obj.enqueue('u');
	obj.enqueue('e');

	cout << "Displaying" << endl;
	obj.display();

	cout << "Dequeueing" << endl;

	obj.dequeue();
	obj.dequeue();

	cout << "Display After Dequeueing" << endl;

	obj.display();
}
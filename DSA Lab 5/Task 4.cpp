#include"Queue.h"

template<class T>
T* reverseElement(T* arr, int size)
{
	Queue<T> q1(arr, size, size);
	Queue<T> q2(size);
	T* a = new T[size];
	for (int i = 0; i < size; i++)
	{
		for (int i = 0; i < q1.size()-1; i++)
		{
			T x1 = q1.dequeue();
			q1.enqueue(x1);
		}
		q2.enqueue(q1.dequeue());

	}
	for (int i = 0; i < size ; i++)
	{
		a[i]= q2.dequeue();
	}
	return a;
}
int main()
{
	cout << "==================Int=====================" << endl;
	int* x = new int[5]{ 3,4,2,1,6};
	cout << "Before Reverse: " << endl;
	cout << "Array: ";
	for (int i = 0; i < 5; i++)
	{
		cout << x[i] << " ";
	}
	cout << endl;
	x=reverseElement(x, 5);
	cout << "After Reverse: " << endl;
	cout << "Array: ";
	for (int i = 0; i < 5; i++)
	{
		cout << x[i] << " ";
	}
	cout<<endl;
	cout << "==================Char=====================" << endl;
	char* x2 = new char[5]{ 'h','e','l','l','o' };
	cout << "Before Reverse: " << endl;
	cout << "Array: ";
	for (int i = 0; i < 5; i++)
	{
		cout << x2[i] << " ";
	}
	cout << endl;
	x2 = reverseElement(x2, 5);
	cout << "After Reverse: " << endl;
	cout << "Array: ";
	for (int i = 0; i < 5; i++)
	{
		cout << x2[i] << " ";
	}
	cout << endl;
	cout << "==================Double=====================" << endl;
	double* x3 = new double[5]{ 3.3,4.7,9.2,7.1,6.4 };
	cout << "Before Reverse: " << endl;
	cout << "Array: ";
	for (int i = 0; i < 5; i++)
	{
		cout << x3[i] << " ";
	}
	cout << endl;
	x3 = reverseElement(x3, 5);
	cout << "After Reverse: " << endl;
	cout << "Array: ";
	for (int i = 0; i < 5; i++)
	{
		cout << x3[i] << " ";
	}
	cout << endl;
	return 0;
}
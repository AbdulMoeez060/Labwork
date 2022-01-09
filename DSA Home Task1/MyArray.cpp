//#include "MyArray.h"

template<class T>
MyArray<T>::MyArray(int size)
{
	Array<T>::capacity = size;
	Array<T>::arr = new T[Array<T>::capacity];
	Array<T>::rear = -1;
	Array<T>::front = 0;
	Array<T>::count = 0;
}
template<class T>
void MyArray<T>::insert(T val)
{
	if (isFull())
	{
		cout << "Array is already full." << endl;


	}
	cout << "Adding " << val << endl;
	Array<T>::arr[Array<T>::front] = val;
	Array<T>::rear++;
	Array<T>::count++;
}

template<class T>
void MyArray<T>::delete1()
{
	if (isEmpty())
	{
		cout << "Array is empty." << endl;
		return 0;
	}
	cout << "Deleting " << Array<T>::arr[Array<T>::rear] << " from end." << endl;
	Array<T>::rear--;
	Array<T>::count--;
}
template<class T>
void MyArray<T>::delete2()
{
	if (isEmpty())
	{
		cout << "Array is empty." << endl;
		return 0;
	}
	cout << "Deleting " << Array<T>::arr[Array<T>::front] << " from front." << endl;
	Array<T>::front++;
	Array<T>::count--;
}
template<class T>
T MyArray<T>::last()
{
	if (!isEmpty())
	{
		return (Array<T>::arr[Array<T>::rear]);
	}
	else
	{
		cout << "Array is empty." << endl;
		return 0;
	}
}
template<class T>
int MyArray<T>::size()
{
	return Array<T>::count;
}
template<class T>
bool MyArray<T>::isEmpty()
{
	return (size() == 0);
}
template<class T>
bool MyArray<T>::isFull()
{
	return (size() == Array<T>::capacity);
}
template<class T>
void MyArray<T>::display()
{
	cout << "Size: " << MyArray<T>::capacity << endl;
	cout << "No of indexes filled: " << MyArray<T>::count << endl;
	cout << "Rear: " << MyArray<T>::rear << endl;
	cout << "Front: " << MyArray<T>::front << endl;
	for (int i = MyArray<T>::front; i < MyArray<T>::rear; i++)
	{
		cout << "Array[" << i << "]: ";
		cout << MyArray<T>::arr[i] << endl;
	}
}
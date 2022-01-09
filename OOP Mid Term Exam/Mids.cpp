#include"Mids.h"

IntegerList::IntegerList() 
{
	arr = NULL;
	arr = new int[100];
}
IntegerList::IntegerList(int s)
{
	arr = NULL;
	arr = new int[s];
	for (int i = 0; i < s; i++)
	{
		arr[i] = 0;
	}
}
IntegerList::IntegerList(const IntegerList& obj, int start, int end)
{
	arr = NULL;
	size = (end - start) + 1;
	arr = new int[size];
	int x = 0;
	for (int i = start-1; i < size+1; i++)
	{
		this->arr[x] = obj.arr[i];
		x++;
	}
}
IntegerList::IntegerList(const IntegerList& obj)
{
	if (this->arr!=NULL)
	{
		delete[] this->arr;
	}
	this->arr = NULL;
	size = obj.size;
	this->arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		this->arr[i] = obj.arr[i];
	}
}
IntegerList::~IntegerList()
{
	delete[] arr;
	size = 0;
}
void IntegerList::insert(int value)
{
	arr[size] = value;
	size = size + 1;
}
void IntegerList::clear()
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
	size = 0;
}
int IntegerList::getCount()
{
	return size;
}
void print(const IntegerList& obj)
{
	for (int i = 0; i < obj.size; i++)
	{
		cout << obj.arr[i] << " ";
	}
	cout << endl;
}
int& IntegerList::operator[](int index)
{
	if (index>size)
	{
		cout << "Index out of bound.So returning 0 index." << endl;
		return arr[0];
	}
	return arr[index];
}
void IntegerList::operator=(const IntegerList& obj)
{
	if (this->arr != NULL)
	{
		delete[] this->arr;
	}
	this->arr = NULL;
	this->size = obj.size;
	this->arr = new int[this->size];
	for (int i = 0; i < this->size; i++)
	{
		this->arr[i] = obj.arr[i];
	}
}
bool IntegerList::operator==(const IntegerList& obj)
{
	if (size!=obj.size)
	{
		return 0;
	}
	else if (size==obj.size)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i] != obj.arr[i])
			{
				return 0;
			}
		}
		return 1;
	}
}
bool IntegerList::operator!=(const IntegerList& obj)
{
	if (size != obj.size)
	{
		return 1;
	}
	else if (size == obj.size)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i] != obj.arr[i])
			{
				return 1;
			}
		}
		return 0;
	}
}
IntegerList IntegerList::operator+(const IntegerList& obj)
{
	IntegerList l;
	l.size = (this->size + obj.size);
	if (l.arr!=NULL)
	{
		delete[] l.arr;
	}
	l.arr = NULL;
	l.arr = new int[l.size];
	int i ;
	for (i = 0; i < this->size; i++)
	{
		l.arr[i] = this->arr[i];
	}
	int x = 0;
	for (i ; i < l.size; i++)
	{
		
		l.arr[i] = obj.arr[x];
		x++;
	}
	return l;
}
IntegerList IntegerList::operator++()
{
	IntegerList l;
	l.size = this->size;
	if (l.arr != NULL)
	{
		delete[] l.arr;
	}
	l.arr = NULL;
	l.arr = new int[l.size];
	for (int i = 0; i < l.size; i++)
	{
		l.arr[i] = this->arr[i] + 1;
	}
	return l;
}
IntegerList IntegerList::operator--()
{
	IntegerList l;
	l.size = this->size;
	if (l.arr != NULL)
	{
		delete[] l.arr;
	}
	l.arr = NULL;
	l.arr = new int[l.size];
	for (int i = 0; i < l.size; i++)
	{
		l.arr[i] = this->arr[i] - 1;
	}
	return l;
}
IntegerList IntegerList::operator++(int)
{
	IntegerList l;
	l.size = this->size;
	if (l.arr != NULL)
	{
		delete[] l.arr;
	}
	l.arr = NULL;
	l.arr = new int[l.size];
	for (int i = 0; i < l.size; i++)
	{
		l.arr[i] = this->arr[i] + 1;
	}
	return l;
}
IntegerList IntegerList::operator--(int)
{
	IntegerList l;
	l.size = this->size;
	if (l.arr != NULL)
	{
		delete[] l.arr;
	}
	l.arr = NULL;
	l.arr = new int[l.size];
	for (int i = 0; i < l.size; i++)
	{
		l.arr[i] = this->arr[i] - 1;
	}
	return l;
}
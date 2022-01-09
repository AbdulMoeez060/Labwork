#include<iostream>
using namespace std;

class IntegerList
{
private:
	int* arr;
	int size = 0;
public:
	IntegerList();
	IntegerList(int s);
	IntegerList(const IntegerList& obj, int start, int end);
	IntegerList(const IntegerList& obj);
	~IntegerList();
	void insert(int value);
	void clear();
	int getCount();
	friend void print(const IntegerList& obj);
	int& operator[](int index);
	void operator=(const IntegerList& obj);
	bool operator==(const IntegerList& obj);
	bool operator!=(const IntegerList& obj);
	IntegerList operator+(const IntegerList& obj);
	IntegerList operator++();
	IntegerList operator--();
	IntegerList operator++(int);
	IntegerList operator--(int);
};

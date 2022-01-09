#include"tStack.h"
#include<iostream>
using namespace std;

int main()
{
	cout << "=====Stack as Int======"<<endl;
	Stack<int> st_obj(5);
	st_obj.push(3);
	st_obj.push(6);
	st_obj.push(4);
	st_obj.displayStack();
	int value = st_obj.pop();
	cout << "Stack after poping a element: " << endl;
	st_obj.displayStack();
	st_obj.push(-9);
	st_obj.displayStack();
	
	cout << "=====Stack as double=====" << endl;
	Stack<double> st_obj1(5);
	st_obj1.push(3.8);
	st_obj1.push(6.1);
	st_obj1.push(4.3);
	st_obj1.displayStack();
	double value1 = st_obj1.pop();
	cout << "Stack after poping a element: " << endl;
	st_obj1.displayStack();
	st_obj1.push(-9);
	st_obj1.displayStack();
	cout << "=====Stack as char=====" << endl;
	Stack<char> st_obj2(5);
	st_obj2.push('h');
	st_obj2.push('e');
	st_obj2.push('y');
	st_obj2.displayStack();
	char value2 = st_obj2.pop();
	cout << "Stack after poping a element: " << endl;
	st_obj2.displayStack();
	st_obj2.push('i');
	st_obj2.displayStack();
	return 0;
}
#include"iStack.h"
#include<iostream>
using namespace std;

int main()
{
	Stack st_obj(5);
	st_obj.push(3);
	st_obj.push(6);
	st_obj.push(4);
	st_obj.displayStack();
	int value = st_obj.pop();
	cout << "Stack after poping a element: " << endl;
	st_obj.displayStack();
	st_obj.push(-9);
	st_obj.displayStack();
	return 0;
}
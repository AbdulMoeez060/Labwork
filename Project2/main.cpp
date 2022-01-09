#include"MyStack.h"

int main()
{
	MyStack<char> obj(4);
	obj.pop();//To check if isEmpty() works which is used in pop.
	obj.push('D');//i have input good in reverse
	obj.push('O');
	obj.push('O');
	obj.push('G');
	obj.push('F');//as the size is 4 it checks if the isFull() used in push works or not.
	obj.display();
	obj.pop();
	obj.display();
	obj.push('F');//in stack it is d o o f after this 
	obj.display();//this displays FOOD, well in different lines
	return 0;
}
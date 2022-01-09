#include<iostream>
using namespace std;

int main()
{
	int x = 50, y = 65, * ptr;
	ptr = &x;
	cout << x << " " << &x<<" " << y << " " << &y << " " << ptr << " " << *ptr << " " << &ptr << endl;
	*ptr = y;
	cout << x << " " << &x<<" " << y << " " << &y << " " << ptr << " " << *ptr << " " << &ptr << endl;
	ptr = &y;
	cout << x << " " << &x<<" " << y << " " << &y << " " << ptr << " " << *ptr << " " << &ptr << endl;
	return 0;
}
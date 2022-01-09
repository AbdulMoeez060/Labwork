#include<iostream>
using namespace std;

int main()
{
	int x = 25, y = 75, * ptr, * ptr2;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	ptr = &x;
	ptr2 = &y;
	*ptr = x*y;
	*ptr2 = x/y;
	*ptr = x/y;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	return 0;
}
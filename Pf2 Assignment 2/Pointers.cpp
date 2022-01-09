#include<iostream>
using namespace std;

int main()
{
	int num = 10;
	cout << num << endl;
	cout << &num << endl;
	int* ptr = &num;
	cout << "Pointer: " << ptr << endl;
	cout << "Pointer address: " << &ptr << endl;
	return 0;
}
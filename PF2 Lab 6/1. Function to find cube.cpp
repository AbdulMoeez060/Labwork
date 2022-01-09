#include<iostream>
using namespace std;

int Cube(int num);
int main()
{
	int num;
	cout << "Enter a Number: ";
	cin >> num;
	int cube = Cube(num);
	cout << "Cube of the given number is " << cube;
	return 0;
}
int Cube(int num)
{
	int cube = num * num * num;
	return cube;
}
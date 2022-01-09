#include<iostream>
using namespace std;

void Square();
int main()
{
	Square();
	return 0;
}
void Square()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	num = num * num;
	cout << "Square: " << num << endl;
}
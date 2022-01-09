#include<iostream>
using namespace std;

void getinput(char*& cptr, int size);
int main()
{
	int size = 50;
	char* cptr = new char[size];
	getinput(cptr, size);
	cout << endl;
	cout << "Your name is " << cptr << endl;
	delete[] cptr;
	return 0;
}
void getinput(char*& cptr, int size)
{
	cout << "Enter your name: ";
	cin.getline(cptr, size);
}
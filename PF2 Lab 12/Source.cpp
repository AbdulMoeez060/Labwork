#include<iostream>
using namespace std;

int main()
{
	int V[5] = { 20,30,40,50,60 };
	int* p = V;
	int** pp = &p;
	int*** ppp = &pp;
	cout << V << " " << &V[0] << " " << V + 1 << " " << V + 2 << " " << p << " " << &p << " " << *p << " " << &(*p) << endl;
	cout << pp << " " << &pp << " " << *pp << " " << &(*pp) << " " << *(*pp) << " " << &(**pp) << " " << pp + 1 << " " << (*pp) + 1 << endl;
	cout << ***ppp << " " << (**ppp) + 1 << " " << *(*(*ppp)) << " " << pp[2];
}
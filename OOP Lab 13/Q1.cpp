#include <iostream>
using namespace std;

template<typename T>
void Swap(T& n1, T& n2)
{
	T temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}

int main()
{
	int i1 = 5, i2 = 9;
	float f1 = 8.2, f2 = 7.6;
	double d1 = 6.1, d2 = 4.4;
	char c1 = 'g', c2 = 'c';
	cout << "Before Swap:" << endl;
	cout << "I1: " << i1 << endl << "I2: " << i2 << endl;
	cout << "F1: " << f1 << endl << "F2: " << f2 << endl;
	cout << "D1: " << d1 << endl << "D2: " << d2 << endl;
	cout << "C1: " << c1 << endl << "C2: " << c2 << endl;
	Swap(i1, i2);
	Swap(f1, f2);
	Swap(d1, d2);
	Swap(c1, c2);
	cout << "After Swap:" << endl;
	cout << "I1: " << i1 << endl << "I2: " << i2 << endl;
	cout << "F1: " << f1 << endl << "F2: " << f2 << endl;
	cout << "D1: " << d1 << endl << "D2: " << d2 << endl;
	cout << "C1: " << c1 << endl << "C2: " << c2 << endl;
	return 0;
}
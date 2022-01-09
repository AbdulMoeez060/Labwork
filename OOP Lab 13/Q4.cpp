#include<iostream>
using namespace std;

template<typename T1,typename T2>
class Operations
{
public:
	T1 a;
	T2 b;
	Operations() { cout << "Creating Class Operations" << endl;}
	~Operations(){ cout << "Destroying Class Operations" << endl; }
	Operations(T1 x, T2 y):a(x),b(y){ cout << "Creating Class Operations" << endl; }
	Operations(const Operations& obj):a(obj.a),b(obj.b){ cout << "Creating Class Operations" << endl; }
	void ADD()
	{
		cout << "The Addition of " << a << " and " << b << " is :" << a + b << endl;
	}
	void Subtract()
	{
		cout << "The Subtraction of " << a << " and " << b << " is :" << a - b << endl;
	}
	void Divide()
	{
		cout << "The Division of " << a << " and " << b << " is :" << a / b << endl;
	}
	void Multiply()
	{
		cout << "The Multiplication of " << a << " and " << b << " is :" << a * b << endl;
	}
};
int main()
{
	cout << "======== Operations with float and double ========" << endl;
	Operations<float, double>obj(3.7f, 4.9);
	obj.ADD();
	obj.Subtract();
	obj.Divide();
	obj.Multiply();
	cout << "======== Operations with char and int ========" << endl;
	Operations<char, int>obj1('h', 2);
	obj1.ADD();
	obj1.Subtract();
	obj1.Divide();
	obj1.Multiply();
	return 0;
}
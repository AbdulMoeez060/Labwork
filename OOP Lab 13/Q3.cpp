#include<iostream>
using namespace std;

//Template function to check equals it takes two of same class and returns true if equal otherwise false
template<typename T>
bool isEqual(T a, T b)
{
	if (a==b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//Template user defined class
template<typename T1>
class A {
public:
	T1 a;
	T1 b;
	A() { cout<<"Creating Class A"<<endl; }
	~A() { cout << "Destroying Class A" << endl; }
	A(T1 x,T1 y):a(x),b(y) { cout << "Creating Class A" << endl; }
	A(const A& obj):a(obj.a),b(obj.b) { cout << "Creating Class A" << endl; }
	bool isEqual()//in this function it compares the two members in the class
	{
		if (a == b)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool operator ==(const A& obj)//this compares two A classes with same variable type eg both have to be double or both have to be integer for it to work 
	{
		if (obj.a == a && obj.b == b)
		{
			return true;
		}
		else
			return false;
	}
};
int main()
{
	cout << "===========With Template Function==========" << endl;
	int a = 5, b=4;
	cout << "a = " << a << endl << "b = " << b << endl << "Now checking if they are equal: ";
	if (isEqual(a,b))
	{
		cout << "Both integars are equal." << endl;
	}
	else
	{
		cout << "Both integars are not equal." << endl;
	}
	cout << "===========With Template Function in class==========" << endl;

	A<char> obj1('a', 'a');
	cout << "Members in Object:" << endl;
	cout << "a = " << obj1.a << endl << "b = " << obj1.b << endl << "Now checking if they are equal: ";
	if (obj1.isEqual())
	{
		cout << "Both members are equal." << endl;
	}
	else
	{
		cout << "Both members are not equal." << endl;
	}
	cout << "===========With Template Function in class with overload'==' ==========" << endl;
	A<double> obj2(3.4, 5.5);
	A<double> obj3(3.4,5.5);
	cout << "Now checking if both classes are equal: ";
	if (obj2==obj3)
	{
		cout << "Both classes are equal." << endl;
	}
	else
	{
		cout << "Both classes are not equal." << endl;
	}
	return 0;
}
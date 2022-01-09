#include<iostream>
using namespace std;

class ComplexNums
{
private:
	int img;
	int real;
public:
	ComplexNums();
	ComplexNums(int i, int r);
	ComplexNums(const ComplexNums &obj);
	void setimg(int i);
	void setreal(int r);
	void getinfo();
	void addcomp(const ComplexNums &obj1, const ComplexNums &obj2);
	void subcomp(const ComplexNums &obj1, const ComplexNums &obj2);
	void mulcomp(const ComplexNums &obj1, const ComplexNums &obj2);
	void increment();
	~ComplexNums();
};
ComplexNums::ComplexNums()
{
	cout << "This is Default constructor" << endl;
}
ComplexNums::ComplexNums(int i,int r)
{
	cout << "This is Parameterized constructor" << endl;
	img = i;
	real = r;
}
ComplexNums::ComplexNums(const ComplexNums &obj)
{
	cout << "This is Copy constructor" << endl;
	img = obj.img;
	real = obj.real;
}
void ComplexNums::setimg(int i)
{
	img = i;
}
void ComplexNums::setreal(int r)
{
	real = r;
}
void ComplexNums::getinfo()
{
	cout << real << "+" << img << "i" << endl;
}
void ComplexNums::addcomp(const ComplexNums &obj1, const ComplexNums &obj2)
{
	int i = obj1.img + obj2.img;
	int r = obj1.real + obj2.real;
	setimg(i);
	setreal(r);
}
void ComplexNums::subcomp(const ComplexNums &obj1, const ComplexNums &obj2)
{
	int i = obj1.img - obj2.img;
	int r = obj1.real - obj2.real;
	setimg(i);
	setreal(r);
}
void ComplexNums::mulcomp(const ComplexNums &obj1, const ComplexNums &obj2)
{
	int r = obj1.real* obj2.real - (obj1.img*obj2.img);
	int i = obj1.real* obj2.img + (obj1.img*obj2.real);
	setimg(i);
	setreal(r);
}
void ComplexNums::increment()
{
	img++;
	real++;
}
ComplexNums::~ComplexNums()
{
	cout << "This is a Destructor" << endl;
}
int main()
{
	ComplexNums C1(2, 4), C2(1, 6), C3;
	cout << "C1: ";
	C1.getinfo();
	cout << "C2: ";
	C2.getinfo();
	int n;
	cout << "Enter 1 to add complex nums,2 to subtract and 3 to Multiply: ";
	cin >> n;
	if (n==1)
	{
		C3.addcomp(C1, C2);
		cout << "After Addition C3: ";
		C3.getinfo();
	}
	else if (n == 2)
	{
		C3.subcomp(C1, C2);
		cout << "After Subtract C3: ";
		C3.getinfo();
	}
	else if (n == 3)
	{
		C3.mulcomp(C1, C2);
		cout << "After Multiplication C3: ";
		C3.getinfo();
	}
	int n2;
	cout << "Enter 1 to increment in C1, 2 to increment in C2 and 3 for C3: ";
	cin >> n2;
	if (n2==1)
	{
		C1.increment();
		cout << "C1 after increment: ";
		C1.getinfo();
	}
	else if (n2 == 2)
	{
		C2.increment();
		cout << "C2 after increment: ";
		C2.getinfo();
	}
	else if (n2 == 3)
	{
		C3.increment();
		cout << "C3 after increment: ";
		C3.getinfo();
	}
	return 0;
}
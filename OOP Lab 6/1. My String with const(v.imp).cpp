#include<iostream>
#include<string>
using namespace std;

class MyString{
private:
	char* myArray = NULL;
	const int size;
public:
	MyString();
	MyString(char *array);
	MyString(char *array, int size);
	MyString(const MyString &obj);
	~MyString();
	void setmyArray(char* array);
	const char* getmyArray() const;
	const int getsize() const;
	void print() const;
};
MyString::MyString() :size(10)
{
	cout << "This a default constructor:" << endl;
}
MyString::MyString(char *array) : size(strlen(array))
{
	cout << "This is Parameterized constructor with char:" << endl;
	myArray = new char[size+1];
	int i = 0;
	for ( i; array[i] != '\0'; i++)
	{
		myArray[i] = array[i];
	}
	myArray[i] = '\0';
}
MyString::MyString(char* array, int size) :size(size)
{
	cout << "This is Parameterized constructor with char and int:" << endl;
	myArray = new char[size + 1];
	int i = 0;
	for (i; array[i] != '\0'; i++)
	{
		myArray[i] = array[i];
	}
	myArray[i] = '\0';
}
MyString::MyString(const MyString &obj) :size(obj.size)
{
	cout << "This is a Copy Constructor: " << endl;
	myArray = new char[size];
	strcpy_s(this->myArray,size,obj.myArray);
}
MyString::~MyString()
{
	cout << "This is a destructor." << endl;
}
void MyString::setmyArray(char* array)
{
	myArray = new char[strlen(array)+1];
	strcpy_s(this->myArray, (strlen(array)+1), array);
}
const char* MyString::getmyArray() const
{
	return myArray;
}
const int MyString::getsize() const
{
	return size;
}
void MyString::print() const
{
	cout << "String: ";
	for (int i = 0; myArray[i] != '\0'; i++)
	{
		cout << myArray[i];
	}
	cout << endl;
	cout << "Size = " << strlen(myArray) << endl;
}
int main()
{
	MyString s1, s2("Hello World"), s3("Bye World", 15);
	s1.setmyArray("Yamaha");
	cout << "Printing S1, S2 and S3 respectively:" << endl;
	s1.print();
	s2.print();
	s3.print();
	cout << "After copying s3 in s4 and changing char array in s3:" << endl;
	MyString s4 = s3;
	s3.setmyArray("TA TA world");
	cout << "S3:" << endl;
	s3.print();
	cout << "S4: " << endl;
	s4.print();
	return 0;
}
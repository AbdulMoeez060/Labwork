#include <iostream>
#include<string>
using namespace std;


class Person {
protected:
	char* name;
	int id;
public:
	Person()
	{
		cout << "Person class" << endl;
		name = nullptr;
	}
	Person(const char n[], int i)
	{
		cout << "Person class" << endl;
		name = nullptr;
		int size = strlen(n) + 1;
		name = new char[size];
		strcpy_s(name, size, n);
		id = i;
	}

	void setname(const char n[])
	{
		if (name != nullptr)
		{
			name = nullptr;
		}
		int size = strlen(n) + 1;
		name = new char[size];
		strcpy_s(name, size, n);
	}
	char* getname()
	{
		return name;
	}
	virtual void name()
	{
		for (int i = 0; name[i] != '\0'; i++)
		{
			cout << name[i];
		}
		cout << endl;
	}
	void setId(int i) { id = i; }
	int getId() { return id; }
	virtual int id() { return id; }
	/*~Person()
	{
		cout << "Destructing Person" << endl;
		delete[] name;
	}*/
};

class Teacher : public Person {
public:
	Teacher() :Person() { cout << "Teacher class" << endl; }
	Teacher(const char n[], int i) :Person(n, i)
	{
		cout << "Teacher class" << endl;
	}
	//char* name() { return name; }
	void name()
	{
		char* n = nullptr;
		n = getname();
		for (int i = 0; n[i] != '\0'; i++)
		{
			cout << n[i];
		}
		cout << endl;
	}
	int id() { return getId(); }
	~Teacher() { cout << "Deleting Teacher" << endl; }
};

class Student : public Person {
public:
	Student() :Person() { cout << "Student class" << endl; }
	Student(const char n[], int i) :Person(n, i) { cout << "Student class" << endl; }
	//char* name() { return "Student name"; }
	void name()
	{
		char* n = nullptr;
		n = getname();
		for (int i = 0; n[i] != '\0'; i++)
		{
			cout << n[i];
		}
		cout << endl;
	}
	int id() { return getId(); }
	~Student() { cout << "Deleting Teacher" << endl; }
};

int main() {
	Person* obj1 = new Student("Abdul Moeez", 4535);
	cout << obj1->name() << endl;
	cout << obj1->id() << endl;
	Person* obj2 = new Person("AMz", 3435);
	cout << obj2->name() << endl;
	cout << obj2->id() << endl;
	Student* obj3 = new Student("Ali", 3435);
	cout << obj3->name() << endl;
	cout << obj3->id() << endl;
	Teacher* obj4 = new Teacher("Azam", 5456);
	cout << obj4->name() << endl;
	cout << obj4->id() << endl;

	return 0;
}

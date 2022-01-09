#include<iostream>
#include<string>
using namespace std;

class Animal {
private:
	string name;
protected:
	Animal() = default;
	Animal(string n)
	{
		cout << "Constructing Animal..." << endl;
		name = n;
	}
	Animal(const Animal& obj) { name = obj.name; }
};
class Dog :public Animal {
public:
	Dog() = default;
	Dog(string n) :Animal(n) {
		cout << "Constructing Dog..." << endl;

	}
	Dog(const Dog& obj) :Animal(obj) { cout << "Copy cons" << endl; }

};
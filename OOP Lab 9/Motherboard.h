#include<iostream>
#include<string>
using namespace std;

class Motherboard
{
private:
	string model;
	int BuiltinOptNum;
public:
	Motherboard();
	Motherboard(string m, int bin);
	Motherboard(const Motherboard& obj);
	~Motherboard();
	void setmodelMotherboard(string m);
	void setbuiltinoptionsMotherboard(int bin);
	string getmodelMotherboard();
	int getbuiltinoptionsMotherboard();
	void displayMotherboard();
};


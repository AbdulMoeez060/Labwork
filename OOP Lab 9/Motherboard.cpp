#include "Motherboard.h"

Motherboard::Motherboard()
{
	cout << "Default Motherboard Constructor" << endl;
	model = {};
	BuiltinOptNum = {};
}
Motherboard::Motherboard(string m, int bin) :model(m),BuiltinOptNum(bin)
{
	cout << "Parameterized Motherboard Constructor" << endl;
}
Motherboard::Motherboard(const Motherboard& obj)
{
	cout << "Copy Motherboard Constructor" << endl;
	model = obj.model;
	BuiltinOptNum = obj.BuiltinOptNum;
}
Motherboard::~Motherboard()
{
	cout << "Motherboard Destructor" << endl;
}
void Motherboard::setmodelMotherboard(string m)
{
	model = m;
}
void Motherboard::setbuiltinoptionsMotherboard(int bin)
{
	BuiltinOptNum = bin;
}
string Motherboard::getmodelMotherboard()
{
	return model;
}
int Motherboard::getbuiltinoptionsMotherboard()
{
	return BuiltinOptNum;
}
void Motherboard::displayMotherboard()
{
	cout << "Motboardher: " << endl << "Model: " << model << endl << "# of Built-in options: " << BuiltinOptNum << endl;

}
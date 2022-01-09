#include "RAM.h"

RAM::RAM()
{
	cout << "Default RAM Constructor" << endl;
	model = {};
	frequency = 0.0;
}
RAM::RAM(string m, float fre) :model(m), frequency(fre)
{
	cout << "Parameterized RAM Constructor" << endl;
}
RAM::RAM(const RAM& obj)
{
	cout << "Copy RAM Constructor" << endl;
	model = obj.model;
	frequency = obj.frequency;
}
RAM::~RAM()
{
	cout << "RAM destructor." << endl;
}
void RAM::setmodelram(string m)
{
	model = m;
}
void RAM::setfrequencyram(float fre)
{
	frequency = fre;
}
string RAM::getmodelram()
{
	return model;
}
float RAM::getfrequencyram()
{
	return frequency;
}
void RAM::displayram()
{
	cout << "RAM: " << endl << "Model: " << model << endl << "Frequency: " << frequency << endl;

}
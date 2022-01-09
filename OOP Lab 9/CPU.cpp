#include"CPU.h"

CPU::CPU()
{
	cout << "Default CPU Constructor" << endl;
	model = {};
	frequency = 0.0;
}
CPU::CPU(string m, float fre):model(m),frequency(fre)
{
	cout << "Parameterized CPU Constructor" << endl;
}
CPU::CPU(const CPU& obj)
{
	cout << "Copy CPU Constructor" << endl;
	model = obj.model;
	frequency = obj.frequency;
}
CPU::~CPU()
{
	cout << "CPU destructor." << endl;
}
void CPU::setmodelcpu(string m)
{
	model = m;
}
void CPU::setfrequencycpu(float fre)
{
	frequency = fre;
}
string CPU::getmodelcpu()
{
	return model;
}
float CPU::getfrequencycpu()
{
	return frequency;
}
void CPU::displaycpu()
{
	cout << "CPU: " << endl << "Model: " << model << endl << "Frequency: " << frequency << endl;
}
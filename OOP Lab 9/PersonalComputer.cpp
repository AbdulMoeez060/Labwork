#include "PersonalComputer.h"

PersonalComputer::PersonalComputer() :cpu(), gpu(), hdd(), motherboard(),ram(),sound()
{
	cout << "Default PC Constructor." << endl;
}
PersonalComputer::PersonalComputer(CPU c, GPU g, HDD h, Motherboard m, RAM r, Sound s) : cpu(c), gpu(g), hdd(h), motherboard(m), ram(r), sound(s)
{
	cout << "Parameterized PC Constructor." << endl;
}
PersonalComputer::~PersonalComputer()
{
	cout << "PC Destructor." << endl;
}
void PersonalComputer::setcpu(string m, float fre)
{
	cpu.setmodelcpu(m);
	cpu.setfrequencycpu(fre);
}
void PersonalComputer::setgpu(int im, float fre)
{
	gpu.setinternalmemgpu(im);
	gpu.setfrequencygpu(fre);
}
void PersonalComputer::setram(string m, float fre)
{
	ram.setmodelram(m);
	ram.setfrequencyram(fre);
}
void PersonalComputer::sethdd(string m,double cap)
{
	hdd.setmodelhdd(m);
	hdd.setcapacityhdd(cap);
}
void PersonalComputer::setmotherboard(string m, int bin)
{
	motherboard.setmodelMotherboard(m);
	motherboard.setbuiltinoptionsMotherboard(bin);
}
void PersonalComputer::setsound(string m, int ch)
{
	sound.setmodelSound(m);
	sound.setchannelsSound(ch);
}
CPU PersonalComputer::getcpu()
{
	return cpu;
}
GPU PersonalComputer::getgpu()
{
	return gpu;
}
RAM PersonalComputer::getram()
{
	return ram;
}
HDD PersonalComputer::gethdd()
{
	return hdd;
}
Motherboard PersonalComputer::getmotherboard()
{
	return motherboard;
}
Sound PersonalComputer::getsound()
{
	return sound;
}
void PersonalComputer::displayPC()
{
	cout << "Personal Computer: " << endl;
	cpu.displaycpu();
	gpu.displaygpu();
	hdd.displayhdd();
	ram.displayram();
	motherboard.displayMotherboard();
	sound.displaySound();
}
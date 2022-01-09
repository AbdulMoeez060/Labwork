#include<iostream>
#include<string>
#include"CPU.h"
#include"GPU.h"
#include"HDD.h"
#include"Motherboard.h"
#include"RAM.h"
#include"Sound.h"
using namespace std;


class PersonalComputer
{
private:
	CPU cpu;
	GPU gpu;
	HDD hdd;
	Motherboard motherboard;
	RAM ram;
	Sound sound;
public:
	PersonalComputer();
	PersonalComputer(CPU c, GPU g, HDD h, Motherboard m, RAM r, Sound s);
	~PersonalComputer();
	void setcpu(string m,float fre);
	void setgpu(int im,float fre);
	void setram(string m, float fre);
	void sethdd(string m,double cap);
	void setmotherboard(string m,int bin);
	void setsound(string m,int ch);
	CPU getcpu();
	GPU getgpu();
	RAM getram();
	HDD gethdd();
	Motherboard getmotherboard();
	Sound getsound();
	void displayPC();
};


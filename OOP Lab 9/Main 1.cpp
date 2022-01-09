#include"PersonalComputer.h"
#include"CPU.h"
#include"GPU.h"
#include"HDD.h"
#include"Motherboard.h"
#include"RAM.h"
#include"Sound.h"
#include<iostream>
using namespace std;

int main()
{
	CPU c("Intel", 2.3);
	GPU g(7, 4.4);
	HDD h("Sony", 1024);
	Motherboard m("ROG", 14);
	RAM r("DD4", 1024.00);
	Sound s("Dolby", 3);
	PersonalComputer pc(c, g, h, m, r, s);
	pc.displayPC();
	return 0;
}
#pragma once
#include "Printer.h"
#include"Scanner.h"

class Copier :virtual public Printer,virtual public Scanner
{
public:
	Copier() { cout << "Copier Class..." << endl; }
	Copier(string pd, string si, string pi) :Scanner(pd, si), Printer(pd, pi)
	{
		cout << "Copier Class..." << endl;
		
	}
	Copier(const Copier& obj):Printer(obj),Scanner(obj)
	{
		cout << "Copier Class..." << endl;
	}
	~Copier(){ cout << "Destroying Copier Class..." << endl; }
	void display()
	{
		PoweredDevice::display();
		cout << "SID of Copier is " << getSID() << endl;
		cout << "PID of Copier is " << getPID() << endl;
	}
};


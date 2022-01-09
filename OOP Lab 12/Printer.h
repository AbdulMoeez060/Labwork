#pragma once
#include "PoweredDevice.h"

class Printer : public PoweredDevice
{
private:
	string PID = {};
public:
	Printer() { cout << "Printer Class..." << endl; }
	Printer(string pd, string pi) :PoweredDevice(pd), PID(pi)
	{
		cout << "Printer Class..." << endl;
		cout << "PID of Printer is :" << PID << endl;
	}
	Printer(const Printer& obj) :PoweredDevice(obj), PID(obj.PID)
	{
		cout << "Printer Class..." << endl;
		cout << "PID of Printer is :" << PID << endl;
	}
	~Printer() { cout << "Destroying Printer..." << endl; }
	void setPID(string id) { PID = id; }
	string getPID() { return PID; }
	void display()
	{
		PoweredDevice::display();
		cout << "PID of Printer is :" << PID << endl;

	}
};


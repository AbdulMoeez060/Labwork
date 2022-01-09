#pragma once
#include "PoweredDevice.h"

class Scanner : public PoweredDevice
{
private:
	string SID = {};
public:
	Scanner() { cout << "Scanner Class..." << endl; }
	Scanner(string p,string s) :PoweredDevice(p),SID(s)
	{
		cout << "Scanner Class..." << endl;
		cout << "SID of Scanner is :" << s << endl;
	}
	Scanner(const Scanner& obj) :PoweredDevice(obj),SID(obj.SID)
	{
		cout << "Scanner Class..." << endl;
		cout << "SID of Scanner is :" << SID << endl;
	}
	~Scanner() { cout << "Destroying Scanner..." << endl; }
	void setSID(string id) { SID = id; }
	string getSID() { return SID; }
	void display()
	{
		PoweredDevice::display();
		cout << "SID of Scanner is :" << SID << endl;

	}
};


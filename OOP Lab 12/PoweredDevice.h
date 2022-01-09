#pragma once
#include<iostream>
#include<string>
using namespace std;


class PoweredDevice
{
private:
	string PDID = {};
public:
	PoweredDevice() { cout << "Powered Device Class..." << endl; }
	PoweredDevice(string id):PDID(id)
	{ 
		cout << "Powered Device Class..." << endl;
		cout << "PDID of Powered Device is :" << PDID << endl;
	}
	PoweredDevice(const PoweredDevice& obj):PDID(obj.PDID) 
	{ 
		cout << "Powered Device Class..." << endl;
		cout << "PDID of Powered Device is :" << PDID << endl;
	}
	~PoweredDevice() { cout << "Destroying Powered Device..." << endl; }
	void setPDID(string id) { PDID = id; }
	string getPDID() { return PDID; }
	virtual void display()
	{
		cout << "PDID of Powered Device is :" << PDID << endl;
	}
};


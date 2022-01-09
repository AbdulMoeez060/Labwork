#pragma once
#include<iostream>
#include<string>
using namespace std;

class Package
{
protected:
	string senderName;
	string senderAddress;
	string senderCity;
	string senderState;
	int senderZipCode;
	string receiverName;
	string receiverAddress;
	string receiverCity;
	string receiverState;
	int receiverZipCode;
	double weightOu;
	double costperOu;
public:
	Package()
	{
		cout << "Constructing Package..." << endl;
		senderName = {};
		senderAddress = {};
		senderCity = {};
		senderState = {};
		senderZipCode = {};
		receiverName = {};
		receiverAddress = {};
		receiverCity = {};
		receiverState = {};
		receiverZipCode = {};
		weightOu = {};
		costperOu = {};
	}
	Package(string sn, string sa, string sc, string ss, int sz, string rn, string ra, string rc, string rs, int rz, double w, double c)
	{
		cout << "Constructing Package..." << endl;
		senderName = sn;
		senderAddress = sa;
		senderCity = sc;
		senderState = ss;
		senderZipCode = sz;
		receiverName = rn;
		receiverAddress = ra;
		receiverCity = rc;
		receiverState = rs;
		receiverZipCode = rz;
		weightOu = w;
		costperOu = c;
		while (weightOu<=0 && costperOu <= 0)
		{
			if (weightOu <= 0)
			{
				cout << "Weight of the package must be in positive value so please enter weight again: ";
				cin >> weightOu;
			}
			if (costperOu <= 0)
			{
				cout << "Cost of the package must be in positive value so please enter cost again: ";
				cin >> costperOu;
			}
		}
		
	}
	Package(const Package& p)
	{
		cout << "Constructing Package..." << endl;
		senderName = p.senderName;
		senderAddress = p.senderAddress;
		senderCity = p.senderCity;
		senderState = p.senderState;
		senderZipCode = p.senderZipCode;
		receiverName = p.receiverName;
		receiverAddress = p.receiverAddress;
		receiverCity = p.receiverCity;
		receiverState = p.receiverState;
		receiverZipCode = p.receiverZipCode;
		weightOu = p.weightOu;
		costperOu = p.costperOu;
	}
	virtual ~Package()
	{
		cout << "Destructing Package..." << endl;
	}
	string getsenderName()const { return senderName; }
	string getsenderAddress()const { return senderAddress; }
	string getsenderCity()const { return senderCity; }
	string getsenderState()const { return senderState; }
	int getsenderZipCode()const { return senderZipCode; }
	string getreceiverName()const { return receiverName; }
	string getreceiverAddress()const { return receiverAddress; }
	string getreceiverCity()const { return receiverCity; }
	string getreceiverState()const { return receiverState; }
	int getreceiverZipCode()const { return receiverZipCode; }
	double getweightOu()const { return weightOu; }
	double getcostperOu()const { return costperOu; }
	void setsenderName(string sn) { senderName=sn; }
	void setsenderAddress(string sa) { senderAddress=sa; }
	void setsenderCity(string sc) { senderCity=sc; }
	void setsenderState(string ss) { senderState=ss; }
	void setsenderZipCode(int sz) { senderZipCode=sz; }
	void setreceiverName(string rn) { receiverName=rn; }
	void setreceiverAddress(string ra) { receiverAddress=ra; }
	void setreceiverCity(string rc) { receiverCity=rc; }
	void setreceiverState(string rs) { receiverState=rs; }
	void setreceiverZipCode(int rz) { receiverZipCode=rz; }
	void setweightOu(double w) { weightOu=w; }
	void setcostperOu(double c) { costperOu=c; }
	virtual double calculateCost()
	{
		return weightOu * costperOu;
	}
	virtual void display()
	{
		cout << "Sender Name: " << senderName << endl;
		cout << "Sender Address: " << senderAddress<< endl;
		cout << "Sender City: " << senderCity << endl;
		cout << "Sender State: " << senderState << endl;
		cout << "Sender ZipCode: " << senderZipCode << endl;
		cout << "Receiver Name: " << receiverName << endl;
		cout << "Receiver Address: " << receiverAddress << endl;
		cout << "Receiver City: " << receiverCity << endl;
		cout << "Receiver State: " << receiverState << endl;
		cout << "Receiver ZipCode: " << receiverZipCode << endl;
		cout << "Weight of Package(in ou): " << weightOu << endl;
		cout << "Cost of Package(per ou): " << costperOu << endl;
	}
};
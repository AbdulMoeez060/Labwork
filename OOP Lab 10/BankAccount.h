#pragma once
#include<iostream>
#include<string>
using namespace std;

class BankAccount
{
private:
	string title;
	int accountNumber;
	double balance;
	string dateOfOpening;
	static int countb;
public:
	BankAccount();
	BankAccount(string, int, double, string);
	BankAccount(const BankAccount& obj);
	~BankAccount();
	void settitle(string);
	void setaccountNumber(int);
	void setbalance(double);
	void setdateOfOpening(string);
	string gettitle();
	int getaccountNumber();
	double getbalance();
	string getdateOfOpening();
	void deposit();
	void withdraw();
	void displayBankAcoount();
};


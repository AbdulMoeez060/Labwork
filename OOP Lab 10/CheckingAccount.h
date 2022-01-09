#pragma once
#include "BankAccount.h"

class CheckingAccount :public BankAccount
{
private:
	double feePerTrans;
	static int countC;
public:
	CheckingAccount();
	CheckingAccount(string, int, double, string, double);
	CheckingAccount(const CheckingAccount& obj);
	~CheckingAccount();
	void setfeePerTrans(double);
	double getfeePerTrans();
	void withdraw();
	void deposit();
	void displayCheckingA();
	void displayCountCA();
};


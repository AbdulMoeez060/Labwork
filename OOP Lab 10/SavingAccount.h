#pragma once
#include "BankAccount.h"
class SavingAccount :public BankAccount
{
private:
	double interestRate;
	static int countS;
public:
	SavingAccount();
	SavingAccount(string,int,double,string,double);
	SavingAccount(const SavingAccount& obj);
	~SavingAccount();
	void setinterestRate(double);
	double getinterestRate();
	double calculateInterest();
	void withdraw();
	void deposit();
	void displaySavingAccount();
	void displayCountSA();
};


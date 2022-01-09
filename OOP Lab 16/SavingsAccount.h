#pragma once
#include "Account.h"

class SavingsAccount : public Account
{
private:
	double interestRate;
public:
	SavingsAccount():Account()
	{
		cout << "Contructing Savings Account..." << endl;
		interestRate = 0.0;
	}
	SavingsAccount(double a,double i):Account(a)
	{
		cout << "Contructing Savings Account..." << endl;
		interestRate = i;
	}
	SavingsAccount(const SavingsAccount &obj):Account(obj)
	{
		cout << "Contructing Savings Account..." << endl;
		interestRate = obj.interestRate;
	}
	~SavingsAccount()
	{
		cout << "Destructing Savings Account..." << endl;
	}
	void setinterestRate(double i)
	{
		interestRate = i;
	}
	double getinterestRate() { return interestRate; }
	double calculateInterest()
	{
		return (interestRate * getBalance());
	}
	void display() override
	{
		cout << "Savings Account:" << endl;
		Account::display();
		cout << "Interest Rate: " << interestRate << endl;
		cout << "Total Interest: " << calculateInterest() << endl;
	}
};


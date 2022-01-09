#pragma once
#include "Account.h"

class CheckingAccount : public Account
{
private:
	double feeperTrans;
public:
	CheckingAccount() :Account()
	{
		cout << "Contructing Checking Account..." << endl;
		feeperTrans = 0.0;
	}
	CheckingAccount(double a, double f) :Account(a)
	{
		cout << "Contructing Checking Account..." << endl;
		feeperTrans = f;
	}
	CheckingAccount(const CheckingAccount& obj) :Account(obj)
	{
		cout << "Contructing Checking Account..." << endl;
		feeperTrans = obj.feeperTrans;
	}
	~CheckingAccount()
	{
		cout << "Destructing Checking Account..." << endl;
	}
	void setfeeperTrans(double f)
	{
		feeperTrans = f;
	}
	double getfeeperTrans() { return feeperTrans; }
	void credit(double amount)
	{
		cout << "For Checking Account:" << endl;
		Account::credit(amount);
		double temp = (getBalance() - feeperTrans);
		setaccountBalance(temp);
		cout << "Balance after deducing the fee per transaction: " << getBalance() << endl;
	}
	bool debit(double amount)
	{
		cout << "For Checking Account:" << endl;
		if (Account::debit(amount))
		{
			double temp = (getBalance() - feeperTrans);
			setaccountBalance(temp);
			cout << "Balance after deducing the fee per transaction: " << getBalance() << endl;
			return 1;
		}
		else
		{
			cout << "Transaction not Successful..." << endl;
			return 0;
		}
	}
	void display() override
	{
		cout << "Checking Account:" << endl;
		Account::display();
		cout << "Fee per Transaction: " << feeperTrans << endl;
	}
};


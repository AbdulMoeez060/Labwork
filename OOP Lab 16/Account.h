#pragma once
#include<iostream>
using namespace std;

class Account
{
private:
	double accountBalance;
public:
	Account()
	{
		cout << "Constructing Account..." << endl;
		accountBalance = 0.0;
	}
	Account(double a)
	{
		cout << "Constructing Account..." << endl;
		if (a>=0.0)
		{
			accountBalance = a;

		}
		else
		{
			accountBalance = 0.0;
			cout << "The amount you entered is Invalid." << endl;
		}
	}
	Account(const Account& obj):accountBalance(obj.accountBalance)
	{
		cout << "Constructing Account..." << endl;
	}
	~Account()
	{
		cout << "Destructing Account..." << endl;
	}
	void setaccountBalance(double a)
	{
		if (a >= 0.0)
		{
			accountBalance = a;

		}
		else
		{
			cout << "The amount you entered is Invalid." << endl;
			accountBalance = 0.0;
		}
	}
	double getBalance() { return accountBalance; }
	void credit(double amount)
	{
		cout << "Account Balance before transaction is " << accountBalance << endl;
		accountBalance += amount;
		cout << "Crediting the amount " << amount << " into the Account. " << endl;
		cout << "Account Balance after transaction is " << accountBalance << endl;
	}
	bool debit(double amount)
	{
		if (amount>accountBalance)
		{
			cout << "The amount you entered exceed the balance in your account so the transaction cannnot be carried out." << endl;
			return 0;
		}
		else
		{
			cout << "Account Balance before transaction is " << accountBalance << endl;
			accountBalance -= amount;
			cout << "Debiting the amount " << amount << " from the Account: " << endl;
			cout << "Account Balance after transaction is " << accountBalance << endl;
			return 1;
		}
	}
	virtual void display()
	{
		cout << "Account Balance: " << accountBalance << endl;
	}
};


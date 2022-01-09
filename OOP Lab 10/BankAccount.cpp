#include "BankAccount.h"

int BankAccount::countb = 0;
BankAccount::BankAccount()
{
	cout << "Constructing Bank Account: " << endl;
	countb++;
}
BankAccount::BankAccount(string t, int a, double b, string d):title(t),accountNumber(a),balance(b),dateOfOpening(d)
{
	cout << "Constructing Bank Account: " << endl;
	countb++;
}
BankAccount::BankAccount(const BankAccount& obj) : title(obj.title), accountNumber(obj.accountNumber), balance(obj.balance), dateOfOpening(obj.dateOfOpening)
{
	cout << "Constructing Bank Account: " << endl;
	
	countb++;
}
BankAccount::~BankAccount()
{
	cout << "Destructing Bank Account: " << endl;

}
void BankAccount::settitle(string t)
{
	title = t;
}
void BankAccount::setaccountNumber(int a)
{
	accountNumber = a;
}
void BankAccount::setbalance(double b)
{
	balance = b;
}
void BankAccount::setdateOfOpening(string d)
{
	dateOfOpening = d;
}
string BankAccount::gettitle()
{
	return title;
}
int BankAccount::getaccountNumber()
{
	return accountNumber;
}
double BankAccount::getbalance()
{
	return balance;
}
string BankAccount::getdateOfOpening()
{
	return dateOfOpening;
}
void BankAccount::deposit()
{
	double dep;
	cout << "Enter the amount of money you want to depsite: ";
	cin >> dep;
	balance += dep;
}
void BankAccount::withdraw()
{
	double with;
	cout << "Enter the amount of money you want to withdraw: ";
	cin >> with;
	if (balance>=with)
	{
		balance -= with;
	}
	else 
	{
		cout << "Error:Amount you want to withdraw is greater than the balance." << endl;
	}
}
void BankAccount::displayBankAcoount()
{
	cout << "Title: " << title << endl << "Account Number: " << accountNumber << endl;
	cout << "Balance: " << balance << endl << "Date of Account opening: " << dateOfOpening << endl;
}
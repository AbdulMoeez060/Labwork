#include "CheckingAccount.h"

int CheckingAccount::countC = 0;
CheckingAccount::CheckingAccount() :BankAccount()
{
	cout << "Constructing Checking Account..." << endl;
	countC++;
}
CheckingAccount::CheckingAccount(string t, int a, double b, string d, double f) : BankAccount(t, a, b, d), feePerTrans(f)
{
	cout << "Constructing Checking Account..." << endl;
	countC++;
}
CheckingAccount::CheckingAccount(const CheckingAccount& obj) : BankAccount(obj), feePerTrans(obj.feePerTrans)
{
	cout << "Copying Checking Account..." << endl;
	countC++;
}
CheckingAccount::~CheckingAccount()
{
	cout << "Destructing Checking Account..." << endl;
}
void CheckingAccount::setfeePerTrans(double f)
{
	feePerTrans = f;
}
double CheckingAccount::getfeePerTrans()
{
	return feePerTrans;
}
void CheckingAccount::withdraw()
{
	double balance = getbalance();
	double with;
	cout << "Enter the Amount you want to withdraw: ";
	cin >> with;
	cout << "Balance before subtracting Fee per transaction is " << balance << endl;
	balance -= feePerTrans;
	cout << "Balance after subtracting Fee per transaction is " << balance << endl;
	if (balance >= with)
	{
		balance -= with;
		setbalance(balance);
		cout << "Balance after withdraw is " << getbalance() << endl;
	}
	else {
		cout << "Error:Amount you want to withdra is more than the balance." << endl;
	}
}
void CheckingAccount::deposit()
{
	double balance = getbalance();
	double dep;
	cout << "Enter the Amount you want to deposit: ";
	cin >> dep;
	cout << "Balance before subtracting Fee Per Transaction is " << balance << endl;
	balance -= feePerTrans;
	cout << "Balance after subtracting Fee Per Transaction is " << balance << endl;
	balance += dep;
	setbalance(balance);
	cout << "Balance after deposit is " << getbalance() << endl;
}
void CheckingAccount::displayCheckingA()
{
	displayBankAcoount();
	cout << "Fee Per Transaction: " << feePerTrans << endl;
}
void CheckingAccount::displayCountCA()
{
	cout << "The number of Saving Account is " << countC << endl;
}
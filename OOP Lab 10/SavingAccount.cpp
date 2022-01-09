#include "SavingAccount.h"

int SavingAccount::countS = 0;
SavingAccount::SavingAccount():BankAccount()
{
	cout << "Constructing Saving Account..." << endl;
	countS++;
}
SavingAccount::SavingAccount(string t, int a, double b, string d, double i):BankAccount(t,a,b,d),interestRate(i)
{
	cout << "Constructing Saving Account..." << endl;
	countS++;
}
SavingAccount::SavingAccount(const SavingAccount& obj):BankAccount(obj),interestRate(obj.interestRate)
{
	cout << "Copying Saving Account..." << endl;
	countS++;
}
SavingAccount::~SavingAccount()
{
	cout << "Destructing Saving Account..." << endl;
}
void SavingAccount::setinterestRate(double i)
{
	interestRate = i;
}
double SavingAccount::getinterestRate()
{
	return interestRate;
}
double SavingAccount::calculateInterest()
{
	double b = getbalance();
	return ( b* (interestRate/100));
}
void SavingAccount::withdraw()
{
	double balance = getbalance();
	double tinterest = calculateInterest();
	double with;
	cout << "Enter the Amount you want to withdraw: ";
	cin >> with;
	cout << "Balance before subtracting Interest is " << balance << endl;
	balance -= tinterest;
	cout << "Balance after subtracting Interest is " << balance << endl;
	if (balance>=with)
	{
		balance -= with;
		setbalance(balance);
		cout << "Balance after withdraw is " << getbalance() << endl;
	}
	else {
		cout << "Error:Amount you want to withdra is more than the balance." << endl;
	}
}
void SavingAccount::deposit()
{
	double balance = getbalance();
	double tinterest = calculateInterest();
	double dep;
	cout << "Enter the Amount you want to deposit: ";
	cin >> dep;
	cout << "Balance before subtracting Interest is " << balance << endl;
	balance -= tinterest;
	cout << "Balance after subtracting Interest is " << balance << endl;
	balance += dep;
	setbalance(balance);
	cout << "Balance after deposit is " << getbalance() << endl;
}
void SavingAccount::displaySavingAccount()
{
	displayBankAcoount();
	cout << "Interest Rate: " << interestRate << endl;
}
void SavingAccount::displayCountSA()
{
	cout << "The number of Saving Account is " << countS << endl;
}
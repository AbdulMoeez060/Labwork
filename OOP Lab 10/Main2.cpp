#include"SavingAccount.h"
#include"CheckingAccount.h"

int main()
{
	cout << "==========Saving Accounts==========" << endl;
	SavingAccount s("Abdul Moeez", 145343, 37550.30, "12/10/2000", 3.5);
	s.displaySavingAccount();
	s.deposit();
	SavingAccount s1 = s;
	s1.settitle("Ali");
	s1.displaySavingAccount();
	s1.withdraw();
	SavingAccount s2 = s1;
	s2.displaySavingAccount();
	s2.displayCountSA();
	cout << "==========Checking Accounts==========" << endl;
	CheckingAccount c("Abdul Moeez", 1453, 4550.30, "12/12/2010", 500);
	c.displayCheckingA();
	c.deposit();
	CheckingAccount c1 = c;
	c1.settitle("Ali");
	c1.displayCheckingA();
	c1.withdraw();
	CheckingAccount c2 = c1;
	c2.displayCheckingA();
	CheckingAccount c3;
	c3.displayCountCA();
	return 0;
}
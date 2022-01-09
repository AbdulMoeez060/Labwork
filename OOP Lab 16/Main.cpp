#include"CheckingAccount.h"
#include"SavingsAccount.h"

int main()
{
	Account obj1(477.4);
	SavingsAccount obj2(394.2, 3.4);
	CheckingAccount obj3(288.4, 10.6);
	cout << "=================Display============================" << endl;
	obj1.display();
	obj2.display();
	obj3.display();
	cout << "=================Credit============================" << endl;
	obj1.credit(100.5);
	obj2.credit(43.3);
	obj3.credit(134.4);
	cout << "=================Debit============================" << endl;
	obj1.debit(50.4);
	obj2.debit(13.35);
	obj3.debit(50.98);
	cout << "=================Interest============================" << endl;
	double interest = obj2.calculateInterest();
	obj2.credit(interest);
	cout << "=============================================" << endl;
	return 0;
}
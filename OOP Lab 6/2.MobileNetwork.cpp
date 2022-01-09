#include<iostream>
#include<string>
using namespace std;

class MobileNetwork
{
private:
	string name;
	string package;
	double balance=0;
	double callRate=0;
public:
	MobileNetwork();
	MobileNetwork(string n, string p, double b, double c);
	MobileNetwork(const MobileNetwork& obj);
	~MobileNetwork();
	string setname(string n);
	string setpackage(string p);
	double setbalance(double b);
	double setcallrate(double c);
	void getname() const;
	void getpackage() const;
	void getbalance() const;
	void getcallrate() const;
	void recharge(double re);
	void discharge(double dis);
	void callcharges(double min);
	void checkbalance() const;
	void getinfo() const;
};
MobileNetwork::MobileNetwork()
{
	cout << "This is a default constructor." << endl;
}
MobileNetwork::MobileNetwork(string n, string p, double b, double c):name(n),package(p),balance(b),callRate(c)
{
	cout << "This is a parameterized constructor." << endl;
}
MobileNetwork::MobileNetwork(const MobileNetwork& obj)
{
	cout << "This is a copy constructor." << endl;
	this->name = obj.name;
	this->package = obj.package;
	this->balance = obj.balance;
	this->callRate = obj.callRate;
}
MobileNetwork::~MobileNetwork()
{
	cout << "This is a destructor." << endl;
}
string MobileNetwork::setname(string n)
{
	name = n;
	return name;
}
string MobileNetwork::setpackage(string p)
{
	package = p;
	return package;
}
double MobileNetwork::setbalance(double b)
{
	balance = b;
	return balance;
}
double MobileNetwork::setcallrate(double c)
{
	callRate = c;
	return callRate;
}
void MobileNetwork::getname() const
{
	cout << "Network Name: " << name << endl;
}
void MobileNetwork::getpackage() const
{
	cout << "Current Package: " << package << endl;
}
void MobileNetwork::getbalance() const
{
	cout << "Current Balance: " << balance << endl;
}
void MobileNetwork::getcallrate() const
{
	cout << "Call Rate(per minute): " << callRate << endl;
}
void MobileNetwork::recharge(double re)
{
	balance = balance + re;
	cout << "Balance after recharge is " << balance << endl;
}
void MobileNetwork::discharge(double dis)
{
	if (balance>dis)
	{
		balance = balance - dis;
		cout << "Balance after discharge is " << balance << endl;
	}
	else
	{
		cout << "Balance is less than the amount you want to discharge!" << endl;
	}
}
void MobileNetwork::callcharges(double min)
{
	cout << "The charges for " << min << " muinutes is " << min * callRate << endl;
	balance = balance - (min * callRate);
}
void MobileNetwork::checkbalance() const
{
	cout << "The current Balance in your account is " << balance << endl;
}
void MobileNetwork::getinfo() const
{
	cout << "Network Name: " << name << endl;
	cout << "Current Package: " << package << endl;
	cout << "Current Balance: " << balance << endl;
	cout << "Call Rate(per minute): " << callRate << endl;
}
int main()
{
	MobileNetwork m1("Jazz", "Weekly", 100, 2.49), m2;
	m2.setname("Telenor");
	m2.setpackage("Daily");
	m2.setbalance(150);
	m2.setcallrate(2.99);
	cout << "Info of Network 1: " << endl;
	m1.getinfo();
	cout << "Info of Network 2: " << endl;
	m2.getinfo();
	int p;
	double  r = 0, d = 0, min = 0;
	cout << "Press 1 to recharge in Network 1, Press 2 for recharge in Network 2 and Press 3 for both: ";
	cin >> p;
	if (p==1)
	{
		r = 0;
		cout << "Enter the amount you want to recharge in Network 1: ";
		cin >> r;
		m1.recharge(r);
	}
	else if (p == 2)
	{
		r = 0;
		cout << "Enter the amount you want to recharge in Network 2: ";
		cin >> r;
		m2.recharge(r);

	}
	else if (p == 3)
	{
		cout << "Enter the amount you want to recharge in Network 1: ";
		cin >> r;
		m1.recharge(r);
		r = 0;
		cout << "Enter the amount you want to recharge in Network 2: ";
		cin >> r;
		m2.recharge(r);
	}
	else {
		cout << "You entered wrong option." << endl;
	}
	p = 0;
	cout << "Press 1 to discharge from Network 1, Press 2 for discharge from Network 2 and Press 3 for both: ";
	cin >> p;
	if (p == 1)
	{
		d = 0;
		cout << "Enter the amount you want to discharge from Network 1: ";
		cin >> d;
		m1.discharge(d);
	}
	else if (p == 2)
	{
		d = 0;
		cout << "Enter the amount you want to discharge from Network 2: ";
		cin >> d;
		m2.discharge(d);

	}
	else if (p == 3)
	{
		cout << "Enter the amount you want to discharge from Network 1: ";
		cin >> d;
		m1.discharge(d);
		d = 0;
		cout << "Enter the amount you want to discharge from Network 2: ";
		cin >> d;
		m2.discharge(d);
	}
	else {
		cout << "You entered wrong option." << endl;
	}
	p = 0;
	cout << "Press 1 to check call charges from Network 1, Press 2 for check call charges from Network 2 and Press 3 for both: ";
	cin >> p;
	if (p == 1)
	{
		min = 0;
		cout << "Enter the minutes you talked on network 1: ";
		cin >> min;
		m1.callcharges(min);
	}
	else if (p == 2)
	{
		min = 0;
		cout << "Enter the minutes you talked on network 2: ";
		cin >> min;
		m2.callcharges(min);

	}
	else if (p == 3)
	{
		cout << "Enter the minutes you talked on network 1: ";
		cin >> min;
		m1.callcharges(min);
		min = 0;
		cout << "Enter the minutes you talked on network 2: ";
		cin >> min;
		m2.callcharges(min);
	}
	else {
		cout << "You entered wrong option." << endl;
	}
	cout << "Info of Network 1 after : " << endl;
	m1.getinfo();
	cout << "Info of Network 2 after: " << endl;
	m2.getinfo();
	return 0;
}
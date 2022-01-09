#include<iostream>
using namespace std;
class bank
{
private:
	char *title;
	int number;
	char *type;
	int balance;
public:
	bank()
	{
		title = nullptr;
		number = 0;
		type = nullptr;
		balance = 0;
	}
	void settitle(char *t)
	{
		if (title)
		{
			delete[]title;
		}
		title = new char[strlen(t) + 1];
		//for (int i = 0; i < strlen(t) + 1; i++)
		//{
			//title[i] = t[i];
		//}
		strcpy(title, t);
	}
	void settype(char *ty)
	{
		if (type)
		{
			delete[]type;
		}
		type = new char[strlen(ty) + 1];
		for (int i = 0; i < strlen(ty) + 1; i++)
		{
			type[i] = ty[i];
		}
	}
	void setnumber(int n)
	{
		number = n;
	}
	void setbalance(int b)
	{
		balance = b;
	}

	char *gettitle()
	{
		char *temp = new char[strlen(title) + 1];
		for (int i = 0; i < strlen(title) + 1; i++)
		{
			temp[i] = title[i];
		}
		return temp;
	}

	char *gettype()
	{
		char *temp = new char[strlen(type) + 1];
		for (int i = 0; i < strlen(type) + 1; i++)
		{
			temp[i] = type[i];
		}
		return temp;
	}

	int getnumber()
	{
		return number;
	}

	int getbalance()
	{
		return balance;
	}
	void deposit(char *t, int n, char *ty, int b, int da)
	{
		cout << "after deposit:" << endl;
		int ad = b + da;
		balance = ad;
		cout << "acount balance:" << ad << endl;
	}
	void withdraw(int b, int wa)
	{
		cout << "after withdraw:" << endl;
		int aw = b + wa;
		balance = aw;
		cout << "acount balance:" << aw << endl;
	}
};
int main()
{
	bank o[10];
	char title[20];
	int number;
	char type[20];
	int balance;
	int e;
	int count=0;

	for (int i = 0; i < 10; i++)
	{
		cout << "enter the title of account" << endl;
		cin >> title;
		o[i].settitle(title);

		cout << "enter the account number:" << endl;
		cin >> number;
		o[i].setnumber(number);

		cout << "enter the type of account" << endl;
		cin >> type;
		o[i].settype(type);

		cout << "enter the account balance:" << endl;
		cin >> balance;
		o[i].setbalance(balance);

		cout << "press 9 to add again and 0 to exit:" << endl;
		cin >> e;
		if (e == 0)
		{
			break;
		}
		system("cls");
		if (e == 9)
		{
			count++;
		}
	}
	int d;
	cout << "enter 1 to view an account detail:" << endl;
	cout << "enter 2 to deposit to an account:" << endl;
	cout << "enter 3 to withdraw from an account:" << endl;
	cin >> d;

	if (d == 1)
	{
		int vd;
		cout << "enter the account number to view details:" << endl;
		cin >> vd;

		for (int i = 0; i < count; i++)
		{
			if (vd == o[i].getnumber())
			{
				cout << "title:" << o[i].gettitle() << endl;
				cout << "account number:" << o[i].getnumber() << endl;
				cout << "account type:" << o[i].gettype() << endl;
				cout << "account balance:" << o[i].getbalance() << endl;
			}
		}
	}
	if (d == 2)
	{
		int D;
		cout << "enter the account number to deposit:" << endl;
		cin >> D;

		for (int i = 0; i < count; i++)
		{
			if (D == o[i].getnumber())
			{
				int da;
				cout << "enter how much ammount you want to deposit:" << endl;
				cin >> da;
				o[i].deposit(o[i].gettitle(), o[i].getnumber(), o[i].gettype(), o[i].getbalance(), da);
			}
		}
	}

	if (d == 3)
	{
		int w;
		cout << "enter the account number to withdraw:" << endl;
		cin >> w;

		for (int i = 0; i < count; i++)
		{
			if (w == o[i].getnumber())
			{
				int wa;
				cout << "enter how much ammount you want to deposit:" << endl;
				cin >> wa;
				for (int j = 0; j < 1000; j++)
				{
					if (wa>o[i].getbalance())
					{
						cout << "not enough balance:" << endl;
						cout << "enter again:" << endl;
						cin >> wa;
					}
					else
					{
						o[i].withdraw(o[i].getbalance(), wa);
						break;
					}
				}
			}
		}
	}
}
		

	

		



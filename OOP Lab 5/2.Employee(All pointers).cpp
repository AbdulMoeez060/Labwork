#include<iostream>
#include<string>
using namespace std;

class Employee
{
private:
	int code=0;
	char* Name=new char[20];
	int YoB=0;
	int YoJ=0;
public:
	Employee();
	//Employee(int c, char n[], int b, int j); Sir said its okay to not create parameterized constructor for this one.
	Employee(const Employee &obj);
	void setcode(int c);
	void setname(char n[]);
	void setbirth(int b);
	void setjoining(int j);
	int getcode();
	void getname();
	int getbirth();
	int getjoining();
	void getinfo();
	~Employee();
};
Employee::Employee()
{
	cout << "This is default constructor." << endl;
}
Employee::Employee(const Employee &obj)
{
	cout << "This is copy constructor." << endl;
	//make an pointer arrayof employee Employee *pte=new Employee[3] the pte[1].name like this
	code = obj.code;
	YoB = obj.YoB;
	YoJ = obj.YoJ;
	int i;
	for (i = 0; obj.Name[i] != '\0'; i++)
	{
		Name[i] = obj.Name[i];
	}
	Name[i] = '\0';
}
void Employee::setcode(int c)
{
	code = c;
}
void Employee::setname(char n[])
{
	int i;
	for (i = 0; n[i] != '\0'; i++)
	{
		Name[i] = n[i];
	}
	Name[i] = '\0';
}
void Employee::setbirth(int b)
{
	YoB = b;
}
void Employee::setjoining(int j)
{
	YoJ = j;
}
int Employee::getcode()
{
	return code;
}
void Employee::getname()
{
	for (int i = 0; Name[i] != '\0'; i++)
	{
		cout << Name[i];
	}
	cout << endl;
}
int Employee::getbirth()
{
	return YoB;
}
int Employee::getjoining()
{
	return YoJ;
}
void Employee::getinfo()
{
	cout << "Name: ";
	for (int i = 0; Name[i] != '\0'; i++)
	{
		cout << Name[i];
	}
	cout << endl;
	cout << "Employee Code: " << code << endl;
	cout << "Year of Birth: " << YoB << endl;
	cout << "Year of Joining: " << YoJ << endl;
}
Employee::~Employee()
{
	cout << "This is a destructor." << endl;
}
int main()
{
	Employee* e = new Employee[3];
	char n1[13] = { "Abdul Moeez" };
	char n2[13] = { "Waleed" };
	char n3[13] = { "Wahab" };
	cout << "All Employ Info: ";
	e[0].setname(n1);
	e[1].setname(n2);
	e[2].setname(n3);
	e[0].setcode(434);
	e[1].setcode(46424);
	e[2].setcode(3456);
	e[0].setbirth(1994);
	e[1].setbirth(1987);
	e[2].setbirth(1990);
	e[0].setjoining(2018);
	e[1].setjoining(2015);
	e[2].setjoining(2010);
	e[0].getinfo();
	e[1].getinfo();
	e[2].getinfo();
	int* ptr = new int[3];
	int x = 0;
	for (int i = 0; i < 3; i++)
	{
		if (2020-e[i].getbirth()>=30)
		{
			ptr[x] = i;
			x++;
		}
	}
	cout << "The count of employees 30 or older is " << x << " and their name are:" << endl;
	for (int i = 0; i < x; i++)
	{
		e[ptr[i]].getname();
	}
	delete[] ptr;
	delete[] e;
	return 0;
}
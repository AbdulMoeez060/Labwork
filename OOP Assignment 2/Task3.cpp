#include<iostream>
#include<string>
using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;
	bool validateDate();
public:
	Date();
	Date(int d, int m, int y);
	Date(const Date& obj);
	~Date();
	void setday(int d);
	void setmonth(int m);
	void setyear(int y);
	int getday() const;
	int getmonth() const;
	int getyear() const;
	bool inputDate();
	bool inputCompletedate(int d, int m, int y);
	void showDate() const;
};
bool Date::validateDate()
{
	if ((day <= 31 && day > 0) && (month > 0 && month <= 12) && (year >= 1900 && year <= 2100))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
Date::Date()
{
	cout << "This is a default constructor." << endl;
	day = 1;
	month = 1;
	year = 2000;
}
Date::Date(int d, int m, int y)
{
	cout << "This is a Parameterized constructor." << endl;
	day = d;
	month = m;
	year = y;
	if (validateDate() == 0)
	{
		day = 1;
		month = 1;
		year = 2000;
	}
}
Date::Date(const Date& obj)
{
	cout << "This is a copy constructor." << endl;
	day = obj.day;
	month = obj.month;
	year = obj.year;
}
Date::~Date()
{
	cout << "This is a destructor." << endl;
}
void Date::setday(int d)
{
	day = d;
}
void Date::setmonth(int m)
{
	month = m;
}
void Date::setyear(int y)
{
	year = y;
}
int Date::getday() const
{
	return day;
}
int Date::getmonth() const
{
	return month;
}
int Date::getyear() const
{
	return year;
}
bool Date::inputDate()
{
	cout << "Enter Day: ";
	cin >> day;
	cout << "Enter Month: ";
	cin >> month;
	cout << "Enter Year: ";
	cin >> year;
	if (validateDate())
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool Date::inputCompletedate(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
	if (validateDate())
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void Date::showDate() const
{
	cout << "Date: " << day << "-" << month << "-" << year << endl;
}
class Name
{
private:
	char* firstname;
	char* lastname;
public:
	Name();
	Name(char* fname, char* lname);
	Name(const Name& obj);
	~Name();
	void setfname(char fname[]);
	void setlname(char lname[]);
	char* getfname() const;
	char* getlname() const;
	bool isValid() const;
	void display() const;
};
Name::Name()
{
	cout << "This is a default constructor" << endl;
	firstname = NULL;
	lastname = NULL;
}
Name::Name(char* fname, char* lname)
{
	cout << "This is a parameterized constructor." << endl;
	firstname = NULL;
	lastname = NULL;
	firstname = new char[strlen(fname) + 2];
	lastname = new char[strlen(lname) + 2];
	int i = 0, j = 0;
	for (i; fname[i] != '\0'; i++)
	{
		firstname[i] = fname[i];
	}
	firstname[i] = '\0';
	for (j; lname[j] != '\0'; j++)
	{
		lastname[j] = lname[j];
	}
	lastname[j] = '\0';
}
Name::Name(const Name& obj)
{
	cout << "This is a copy constructor." << endl;
	this->firstname = NULL;
	this->lastname = NULL;
	this->firstname = new char[strlen(obj.firstname) + 2];
	this->lastname = new char[strlen(obj.lastname) + 2];
	int i = 0, j = 0;
	for (i; obj.firstname[i] != '\0'; i++)
	{
		this->firstname[i] = obj.firstname[i];
	}
	this->firstname[i] = '\0';
	for (j; obj.lastname[j] != '\0'; j++)
	{
		this->lastname[j] = obj.lastname[j];
	}
	this->lastname[j] = '\0';
}
Name::~Name()
{
	cout << "This is a destructor." << endl;
	delete[] firstname;
	delete[] lastname;
}
void Name::setfname(char fname[])
{
	if (this->firstname != NULL)
	{
		delete[] this->firstname;
		this->firstname = NULL;
	}
	this->firstname = new char[strlen(fname) + 2];
	int i = 0;
	for (i; fname[i] != '\0'; i++)
	{
		this->firstname[i] = fname[i];
	}
	this->firstname[i] = '\0';
}
void Name::setlname(char lname[])
{
	if (this->lastname != NULL)
	{
		delete[] this->lastname;
		this->lastname = NULL;
	}
	this->lastname = new char[strlen(lname) + 2];
	int i = 0;
	for (i; lname[i] != '\0'; i++)
	{
		this->lastname[i] = lname[i];
	}
	this->lastname[i] = '\0';
}
char* Name::getfname() const
{
	return firstname;
}
char* Name::getlname() const
{
	return lastname;
}
bool Name::isValid() const
{
	for (int i = 0; firstname[i] != '\0'; i++)
	{
		if (firstname[i] >= 0 && firstname[i] < 65 || firstname[i] >= 91 && firstname[i] <= 96 || firstname[i] >= 123)
		{
			return 0;
		}
		if (lastname[i] >= 0 && lastname[i] < 65 || lastname[i] >= 91 && lastname[i] <= 96 || lastname[i] >= 123)
		{
			return 0;
		}
	}
	return 1;
}
void Name::display() const
{
	cout << "First Name: ";
	for (int i = 0; firstname[i] != '\0'; i++)
	{
		cout << firstname[i];
	}
	cout << endl << "Last Name: ";
	for (int i = 0; lastname[i] != '\0'; i++)
	{
		cout << lastname[i];
	}
	cout << endl;
}
class Person
{
private:
	char cnic[15];
	char address[50]{};
	Name name;
	Date dob;
public:
	Person(char c[],const char a[], char* fname, char* lname, int d, int m, int y);
	Person(const Person& obj);
	~Person();
	void setCNIC(char c[]);
	void setAddress(char a[]);
	void display() const;
	bool isElder(const Person& obj) const;
};
Person::Person(char c[],const char a[], char* fname, char* lname, int d, int m, int y):name(fname,lname),dob(d,m,y)
{
	strcpy_s(cnic, (strlen(c) + 2), c);
	strcpy_s(address, (strlen(a) + 2), a);

}
Person::Person(const Person& obj):name(obj.name.getfname(),obj.name.getlname()),dob(obj.dob.getday(),obj.dob.getmonth(),obj.dob.getyear())
{
	strcpy_s(cnic, (strlen(obj.cnic) + 2), obj.cnic);
	strcpy_s(address, (strlen(obj.address) + 2), obj.address);
}
Person::~Person()
{
	cout << "This is a destructor." << endl;
}
void Person::setCNIC(char c[])
{
	strcpy_s(cnic, (strlen(c) + 2), c);
}
void Person::setAddress(char a[])
{
	strcpy_s(address, (strlen(a) + 2), a);
}
void Person::display() const
{
	cout << "Name: " << endl;
	name.display();
	dob.showDate();
	cout << "CNIC:";
	for (int i = 0; cnic[i] != '\0'; i++)
	{
		cout << cnic[i];
	}
	cout << endl;
	cout << "Address: "; 
	for (int i = 0; address[i] != '\0'; i++)
	{
		cout << address[i];
	}
	cout << endl;
}
bool Person::isElder(const Person& obj) const
{
	if ((this->dob.getday() < obj.dob.getday() || this->dob.getday() >= obj.dob.getday()) && (this->dob.getmonth() < obj.dob.getmonth() || this->dob.getmonth() >= obj.dob.getmonth()) && (this->dob.getyear() > obj.dob.getyear()))
	{
		return 0;
	}
	if (this->dob.getday() >= obj.dob.getday() && this->dob.getmonth() >= obj.dob.getmonth() && this->dob.getyear() >= obj.dob.getyear())
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	cout << "Enter details of First Person: " << endl;
	char* fname = new char[10];
	char* lname = new char[10];
	cout << "Enter First name: ";
	cin >> fname;
	cout << "Enter Last name: ";
	cin >> lname;
	int d, m, y;
	char c1[15];
	cout << "Enter Day of your Birth: ";
	cin >> d;
	cout << "Enter Month of your Birth: ";
	cin >> m;
	cout << "Enter Year of your Birth: ";
	cin >> y;
	cout << "Enter Cnic# without spaces and dashes ";
	cin >> c1;
	cout << "Enter details of second Person: " << endl;
	char* fname2 = new char[10];
	char* lname2 = new char[10];
	cout << "Enter First name: ";
	cin >> fname2;
	cout << "Enter Last name: ";
	cin >> lname2;
	int d2, m2, y2;
	char c2[15];
	cout << "Enter Day of your Birth: ";
	cin >> d2;
	cout << "Enter Month of your Birth: ";
	cin >> m2;
	cout << "Enter Year of your Birth: ";
	cin >> y2;
	cout << "Enter Cnic# without spaces and dashes: ";
	cin >> c2;
	Person p1(c1, "Gulberg A", fname, lname, d, m, y), p2(c2, "Gulberg B", fname2, lname2, d2, m2, y2);
	p1.display();
	p2.display();
	if (p1.isElder(p2))
	{
		cout << "Person 1 is older than Person 2" << endl;
	}
	else
	{
		cout << "Person 2 is elder." << endl;
	}
	return 0;
}
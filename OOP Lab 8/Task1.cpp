#include"Task1.h"

SalonEmployees::SalonEmployees(int ide,const char n[],const char g[],const char c[], double s,const char sh[]): id(ide)
{
	cout << "This is a Parameterized Constuctor." << endl;
	salary = s;
	name = new char[strlen(n)+2];
	gender = new char[strlen(g)+2];
	contactNumber = new char[strlen(c)+2];
	shift = new char[strlen(sh)+2];
	int i, j, k, l;
	for (i = 0; n[i] != '\0'; i++)
	{
		name[i] = n[i];
	}
	name[i] = '\0';
	for (j = 0; g[j] != '\0'; j++)
	{
		gender[j] = g[j];
	}
	gender[j] = '\0';
	for (k = 0; c[k] != '\0'; k++)
	{
		contactNumber[k] = c[k];
	}
	contactNumber[k] = '\0';
	for (l = 0; sh[l] != '\0'; l++)
	{
		shift[l] = sh[l];
	}
	shift[l] = '\0';
}
SalonEmployees::SalonEmployees(const SalonEmployees& obj):id(obj.id)
{
	cout << "This is a copy constructor." << endl;
	this->salary = obj.salary;
	this->name = new char[strlen(obj.name) + 2];
	this->gender = new char[strlen(obj.gender) + 2];
    this->contactNumber = new char[strlen(obj.contactNumber) + 2];
	this->shift = new char[strlen(obj.shift) + 2];
	int i, j, k, l;
	for (i = 0; obj.name[i] != '\0'; i++)
	{
		this->name[i] = obj.name[i];
	}
	this->name[i] = '\0';
	for (j = 0; obj.gender[j] != '\0'; j++)
	{
		this->gender[j] = obj.gender[j];
	}
	this->gender[j] = '\0';
	for (k = 0; obj.contactNumber[k] != '\0'; k++)
	{
		this->contactNumber[k] = obj.contactNumber[k];
	}
	this->contactNumber[k] = '\0';
	for (l = 0; obj.shift[l] != '\0'; l++)
	{
		this->shift[l] = obj.shift[l];
	}
	this->shift[l] = '\0';
}
SalonEmployees::~SalonEmployees()
{
	cout << "This is a destructor." << endl;
	delete[] name;
	delete[] gender;
	delete[] contactNumber;
	delete[] shift;
}
void SalonEmployees::setname(const char n[])
{
	if (name != NULL)
	{
		delete[] name;
		name = NULL;
	}
	name = new char[strlen(n) + 2];
	int i;
	for (i = 0; n[i] != '\0'; i++)
	{
		name[i] = n[i];
	}
	name[i] = '\0';
}
void SalonEmployees::setgender(const char g[])
{
	if (gender != NULL)
	{
		delete[] gender;
		gender = NULL;
		
	}
	gender = new char[strlen(g) + 2];
	int j;
	for (j = 0; g[j] != '\0'; j++)
	{
		gender[j] = g[j];
	}
	gender[j] = '\0';
}
void SalonEmployees::setcontactNumber(const char c[])
{
	if (contactNumber != NULL)
	{
		delete[] contactNumber;
		contactNumber = NULL;		
	}
	contactNumber = new char[strlen(c) + 2];
	int k;
	for (k = 0; c[k] != '\0'; k++)
	{
		contactNumber[k] = c[k];
	}
	contactNumber[k] = '\0';
}
void SalonEmployees::setsalary(double s)
{
	salary = s;
}
void SalonEmployees::setshift(const char sh[])
{
	if (shift != NULL)
	{
		delete[] shift;
		shift = NULL;
		
	}
	shift = new char[strlen(sh) + 2];
	int l;
	for (l = 0; sh[l] != '\0'; l++)
	{
		shift[l] = sh[l];
	}
	shift[l] = '\0';
}
int SalonEmployees::getid()
{
	int temp = this->id;
	return temp;
}
char* SalonEmployees::getname()
{
	char* temp = new char[strlen(this->name)+2];
	int i;
	for (i = 0; this->name[i] != '\0'; i++)
	{
		temp[i] = this->name[i];
	}
	temp[i] = '\0';
	return temp;
}
char* SalonEmployees::getgender()
{
	char* temp = new char[strlen(this->gender) + 2];
	int i;
	for (i = 0; this->gender[i] != '\0'; i++)
	{
		temp[i] = this->gender[i];
	}
	temp[i] = '\0';
	return temp;
}
char* SalonEmployees::getcontactNumber()
{
	char* temp = new char[strlen(this->contactNumber) + 2];
	int i;
	for (i = 0; this->contactNumber[i] != '\0'; i++)
	{
		temp[i] = this->contactNumber[i];
	}
	temp[i] = '\0';
	return temp;
}
double SalonEmployees::getsalary()
{
	double temp = salary;
	return temp;
}
char* SalonEmployees::getshift()
{
	char* temp = new char[strlen(this->shift) + 2];
	int i;
	for (i = 0; this->shift[i] != '\0'; i++)
	{
		temp[i] = this->shift[i];
	}
	temp[i] = '\0';
	return temp;
}
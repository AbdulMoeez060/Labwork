#include"Name.h"

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
	firstname = new char[strlen(fname)+2];
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
	if (this->firstname!=NULL)
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
void Name::copyName(const Name& obj)
{
	if (this->firstname != NULL)
	{
		delete[] this->firstname;
		this->firstname = NULL;
	}
	if (this->lastname != NULL)
	{
		delete[] this->lastname;
		this->lastname = NULL;
	}
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
void Name::camelCase()
{
	if (firstname[0]>=97 && firstname[0]<=122)
	{
		firstname[0] = firstname[0] - 32;
	}
	if (lastname[0] >= 97 && lastname[0] <= 122)
	{
		lastname[0] = lastname[0] - 32;
	}
}
void Name::toLower()
{
	for (int i = 0; firstname[i] != '\0'; i++)
	{
		if (firstname[i]>=65 && firstname[i]<=90)
		{
			firstname[i] = firstname[i] + 32;
		}
	}
	for (int i = 0; lastname[i] != '\0'; i++)
	{
		if (lastname[i] >= 65 && lastname[i] <= 90)
		{
			lastname[i] = lastname[i] + 32;
		}
	}
}
void Name::toUpper()
{
	for (int i = 0; firstname[i] != '\0'; i++)
	{
		if (firstname[i] >= 97 && firstname[i] <= 122)
		{
			firstname[i] = firstname[i] - 32;
		}
	}
	for (int i = 0; lastname[i] != '\0'; i++)
	{
		if (lastname[i] >= 97 && lastname[i] <= 122)
		{
			lastname[i] = lastname[i] - 32;
		}
	}
}
void Name::swapNames()
{
	char* tempf = NULL;
	char* templ = NULL;
	int size1 = strlen(lastname) + 2;
	int size2 = strlen(firstname) + 2;
	tempf = new char[size1];
	templ = new char[size2];
	strcpy_s(tempf, size1, lastname);
	strcpy_s(templ, size2, firstname);
	delete[] firstname;
	delete[] lastname;
	firstname = NULL;
	lastname = NULL;
	firstname = new char[size1];
	lastname = new char[size2];
	strcpy_s(firstname, size1, tempf);
	strcpy_s(lastname, size2, templ);
	delete[] tempf;
	tempf = NULL;
	delete[] templ;
	templ = NULL;
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
int Name::nameLength()
{
	return (strlen(firstname) + strlen(lastname));
}
char* Name::fullname()
{
	char* fullname = NULL;
	int size = (strlen(firstname) + strlen(lastname)) + 3;
	fullname = new char[size];
	strcpy_s(fullname, size, firstname);
	strcat_s(fullname, size, lastname);
	return fullname;
}
bool Name::isValid() const
{
	for (int i = 0; firstname[i] != '\0'; i++)
	{
		if (firstname[i]>=0 && firstname[i]<65 || firstname[i] >= 91 && firstname[i] <= 96 || firstname[i] >= 123)
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
void Name::operator=(const Name& obj)
{
	if (this->firstname != NULL)
	{
		delete[] this->firstname;
		this->firstname = NULL;
	}
	if (this->lastname != NULL)
	{
		delete[] this->lastname;
		this->lastname = NULL;
	}
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
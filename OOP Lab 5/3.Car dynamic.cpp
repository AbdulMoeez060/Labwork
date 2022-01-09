#include<iostream>
using namespace std;

class Car
{
private:
	char* name = new char[20];
	char* manufacturer = new char[10];
	char* color = new char[10];
	int year = 0;
public:
	Car();
	Car(char n[], char m[], char c[], int y);
	Car(const Car& obj);
	~Car();
	void setname(char n[]);
	void setmanufacturer(char m[]);
	void setcolor(char c[]);
	void setyear(int y);
	void getname();
	void getmanufacturer();
	void getncolor();
	int getyear();
	void getinfo();
};
Car::Car()
{
	cout << "This is a default constructor" << endl;
}
Car::Car(char n[], char m[], char c[], int y)
{
	cout << "This is a parameterized constructor" << endl;
	int i, j, k;
	for (i = 0; n[i] != '\0'; i++)
	{
		name[i] = n[i];
	}
	name[i] = '\0';
	for (j = 0; m[j] != '\0'; j++)
	{
		manufacturer[j] = m[j];
	}
	manufacturer[j] = '\0';
	for (k = 0; c[k] != '\0'; k++)
	{
		color[k] = c[k];
	}
	color[k] = '\0';
	year = y;
}
Car::Car(const Car& obj)
{
	cout << "This is a copy constructor" << endl;
	int i, j, k;
	for (i = 0; obj.name[i] != '\0'; i++)
	{
		name[i] = obj.name[i];
	}
	name[i] = '\0';
	for (j = 0; obj.manufacturer[j] != '\0'; j++)
	{
		manufacturer[j] = obj.manufacturer[j];
	}
	manufacturer[j] = '\0';
	for (k = 0; obj.color[k] != '\0'; k++)
	{
		*(color+k) = *(obj.color+k);
	}
	color[k] = '\0';
	year = obj.year;
}
Car::~Car()
{
	cout << "This is a delete constructor" << endl;
}
void Car::setname(char n[])
{
	int i;
	for (i = 0; n[i] != '\0'; i++)
	{
		name[i] = n[i];
	}
	name[i] = '\0';
}
void Car::setmanufacturer(char m[])
{
	int j;
	for (j = 0; m[j] != '\0'; j++)
	{
		manufacturer[j] = m[j];
	}
	manufacturer[j] = '\0';
}
void Car::setcolor(char c[])
{
	int k;
	for (k = 0; c[k] != '\0'; k++)
	{
		color[k] = c[k];
	}
	color[k] = '\0';
}
void Car::setyear(int y)
{
	year = y;
}
void Car::getname()
{
	for (int i = 0; name[i] != '\0'; i++)
	{
		cout << name[i];
	}
	cout << endl;
}
void Car::getmanufacturer()
{
	for (int i = 0; manufacturer[i] != '\0'; i++)
	{
		cout << manufacturer[i];
	}
	cout << endl;
}
void Car::getncolor()
{
	for (int i = 0; color[i] != '\0'; i++)
	{
		cout << color[i];
	}
	cout << endl;
}
int Car::getyear()
{
	return year;
}
void Car::getinfo()
{
	cout << "Name: ";
	for (int i = 0; name[i] != '\0'; i++)
	{
		cout << name[i];
	}
	cout << endl;
	cout << "Manufacturer: ";
	for (int i = 0; manufacturer[i] != '\0'; i++)
	{
		cout << manufacturer[i];
	}
	cout << endl;
	cout << "Color:";
	for (int i = 0; color[i] != '\0'; i++)
	{
		cout << color[i];
	}
	cout << endl;
	cout << "Year: " << year << endl;
}
int main()
{
	char n[10] = { "Civic" };
	char m[10] = { "Honda" };
	char c[10] = { "Red" };
	Car c1(n, m, c, 2020), c2;
	c2 = c1;
	char cc[6] = { "Blue" };
	cout << "Before C1 color change:" << endl;
	cout << "C1: " << endl;
	c1.getinfo();
	cout << "C2: " << endl;
	c2.getinfo();
	c1.setcolor(cc);
	cout << "C2 After color change: " << endl;
	c2.getinfo();
	return 0;
}
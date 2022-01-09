#include<iostream>
#include<string>
using namespace std;

class SalonEmployees
{
private:
	const int id;
	char* name=NULL;
	char* gender=NULL;
	char* contactNumber=NULL;
	double salary;
	char* shift=NULL;
public:
	SalonEmployees(int ide,const char n[],const char g[],const char c[], double s,const char sh[]);
	SalonEmployees(const SalonEmployees& obj);
	~SalonEmployees();
	void setname(const char n[]);
	void setgender(const char g[]);
	void setcontactNumber(const char c[]);
	void setsalary(double s);
	void setshift(const char sh[]);
	int getid();
	char* getname();
	char* getgender();
	char* getcontactNumber();
	double getsalary();
	char* getshift();
	friend void print(const SalonEmployees obj);
};
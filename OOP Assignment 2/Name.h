#include<iostream>
#include<string>
using namespace std;

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
	void copyName(const Name& obj);
	void camelCase();
	void toLower();
	void toUpper();
	void swapNames();
	void display() const;
	int nameLength();
	char* fullname();
	bool isValid() const;
	void operator=(const Name& obj);
};
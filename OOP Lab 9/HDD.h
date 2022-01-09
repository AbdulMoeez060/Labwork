#include<iostream>
#include<string>
using namespace std;

class HDD
{
private:
	string model;
	double capacity;
public:
	HDD();
	HDD(string m, double cap);
	HDD(const HDD& obj);
	~HDD();
	void setmodelhdd(string m);
	void setcapacityhdd(double cap);
	string getmodelhdd();
	double getcapacityhdd();
	void displayhdd();
};


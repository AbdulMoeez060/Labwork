#include<iostream>
#include<string>
using namespace std;

class RAM
{
private:
	string model;
	float frequency;
public:
	RAM();
	RAM(string m, float fre);
	RAM(const RAM& obj);
	~RAM();
	void setmodelram(string m);
	void setfrequencyram(float fre);
	string getmodelram();
	float getfrequencyram();
	void displayram();
};


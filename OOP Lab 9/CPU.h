#include<iostream>
#include<string>
using namespace std;

class CPU
{
private:
	string model;
	float frequency;
public:
	CPU();
	CPU(string m, float fre);
	CPU(const CPU& obj);
	~CPU();
	void setmodelcpu(string m);
	void setfrequencycpu(float fre);
	string getmodelcpu();
	float getfrequencycpu();
	void displaycpu();
};


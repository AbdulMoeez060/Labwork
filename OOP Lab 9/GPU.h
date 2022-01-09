#include<iostream>
#include<string>
using namespace std;

class GPU
{
private:
	int internalMemory;
	float frequency;
public:
	GPU();
	GPU(int i, float fre);
	GPU(const GPU& obj);
	~GPU();
	void setinternalmemgpu(int i);
	void setfrequencygpu(float fre);
	int getinternalmemgpu();
	float getfrequencygpu();
	void displaygpu();
};


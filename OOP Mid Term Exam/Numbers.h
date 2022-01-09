#include<iostream>
using namespace std;

class Numbers
{
private:
	int no;
	float* elements;
public:
	Numbers();
	Numbers(int n, float *&p);
	Numbers(const Numbers& obj);
	void print() const;
	float& operator[](int index);
	void operator=(const Numbers& obj);
	Numbers operator+(const Numbers& obj);
	Numbers operator++();
	Numbers operator--();
	Numbers operator++(int);
	Numbers operator--(int);
	bool operator==(const Numbers& obj);
};

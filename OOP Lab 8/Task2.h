#include<iostream>
#include<string>
using namespace std;

class HugeInteger 
{
private:
	int arr[40];
	char input[41] = {};
public:
	HugeInteger();
	HugeInteger(const HugeInteger& obj);
	friend ostream &operator<<(ostream& out, const HugeInteger& obj);
	friend istream &operator>>(istream& in, HugeInteger& obj);
	HugeInteger operator+(const HugeInteger& obj);
	HugeInteger operator-(const HugeInteger& obj);
	bool operator==(const HugeInteger& obj);
	bool operator!=(const HugeInteger& obj);
	bool operator<=(const HugeInteger& obj);
	bool operator>=(const HugeInteger& obj);
	bool operator<(const HugeInteger& obj);
	bool operator>(const HugeInteger& obj);
	HugeInteger& operator++();
	HugeInteger& operator++(int);
	HugeInteger& operator--();
	HugeInteger& operator--(int);
	void operator=(const HugeInteger& obj);
	HugeInteger operator+=(const HugeInteger& obj);
	int& operator[](int index);
	~HugeInteger();
};

#include<iostream>
using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;
	const int daysinmonths[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	bool validateDate();
public:
	Date();
	Date(int d, int m, int y);
	Date(const Date& obj);
	~Date();
	void setday(int d);
	void setmonth(int m);
	void setyear(int y);
	int getday() const;
	int getmonth() const;
	int getyear() const;
	bool inputDate();
	bool copyDate(Date& obj);
	bool inputCompletedate(int d, int m, int y);
	Date& getdate() const;
	void retrieveDate(int& d, int& m, int& y);
	void showDate() const;
	bool isEqual(Date& obj) const;
	bool isGreaterEqual(Date& obj) const;
	int countLeapYears();
	int daysBetween(Date& obj);
	int operator-(Date& obj);
};
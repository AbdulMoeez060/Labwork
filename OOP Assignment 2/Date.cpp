#include"Date.h"

bool Date::validateDate()
{
	if ((day<=31 && day>0)&&(month>0 && month<=12)&&(year>=1900 && year <=2100))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
Date::Date()
{
	cout << "This is a default constructor." << endl;
	day = 1;
	month = 1;
	year = 2000;
}
Date::Date(int d, int m, int y)
{
	cout << "This is a Parameterized constructor." << endl;
	day = d;
	month = m;
	year = y;
	if (validateDate()==0)
	{
		day = 1;
		month = 1;
		year = 2000;
	}
}
Date::Date(const Date& obj)
{
	cout << "This is a copy constructor." << endl;
	day = obj.day;
	month = obj.month;
	year = obj.year;
}
Date::~Date()
{
	cout << "This is a destructor." << endl;
}
void Date::setday(int d)
{
	day = d;
}
void Date::setmonth(int m)
{
	month = m;
}
void Date::setyear(int y)
{
	year = y;
}
int Date::getday() const
{
	return day;
}
int Date::getmonth() const
{
	return month;
}
int Date::getyear() const
{
	return year;
}
bool Date::inputDate()
{
	cout << "Enter Day: ";
	cin >> day;
	cout << "Enter Month: ";
	cin >> month;
	cout << "Enter Year: ";
	cin >> year;
	if (validateDate())
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool Date::copyDate(Date& obj)
{
	bool valid = validateDate();
	bool check = 0;
	if (!valid)
	{
		check=0;
	}
	else
	{
		obj.day = day;
		obj.month = month;
		obj.year = year;
		check = 1;
	}
	return check;
}
bool Date::inputCompletedate(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
	if (validateDate())
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
Date& Date::getdate() const
{
	Date d;
	d.day = this->day;
	d.month = this->month;
	d.year = this->year;
	return d;
}
void Date::retrieveDate(int& d, int& m, int& y)
{
	d = day;
	m = month;
	y = year;
}
void Date::showDate() const
{
	cout << "Date: " << day << "-" << month << "-" << year << endl;
}
bool Date::isEqual(Date& obj) const
{
	if (this->day == obj.day && this->month == obj.month && this->year == obj.year)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool Date::isGreaterEqual(Date& obj) const
{
	if ((this->day < obj.day || this->day >= obj.day)&& (this->month < obj.month ||this->month >= obj.month) && (this->year > obj.year))
	{
		return 1;
	}
	if (this->day>=obj.day && this->month>=obj.month && this->year>=obj.year)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int Date::countLeapYears()
{
	int lyears = year;
	if (month<=2)
	{
		lyears--;
	}
	lyears = (lyears / 4) + (lyears / 400) - (lyears / 100);
	return lyears;
}
int Date::daysBetween(Date& obj)
{
	long int d1 = this->year * 365 + this->day;
	for (int i = 0; i < this->month-1; i++)
	{
		d1 = d1 + daysinmonths[i];
	}
	d1 += this->countLeapYears();
	long int d2 = obj.year * 365 + obj.day;
	for (int i = 0; i < obj.month - 1; i++)
	{
		d2 = d2 + daysinmonths[i];
	}
	d2 += obj.countLeapYears();
	int difference = d1 - d2;
	return difference;

}
int Date::operator-(Date& obj)
{
	long int d1 = this->year * 365 + this->day;
	for (int i = 0; i < this->month - 1; i++)
	{
		d1 = d1 + daysinmonths[i];
	}
	d1 += this->countLeapYears();
	long int d2 = obj.year * 365 + obj.day;
	for (int i = 0; i < obj.month - 1; i++)
	{
		d2 = d2 + daysinmonths[i];
	}
	d2 += obj.countLeapYears();
	int difference = d1 - d2;
	return difference;
}
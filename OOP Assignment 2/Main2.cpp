#include<iostream>
#include"Date.h"
using namespace std;

int main()
{
	Date d1, d2;
	if (d1.inputDate())
	{
		cout << "Format is correct so,First date has been updated." << endl;
	}
	else
	{
		cout << "First date invalid.PLease enter correctly next time" << endl;
		return 0;
	}
	if (d2.inputDate())
	{
		cout << "Format is correct so,Second date has been updated." << endl;
	}
	else
	{
		cout << "Second date invalid. PLease enter correctly next time." << endl;
		return 0;
	}
	cout << "Date 1: " << endl;
	d1.showDate();
	cout << "Date 2: " << endl;
	d2.showDate();
	if (d1.isGreaterEqual(d2))
	{
		cout << "Date 1 is greater than date 2 so we can get the difference:" << endl;
		int dif = d1 - d2;
		cout << "Date 1 - Date 2 : " << dif << endl;
	}
	else
	{
		cout << "Date 2 is larger than date 1." << endl;
	}
	return 0;
}
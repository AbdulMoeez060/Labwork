#include"Person.h"
#include<iostream>
#include<string>


class BaseballPlayer:public Person
{
private:
	double battingAverage;
	int total;
	
public:
	static int countb;
	BaseballPlayer();
	BaseballPlayer(const char[], int, double, int);
	BaseballPlayer(const BaseballPlayer& obj);
	~BaseballPlayer();
	void setbattingAverage(double);
	void settotal(int);
	double getbattingAverage();
	int gettotal();
	void displaybaseballplayer();
	static void getcountbp();
};

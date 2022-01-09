#include "BaseballPlayer.h"

int BaseballPlayer::countb = 0;
BaseballPlayer::BaseballPlayer() :Person()
{
	cout << "Constructing Baseball Player..." << endl;
	countb++;
}
BaseballPlayer::BaseballPlayer(const char n[], int a, double b, int t) :Person(n, a)
{
	cout << "Constructing Baseball Player..." << endl;
	battingAverage = b;
	total = t;
	countb++;
}
BaseballPlayer::BaseballPlayer(const BaseballPlayer& obj):Person(obj)
{
	cout << "Copying Baseball Player..." << endl;
	battingAverage = obj.battingAverage;
	total = obj.total;
	++countb;
}
BaseballPlayer::~BaseballPlayer()
{
	cout << "Destructing Baseball Player..." << endl;
}
void BaseballPlayer::setbattingAverage(double b)
{
	battingAverage = b;
}
void BaseballPlayer::settotal(int t)
{
	total = t;
}
double BaseballPlayer::getbattingAverage()
{
	return battingAverage;
}
int BaseballPlayer::gettotal()
{
	return total;
}
void BaseballPlayer::displaybaseballplayer()
{
	cout << "Baseball Player: " << endl;
	displayperson();
	cout << "Batting Average: " << battingAverage << endl;
	cout << "Total Runs: " << total << endl;
}
void BaseballPlayer::getcountbp()
{
	cout << "There are " << countb << " baseball players." << endl;
}
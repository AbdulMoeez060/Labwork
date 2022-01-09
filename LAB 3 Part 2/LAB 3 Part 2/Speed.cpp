//Write a C++ program which calculates the value of Speed.
#include<iostream>
using namespace std;

int main()
{
	int FinalPosition = 25, InitialPosition = 10, Time = 5;
	int distance = FinalPosition - InitialPosition;
	int speed = distance / Time;
	cout << "InitialPosition=";
	cout << InitialPosition;
	cout << endl;
	cout << "FinalPosition= ";
	cout << FinalPosition;
	cout << endl;
	cout << "Distance=?";
	cout << "Distance= FinalPosition - InitialPosition";
	cout << endl;
	cout << "Distance=";
	cout << distance;
	cout << endl;
	cout << "Time= ";
	cout << Time;
	cout << endl;
	cout << "Speed= Distance/Time";
	cout << endl;
	cout << "Speed=";
	cout << speed;
	cout << endl;
	return 0;
}
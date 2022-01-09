//Write a program which will take no. of kilometers and display no. of meters, no. of centimeters, and no. of milimeters in input kilometers
#include<iostream>
using namespace std;

int main()
{
	int KM=9;
	int M = KM * 1000;
	int CM = M * 100;
	cout << "Kilometers=";
	cout << KM;
	cout << endl;
	cout << "Meter= Kilometers*1000";
	cout << endl;
	cout << "Meter= ";
	cout << M;
	cout << endl;
	cout << "Centimeter = Meter*100";
	cout << endl;
	cout << "Centimeter= ";
	cout << CM;
	cout << endl;
	return 0;
}
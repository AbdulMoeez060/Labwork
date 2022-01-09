//Write a program that calculates the value of Kinetic Energy by using following formula.
#include<iostream>
using namespace std;

int main()
{
	int Mass = 10, Velocity = 22;
	int kineticEnergy = (Mass*Velocity*Velocity) / 2;
	cout << "Mass= ";
	cout << Mass;
	cout << endl;
	cout << "Velocity= ";
	cout << Velocity;
	cout << endl;
	cout << "kineticEnergy = (Mass*Velocity*Velocity)/ 2";
	cout << endl;
	cout << "kineticEnergy= ";
	cout << kineticEnergy;
	cout << endl;
	return 0;
}
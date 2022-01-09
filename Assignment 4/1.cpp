#include<iostream>
using namespace std;

int main()
{
	float hardness, CC, TS;
	cout << "Enter hardness of steel: ";
	cin >> hardness;
	cout << "Enter Carbon Content of steel: ";
	cin >> CC;
	cout << "Enter Tensile Strength of steel: ";
	cin >> TS;
	if (hardness>50 && CC<0.7 && TS>5600)
	{
		cout << "The Grade is 10" << endl;
	}
	else if (hardness > 50 && CC < 0.7)
	{
		cout << "The Grade is 9" << endl;
	}
	else if (CC < 0.7 && TS>5600)
	{
		cout << "The Grade is 8" << endl;
	}
	else if (hardness > 50 && TS>5600)
	{
		cout << "The Grade is 7" << endl;
	}
	else if (hardness > 50 || CC < 0.7 || TS>5600)
	{
		cout << "The Grade is 6" << endl;
	}
	else if (hardness < 50 && CC > 0.7 && TS<5600)
	{
		cout << "The Grade is 5" << endl;

	}
	else
	{
		cout << "Invalid Enteries." << endl;
	}
	return 0;
}
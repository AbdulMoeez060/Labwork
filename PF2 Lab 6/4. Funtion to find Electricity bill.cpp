#include<iostream>
using namespace std;

float ElecBill(int past, int current);
int main()
{
	int current, past;
	cout << "Enter the past reading on the meter: ";
	cin >> past;
	cout << "Enter the current reading on the meter: ";
	cin >> current;
	float bill = ElecBill(past, current);
	cout << "The total bill is " << bill << " Rupees" << endl;
	return 0;
}
float ElecBill(int past, int current)
{
	int PerUCost = 10, FuelAd = 15;
	int ElecCost = (current - past) * PerUCost;
	float GST;
	GST = 0.17 * ElecCost;
	float total = ElecCost + GST + FuelAd;
	return total;
}
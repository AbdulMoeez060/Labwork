//Write a C++ program that reads weight and height of a user as input and then calculates the user’s body mass index (BMI) and tell whether he or she is  underweight, normal, overweight, or obese, based on the following table from the United States Centers for Disease Control
#include<iostream>
using namespace std;

int main()
{
	float wt_lb, ht_in;
	cout << "Enter weight in pounds: ";
	cin >> wt_lb;
	cout << "Enter height in in inches: ";
	cin >> ht_in;
	float BMI = (703 * wt_lb) / (ht_in * ht_in);
	if (BMI < 18.5)
	{
		cout << "The calculated BMI is " << BMI << " which categorizes you under Underweight Category." << endl;
	}
	if (BMI<24.9 && BMI>18.5)
	{
		cout << "The calculated BMI is " << BMI << " which categorizes you under Normal weight Category." << endl;
	}
	if (BMI < 29.9 && BMI>25.0)
	{
		cout << "The calculated BMI is " << BMI << " which categorizes you under Overweight Category." << endl;
	}
	if (BMI>=30.0)
	{
		cout << "The calculated BMI is " << BMI << " which categorizes you under Obese Category." << endl;
	}
	return 0;
}
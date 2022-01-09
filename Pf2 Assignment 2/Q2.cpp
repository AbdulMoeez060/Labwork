#include<iostream>
using namespace std;

int calculate_avg(int n1, int n2, int n3); //calculate average of three numbers
int calculate_sum(int n1, int n2, int n3); // returns sum of three numbers
int calculate_division(int n1, int n2); // takes numbers and calculates division
void display(int num); // display average on console
int main()
{
	int n1, n2, n3;
	cout << "Enter three numbers: ";
	cin >> n1 >> n2 >> n3;
	int avg = calculate_avg(n1, n2, n3);
	display(avg);
	return 0;
}
int calculate_avg(int n1, int n2, int n3)
{
	int sum = calculate_sum(n1, n2, n3);
	int tnum = 3;
	int avg = calculate_division(sum, tnum);
	return avg;
}
int calculate_sum(int n1, int n2, int n3)
{
	int sum = n1 + n2 + n3;
	return sum;
}
int calculate_division(int n1, int n2)
{
	int div = n1 / n2;
	return div;
}
void display(int num)
{
	cout << "The average of three numbers is " << num << endl;
}
#include<iostream>
using namespace std;

void Area();
void Circum();
int main()
{
	Area();
	Circum();
	return 0;
}
void Area()
{
	int r;
	cout << "Enter a radius: ";
	cin >> r;
	cout << "Area= Pie * r * r" << endl;
	float Area = 3.14 * r * r;
	cout << "Area= " << Area << endl;
}
void Circum()
{
	int r;
	cout << "Enter a radius: ";
	cin >> r;
	cout << "Circumference= Pie * r" << endl;
	float Cir = 3.14 * r;
	cout << "Circumference= " << Cir << endl;
}
#include<iostream>
#include<fstream>

void GetInput(char s1[], char s2[], float num1, float num2);
void SaveIntoFile(char s1[], char s2[], float num1, float num2);
int main()
{
	char name[50] = {};
	char reg[14] = {};
	float quiz1 = {}, quiz2 = {};
	GetInput(name, reg, quiz1, quiz2);
	SaveIntoFile(name, reg, quiz1, quiz2);
	return 0;
}
void GetInput(char s1[], char s2[], float num1, float num2)
{
	cout << "Enter Your Name: ";
	cin.getline(s1, 50);
}
#include<iostream>
#include<fstream>
using namespace std;

void GetInput(char s1[], char s2[], float &num1, float &num2);
void SaveIntoFile(char s1[], char s2[], float &num1, float &num2);
int main()
{
	char name[50] = {};
	char reg[14] = {};
	float quiz1 = 0.0;
	float quiz2 = 0.0;
	GetInput(name, reg, quiz1, quiz2);
	SaveIntoFile(name, reg, quiz1, quiz2);
	return 0;
}
void GetInput(char s1[], char s2[], float &num1, float &num2)
{
	cout << "Enter Your Name: ";
	cin.getline(s1, 50);
	cout << "Enter your Registration Number: ";
	cin >> s2;
	cout << "Enter marks for your quiz 1 and 2: ";
	cin >> num1;
	cin>>num2;
}
void SaveIntoFile(char s1[], char s2[], float &num1, float &num2)
{
	ofstream fout;
	fout.open("Student info.txt");
	fout << "The name of student is " << s1 << endl;
	fout << "Registration number is " << s2 << endl;
	fout << "The marks of student in Quiz 1 are " << num1 << " and in Quiz 2 are " << num2 << endl;
	fout.close();
}
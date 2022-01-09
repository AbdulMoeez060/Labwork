//. Write a program which takes marks of 5 courses as input, of 5 students and output the students who got the highest aggregate/Total.
#include<iostream>
using namespace std;

int main()
{
	int rollno1;
	cout << "Enter Roll no of first Student: ";
	cin >> rollno1;
	int C1, C2, C3, C4, C5;
	cout << "Enter Marks of First student in five courses: ";
	cin >> C1 >> C2 >> C3 >> C4 >> C5;
	int sum1;
	sum1 = C1 + C2 + C3 + C4 + C5;
	cout << "The sum of students marks is " << sum1 << endl;
	int rollno2;
	cout << "Enter Roll no of Second Student: ";
	cin >> rollno2;
	int C11, C12, C13, C14, C15;
	cout << "Enter Marks of Second student in five courses: ";
	cin >> C11 >> C12 >> C13 >> C14 >> C15;
	int sum2;
	sum2 = C11 + C12 + C13 + C14 + C15;
	cout << "The sum of students marks is " << sum2 << endl;
	int rollno3;
	cout << "Enter Roll no of Third Student: ";
	cin >> rollno3;
	int C21, C22, C23, C24, C25;
	cout << "Enter Marks of Third student in five courses: ";
	cin >> C21 >> C22 >> C23 >> C24 >> C25;
	int sum3;
	sum3 = C21 + C22 + C23 + C24 + C25;
	cout << "The sum of students marks is " << sum3 << endl;
	int rollno4;
	cout << "Enter Roll no of Fourth Student: ";
	cin >> rollno4;
	int C31, C32, C33, C34, C35;
	cout << "Enter Marks of Fourth student in five courses: ";
	cin >> C31 >> C32 >> C33 >> C34 >> C35;
	int sum4;
	sum4 = C31 + C32 + C33 + C34 + C35;
	cout << "The sum of students marks is " << sum4 << endl;
	int rollno5;
	cout << "Enter Roll no of Fifth Student: ";
	cin >> rollno5;
	int C41, C42, C43, C44, C45;
	cout << "Enter Marks of Fifth student in five courses: ";
	cin >> C41 >> C42 >> C43 >> C44 >> C45;
	int sum5;
	sum5 = C41 + C42 + C43 + C44 + C45;
	cout << "The sum of students marks is " << sum5 << endl;
	if (sum1 >> sum2 && sum1 >> sum3 && sum1 >> sum4 && sum1 >> sum5)
	{
		cout << rollno1 << " has the highest Agregate." << endl;
	}
	else if (sum2 >> sum1 && sum2 >> sum3 && sum2 >> sum4 && sum2 >> sum5)
	{
		cout << rollno2 << " has the highest Agregate." << endl;
	}
	else if (sum3 >> sum2 && sum3 >> sum1 && sum3 >> sum4 && sum3 >> sum5)
	{
		cout << rollno3 << " has the highest Agregate." << endl;
	}
	else if (sum4 >> sum2 && sum4 >> sum3 && sum4 >> sum1 && sum4 >> sum5)
	{
		cout << rollno4 << " has the highest Agregate." << endl;
	}
	else if (sum5 >> sum2 && sum5 >> sum3 && sum5 >> sum4 && sum5 >> sum1)
	{
		cout << rollno5 << " has the highest Agregate." << endl;
	}
	return 0;
}
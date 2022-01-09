#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void getmarks(int marks[], int count[], char anskey[], char answers[][31], int students, int ans);
void getgrades(int marks[],char grade[]);
int main()
{
	const int students = 11;
	const int ans = 31;
	char anskey[ans] = {};
	string rollnos[students];
	char answers[students][ans];
	int marks[students] = {};
	int count[students] = {};
	char grades[students] = {};
	ifstream fin;
	fin.open("File.txt");
	if (fin)
	{
		for (int i = 0; i < ans; i++)
		{
			anskey[i] = fin.get();
		}
		for (int i = 0; i < students; i++)
		{
			fin >> rollnos[i];
			fin.get();
			for (int j = 0; j < ans; j++)
			{
				answers[i][j] = fin.get();
			}
		}
	}
	else
	{
		cout << "File not found." << endl;
	}
	fin.close();
	getmarks(marks, count, anskey, answers, students, ans);
	getgrades(marks, grades);
	ofstream fout;
	fout.open("Output.txt", ios::app);
	if (fout)
	{
		for (int i = 0; i < students-1; i++)
		{
			fout << rollnos[i] << " ";

			for (int j = 0; j < ans-1; j++)
			{
				fout << answers[i][j];
			}
			fout << "  " << count[i] << "  " << marks[i] << "  " << grades[i] << endl;
		}
	}
	else
	{
		cout << "File not found." << endl;
	}
}
void getmarks(int marks[],int count[], char anskey[], char answers[][31], int students, int ans)
{
	for (int i = 0; i < students-1; i++)
	{
		marks[i] = 0;
		count[i] = 0;
		for (int j = 0; j < ans-1; j++)
		{
			if (answers[i][j]==anskey[j] && answers[i][j] != ' ')
			{
				marks[i] = marks[i] + 2;
				count[i]++;
			}
			else if (answers[i][j]!=anskey[j] && answers[i][j]!=' ')
			{
				marks[i] = marks[i] - 1;
			}
		}
		if (marks[i]<0)
		{
			marks[i] = 0;
			cout << i << endl;
		}
	}
}
void getgrades(int marks[], char grade[])
{
	for (int i = 0; i < 10; i++)
	{
		float perc = (marks[i] *100) / 60;
		if (perc<60)
		{
			grade[i] = 'F';
		}
		else if (perc >= 60 && perc <70)
		{
			grade[i] = 'D';
		}
		else if (perc >= 70 && perc < 80)
		{
			grade[i] = 'C';
		}
		else if (perc >= 80 && perc < 90)
		{
			grade[i] = 'B';
		}
		else if (perc >= 90 && perc <= 100)
		{
			grade[i] = 'A';
		}
	}
}
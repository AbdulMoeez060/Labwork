#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int num;
	cout << "Enter a num: ";
	cin >> num;
	ofstream fout;
	fout.open("integer.txt", ios::app);
	if (fout.is_open())
	{
		fout << " " << num;
	}
	else
	{
		cout << "Error";
	}
	fout.close();
	return 0;
}
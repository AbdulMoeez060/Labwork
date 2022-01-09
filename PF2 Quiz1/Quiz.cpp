#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	const int size = 50;
	int arr[size] = {};
	int num, count = 0;
	ifstream fin,Oin;
	fin.open("input1.txt");
	Oin.open("input2.txt");
	if (fin.is_open() && Oin.is_open())
	{
		Oin >> num;
		for (int i = 0; fin.eof(); i++)
		{
			fin >> arr[i];
			count++;
		}
		for (int i = 0; i < count; i++)
		{
			cout << arr[i] << " ";
		}
	}
	else
	{
		cout << "Files not found." << endl;
	}
	fin.close();
	Oin.close();
	ofstream fout;
	fout.open("output.txt");
	if (fout.is_open())
	{
		int flag = 0;
		for (int i = 0; i < count; i++)
		{
			if (num==arr[i])
			{
				flag++;
			}
		}
		if (flag==0)
		{
			fout << "Number not found." << endl;
		}
		else
		{
			fout << "Number Found." << endl;
		}
	}
	fout.close();
	return 0;
}
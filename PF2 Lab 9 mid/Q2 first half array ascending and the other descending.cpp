#include<iostream>
#include<fstream>
using namespace std;

//void Input(char filename[]);
void readfromfile(int arr[], int& count);
//void modify(int arr, int count);
//void display(int arr, int count);
int main()
{
	const int size = 100;
	//char filename[size] = {};
	int arr[size] = {};
	int count = 0;
	//Input(filename);
	//cout << filename << endl;
	readfromfile(arr, count);
	cout << count << endl;
	for (int i = 0; i < count; i++)
	{
		cout << arr[i] << " ";
	}
}
/*void Input(char filename[])
{
	cout << "Enter filename you want to read from(please add .txt at the end): ";
	cin >> filename;
}*/
void readfromfile(int arr[], int& count)
{
	ifstream fin;
	fin.open("data.txt");
	if (fin)
	{
		for (int i = 0; !fin.eof() ; i++)
		{
			fin >> arr[i];
			count++;
		}
	}
	else
	{
		cout << "File not found." << endl;
	}
	fin.close();
}
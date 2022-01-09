#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream file;
	file.open("name.txt", ios::out);
	file << "My Name is Abdul Moeez";
	file.close();
	return 0;
}
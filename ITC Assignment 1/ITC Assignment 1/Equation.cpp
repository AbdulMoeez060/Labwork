//then write a C++ program that solves the following mathematical equation using variables. 
#include<iostream>
using namespace std;

int main()
{
	int k = 7, A = 11, T1 = 25, T2 = 22, L = 17;
	int q = k * A * (T1 - T2) / L;
	cout << "Find q when: \n";
	cout << "k= " << k << endl << "A= " << A << endl << "T1= " << T1 << endl << "T2= " << T2 << endl << "L= " << L<<endl;
	cout << "Formula of q =  k * A * (T1 - T2) / L"<<endl;
	cout << "q= ";
	cout << q << endl;
	return 0;
}

#include<iostream>
using namespace std;

int main()
{
	int sum = 0, x = 2, n;
	cout << "Enter n: ";
	cin >> n;
	while (n>1)
	{
		cout << 1 << "/" << x << "+";
		sum = sum + x;
		x = x + 2;
		n = n - 1;
	}
		sum = sum + x;
		cout << 1 << "/" << x << "=" << 1 <<"/"<< sum << endl;
	return 0;
}
#include<iostream>
using namespace std;

int main()
{
	float y = 1, x = 5.5, count = 1, i, n;
	cout << "Enter value of n: ";
	cin >> n;
	cout << "y \t x \t i" << endl;
	while (n>=1)
	{
		i = 2 + (y + (0.5 * x));
		cout << y << " \t " << x << " \t " << i << endl;
		y = y + 1;
		x = x + 0.5;
		n = n - 1;
	}
	return 0;
}
#include<iostream>
using namespace std;

int LCM(int n1, int n2)
{
	static int max=0;
	max += (n1 > n2) ? n1 : n2;//adds the graeater number in max
	if (max%n1==0 && max%n2==0)
	{
		return max;
	}
	else
	{
		LCM(n1, n2);
	}

}

int main()
{
	int num1, num2;
	cout << "Enter 2 numbers to get there LCM: ";
	cin >> num1 >> num2;

	cout << "The LCM of " << num1 << " and " << num2 << " is " << LCM(num1, num2) << endl;

	return 0;
}
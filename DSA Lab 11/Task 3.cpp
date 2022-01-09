#include<iostream>
using namespace std;

int sumofNaturalNum(int num)
{
	if (num < 1)
	{
		return 0;
	}
	else
		return num + sumofNaturalNum(num - 1);
}


int main()
{
	int num;
	cout << "Enter a number to get sum of First Natural numbers: ";
	cin >> num;
	cout << " ===> " << sumofNaturalNum(num) << " is the sum of First Natural numbers of number " << num << endl;
	return 0;
}
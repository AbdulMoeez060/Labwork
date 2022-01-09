#include<iostream>
using namespace std;


//i used long long data type instead of int as it will be able to calculate larger factorials
long long factorial(long long num)
{
	if (num < 1)
		return 1;
	else
		return num * factorial(num - 1);
}


int main()
{
	long long num;
	cout << "Enter a number to get factorial: ";
	cin >> num;
	cout << " ===> " << factorial(num) << " is the factorial of number " << num << endl;
	return 0;
}
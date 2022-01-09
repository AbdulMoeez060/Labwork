#include<iostream>
using namespace std;

int sumofDigits(int num)
{
	static int sum = 0;//used static int as we need the sum to be same througout the recursions
	sum += num % 10;
	if (num>0)
	{
		return sumofDigits(num / 10);
	}
	else
	{
		return sum;
	}
	

}


int main()
{
	int num;
	cout << "Enter a number to get sum of its digits: ";
	cin >> num;
	cout << " ===> " << sumofDigits(num) << " is the sum of digits of number " << num << endl;
	return 0;
}
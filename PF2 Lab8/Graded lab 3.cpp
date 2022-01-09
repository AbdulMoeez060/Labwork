#include<iostream>
using namespace std;

void FindPrime(int num1, int num2, int arr[], int& count);
int main()
{
	int n1, n2;
	cout << "Enter two integers(Enter smaller integer first): ";
	cin >> n1 >> n2;
	const int size = 20;
	int arr[size];
	int count = 0;
	if (n1 < n2)
	{
		FindPrime(n1, n2, arr, count);
		cout << "The Prime numbers between " << n1 << " And " << n2 << " are/is:";
		for (int i = 0; i < count; i++)
		{
			cout << arr[i] << " ";
		}
	}
	else
	{
		cout << "Error: The first integer is larger." << endl;
	}
		return 0;
}
void FindPrime(int num1, int num2, int arr[], int& count)
{
	while (num1 < num2)
	{
		int flag = 0;
		for (int i = 2; i <= num1; i++)
		{
			if (num1 % i == 0)
			{
				flag++;
				break;
			}
		}
		if (flag == 0)
		{
			arr[count] = num1;
			num1++;
			count++;
		}


	}
}
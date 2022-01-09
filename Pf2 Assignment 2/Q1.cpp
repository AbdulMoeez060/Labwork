#include<iostream>
using namespace std;

int calculate_sum(int start, int end);
bool is_divisible_by_three(int num); 
bool is_even(int num);
void display(int num);
int main()
{
	int start, end;
	cout << "Enter two numbers(First one must be smaller than second): ";
	cin >> start >> end;
	int sum=calculate_sum(start, end);
	display(sum);
	return 0;

}
int calculate_sum(int start, int end)
{
	int sum = 0;
	while (start < end)
	{
		if (is_divisible_by_three(start) == 1 && is_even(start) == 1)
		{
			sum = sum + start;
		}
	}
	return sum;
}
bool is_divisible_by_three(int num)
{
	if (num%3==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool is_even(int num)
{
	if (num % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void display(int num)
{
	cout << "Sum of number that are even and are divisible 3 is " << num << endl;
}
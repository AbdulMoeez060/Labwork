#include<iostream>
using namespace std;

void getdetails(int x, double*& qty, double*& price);
void bill(double& total, double* qty, double* price,int x);
double discount(double& total);
void regrow(double*& ptr, int& size);
int main()
{
	int n;
	double total = 0;
	int size1 = 10, size2 = 10;
	int x = 0;
	double *qty = new double[size1];
	double *price = new double[size2];
	do
	{
		if(x>10)
		{
			regrow(qty, size1);
			regrow(price, size2);
		}
		getdetails(x, qty, price);
		bill(total, qty, price, x);
		x++;
		cout << "Enter 0 to resume and 1 if you have added all the items: ";
		cin >> n;
	} while (n==0);
	double dis = 0;
	if (total>6000)
	{
		dis=discount(total);
	}
	cout << "Sr no \t Qty \t Price" << endl;
	for (int i = 0; i < x; i++)
	{
		cout << i + 1 << " \t  " << qty[i] << "  \t  " << price[i] << endl;
	}
	cout << "Grand Total: " << total << endl;
	cout << "Discount: " << dis << endl;
	cout << "Total After Discount: " << total - dis << endl;
	delete[] qty;
	delete[] price;
	return 0;
}
void getdetails(int x, double*& qty, double*& price)
{
	cout << "Enter the Quanity of the product: " << endl;
	cin >> qty[x];
	cout << "Enter the price of the product: " << endl;
	cin >> price[x];
}
void bill(double& total, double* qty, double* price, int x)
{
	total = total + (price[x] * qty[x]);
}
double discount(double& total)
{
	double dis = total * 0.2;
	return dis;
}
void regrow(double*& ptr, int& size)
{
	double* temp = new double[size * 2];
	for (int i = 0; i < size; i++)
	{
		temp[i] = ptr[i];
	}
	size = size *2;
	delete[] ptr;
	ptr = temp;
	delete[] temp;
}
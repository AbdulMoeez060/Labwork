#include<iostream>
using namespace std;

template<typename T>
double averageArr(T arr[], int size)
{
	double average;
	double sum=0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	average = sum / size;
	return average;
}
template<typename T>
void Display(T arr[], int size)
{
	cout << "Size of array: " << size << endl;
	cout << "Array: {";
	for (int i = 0; i < size; i++)
	{
		cout <<arr[i] << ", ";
	}
	cout << "}" << endl;
}
int main()
{
	const int size = 5;
	int iarr[size] = { 3,13,2,9,4 };
	int iaverage = averageArr(iarr, size);
	Display(iarr, size);
	cout <<"Average of int array is:"<< iaverage << endl;
	double darr[size] = { 3.5,1.4,14.2,3.4,6.3 };
	double daverage = averageArr(darr, size);
	Display(darr, size);
	cout << "Average of double array is:" << daverage << endl;
	float farr[size] = { 5.4,7.4,4.2,9.7,5.3 };
	float faverage = averageArr(farr, size);
	Display(farr, size);
	cout << "Average of float array is:" << faverage << endl;
	char carr[size] = { 'a','d','e','r','f' };
	double caverage = averageArr(carr, size);
	Display(carr, size);
	cout << "Average of char array is:" << (char)caverage << endl;
	return 0;
}
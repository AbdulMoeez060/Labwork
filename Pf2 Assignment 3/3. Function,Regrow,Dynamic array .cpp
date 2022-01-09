#include<iostream>
#include<fstream>
using namespace std;

void readfromfile(double*& circle, double*& square, char*& ch,int& size1,int& size2,int size3,int& c1,int& c2);
void regrow(double*& ptr, int& size);
void area(double*& circle, double*& square, double*& circleA, double*& squareA, int c1, int c2);
void maxarea(double*& areas, int count, int& max, int& place);
void minarea(double*& areas, int count, int& min, int& place);
int averagearea(double*& areas, int count);
void writeintofile1(double*& shape, double*& areas, int count, int average, int max, int min, int maxplace, int minplace);
void writeintofile2(double*& shape, double*& areas, int count, int average, int max, int min, int maxplace, int minplace);
int main()
{
	int size1 = 1, size2 = 1,size3=100;
	double *circle = new double[size1];
	double *square = new double[size2];
	char* c_or_s = new char[size3];
	int ccount = 0, scount = 0;
	readfromfile(circle, square, c_or_s, size1, size2, size3, ccount, scount);
	double* circleA = new double[ccount];
	double* squareA = new double[scount];
	area(circle, square, circleA, squareA, ccount, scount);
	int cmax = 0, smax = 0, cmin = 0, smin = 0, cminplace = 0, sminplace = 0, cmaxplace = 0, smaxplace = 0;
	maxarea(circleA, ccount, cmax, cmaxplace);
	maxarea(squareA, scount, smax, smaxplace);
	minarea(circleA, ccount, cmin, cminplace);
	minarea(squareA, scount, smin, sminplace);
	int caverage = averagearea(circleA, ccount);
	int saverage = averagearea(squareA, scount);
	writeintofile1(circle, circleA, ccount, caverage, cmax, cmin, cmaxplace, cminplace);
	writeintofile2(square, squareA, scount, saverage, smax, smin, smaxplace, sminplace);
	delete[] circle, circleA, square, squareA, c_or_s;
	return 0;
}
void readfromfile(double*& circle, double*& square, char*& ch, int& size1, int& size2, int size3, int& c1, int& c2)
{
	ifstream fin;
	fin.open("data.txt");
	if (fin)
	{	
		for (int i = 0; !fin.eof() ; i++)
		{
			fin.getline(ch, size3,',');
			if (ch[0] == 'c' || ch[1]=='c')
			{
				fin >> circle[c1];
				c1++;
				if (c1 == size1)
				{
					regrow(circle, size1);
				}
			}
			else if (ch[0] == 's' || ch[1] == 's')
			{
				fin >> square[c2];
				c2++;
				if (c2 == size2)
				{
					regrow(square, size2);
				}
			}
			
		}
	}
	else
	{
		cout << "Not found";
	}
	fin.close();
}
void regrow(double*& ptr, int& size)
{
	double* temp = new double[size *2];
	for (int i = 0; i < size; i++)
	{
		temp[i] = ptr[i];
	}
	size = size * 2;
	delete[] ptr;
	ptr = temp;
}
void area(double*& circle, double*& square, double*& circleA, double*& squareA, int c1, int c2)
{
	for (int i = 0; i < c1; i++)
	{
		circleA[i] = 3.14 * circle[i];
	}
	for (int i = 0; i < c2; i++)
	{
		squareA[i] = square[i] * square[i];
	}
}
void maxarea(double*& areas, int count, int& max, int& place)
{
	max = areas[0];
	place = 0;
	for (int i = 1; i < count; i++)
	{
		if (areas[i]>max)
		{
			max = areas[i];
			place = i+1;
		}
	}
}
void minarea(double*& areas, int count, int& min, int& place)
{
	min = areas[0];
	place = 0;
	for (int i = 1; i < count; i++)
	{
		if (areas[i] < min)
		{
			min = areas[i];
			place = i+1;
		}
	}
}
int averagearea(double*& areas, int count)
{
	int sum = 0;
	for (int i = 0; i < count; i++)
	{
		sum = sum + areas[i];
	}
	int average = sum / count;
	return average;
}
void writeintofile1(double*& shape, double*& areas, int count, int average, int max, int min, int maxplace, int minplace)
{
	ofstream fout;
	fout.open("circle.txt", ios::app);
	if (fout)
	{
		for (int i = 0; i < count; i++)
		{
			fout << "Area of circle " << i + 1 << " with radius " << shape[i] << " is " << areas[i] << "." << endl;
		}
		fout << endl;
		fout << "Maximum area= " << max << " of circle " << maxplace << "." << endl;
		fout << "Minimum area= " << min << " of circle " << minplace << "." << endl;
		fout << "Average area: " << average << "." << endl;
	}
	else
	{
		cout << "File: circle.txt not found." << endl;
	}
}
void writeintofile2(double*& shape, double*& areas, int count, int average, int max, int min, int maxplace, int minplace)
{
	ofstream fout;
	fout.open("square.txt", ios::app);
	if (fout)
	{
		for (int i = 0; i < count; i++)
		{
			fout << "Area of square " << i + 1 << " with length " << shape[i] << " is " << areas[i] << "." << endl;
		}
		fout << endl;
		fout << "Maximum area= " << max << " of circle " << maxplace << "." << endl;
		fout << "Minimum area= " << min << " of circle " << minplace << "." << endl;
		fout << "Average area: " << average << "." << endl;
	}
	else
	{
		cout << "File: square.txt not found." << endl;
	}
}
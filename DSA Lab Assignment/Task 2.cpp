#include"CircularQueue.h"

class Direction {
public:
	int noOfVehicles; //number of vehicles coming from that direction.
	int rate; //rate at which vehicles pass once the light turns green.
	int durationRed; //duration for which the light would remain red.
	int durationGreen; //duration for which the light would remain green.
	Direction(int n,int r,int dr,int dg)
	{
		noOfVehicles = n;
		rate = r;
		durationRed = dr;
		durationGreen = dg;
	}
	int green()
	{
		int temp = 0;
		for (int i = 0; i < durationGreen; i++)
		{
			if (i%rate==0 && noOfVehicles>0)
			{
				noOfVehicles--;
				temp++;
			}
		}
		return temp;
	}
	void red()
	{
		for (int i = 0; i < durationRed; i++)
		{
			if (i % rate == 0)
			{
				noOfVehicles++;
			}
		}
	}
};
int main()
{
	Direction east(0,3,90,30), west(0, 3, 90, 30), north(0, 4, 90, 30), south(0, 3, 90, 30);
	CircularQueue<int> etraffic(20), wtraffic(20), ntraffic(20), straffic(20);

	char ch = 'r';
	while (ch=='r')
	{
		int traffic;
		int i;
		cout << "Press 1 to turn traffic signal of north green, 2 for south , 3 for east and 4 for west:" ;
		cin >> i;
		if (i==1)
		{
			traffic=north.green();
			south.red();
			east.red();
			west.red();
			cout << "Total traffic at the north signal is " << north.noOfVehicles << endl;
			cout << "The traffic passed throgh north is " << traffic << endl;
			ntraffic.enqueue(traffic);
			traffic = 0;
		}
		else if (i == 2)
		{
			north.red();
			traffic = south.green();
			east.red();
			west.red();
			cout << "Total traffic at the south signal is " << south.noOfVehicles << endl;
			cout << "The traffic passed throgh south is " << traffic << endl;
			straffic.enqueue(traffic);
			traffic = 0;

		}
		else if (i == 3)
		{
			north.red();
			south.red();
			traffic = east.green();
			west.red();
			cout << "Total traffic at the east signal is " << east.noOfVehicles << endl;
			cout << "The traffic passed throgh east is " << traffic << endl;
			etraffic.enqueue(traffic);
			traffic = 0;

		}
		else if (i == 4)
		{
			north.red();
			south.red();
			east.red();
			traffic = west.green();
			cout << "Total traffic at the west signal is " << west.noOfVehicles << endl;
			cout << "The traffic passed throgh north is " << traffic << endl;
			wtraffic.enqueue(traffic);
			traffic = 0;
		}
		else
		{
			cout << "Wrong choice." << endl;
		}
		cout << "Enter r to resume or press any key to abort: ";
		cin >> ch;
	}
	cout << "Traffic passed through signals: " << endl;
	cout << "North: " << endl;
	ntraffic.DisplayCQ();
	cout << "South: " << endl;
	straffic.DisplayCQ();
	cout << "East: " << endl;
	etraffic.DisplayCQ();
	cout << "West: " << endl;
	wtraffic.DisplayCQ();
}
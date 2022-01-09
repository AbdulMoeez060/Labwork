#include"OvernightPackage.h"
#include"TwoDayPackage.h"
using namespace std;

int main()
{
	Package* obj[2];
	obj[0] = new TwoDayPackage("Ali", "Gulberg", "lahore", "Punjab", 54500, "Moeez", "Gulberg A", "Faisalabad", "Punjab", 38000, 18.6, 10.2, 50.46);
	obj[1] = new OvernightPackage("Talha", "F-9", "Islamabad", "Federal", 74999, "Bilal", "Gulberg A", "Lahore", "Punjab", 54500, 12.6, 10.2, 8.1);
	for (int i = 0; i < 2; i++)
	{
		cout << "===========================================" << endl;
		cout << "Cost Of Package: ";
		cout<<obj[i]->calculateCost();
		cout << endl;
		obj[i]->display();
		cout << "===========================================" << endl;
	}
	for (int i = 0; i < 2; i++)
	{
		delete obj[i];
	}
	//delete[] obj;
	return 0;
}
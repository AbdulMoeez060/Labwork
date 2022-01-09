#include"Employee.h"
#include"BaseballPlayer.h"
using namespace std;

int main()
{
	Employee e("Moeez", 20, 73000, 190360);
	Employee e1("Ali", 21, 3000, 21342);
	Employee e2=e;
	e.displayemployee();
	e1.displayemployee();
	e2.displayemployee();

	e1.getcounte();

	BaseballPlayer b("Abdul Moeez", 20, 76.1, 10020);
	BaseballPlayer b1=b;
	b.displaybaseballplayer();
	b1.displaybaseballplayer();

	b1.getcountbp();
	return 0;
}
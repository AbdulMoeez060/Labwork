#include"Text.h"

int main()
{
	Text t;
	cout << "==============================================================================================" << endl;
	cin >> t;
	cout << "Text 't' read from file : " << endl;
	cout << t;
	Text t2 = t;
	cout << "==============================================================================================" << endl;
	cout << "Text 't' saved into 't2' using copy constructor: " << endl;

	cout << t2;
	+t;
	cout << "==============================================================================================" << endl;
	Text t3;
	cout << "Text 't' saved into 't3' using overloaded = after converting t to capital: " << endl;

	t3 = t;
	cout << t3;
	cout << "==============================================================================================" << endl;
	cout << "Checking if T2(non capital) and T3(all capital) are same: ";
	if (t3==t2)
	{
		cout << "Same." << endl;
	}
	else
	{
		cout << "Not same" << endl;
	}
	cout << "==============================================================================================" << endl;
	cout << "Addition of T2(non capital) and T3(all capital): " << endl;
	Text t4 = t2 + t3;
	cout << t4;
	cout << "==============================================================================================" << endl;
	t2 % 2;
	cout << "=====Encrypting T2 with key 2;=======" << endl;
	cout << t2;
	t2 * 2;
	cout << "==============================================================================================" << endl;
	cout << "=====Dencrypting T2 with key 2;=======" << endl;
	cout << t2;
	cout << "==============================================================================================" << endl;
	cout << "Count:" << endl;
	t.countletters();
	t.countwords();
	t.countsentences();
	t.countparagraphs();
	cout << "Saving Frequency into File:" << endl;
	t.frequency();
	cout << "==============================================================================================" << endl;
	t2.checkspelling();//I have intentionaly spelled some word wrong in my txt and have not save some in dictionary i have attachec the txt files in zip
	cout << "==============================================================================================" << endl;
	return 0;
}
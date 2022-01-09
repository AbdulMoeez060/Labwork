#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	const int size = 50;
	const int size2 = 6;
	char q1[size];
	char q2[size];
	char q3[size];
	char q4[size];
	char q5[size];
	char ans1[size];
	char ans2[size];
	char ans3[size];
	char ans4[size];
	char ans5[size];
	char anskey[size2];
	strcpy_s(q1, "What is the capital of Pakitan called?");
	strcpy_s(ans1, "a.Islamabad b.Lahore c.Multan d.Karachi");
	strcpy_s(q2, "What is the Capital of provice Punjab?");
	strcpy_s(ans2, "a.Islamabad b.Lahore c.Multan d.Karachi");
	strcpy_s(q3, "What language this program is written in?");
	strcpy_s(ans3, "a.Java b.Pyton c.C# d.C++");
	strcpy_s(q4, "Which city is near the Sea?");
	strcpy_s(ans4, "a.Islamabad b.Lahore c.Karachi d.Multan");
	strcpy_s(q5, "Where is Lahore Located?");
	strcpy_s(ans5, "a.Sindh b.Punjab c.KPK d.Balochistan");
	strcpy_s(anskey, "abdcb");
	int rollno1, rollno2, rollno3, rollno4, rollno5;
	char choice1, choice2, choice3, choice4, choice5;
	
	return 0;
	
}
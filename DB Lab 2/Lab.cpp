#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct Student
{
	string regNo, name, program;
	float cgpa;
	string num;
};
void display(Student s[], int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << s[i].regNo << "\t" << s[i].name << "\t" << s[i].program << "\t" << s[i].cgpa << "\t" << s[i].num << endl;
	}
}
void readfromfile(Student s[],int& count)
{
	char filename[30];
	cout << "Enter Filename you want to read data from(.csv or .txt):";
	cin >> filename;
	ifstream fin(filename);
	if (fin)
	{
		for (int i = 0;!fin.eof() ; i++)
		{
			getline(fin, s[i].regNo, ',');
			getline(fin, s[i].name, ',');
			getline(fin, s[i].program, ',');
			//getline(fin, s[i].cgpa, ',');
			fin >> s[i].cgpa;
			fin.ignore();
			getline(fin, s[i].num, '\n');
			count++;
			//cout << "Here " << i << endl;
		}
	}
	else
	{
		cout << "Invalid file name." << endl;
	}
	display(s, count);
	fin.close();
}
void writetofile(Student s[], int count)
{
	char filename[30];
	cout << "Enter Filename you want to write data to(.csv or .txt):";
	cin >> filename;
	ofstream fout(filename);
	if (fout)
	{
		for (int i = 0; i < count; i++)
		{
			fout << s[i].regNo << ","
				<< s[i].name << ","
				<< s[i].program << ","
				<< s[i].cgpa << ","
				<< s[i].num << ",";
			fout << endl;
		}
	}
	else
	{
		cout << "Error: No file found" << endl;
	}
	cout << "Data Added to file." << endl;
	fout.close();
}

void search(Student s[],int count)
{
	string temp;
	cout << "Enter the Registration num to search(all caps):";
	cin >> temp;
	for (int i = 0; temp[i]!= '\0'; i++)
	{
		if (temp[i]>=90 && temp[i]<=122)
		{
			temp[i] -= 32;
		}
	}
	int flag = 0;
	for (int i = 0; i < count; i++)
	{
		if (temp==s[i].regNo)
		{
			cout << s[i].regNo << "\t" << s[i].name << "\t" << s[i].program << "\t" << s[i].cgpa << "\t" << s[i].num << endl;
			flag++;
		}
	}
	if (flag==0)
	{
		cout << "The Registration number not found." << endl;
	}
}
void add(Student s[], int& count)
{
	string reg, n, pro, num;
	float cg;
	cout << "Enter Student's Registration number:";
	cin>>reg;
	cin.ignore();
	cout << "Enter Student's Name:";
	getline(cin,n);
	//cin.ignore();
	cout << "Enter Student's Program:";
	cin>>pro;
	cin.ignore();
	cout << "Enter Student's CGPA:";
	cin >> cg;
	cin.ignore();
	cout << "Enter Student's Number:";
	getline(cin,num);
	s[count].regNo = reg;
	s[count].name = n;
	s[count].program = pro;
	s[count].cgpa = cg;
	s[count].num = num;
	count++;
	writetofile(s, count);
	cout << "Data added." << endl;
	display(s, count);
}
void updateCGPA(Student s[], int count)
{
	string regNo;
	float updatedCGPA;
	cout << "Enter the Registration num to search(all caps):";
	cin >> regNo;
	cout << "Enter the updated CGPA:";
	cin >> updatedCGPA;
	for (int i = 0; regNo[i] != '\0'; i++)
	{
		if (regNo[i] >= 90 && regNo[i] <= 122)
		{
			regNo[i] -= 32;
			
		}
	}
	int flag = 0;
	for (int i = 0; i < count; i++)
	{
		if (regNo == s[i].regNo)
		{
			s[i].cgpa = updatedCGPA;
			flag++;
		}
	}
	if (flag == 0)
	{
		cout << "The Registration number not found." << endl;
	}
	else
	{
		cout << "Data Updated:" << endl;
		writetofile(s, count);
		display(s, count);
	}
}
void deleteData(Student s[], int& count)
{
	string regNo;
	cout << "Enter the Registration num to search(all caps):";
	cin >> regNo;
	for (int i = 0; regNo[i] != '\0'; i++)
	{
		if (regNo[i] >= 90 && regNo[i] <= 122)
		{
			regNo[i] -= 32;

		}
	}
	char filename[30];
	cout << "Enter Filename you want to write data to after deleting(.csv or .txt):";
	cin >> filename;
	int flag = 0;

	ofstream fout(filename);
	if (fout)
	{
		cout << "Deleting Data:" << endl;
		for (int i = 0; i < count; i++)
		{
			if (regNo != s[i].regNo)
			{
				fout << s[i].regNo << ","
					<< s[i].name << ","
					<< s[i].program << ","
					<< s[i].cgpa << ","
					<< s[i].num << ",";
				fout << endl;
				cout << s[i].regNo << "\t" << s[i].name << "\t" << s[i].program << "\t" << s[i].cgpa << "\t" << s[i].num << endl;
				flag++;
			}
			
		}
	}
	else
	{
		cout << "File not found." << endl;
	}
	fout.close();
	if (flag == 0)
	{
		cout << "Registration num not found." << endl;
	}
	else
	{
		count = 0;
		ifstream fin(filename);
		if (fin)
		{
			for (int i = 0; !fin.eof(); i++)
			{
				getline(fin, s[i].regNo, ',');
				getline(fin, s[i].name, ',');
				getline(fin, s[i].program, ',');
				//getline(fin, s[i].cgpa, ',');
				fin >> s[i].cgpa;
				fin.ignore();
				getline(fin, s[i].num, ',');
				fin.ignore();
				count++;
				//cout << "Here " << i << endl;
			}
		}
		else
		{
			cout << "File not found." << endl;
		}
		fin.close();

	}
}

int main()
{
	Student stud[20];
	int count = 0;
	readfromfile(stud, count);

	char ch = 'r';
	while (ch=='r'||ch=='R')
	{
		int choice;
		cout << "Press 1 to add Student, 2 to update Cgpa, 3 to search student , 4 to delete student and 5 to display:";
		cin >> choice;
		if (choice==1)
		{
			cout << "ADDING DATA:" << endl;
			add(stud, count);
		}
		else if (choice == 2)
		{
			cout << "UPDATING DATA:" << endl;
			updateCGPA(stud, count);
		}
		else if (choice == 3)
		{
			cout << "SEARCHING DATA:" << endl;
			search(stud, count);
		}
		else if (choice == 4)
		{
			cout << "DELETING DATA:" << endl;
			deleteData(stud, count);
		}
		else if (choice == 5)
		{
			cout << "DISPLAYING DATA:" << endl;
			display(stud, count);
		}
		else
		{
			cout<<"Wrong Choice."<<endl;

		}
		cout << "To continue press r else press and key to stop:";
		cin >> ch;
	}
	
	/*display(stud, count);
	cout << "For search:" << endl;
	search(stud, count);

	add(stud, count);
	cout << count << endl;
	updateCGPA(stud, count);*/
	return 0;
}
#include<iostream>
#include<fstream>
using namespace std;
void compare(char arr[], int &y);
char* shring(char *ptr, int size);
void copy(char *ptr, char *temp, int size);
void Menu(char arr[][15], int rows, int column);
void get_new_data(char arr[][15], int rows, int column);
int easy(char arr[][15], int rows, int column);
int easy_resume_condition(char arr[][15], int rows, int column, int highscore);
int medium_level(char arr[][15], int rows, int column);
int medium_resume_condition(char arr[][15], int rows, int column, int highscore);
int hard_condition(char arr[][15], int rows, int column);
int hard_resume_condition(char arr[][15], int rows, int column, int highscore);
int main()
{
	int const rows = 15;
	int const column = 15;
	char arr[rows][column];
	Menu(arr,rows,column);
	return 0;


}
void Menu(char arr[][15], int rows, int column)
{
	char *name=new char[50]();
	cout << "please enter your name :";
	cin >> name;
	int x = strlen(name);
	name=shring(name, x);

	cout << endl;
	char menu_bar = {};
	cout << "please press small n for new game.\n";
	cout << "please press small r for resume game.\n";
	cout << "please press small p for pause game.\n";
	cout << "please press small h for high score.\n";
	cout << "please press small e for exit game.\n";
	cin >> menu_bar;
	if (menu_bar == 'n' || menu_bar == 'N')
	{
		char level;
		cout << "there are three levels of this game\nenter e for easy\nenter m for medium\nenter h for hard\nplease enter level :";
		cin >> level;
		if (level == 'e' || level == 'E')
		{
			easy(arr, rows, column);

		}
		else if (level == 'm' || level == 'M')
		{
			medium_level(arr, rows, column);
		}
		else if (level == 'h'||level == 'H')
		{
			hard_condition(arr, rows, column);

		}
	}
	if (menu_bar == 'r' || menu_bar == 'R')
		{
		char u = {};
		ifstream fin;
		fin.open("perivious.txt");
		fin >> u;
		if (fin.is_open())
		{
			for (int i = 0; i < 15; i++)
			{
				for (int j = 0; j < 15; j++)
				{
					fin >> arr[i][j];
				}
			}

			fin.close();
			int highscore = {};
			if (u == 'e')
				easy_resume_condition(arr, rows, column, highscore);
			
			if (u == 'm')
				medium_resume_condition(arr, rows, column, highscore);


			if (u == 'h')
				hard_resume_condition(arr, rows, column, highscore);
		}
		else
		{
			cout << "error";
		}
	}
	if (menu_bar == 'h' || menu_bar == 'H')
	{
		ifstream fin;
		fin.open("highscore.txt");
		int x;
		fin >> x;
		cout <<"last high score is "<< x;
		fin.close();
	}

}
void get_new_data(char arr[][15], int rows, int column)
{
	ifstream fin;
	fin.open("data.txt");
	if (fin.is_open())
	{
		for (int i = 0; i<15; i++)
		{
			for (int j = 0; j < 15; j++)
			{
				fin >> arr[i][j];
			}
		}
	}
	else
	{
		cout << "file not open";
	}
}

int easy(char arr[][15], int rows, int column)
{
	
	get_new_data(arr,rows,column);

	int highscore = 0;
	char *word = new char[20]();

	int x = 0;
	int count = 0;

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "please enter any word ";
	while (cin >> word)
	{
		

			if ((word[0] == 'P' || word[0] == 'p') && (word[1] == '\0'))
			{
				char m = {};
				cout << "press  e to exit \npress  r to resume :";
				cin >> m;
				if (m == 'e'||m=='E')
				{
					ofstream fout;
					fout.open("perivious.txt");
					fout << "e";
					if (fout.is_open())
					{
						for (int i = 0; i < 15; i++)
						{
							for (int j = 0; j < 15; j++)
							{
								fout << arr[i][j];
							}
						}
					}
					fout.close();
					ofstream fout1;
					fout1.open("highscore.txt");
					fout1 << highscore;
					fout1.close();
					return 0;
				}
				if (m == 'r'||m=='R')
				{
					easy_resume_condition(arr, rows, column, highscore);
					return 0;
				}

			}
			else
			{
				int y = 0;
				compare(word, y);
				if (y == 0)
				{
				int lenght = strlen(word);
				word = shring(word, lenght);
				lenght = strlen(word);
				int *storerowsindex = new int[lenght]();
				int *storecolumnindex = new int[lenght]();
				for (int i = 0; i < rows; i++)
				{
					for (int j = 0; j < column; j++)
					{
						if (arr[i][j] == word[x])
						{
							storerowsindex[x] = i;
							storecolumnindex[x] = j;
							x++;
						}
						else
						{
							x = 0;
							storerowsindex[x] = {};
							storecolumnindex[x] = {};

						}
						if (x == lenght)
						{


							cout << "[" << storerowsindex[0] << "]";
							cout << "[" << storecolumnindex[0] << "]";
							cout << " ";
							cout << "[" << storerowsindex[x - 1] << "]";
							cout << "[" << storecolumnindex[x - 1] << "]\n";
							count++;
							ofstream fout;
							fout.open("highscore.txt");
							highscore = highscore + 10;
							fout << highscore;
							cout << "word you enter is found your score is " << highscore << endl;
							fout.close();
							break;
						}
					}
				}
				if (count == 0)
				{
					x = 0;
					for (int i = 0; i < rows; i++)
					{
						for (int j = 0; j < column; j++)
						{
							if (arr[j][i] == word[x])
							{
								storerowsindex[x] = j;
								storecolumnindex[x] = i;
								x++;
							}
							else
							{
								x = 0;
								storerowsindex[x] = {};
								storecolumnindex[x] = {};

							}
							if (x == lenght)
							{
								cout << "[" << storerowsindex[0] << "]";
								cout << "[" << storecolumnindex[0] << "]";
								cout << " ";
								cout << "[" << storerowsindex[x - 1] << "]";
								cout << "[" << storecolumnindex[x - 1] << "]\n";
								count++;
								ofstream fout;
								fout.open("highscore..txt");
								highscore = highscore + 10;
								fout << highscore;
								cout << "word you enter is found your score is " << highscore << endl;
								fout.close();
								break;

							}
						}
					}
				}
				if (count == 0)
				{
					ofstream fout;
					fout.open("highscore.txt");
					highscore = highscore - 1;
					fout << highscore;
					cout << "word you enter is not found your score is " << highscore << endl;
					fout.close();
				}
				cout << "please enter any word ";
				count = 0;
				}
				else
				{
					cout << "word you enter is not found in dictionry\n";
					cout << "please enter any word ";

				}
			}
			word = new char[20]();
	}
}
int easy_resume_condition(char arr[][15], int rows, int column, int highscore)
{
	char *word=new char[20] ;
	int x = 0;
	int g = {};
	ifstream fin;
	fin.open("highscore.txt");
	fin >> g;
	fin.close();
	highscore = g;
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "please enter any word ";
	while (cin >> word)
	{
		
			if ((word[0] == 'P' || word[0] == 'p') && (word[1] == '\0'))
			{
				char m;
				cout << "press e to exit \npress r to resume :";
				cin >> m;
				if (m == 'e' || m == 'E')
				{
					ofstream fout;
					fout.open("perivious.txt");
					if (fout.is_open())
					{
						for (int i = 0; i < 15; i++)
						{
							for (int j = 0; j < 15; j++)
							{
								fout << arr[i][j];
							}
						}
					}
					fout.close();
					ofstream fout1;
					fout1.open("highscore.txt");
					fout1 << highscore;
					fout1.close();
					return 0;
				}
				if (m == 'r' || m == 'R')
				{
					easy_resume_condition(arr, rows, column, highscore);
					return 0;
				}
			}
			else
			{
				int y = 0;
				compare(word, y);
				if (y == 0)
				{

				int lenght = strlen(word);
				word = shring(word, lenght);
				lenght = strlen(word);
				int *storerowsindex = new int[lenght]();
				int *storecolumnindex = new int[lenght]();
				int count = 0;

				for (int i = 0; i < rows; i++)
				{
					for (int j = 0; j < column; j++)
					{
						if (arr[i][j] == word[x])
						{
							storerowsindex[x] = i;
							storecolumnindex[x] = j;
							x++;
						}
						else
						{
							storerowsindex[x] = {};
							storecolumnindex[x] = {};

							x = 0;
						}
						if (x == lenght)
						{
							cout << "[" << storerowsindex[0] << "]";
							cout << "[" << storecolumnindex[0] << "]";
							cout << " ";
							cout << "[" << storerowsindex[x - 1] << "]";
							cout << "[" << storecolumnindex[x - 1] << "]";


							ofstream fout;
							fout.open("highscore.txt");
							count++;
							highscore = highscore + 10;
							fout << highscore;
							cout << "word you enter is found your score is " << highscore << endl;
							fout.close();
							break;
						}
					}
				}
				if (count == 0)
				{
					x = 0;
					for (int i = 0; i < rows; i++)
					{
						for (int j = 0; j < column; j++)
						{
							if (arr[j][i] == word[x])
							{
								storerowsindex[x] = i;
								storecolumnindex[x] = j;
								x++;
							}
							else
							{
								storerowsindex[x] = {};
								storecolumnindex[x] = {};

								x = 0;
							}
							if (x == lenght)
							{
								cout << "[" << storerowsindex[0] << "]";
								cout << "[" << storecolumnindex[0] << "]";
								cout << " ";
								cout << "[" << storerowsindex[x - 1] << "]";
								cout << "[" << storecolumnindex[x - 1] << "]\n";
								ofstream fout;
								fout.open("highscore.txt");
								count++;
								highscore = highscore + 10;
								fout << highscore;
								cout << "word you enter is found your score is " << highscore << endl;
								fout.close();
								break;

							}
						}
					}
				}

				if (count == 0)
				{
					ofstream fout;
					fout.open("highscore.txt");
					highscore = highscore - 1;
					fout << highscore;
					cout << "word you enter is not found your score is " << highscore << endl;
					fout.close();
				}
				cout << "please enter any word ";
				count = 0;
			}
				else
				{
					cout << "word you enter is not found in dictionary\n";
					cout << "please enter any word";
				}
			word = new char[20]();
		}
		
	}
}
int medium_level(char arr[][15], int rows, int column)
{
	get_new_data(arr, rows, column);

	int highscore = 0;
	char *word = new char[20]();
	int x = 0;
	int count = 0;

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "please enter any word ";
	while (cin >> word)
	{
		
			if ((word[0] == 'P' || word[0] == 'p') && (word[1] == '\0'))
			{
				char m;
				cout << "press e to exit \npress r to resume :";
				cin >> m;
				if (m == 'e' || m == 'E')
				{
					ofstream fout;
					fout.open("perivious.txt");
					fout << "m";
					if (fout.is_open())
					{
						for (int i = 0; i < 15; i++)
						{
							for (int j = 0; j < 15; j++)
							{
								fout << arr[i][j];
							}
						}
					}
					fout.close();
					ofstream fout1;
					fout1.open("highscore.txt");
					fout1 << highscore;
					fout1.close();
					return 0;
				}
				if (m == 'r' || m == 'R')
				{
					medium_resume_condition(arr, rows, column, highscore);
					return 0;
				}


			}
			else
			{
				int y = 0;
				compare(word, y);
				if (y == 0)
				{
				int lenght = strlen(word);
				word = shring(word, lenght);
				lenght = strlen(word);
				int *storerowsindex = new int[lenght]();
				int *storecolumnindex = new int[lenght]();
				for (int i = 0; i < rows; i++)
				{
					for (int j = 0; j < column; j++)
					{
						if (arr[i][j] == word[x])
						{
							storerowsindex[x] = i;
							storecolumnindex[x] = j;
							x++;
						}
						else
						{
							storerowsindex[x] = {};
							storecolumnindex[x] = {};

							x = 0;
						}
						if (x == lenght)
						{
							cout << "[" << storerowsindex[0] << "]";
							cout << "[" << storecolumnindex[0] << "]";
							cout << " ";
							cout << "[" << storerowsindex[x - 1] << "]";
							cout << "[" << storecolumnindex[x - 1] << "]\n";
							count++;
							ofstream fout;
							fout.open("highscore.txt");
							highscore = highscore + 10;
							fout << highscore;
							cout << "word you enter is found your score is " << highscore << endl;
							fout.close();
							break;
						}
					}
				}
				if (count == 0)
				{
					for (int i = rows - 1; i >= 0; i--)
					{
						for (int j = column - 1; j >= 0; j--)
						{
							if (arr[i][j] == word[x])
							{
								storerowsindex[x] = i;
								storecolumnindex[x] = j;
								x++;
							}
							else
							{
								storerowsindex[x] = {};
								storecolumnindex[x] = {};

								x = 0;
							}
							if (x == lenght)
							{
								cout << "[" << storerowsindex[0] << "]";
								cout << "[" << storecolumnindex[0] << "]";
								cout << " ";
								cout << "[" << storerowsindex[x - 1] << "]";
								cout << "[" << storecolumnindex[x - 1] << "]\n";
								count++;
								ofstream fout;
								fout.open("highscore.txt");
								highscore = highscore + 10;
								fout << highscore;
								cout << "word you enter is found your score is " << highscore << endl;
								fout.close();
								break;
							}
						}
					}
				}
				if (count == 0)
				{
					x = 0;
					for (int i = 0; i < rows; i++)
					{
						for (int j = 0; j < column; j++)
						{
							if (arr[j][i] == word[x])
							{
								storerowsindex[x] = i;
								storecolumnindex[x] = j;
								x++;
							}
							else
							{
								storerowsindex[x] = {};
								storecolumnindex[x] = {};

								x = 0;
							}
							if (x == lenght)
							{
								cout << "[" << storerowsindex[0] << "]";
								cout << "[" << storecolumnindex[0] << "]";
								cout << " ";
								cout << "[" << storerowsindex[x - 1] << "]";
								cout << "[" << storecolumnindex[x - 1] << "]\n";
								count++;
								ofstream fout;
								fout.open("highscore..txt");

								highscore = highscore + 10;
								fout << highscore;
								cout << "word you enter is found your score is " << highscore << endl;
								fout.close();
								break;

							}
						}
					}
				}
				if (count == 0)
				{
					x = 0;
					for (int i = rows - 1; i >= 0; i--)
					{
						for (int j = column - 1; j >= 0; j--)
						{
							if (arr[j][i] == word[x])
							{
								storerowsindex[x] = i;
								storecolumnindex[x] = j;
								x++;
							}
							else
							{
								storerowsindex[x] = {};
								storecolumnindex[x] = {};

								x = 0;
							}
							if (x == lenght)
							{
								cout << "[" << storerowsindex[0] << "]";
								cout << "[" << storecolumnindex[0] << "]";
								cout << " ";
								cout << "[" << storerowsindex[x - 1] << "]";
								cout << "[" << storecolumnindex[x - 1] << "]\n";
								count++;
								ofstream fout;
								fout.open("highscore..txt");

								highscore = highscore + 10;
								fout << highscore;
								cout << "word you enter is found your score is " << highscore << endl;
								fout.close();
								break;

							}
						}
					}
				}
				if (count == 0)
				{
					ofstream fout;
					fout.open("highscore.txt");
					highscore = highscore - 1;
					fout << highscore;
					cout << "word you enter is not found your score is " << highscore << endl;
					fout.close();
				}
				cout << "please enter any word ";

				count = 0;
			}
			else
			{
				cout << "word you enter is found in dictionary\n";
				cout << "please enter any word";
			}
			word = new char[20]();
		}
		
	}
}
int medium_resume_condition(char arr[][15], int rows, int column, int highscore)
{
	
	int g = {};
	ifstream fin;
	fin.open("highscore.txt");
	fin >> g;
	fin.close();
	highscore = g;
	char *word =new char[20]();
	int x = 0;
	int count = 0;

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "please enter any word ";
	while (cin >> word)
	{
		
			if ((word[0] == 'P' || word[0] == 'p') && (word[1] == '\0'))
			{
				ofstream fout;
				fout.open("perivious.txt");
				for (int i = 0; i < 15; i++)
				{
					for (int j = 0; j < 15; j++)
					{
						fout << arr[i][j] << " ";
					}
					cout << endl;
				}
				fout << endl << " high score " << highscore;
				fout.close();
				char m;
				cout << "press e to exit \npress r to resume :";
				cin >> m;
				if (m == 'e' || m == 'E')
				{
					ofstream fout;
					fout.open("perivious.txt");
					if (fout.is_open())
					{
						for (int i = 0; i < 15; i++)
						{
							for (int j = 0; j < 15; j++)
							{
								fout << arr[i][j];
							}
						}
					}
					fout.close();
					ofstream fout1;
					fout1.open("highscore.txt");
					fout1 << highscore;
					fout1.close();
					return 0;
				}
				if (m == 'r' || m == 'R')
				{
					medium_resume_condition(arr, rows, column, highscore);
				}


			}
			else
			{
				int y = 0;
				compare(word, y);
				if (y == 0)
				{
				int lenght = strlen(word);
				word = shring(word, lenght);
				lenght = strlen(word);
				int *storerowsindex = new int[lenght]();
				int *storecolumnindex = new int[lenght]();
				for (int i = 0; i < rows; i++)
				{
					for (int j = 0; j < column; j++)
					{
						if (arr[i][j] == word[x])
						{
							storerowsindex[x] = i;
							storecolumnindex[x] = j;
							x++;
						}
						else
						{
							storerowsindex[x] = {};
							storecolumnindex[x] = {};

							x = 0;
						}
						if (x == lenght)
						{
							count++;
							ofstream fout;
							fout.open("highscore.txt");
							highscore = highscore + 10;
							fout << highscore;
							cout << "word you enter is found your score is " << highscore << endl;
							fout.close();
							break;
						}
					}
				}
				if (count == 0)
				{

					for (int i = rows - 1; i >= 0; i--)
					{
						for (int j = column - 1; j >= 0; j--)
						{
							if (arr[i][j] == word[x])
							{
								storerowsindex[x] = i;
								storecolumnindex[x] = j;
								x++;
							}
							else
							{
								storerowsindex[x] = {};
								storecolumnindex[x] = {};

								x = 0;
							}
							if (x == lenght)
							{

								cout << "[" << storerowsindex[0] << "]";
								cout << "[" << storecolumnindex[0] << "]";
								cout << " ";
								cout << "[" << storerowsindex[x - 1] << "]";
								cout << "[" << storecolumnindex[x - 1] << "]\n";
								count++;
								ofstream fout;
								fout.open("highscore.txt");
								highscore = highscore + 10;
								fout << highscore;
								cout << "word you enter is found your score is " << highscore << endl;
								fout.close();
								break;
							}
						}
					}
				}
				if (count == 0)
				{
					x = 0;
					for (int i = 0; i < rows; i++)
					{
						for (int j = 0; j < column; j++)
						{
							if (arr[j][i] == word[x])
							{
								storerowsindex[x] = i;
								storecolumnindex[x] = j;
								x++;
							}
							else
							{
								storerowsindex[x] = {};
								storecolumnindex[x] = {};

								x = 0;
							}
							if (x == lenght)
							{
								cout << "[" << storerowsindex[0] << "]";
								cout << "[" << storecolumnindex[0] << "]";
								cout << " ";
								cout << "[" << storerowsindex[x - 1] << "]";
								cout << "[" << storecolumnindex[x - 1] << "]\n";
								count++;
								ofstream fout;
								fout.open("highscore..txt");

								highscore = highscore + 10;
								fout << highscore;
								cout << "word you enter is found your score is " << highscore << endl;
								fout.close();
								break;

							}
						}
					}
				}
				if (count == 0)
				{
					x = 0;
					for (int i = rows - 1; i >= 0; i--)
					{
						for (int j = column - 1; j >= 0; j--)
						{
							if (arr[j][i] == word[x])
							{
								storerowsindex[x] = i;
								storecolumnindex[x] = j;
								x++;
							}
							else
							{
								storerowsindex[x] = {};
								storecolumnindex[x] = {};

								x = 0;
							}
							if (x == lenght)
							{
								cout << "[" << storerowsindex[0] << "]";
								cout << "[" << storecolumnindex[0] << "]";
								cout << " ";
								cout << "[" << storerowsindex[x - 1] << "]";
								cout << "[" << storecolumnindex[x - 1] << "]\n";
								count++;
								ofstream fout;
								fout.open("highscore..txt");

								highscore = highscore + 10;
								fout << highscore;
								cout << "word you enter is found your score is " << highscore << endl;
								fout.close();
								break;

							}
						}
					}
				}
				if (count == 0)
				{
					ofstream fout;
					fout.open("highscore.txt");
					highscore = highscore - 1;
					fout << highscore;
					cout << "word you enter is not found your score is " << highscore << endl;
					fout.close();
				}
				cout << "please enter any word ";

				count = 0;

			}
			else
			{
				cout << "word you enter is not found in dictionary\n";
				cout << "please enter any word";
			}
			word = new char[20]();
		}
		
	}
}
int hard_condition(char arr[][15], int rows, int column)
{
	
	get_new_data(arr, rows, column);

	int highscore = 0;
	char *word =new char[20]();
	int x = 0;
	int count = 0;

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "please enter any word ";
	while (cin >> word)
	{
		
			if ((word[0] == 'P' || word[0] == 'p') && (word[1] == '\0'))
			{
				char m;
				cout << "press e to exit \npress r to resume :";
				cin >> m;
				if (m == 'e' || m == 'E')
				{
					ofstream fout;
					fout.open("perivious.txt");
					fout << "h";
					if (fout.is_open())
					{
						for (int i = 0; i < 15; i++)
						{
							for (int j = 0; j < 15; j++)
							{
								fout << arr[i][j];
							}
						}
					}
					fout.close();
					ofstream fout1;
					fout1.open("highscore.txt");
					fout1 << highscore;
					fout1.close();
					return 0;
				}
				else if (m == 'r' || m == 'R')
				{
					hard_resume_condition(arr, rows, column, highscore);
					return 0;
				}


			}
			else
			{
				int y = 0;
				compare(word, y);
				if (y == 0)
				{
				int lenght = strlen(word);
				word = shring(word, lenght);
				lenght = strlen(word);
				int *storerowsindex = new int[lenght]();
				int *storecolumnindex = new int[lenght]();
				for (int i = 0; i < rows; i++)
				{
					for (int j = 0; j < column; j++)
					{
						if (arr[i][j] == word[x])
						{
							storerowsindex[x] = i;
							storecolumnindex[x] = j;
							x++;
						}
						else
						{
							storerowsindex[x] = {};
							storecolumnindex[x] = {};

							x = 0;
						}
						if (x == lenght)
						{
							cout << "[" << storerowsindex[0] << "]";
							cout << "[" << storecolumnindex[0] << "]";
							cout << " ";
							cout << "[" << storerowsindex[x - 1] << "]";
							cout << "[" << storecolumnindex[x - 1] << "]\n";

							count++;
							ofstream fout;
							fout.open("highscore.txt");
							highscore = highscore + 10;
							fout << highscore;
							cout << "word you enter is found your score is " << highscore << endl;
							fout.close();
							break;
						}
					}
				}
				if (count == 0)
				{
					x = 0;
					for (int i = rows - 1; i >= 0; i--)
					{
						for (int j = column - 1; j >= 0; j--)
						{
							if (arr[i][j] == word[x])
							{
								storerowsindex[x] = i;
								storecolumnindex[x] = j;
								x++;
							}
							else
							{
								storerowsindex[x] = {};
								storecolumnindex[x] = {};

								x = 0;
							}
							if (x == lenght)
							{
								cout << "[" << storerowsindex[0] << "]";
								cout << "[" << storecolumnindex[0] << "]";
								cout << " ";
								cout << "[" << storerowsindex[x - 1] << "]";
								cout << "[" << storecolumnindex[x - 1] << "]\n";

								count++;
								ofstream fout;
								fout.open("highscore.txt");
								highscore = highscore + 10;
								fout << highscore;
								cout << "word you enter is found your score is " << highscore << endl;
								fout.close();
								break;
							}
						}
					}
				}
				if (count == 0)
				{
					x = 0;
					for (int i = 0; i < rows; i++)
					{
						for (int j = 0; j < column; j++)
						{
							if (arr[j][i] == word[x])
							{
								storerowsindex[x] = j;
								storecolumnindex[x] = i;
								x++;
							}
							else
							{
								storerowsindex[x] = {};
								storecolumnindex[x] = {};

								x = 0;
							}
							if (x == lenght)
							{
								cout << "[" << storerowsindex[0] << "]";
								cout << "[" << storecolumnindex[0] << "]";
								cout << " ";
								cout << "[" << storerowsindex[x - 1] << "]";
								cout << "[" << storecolumnindex[x - 1] << "]\n";
								count++;
								ofstream fout;
								fout.open("highscore..txt");

								highscore = highscore + 10;
								fout << highscore;
								cout << "word you enter is found your score is " << highscore << endl;
								fout.close();
								break;

							}
						}
					}
				}
				if (count == 0)
				{
					x = 0;
					for (int i = rows - 1; i >= 0; i--)
					{
						for (int j = column - 1; j >= 0; j--)
						{
							if (arr[j][i] == word[x])
							{
								storerowsindex[x] = j;
								storecolumnindex[x] = i;
								x++;
							}
							else
							{
								storerowsindex[x] = {};
								storecolumnindex[x] = {};

								x = 0;
							}
							if (x == lenght)
							{
								cout << "[" << storerowsindex[0] << "]";
								cout << "[" << storecolumnindex[0] << "]";
								cout << " ";
								cout << "[" << storerowsindex[x - 1] << "]";
								cout << "[" << storecolumnindex[x - 1] << "]\n";
								count++;
								ofstream fout;
								fout.open("highscore..txt");

								highscore = highscore + 10;
								fout << highscore;
								cout << "word you enter is found your score is " << highscore << endl;
								fout.close();
								break;

							}
						}
					}
				}
				if (count == 0)
				{
					x = 0;
					for (int i = 0; i < rows; i++)
					{
						if (arr[i][i] == word[x])
						{
							storerowsindex[x] = i;
							storecolumnindex[x] = i;
							x++;
						}
						else
						{
							storerowsindex[x] = {};
							storecolumnindex[x] = {};

							x = 0;
						}
						if (x == lenght)
						{
							cout << "[" << storerowsindex[0] << "]";
							cout << "[" << storecolumnindex[0] << "]";
							cout << " ";
							cout << "[" << storerowsindex[x - 1] << "]";
							cout << "[" << storecolumnindex[x - 1] << "]\n";
							count++;
							ofstream fout;
							fout.open("highscore..txt");

							highscore = highscore + 10;
							fout << highscore;
							cout << "word you enter is found your score is " << highscore << endl;
							fout.close();
							break;

						}

					}
					if (count == 0)
					{
						x = 0;
						for (int i = rows - 1; i >= 0; i--)
						{
							if (arr[i][i] == word[x])
							{
								storerowsindex[x] = i;
								storecolumnindex[x] = i;
								x++;
							}
							else
							{
								storerowsindex[x] = {};
								storecolumnindex[x] = {};

								x = 0;
							}
							if (x == lenght)
							{
								cout << "[" << storerowsindex[0] << "]";
								cout << "[" << storecolumnindex[0] << "]";
								cout << " ";
								cout << "[" << storerowsindex[x - 1] << "]";
								cout << "[" << storecolumnindex[x - 1] << "]\n";
								count++;
								ofstream fout;
								fout.open("highscore..txt");

								highscore = highscore + 10;
								fout << highscore;
								cout << "word you enter is found your score is " << highscore << endl;
								fout.close();
								break;

							}
						}
					}
					if (count == 0)
					{
						x = 0;
						int l = column;
						for (int i = 0; i < rows; i++)
						{
							if (arr[i][l] == word[x])
							{
								storerowsindex[x] = i;
								storecolumnindex[x] = l;
								l--;
								x++;
							}
							else
							{
								storerowsindex[x] = {};
								storecolumnindex[x] = {};

								x = 0;
							}
							if (x == lenght)
							{
								cout << "[" << storerowsindex[0] << "]";
								cout << "[" << storecolumnindex[0] << "]";
								cout << " ";
								cout << "[" << storerowsindex[x - 1] << "]";
								cout << "[" << storecolumnindex[x - 1] << "]\n";
								count++;
								ofstream fout;
								fout.open("highscore..txt");

								highscore = highscore + 10;
								fout << highscore;
								cout << "word you enter is found your score is " << highscore << endl;
								fout.close();
								break;

							}
						}
					}
					if (count == 0)
					{
						x = 0;
						int l = 0;
						for (int i = rows - 1; i >= 0; i--)
						{
							if (arr[i][l] == word[x])
							{
								storerowsindex[x] = i;
								storecolumnindex[x] = l;
								l++;
								x++;
							}
							else
							{
								storerowsindex[x] = {};
								storecolumnindex[x] = {};

								x = 0;
							}
							if (x == lenght)
							{
								cout << "[" << storerowsindex[0] << "]";
								cout << "[" << storecolumnindex[0] << "]";
								cout << " ";
								cout << "[" << storerowsindex[x - 1] << "]";
								cout << "[" << storecolumnindex[x - 1] << "]\n";
								count++;
								ofstream fout;
								fout.open("highscore..txt");

								highscore = highscore + 10;
								fout << highscore;
								cout << "word you enter is found your score is " << highscore << endl;
								fout.close();
								break;

							}
						}
					}
					if (count == 0)
					{
						ofstream fout;
						fout.open("highscore.txt");
						highscore = highscore - 1;
						fout << highscore;
						cout << "word you enter is not found your score is " << highscore << endl;
						fout.close();
					}

				}
				cout << "please enter any word ";

				count = 0;
			}
			else
			{
				cout << "word you enter is not found in dictionary\n";
				cout << "please enter any word";
			}
			word = new char[20]();
		}
		
	}
}
int hard_resume_condition(char arr[][15], int rows, int column, int highscore)
{
	char *word = new char[20]();
	int x = 0;
	int count = 0;
	ifstream fin;
	fin.open("highscore.txt");
	int g = {};
	fin >> g;
	fin.close();
	highscore = g;
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "please enter any word ";
	while (cin >> word)
	{
		
			if ((word[0] == 'P' || word[0] == 'p') && (word[1] == '\0'))
			{
				char m;
				cout << "press  e to exit \npress  r to resume :";
				cin >> m;
				if (m == 'e' || m == 'E')
				{
					ofstream fout;
					fout.open("perivious.txt");
					if (fout.is_open())
					{
						for (int i = 0; i < 15; i++)
						{
							for (int j = 0; j < 15; j++)
							{
								fout << arr[i][j];
							}
						}
					}
					fout.close();
					ofstream fout1;
					fout1.open("highscore.txt");
					fout1 << highscore;
					fout1.close();
					return 0;
				}
				if (m == 'r'||m=='R')
				{
					hard_resume_condition(arr, rows, column, highscore);
					return 0;
				}
			}
			else
			{
				int y = 0;
				compare(word, y);
				if (y == 0)
				{
				int lenght = strlen(word);
				word = shring(word, lenght);
				lenght = strlen(word);
				int *storerowsindex = new int[lenght]();
				int *storecolumnindex = new int[lenght]();
				for (int i = 0; i < rows; i++)
				{
					for (int j = 0; j < column; j++)
					{
						if (arr[i][j] == word[x])
						{
							storerowsindex[x] = i;
							storecolumnindex[x] = j;
							x++;
						}
						else
						{
							storerowsindex[x] = {};
							storecolumnindex[x] = {};

							x = 0;
						}
						if (x == lenght)
						{
							cout << 1;
							count++;
							ofstream fout;
							fout.open("highscore.txt");
							highscore = highscore + 10;
							fout << highscore;
							cout << "word you enter is found your score is " << highscore << endl;
							fout.close();
							break;
						}
					}
				}
				if (count == 0)
				{
					x = 0;
					int lenght = strlen(word);

					for (int i = rows - 1; i >= 0; i--)
					{
						for (int j = column - 1; j >= 0; j--)
						{
							if (arr[i][j] == word[x])
							{
								storerowsindex[x] = i;
								storecolumnindex[x] = j;
								x++;
							}
							else
							{
								storerowsindex[x] = {};
								storecolumnindex[x] = {};

								x = 0;
							}
							if (x == lenght)
							{
								cout << "[" << storerowsindex[0] << "]";
								cout << "[" << storecolumnindex[0] << "]";
								cout << " ";
								cout << "[" << storerowsindex[x - 1] << "]";
								cout << "[" << storecolumnindex[x - 1] << "]\n";

								count++;
								ofstream fout;
								fout.open("highscore.txt");
								highscore = highscore + 10;
								fout << highscore;
								cout << "word you enter is found your score is " << highscore << endl;
								fout.close();
								break;
							}
						}
					}
				}
				if (count == 0)
				{
					x = 0;
					for (int i = 0; i < rows; i++)
					{
						for (int j = 0; j < column; j++)
						{
							if (arr[j][i] == word[x])
							{
								storerowsindex[x] = j;
								storecolumnindex[x] = i;
								x++;
							}
							else
							{
								storerowsindex[x] = {};
								storecolumnindex[x] = {};

								x = 0;
							}
							if (x == lenght)
							{
								cout << "[" << storerowsindex[0] << "]";
								cout << "[" << storecolumnindex[0] << "]";
								cout << " ";
								cout << "[" << storerowsindex[x - 1] << "]";
								cout << "[" << storecolumnindex[x - 1] << "]\n";
								count++;
								ofstream fout;
								fout.open("highscore..txt");

								highscore = highscore + 10;
								fout << highscore;
								cout << "word you enter is found your score is " << highscore << endl;
								fout.close();
								break;

							}
						}
					}
				}
				if (count == 0)
				{
					x = 0;
					for (int i = rows - 1; i >= 0; i--)
					{
						for (int j = column - 1; j >= 0; j--)
						{
							if (arr[j][i] == word[x])
							{
								storerowsindex[x] = j;
								storecolumnindex[x] = i;
								x++;
							}
							else
							{
								storerowsindex[x] = {};
								storecolumnindex[x] = {};

								x = 0;
							}
							if (x == lenght)
							{
								cout << "[" << storerowsindex[0] << "]";
								cout << "[" << storecolumnindex[0] << "]";
								cout << " ";
								cout << "[" << storerowsindex[x - 1] << "]";
								cout << "[" << storecolumnindex[x - 1] << "]\n";
								count++;
								ofstream fout;
								fout.open("highscore..txt");

								highscore = highscore + 10;
								fout << highscore;
								cout << "word you enter is found your score is " << highscore << endl;
								fout.close();
								break;

							}
						}
					}
				}
				if (count == 0)
				{
					x = 0;
					for (int i = 0; i < rows; i++)
					{
						if (arr[i][i] == word[x])
						{
							storerowsindex[x] = i;
							storecolumnindex[x] = i;
							x++;
						}
						else
						{
							storerowsindex[x] = {};
							storecolumnindex[x] = {};

							x = 0;
						}
						if (x == lenght)
						{
							cout << "[" << storerowsindex[0] << "]";
							cout << "[" << storecolumnindex[0] << "]";
							cout << " ";
							cout << "[" << storerowsindex[x - 1] << "]";
							cout << "[" << storecolumnindex[x - 1] << "]\n";
							count++;
							ofstream fout;
							fout.open("highscore..txt");

							highscore = highscore + 10;
							fout << highscore;
							cout << "word you enter is found your score is " << highscore << endl;
							fout.close();
							break;

						}

					}
					if (count == 0)
					{
						x = 0;
						for (int i = rows - 1; i >= 0; i--)
						{
							if (arr[i][i] == word[x])
							{
								storerowsindex[x] = i;
								storecolumnindex[x] = i;
								x++;
							}
							else
							{
								storerowsindex[x] = {};
								storecolumnindex[x] = {};

								x = 0;
							}
							if (x == lenght)
							{
								cout << "[" << storerowsindex[0] << "]";
								cout << "[" << storecolumnindex[0] << "]";
								cout << " ";
								cout << "[" << storerowsindex[x - 1] << "]";
								cout << "[" << storecolumnindex[x - 1] << "]\n";
								count++;
								ofstream fout;
								fout.open("highscore..txt");

								highscore = highscore + 10;
								fout << highscore;
								cout << "word you enter is found your score is " << highscore << endl;
								fout.close();
								break;

							}
						}
					}
					if (count == 0)
					{
						x = 0;
						int l = column;
						for (int i = 0; i < rows; i++)
						{
							if (arr[i][l] == word[x])
							{
								storerowsindex[x] = i;
								storecolumnindex[x] = l;
								l--;
								x++;
							}
							else
							{
								storerowsindex[x] = {};
								storecolumnindex[x] = {};

								x = 0;
							}
							if (x == lenght)
							{
								cout << "[" << storerowsindex[0] << "]";
								cout << "[" << storecolumnindex[0] << "]";
								cout << " ";
								cout << "[" << storerowsindex[x - 1] << "]";
								cout << "[" << storecolumnindex[x - 1] << "]\n";
								count++;
								ofstream fout;
								fout.open("highscore..txt");

								highscore = highscore + 10;
								fout << highscore;
								cout << "word you enter is found your score is " << highscore << endl;
								fout.close();
								break;

							}
						}
					}
					if (count == 0)
					{
						x = 0;
						int l = 0;
						for (int i = rows - 1; i >= 0; i--)
						{
							if (arr[i][l] == word[x])
							{
								storerowsindex[x] = i;
								storecolumnindex[x] = l;
								l++;
								x++;
							}
							else
							{
								storerowsindex[x] = {};
								storecolumnindex[x] = {};

								x = 0;
							}
							if (x == lenght)
							{
								cout << "[" << storerowsindex[0] << "]";
								cout << "[" << storecolumnindex[0] << "]";
								cout << " ";
								cout << "[" << storerowsindex[x - 1] << "]";
								cout << "[" << storecolumnindex[x - 1] << "]\n";
								count++;
								ofstream fout;
								fout.open("highscore..txt");

								highscore = highscore + 10;
								fout << highscore;
								cout << "word you enter is found your score is " << highscore << endl;
								fout.close();
								break;

							}
						}
					}
					if (count == 0)
					{
						ofstream fout;
						fout.open("highscore.txt");
						highscore = highscore - 1;
						fout << highscore;
						cout << "word you enter is not found your score is " << highscore << endl;
						fout.close();
					}

				}
				cout << "please enter any word ";
				count = 0;
			}
			else
			{
				cout << "word you enter is not found in dictionary\n";
				cout << "please enter any word";
			}
			word = new char[20]();
		}
		
	}
}
char* shring(char *ptr, int size)
{
	char *temp = {};
	temp = new char[size + 1]();
	copy(ptr, temp, size);
	if (ptr != NULL)
		delete[]ptr;
	ptr = NULL;
	return temp;
}
void copy(char *ptr, char *temp, int size)
{

	for (int i = 0; i <size; i++)
	{

		temp[i] = ptr[i];
	}
}
void compare(char arr[], int &y)
{
	char temp[50] = {};
	bool flag = 0;
	ifstream fin;
	fin.open("dictionary.txt");
	while (!fin.eof())
	{
		flag = 0;
		fin.getline(temp, 100);
		y = strcmp(temp, arr);
		if (y == 0)
		{
			break;
		}

	}
}
//Write and run a program that plays the game of “Rock, paper, scissors.” In this game, two players say (an alphabet representing) either “rock,” “paper,” or “scissors.” The winner is the one whose choice dominates the other. The rules are: paper dominates (wraps) rock, rock dominates (breaks) scissors, and scissors dominate (cut) paper. You can  use ‘r’=rock , ‘p’=paper,‘s’ =scissor
#include<iostream>
using namespace std;

int main()
{
	char player1, player2;
	cout << "Enter 'r' for Rock , 's' for scissors and 'p' for Paper." << endl;
	cout << "Player 1 enter your choice:";
	cin >> player1;
	cout << "Player 2 enter your choice:";
	cin >> player2;
	if (player1=='p' && player2=='r')
	{
		cout<<"Player 1 wins" << endl;
	}
	else if (player1 == 'p' && player2 == 's')
	{
		cout << "Player 2 wins" << endl;
	}
	else if (player1 == 'r' && player2 == 's')
	{
		cout << "Player 1 wins" << endl;
	}
	else if (player1 == 'r' && player2 == 'p')
	{
		cout << "Player 2 wins" << endl;
	}
	else if (player1 == 's' && player2 == 'p')
	{
		cout << "Player 1 wins" << endl;
	}
	else if (player1 == 's' && player2 == 'r')
	{
		cout << "Player 2 wins" << endl;
	}
	else if (player1 == 's' && player2 == 's')
	{
		cout << "draw" << endl;
	}
	else if (player1 == 'r' && player2 == 'r')
	{
		cout << "draw" << endl;
	}
	else if (player1 == 'p' && player2 == 'p')
	{
		cout << "draw" << endl;
	}
	else
	{
		cout << "Invalid" << endl;
	}
	return 0;
}
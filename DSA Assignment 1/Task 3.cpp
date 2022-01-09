#include<iostream>
#include<stack>
using namespace std;

class index {
public:
	int r, c;//rows and cols
	int dir;//direction
	index(int x, int y)
	{
		r = x;
		c = y;
		dir = 0;
	}
};
void solvemaze(int maze[4][4])
{
	int dr=4, dc=4;//destination row and col
	bool visited[4][4];
	memset(visited, true, sizeof(visited));//intiializing whole bool array to true means its not visited
	int sol[4][4];//the default initialization of stack is 4 so tbis is essentialy 4x4
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			sol[i][j] = 0;
		}
	}
	int i = 0, j = 0;
	index temp(i, j);
	stack<index> s;
	s.push(temp);
	while (!s.empty())
	{
		temp = s.top();
		int d = temp.dir;
		i = temp.r, j = temp.c;
		temp.dir++;
		s.pop();
		s.push(temp);

		if (i == dr && j == dc)
		{
			sol[temp.r][temp.c] = 1;

		}
		if (d==0)
		{
			if (i-1>=0 && maze[i-1][j] && visited[i-1][j])
			{
				index temp1(i - 1, j);
				visited[i - 1][j] = false;
				s.push(temp1);
				sol[i ][j] = 1;
			}
		}
		else if (d==1)
		{
			if (j-1>=0 && maze[i][j-1] && visited[i][j - 1])
			{

				index temp1(i, j - 1);
				visited[i][j - 1] = false;
				s.push(temp1);
				sol[i][j ] = 1;
			}

		}
		else if (d==2)
		{
			if (i+1<4 && maze[i+1][j] && visited[i+1][j])
			{

				index temp1(i + 1, j);
				visited[i + 1][j] = false;
				s.push(temp1);
				sol[i ][j] = 1;
			}
		}
		else if (d==3)
		{
			if (j+1<4 && maze[i][j+1] && visited[i][j + 1])
			{

				index temp1(i, j + 1);
				visited[i][j + 1] = false;
				s.push(temp1);
				sol[i][j ] = 1;
			}
		}
		else
		{
			visited[temp.r][temp.c] = true;
			s.pop();
		}
	}
	sol[3][3]=1;
	cout << "Solution is: " << endl;
	for (int k = 0; k < 4; k++)
	{
		for (int l = 0; l < 4; l++)
		{
			cout << sol[k][l] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int maze[4][4] = {
		{1,0,0,0},
		{1,1,0,1},
		{0,1,0,0},
		{0,1,1,1}
	};
	cout << "Maze is: " << endl;
	for (int k = 0; k < 4; k++)
	{
		for (int l = 0; l < 4; l++)
		{
			cout << maze[k][l] << " ";
		}
		cout << endl;
	}
	cout << endl;
	solvemaze(maze);
	return 0;
}
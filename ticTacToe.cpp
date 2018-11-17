#include <iostream>
#include <vector>
#include <string.h>
using namespace std;


void userInput(int&, int&);
void board(char *g[3][3]);


int main()
{
	int var1, var2, var3;
	char boardArray[3][3] = {' '};

	cout << "board goes here**" << endl;
	board(boardArray[3][3]);

	/*//make the board
	for (int i=0; i < 3; i++)
	{
		for (int j=0; j <= 3 ; j++)
		 {
		 	if(j == 3)
		 	{
		 		cout << endl;
		 	}
		 	else if (i < 2 && j == 2)
		 	{
		 		cout << board[i][j]; 
		 	}
		 	else if (i < 2 && j < 2)
		 	{
		 		cout << board[i][j] << "_|_";
		 	}
		 	else if (i == 2 && j < 2)
		 	{
		 		cout << board[i][j] << " | ";
		 	}
		 } 
	}*/



	cout << endl;
	return 0;
}


void userInput(int &a, int &b)
{
	cout << "Enter in a row(0-2): " << endl;
	cin >> a;
	cout << "Enter in a column(0-2): " << endl;
	cin >> b;
}

void board(char g[3][3])
{
	for (int i=0; i < 3; i++)
	{
		for (int j=0; j <= 3 ; j++)
		 {
		 	if(j == 3)
		 	{
		 		cout << endl;
		 	}
		 	else if (i < 2 && j == 2)
		 	{
		 		cout << board[i][j]; 
		 	}
		 	else if (i < 2 && j < 2)
		 	{
		 		cout << board[i][j] << "_|_";
		 	}
		 	else if (i == 2 && j < 2)
		 	{
		 		cout << board[i][j] << " | ";
		 	}
		 } 
	}
}









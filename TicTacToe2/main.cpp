#include<iostream>
#include"TicUtils.h"
using namespace std;

int winPicker;

int checkWinner();

/* Table display */
char table[3][3] =
{
	{ '0', '1', '2' },
	{ '3', '4', '5' },
	{ '6', '7', '8' },
};

void printTable()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "  " << table[i][j] << "";
		}
		cout << "\n\n";
	}
}



int main()
{
	/* Intro */
	cout << "***********\n";
	cout << "Tic-Tac-Toe\n";
	cout << "***********\n";

	bool turn1 = true;

	int turnAmount = 0;


	while (true)
	{
		printTable();

		/* Player input */
		char player1 = 'X';
		char player2 = 'O';
		int playerChoice = -1;

		turnAmount++;

		if (turn1 == true)
		{
			cout << "Choose a number corresponding with the tile you want!\n";
			cin >> playerChoice;

			if (playerChoice == 0)
			{
				table[0][0] = player1;
			}
			if (playerChoice == 1)
			{
				table[0][1] = player1;
			}
			if (playerChoice == 2)
			{
				table[0][2] = player1;
			}
			if (playerChoice == 3)
			{
				table[1][0] = player1;
			}
			if (playerChoice == 4)
			{
				table[1][1] = player1;
			}
			if (playerChoice == 5)
			{
				table[1][2] = player1;
			}
			if (playerChoice == 6)
			{
				table[2][0] = player1;
			}
			if (playerChoice == 7)
			{
				table[2][1] = player1;
			}
			if (playerChoice == 8)
			{
				table[2][2] = player1;
			}

			turn1 = false;
		}
		else if (turn1 == false)
		{
			cout << "Choose a number corresponding with the tile you want!\n";
			cin >> playerChoice;

			if (playerChoice == 0) // Not sure if this will work 
			{
				if (table[0][0] == 'X') //
				{
					std::cout << "Try again" << std::endl; //
					turn1 == false; //
				}
				else
				{
					table[0][0] = player2;
				}
			}
			if (playerChoice == 1)
			{
				table[0][1] = player2;
			}
			if (playerChoice == 2)
			{
				table[0][2] = player2;
			}
			if (playerChoice == 3)
			{
				table[1][0] = player2;
			}
			if (playerChoice == 4)
			{
				table[1][1] = player2;
			}
			if (playerChoice == 5)
			{
				table[1][2] = player2;
			}
			if (playerChoice == 6)
			{
				table[2][0] = player2;
			}
			if (playerChoice == 7)
			{
				table[2][1] = player2;
			}
			if (playerChoice == 8)
			{
				table[2][2] = player2;
			}
			turn1 = true;
		}
		if (turnAmount <= 8)
		{
			winPicker = checkWinner();

			if (winPicker == 1)
			{
				cout << "\nPlayer " << player1 << " Wins!\n\n";
			}
			else if (winPicker == 0)
			{
				cout << "\nPlayer " << player2 << " Wins!\n\n";
			}
		}
		if (turnAmount == 9)
		{
			winPicker = checkWinner();

			if (winPicker == 1)
			{
				cout << "\nPlayer " << player1 << " Wins!\n\n";
			}
			else if (winPicker == 0)
			{
				cout << "\nPlayer " << player2 << " Wins!\n\n";
			}
			else
			{
				cout << "\nDraw!\n\n";
			}
		}	
	}
	
	return 0;
	

}

//-1 is no end yet
// 0 is player 2's win
// 1 is player 1's win
// 2 is draw

int checkWinner()
{
	int win = -1;

	if(table[0][0] == 'X' && table[0][1] == 'X' && table[0][2] == 'X')
	{
		win = 1;
	}

	if(table[1][0] == 'X' && table[1][1] == 'X' && table[1][2] == 'X')
	{
		win = 1;
	}
	if(table[2][0] == 'X' && table[2][1] == 'X' && table[2][2] == 'X')
	{
		win = 1;
	}

	if(table[0][0] == 'X' && table[1][0] == 'X' && table[2][0] == 'X')
	{
		win = 1;
	}

	if(table[0][1] == 'X' && table[1][1] == 'X' && table[2][1] == 'X')
	{
		win = 1;
	}

	if(table[0][2] == 'X' && table[0][2] == 'X' && table[2][2] == 'X')
	{
		win = 1;
	}	

	if(table[0][0] == 'X' && table[1][1] == 'X' && table[2][2] == 'X')
	{
		win = 1;
	}

	if(table[2][0] == 'X' && table[1][1] == 'X' && table[0][2] == 'X')
	{
		win = 1;
	}

	/* ------------------------------------------------------------- */
	/* ------------------------------------------------------------- */

	if (table[0][0] == 'O' && table[0][1] == 'O' && table[0][2] == 'O')
	{
		win = 0;
	}

	if (table[1][0] == 'O' && table[1][1] == 'O' && table[1][2] == 'O')
	{
		win = 0;
	}
	if (table[2][0] == 'O' && table[2][1] == 'O' && table[2][2] == 'O')
	{
		win = 0;
	}

	if (table[0][0] == 'O' && table[1][0] == 'O' && table[2][0] == 'O')
	{
		win = 0;
	}

	if (table[0][1] == 'O' && table[1][1] == 'O' && table[2][1] == 'O')
	{
		win = 0;
	}

	if (table[0][2] == 'O' && table[0][2] == 'O' && table[2][2] == 'O')
	{
		win = 0;
	}

	if (table[0][0] == 'O' && table[1][1] == 'O' && table[2][2] == 'O')
	{
		win = 0;
	}

	if (table[2][0] == 'O' && table[1][1] == 'O' && table[0][2] == 'O')
	{
		win = 0;
	}
	

	return win;
}

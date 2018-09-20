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
	int playerChoice = -1;
	bool inPlay = true;
	bool player = true; // True = player1 'X' || False = player2 'O'
	char mark = 'X';

	cout << "***********\n";
	cout << "Tic-Tac-Toe\n";
	cout << "***********\n";
	while (inPlay)
	{
		if (player)
		{
			mark = 'X';
		}
		else
		{
			mark = 'O';
		}

		printTable();
		bool isValid = false;
		cell tmp;
		while (!isValid)
		{
			cout << "Player " << mark << " choose a number corresponding with the tile you want!\n";
			cout << "\n";
			cin >> playerChoice;
			if (!(playerChoice >= 0 && playerChoice <= 8))
			{
				isValid = false;
				cout << "That is out of range!" << endl;;
			}
			else
			{
				tmp = translateCell(playerChoice);
				if (table[tmp.y][tmp.x] == 'X' || table[tmp.y][tmp.x] == 'O')
				{
					isValid = false;
					cout << "That place is already taken!" << endl;
				}
				else
				{
					isValid = true;
				}
			}
		}
		// Now we can place the mark
		table[tmp.y][tmp.x] = mark;
		//checkWinner();
		player = !player;
	}
	return 0;
}

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

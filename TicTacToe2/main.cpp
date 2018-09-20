#include<iostream>
#include"TicUtils.h"
using namespace std;

int displayBanner(bool winner, char myMark);
bool checkWinner(char myMark);

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
		inPlay = checkWinner(mark);
		player = !player;
	}
	return 0;
}

bool checkWinner(char myMark)
{
	bool winner = false;
	for (int y = 0; y < 3 && !winner; y++)
	{
		winner = true;
		for (int x = 0; x < 3 && winner; x++)
		{
			if (table[y][x] != myMark)
			{
				winner = false;
			}
		}
	}
	if (winner)
	{
		displayBanner(winner, myMark);
		return false;
	}

	for (int x = 0; x < 3 && !winner; x++)
	{
		winner = true;
		for (int y = 0; y < 3 && winner; y++)
		{
			if (table[y][x] != myMark)
			{
				winner = false;
			}
		}
	}
	if(winner)
	{
		displayBanner(winner, myMark);
		return false;
	}

	winner = true;
	for (int IDX = 0; IDX < 3; IDX++)
	{
		
		if (table[IDX][IDX] != myMark)
		{
			winner = false;
		}
	}

	winner = true;
	for (int IDX = 0; IDX < 3; IDX++)
	{
		if (table[2 - IDX][IDX] != myMark)
		{
			winner = false;
		}
	}
	if (winner)
	{
		displayBanner(winner, myMark);
		return false;
	}

	bool draw = true;
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (table[y][x] != 'X' && table[y][x] != 'O')
			{
				draw = false;
			}
		}
	}
	if (draw)
	{
		displayBanner(!draw, myMark);
		return false;
	}
	return true;
}

int displayBanner(bool winner, char myMark)
{
	if (winner == true)
	{
		cout << "Congrats player " << myMark << " has won!" << endl;
		system("pause");
		return 0;
	}
	else
	{
		cout << "The game was a draw!" << endl;
		system("pause");
		return 0;
	}
}


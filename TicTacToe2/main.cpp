#include<iostream>
#include"TicUtils.h"
using namespace std;

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

	while (true)
	{
		printTable();

		/* Player input */
		char player1 = 'X';
		char player2 = 'O';
		int playerChoice = -1;


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

			if (playerChoice == 0)
			{
				table[0][0] = player2;
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
		
	}
	
	return 0;
	

}
	int checkWinner()
	{
		if(table[0][0] == 'X' && table[0][1] == 'X' && table[0][2] == 'X')
		{
			std::cout << "Player X is the Winner!" << std::endl;
		}

		if(table[1][0] == 'X' && table[1][1] == 'X' && table[1][2] == 'X')
		{
			std::cout << "Player X is the Winner!" << std::endl;
		}
		if(table[2][0] == 'X' && table[2][1] == 'X' && table[2][2] == 'X')
		{
			std::cout << "Player X is the Winner!" << std::endl;
		}

		if(table[0][0] == 'X' && table[1][0] == 'X' && table[2][0] == 'X')
		{
			std::cout << "Player X is the Winner!" << std::endl;
		}

		if(table[0][1] == 'X' && table[1][1] == 'X' && table[2][1] == 'X')
		{
			std::cout << "Player X is the Winner!" << std::endl;
		}

		if(table[0][2] == 'X' && table[0][2] == 'X' && table[2][2] == 'X')
		{
			std::cout << "Player X is the Winner!" << std::endl;
		}	

		if(table[0][0] == 'X' && table[1][1] == 'X' && table[2][2] == 'X')
		{
			std::cout << "Player X is the Winner!" << std::endl;
		}

		if(table[2][0] == 'X' && table[1][1] == 'X' && table[0][2] == 'X')
		{
			std::cout << "Player X is the Winner!" << std::endl;
		}

		/* ------------------------------------------------------------- */
		/* ------------------------------------------------------------- */

		if (table[0][0] == 'O' && table[0][1] == 'O' && table[0][2] == 'O')
		{
			std::cout << "Player O is the Winner!" << std::endl;
		}

		if (table[1][0] == 'O' && table[1][1] == 'O' && table[1][2] == 'O')
		{
			std::cout << "Player O is the Winner!" << std::endl;
		}
		if (table[2][0] == 'O' && table[2][1] == 'O' && table[2][2] == 'O')
		{
			std::cout << "Player O is the Winner!" << std::endl;
		}

		if (table[0][0] == 'O' && table[1][0] == 'O' && table[2][0] == 'O')
		{
			std::cout << "Player O is the Winner!" << std::endl;
		}

		if (table[0][1] == 'O' && table[1][1] == 'O' && table[2][1] == 'O')
		{
			std::cout << "Player O is the Winner!" << std::endl;
		}

		if (table[0][2] == 'O' && table[0][2] == 'O' && table[2][2] == 'O')
		{
			std::cout << "Player O is the Winner!" << std::endl;
		}

		if (table[0][0] == 'O' && table[1][1] == 'O' && table[2][2] == 'O')
		{
			std::cout << "Player O is the Winner!" << std::endl;
		}

		if (table[2][0] == 'O' && table[1][1] == 'O' && table[0][2] == 'O')
		{
			std::cout << "Player O is the Winner!" << std::endl;
		}
	}

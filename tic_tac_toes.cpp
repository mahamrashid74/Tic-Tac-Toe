#include <iostream>
using namespace std;

char sqr[10] = { '0','1','2','3','4','5','6','7','8','9' };

int win();
void board();

int main()
{
	int player = 1, i, choice;

	char play;
	do
	{
		board();
		player = (player % 2) ? 1 : 2;

		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;

		play = (player == 1) ? 'X' : '*';

		if (choice == 1 && sqr[1] == '1')

			sqr[1] = play
		else if (choice == 2 && sqr[2] == '2')

			sqr[2] = play;
		else if (choice == 3 && sqr[3] == '3')

			sqr[3] = play;
		else if (choice == 4 && sqr[4] == '4')

			sqr[4] = play;
		else if (choice == 5 && sqr[5] == '5')

			sqr[5] = play;
		else if (choice == 6 && sqr[6] == '6')

			sqr[6] = play;
		else if (choice == 7 && sqr[7] == '7')

			sqr[7] = play;
		else if (choice == 8 && sqr[8] == '8')

			sqr[8] = play;
		else if (choice == 9 && sqr[9] == '9')

			sqr[9] = play;
		else
		{
			cout << "Invalid move ";

			player--;
			cin.ignore();
			cin.get();
		}
		i = win();

		player++;
	} while (i == -1);
	board();
	if (i == 1)

		cout << "==>\aPlayer " << --player << " win ";
	else
		cout << "==>\aGame draw";

	cin.ignore();
	cin.get();
	return 0;
}

/*********************************************

	FUNCTION TO RETURN GAME STATUS
	1 FOR GAME IS OVER WITH RESULT
	-1 FOR GAME IS IN PROGRESS
	O GAME IS OVER AND NO RESULT
**********************************************/

int win()
{
	if (sqr[1] == sqr[2] && sqr[2] == sqr[3])

		return 1;
	else if (sqr[4] == sqr[5] && sqr[5] == sqr[6])

		return 1;
	else if (sqr[7] == sqr[8] && sqr[8] == sqr[9])

		return 1;
	else if (sqr[1] == sqr[4] && sqr[4] == sqr[7])

		return 1;
	else if (sqr[2] == sqr[5] && sqr[5] == sqr[8])

		return 1;
	else if (sqr[3] == sqr[6] && sqr[6] == sqr[9])

		return 1;
	else if (sqr[1] == sqr[5] && sqr[5] == sqr[9])

		return 1;
	else if (sqr[3] == sqr[5] && sqr[5] == sqr[7])

		return 1;
	else if (sqr[1] != '1' && sqr[2] != '2' && sqr[3] != '3'
		&& sqr[4] != '4' && sqr[5] != '5' && sqr[6] != '6'
		&& sqr[7] != '7' && sqr[8] != '8' && sqr[9] != '9')

		return 0;
	else
		return -1;
}


/*******************************************************************
	 FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS play
********************************************************************/


void board()
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << sqr[1] << "  |  " << sqr[2] << "  |  " << sqr[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << sqr[4] << "  |  " << sqr[5] << "  |  " << sqr[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << sqr[7] << "  |  " << sqr[8] << "  |  " << sqr[9] << endl;

	cout << "     |     |     " << endl << endl;
}

#include <iostream>
#include "2048_helper.h"
using namespace std;

int main()
{
	int size = 5;
	int board[5][5] = {
		{0, 2, 0, 4, 0},
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0},
	};
	//while getch == x loop for up down left right

	cout << "Initial Board : [5x5] :" << endl;
	print_board(board);

	char choice = 'u';	//initialized

	int score = 0; //Starts the score at zero.
	int moves = 0; //Counts successful moves.
	while (choice != 'e')
	{

		cout << "Please enter choice:{u,d,l,r,e} for UP, DOWN, LEFT, RIGHT, Exit: " << endl;
		cout << "Choice: ";
		cin >> choice;

		if (choice == 'u')
			move_up(board, size);
		else if (choice == 'd')
			move_down(board, size);
		else if (choice == 'l')
			{
				bool changed = move_left(board, score, size); //Checks whether the tiles have changed.
				if(changed)
				{
					moves++; //Counts this successful move.
					insert_random(board, size); //Adds one tile after a successful move.
				}
			}
		else if (choice == 'r')
			move_right(board, size);

		print_board(board);

		cout<<"Score: "<<score<<endl; //Prints the total score.
		cout<<"Moves: "<<moves<<endl; //Prints out the number of successful moves.

	}


	return 0;
}
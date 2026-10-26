#include <iostream>
#include "2048_helper.h"
using namespace std;

int main()
{
	int size = 5;
	int board[5][5] = {
		{4, 4, 8, 8, 0},
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
			move_left(board, score, size);
		else if (choice == 'r')
			move_right(board, size);

		//insert_random(board, size);
		print_board(board);

		cout<<"Score: "<<score<<endl; //Prints the total score.

	}


	return 0;
}
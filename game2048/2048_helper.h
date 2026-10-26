#include <iostream>
#include <random>
#include <iomanip>
using namespace std;

void move_left(int board[][5], int &score, int numrows = 5)
{
	for(int r = 0; r < numrows; r++) //Cycles through each row.
	{
		int nextCol = 0; //Starts placing tiles in column 0.
		for( int c = 0; c < 5; c++) //Checks each column left to right.
		{
			if (board[r][c] != 0) //Skips empty spaces
			{
				board[r][nextCol] = board[r][c]; //Places the tile in the next spot.
				if(nextCol != c) //Checks whether the tile moved.
				{
				board[r][c] = 0; //Clears the old spot if the tile moved.
				}
				nextCol++; //Advances to the next spot.
			}
		}

		for(int c = 0; c < 4; c++) //Compare tiles beside it
		{
			if(board[r][c] != 0 && board[r][c] == board[r][c+1]) //Merges matching tiles that are not zero.
			{
				board[r][c] *= 2; //Doubles the left tile.
				score += board[r][c];
				board[r][c+1] = 0; //Clears the right tile
				c++; //Skips the pair so it doesnt merge again.
			}
		}

		nextCol = 0; //Resets to column 0.
		for(int c = 0; c < 5; c++) //Checks each column left to right.
		{
			if(board[r][c] != 0) //Skips empty spaces.
			{
				board[r][nextCol] = board[r][c]; //Places the tile in the next spot.
				if(nextCol != c) //Checks whether the tile moved.
				{
					board[r][c] = 0; //Clears the old spot if the tile moved.
				}
				nextCol++; //Advances to the next spot.
			}
		}
	}
}

void move_right(int board[][5], int numrows = 5)
{
	//CODE HERE
}

void move_up(int board[][5], int numrows = 5)
{
	//CODE HERE
}

void move_down(int board[][5], int numrows = 5)
{
	//CODE HERE
}


void print_board(int board[][5], int numrows = 5)
{
	cout << endl << "\t-----------------------------------------" << endl;

	for (int r = 0; r < numrows; r++)
	{
		for (int c = 0; c < 5; c++)
		{
			if(board[r][c] > 0)
				cout << "\t|" << right << setw(6) << setfill(' ') << board[r][c];
			else
				cout << "\t|" << right << setw(6) << setfill(' ') << " ";

			//cout << board[r][c] << "\t|\t";
		}
		cout << "\t|" << endl;
		cout << "\t-----------------------------------------" << endl;
	}

	cout << "\t" << endl << endl;
}


void insert_random(int board[][5], int numrows = 5)
{
	int r, c;
	//count empty
	int empty_count = 0;
	for (int r = 0; r < numrows; r++)
	{
		for (int c = 0; c < 5; c++)
		{
			if (board[r][c] == 0)
				empty_count++;
		}
	}

	if (empty_count > 0)
	{
		while (true)
		{
			//generate random location r, c
			r = rand() % numrows;
			c = rand() % numrows;
			//check if empty
			if (board[r][c] == 0)
			{
				//add number randomly {2,4}
				board[r][c] = 2 * (1 + (rand() % 2));
				break;
			}
		}

	}
}


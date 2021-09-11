#ifndef GameBoard_H
#define GameBoard_H
#include<iostream>
using namespace std;

class GameBoard
{
private:
public:
	//constructors
	//mutators
	//accessors
	GameBoard()//default constructor
	{

		for (int x = 0; x <= 8; x++)
		{
			grid[x] = ' ';
		}
	}

	void GameBoardDisplay();//accessor function to display the current game board

	
							// accessor function to check if the current board has a winner. (if winner, state and end game)
	//function to track the status of the board. possibly in an array.
	//function that prompts players to make a move

};
#endif
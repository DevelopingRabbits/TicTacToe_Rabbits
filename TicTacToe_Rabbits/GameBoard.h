#ifndef GameBoard_H
#define GameBoard_H
#include<iostream>
using namespace std;

const int GridSize = 9;

class GameBoard
{
private:
	char grid[8];
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

	

};
#endif
#include "GameBoard.h"
#include <iostream>

GameBoard::GameBoard()//default constructor
{
	for (int x=0;x<9;x++)
	{
		gameBoardArray[x] = ' ';
	}
};

void GameBoard::GameBoardDisplay() 
{
	std::cout << "   ";
	for (int x = 0; x < 3; x++)//display the first row of the tictactoe gameboard
	{
		std::cout << gameBoardArray[x];
		if (x < 2)
		{
			cout << "|  ";
		}

	}
	//formatting for the board to display correctly in the console
	std::cout << std::endl;
	std::cout << "  ";
	std::cout << "----------" << std::endl;
	std::cout << "   ";
	for (int x = 3; x < 6; x++)//display the second row of the tictactoe gameboard
	{
		std::cout << gameBoardArray[x];
		if (x < 5)
		{
			cout << "|  ";
		}
	}
	//formatting for the board to display correctly in the console
	std::cout << std::endl;
	std::cout << "  ";
	std::cout << "----------" << std::endl;
	std::cout << "   ";
	for (int x = 6; x < 9; x++)//display the third row of the tictactoe gameboard
	{
		std::cout << gameBoardArray[x];
		if (x < 8)
		{
			cout << "|  ";
		}
	}

	std::cout << std::endl;
};
void GameBoard::GameBoardUpdate() {};
void GameBoard::GameBoardReset() {};
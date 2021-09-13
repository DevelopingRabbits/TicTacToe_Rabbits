#include "GameBoard.h"
#include <iostream>

GameBoard::GameBoard()//default constructor
{
	for (int x=0;x<9;x++)//initialized an array of size 8 to store values for the 9 spaces on the tictactoe game board
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
		if (x < 2)//print out the first two bars in the tictactoe game board
		{
			cout << " | ";
		}

	}
	//formatting for the board to display correctly in the console
	std::cout << std::endl;
	std::cout << "  ";
	std::cout << "------------" << std::endl;
	std::cout << "   ";
	for (int x = 3; x < 6; x++)//display the second row of the tictactoe gameboard
	{
		std::cout << gameBoardArray[x];
		if (x < 5)//print out the second two bars in the tictactoe game board
		{
			cout << " | ";
		}
	}
	//formatting for the board to display correctly in the console
	std::cout << std::endl;
	std::cout << "  ";
	std::cout << "------------" << std::endl;
	std::cout << "   ";
	for (int x = 6; x < 9; x++)//display the third row of the tictactoe gameboard
	{
		std::cout << gameBoardArray[x];
		if (x < 8)
		{
			cout << " | ";//print out the third two bars in the tictactoe game board
		}
	}

	std::cout << std::endl;
	
};
void GameBoard::GameBoardUpdate(char input,int space) {

	gameBoardArray[space] = input;//set the selected grid space to the current players marker

};
void GameBoard::GameBoardReset() 
{
	for (int x = 0; x < 9; x++)//reset the array to blank spaces
	{
		gameBoardArray[x] = ' ';
	}
	
};

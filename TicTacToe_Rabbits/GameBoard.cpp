#include "GameBoard.h"
#include <iostream>

//defining functions created in the .h file

void GameBoard::GameBoardDisplay()//displays the gameboard in its current state
{
	std::cout << "   ";
	for (int x = 0; x < 3; x++)//display the first row of values from the grid array
	{
		std::cout << grid[x];
		if (x < 2)
		{
			cout << "|  ";
		}

	}
	//formatting for the proper output in console
	std::cout << std::endl;
	std::cout << "  ";
	std::cout << "----------"<<std::endl;
	std::cout << "   ";

	for (int x = 3; x < 6; x++)//display the second row of values from the grid array
	{
		std::cout << grid[x];
		if (x < 5)
		{
			cout << "|  ";
		}
	}
	//formatting for the proper output in console
	std::cout << std::endl;
	std::cout << "  ";
	std::cout << "----------" << std::endl;
	std::cout << "   ";

	for (int x = 6; x < 9; x++)//display the third row of the values form the grid array
	{
		std::cout << grid[x];
		if (x < 8)
		{
			cout << "|  ";
		}
	}
	
	std::cout << std::endl;

	
}

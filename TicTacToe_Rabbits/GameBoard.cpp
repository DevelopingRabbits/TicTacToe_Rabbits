#include "GameBoard.h"
#include <iostream>

//defining functions created in the .h file

void GameBoard::GameBoardDisplay()
{
	std::cout << "   ";
	for (int x = 0; x < 3; x++)
	{
		std::cout << grid[x];
		if (x < 2)
		{
			cout << "|  ";
		}

	}
	std::cout << std::endl;
	std::cout << "  ";
	std::cout << "----------"<<std::endl;
	std::cout << "   ";
	for (int x = 3; x < 6; x++)
	{
		std::cout << grid[x];
		if (x < 5)
		{
			cout << "|  ";
		}
	}
	std::cout << std::endl;
	std::cout << "  ";
	std::cout << "----------" << std::endl;
	std::cout << "   ";
	for (int x = 6; x < 9; x++)
	{
		std::cout << grid[x];
		if (x < 8)
		{
			cout << "|  ";
		}
	}
	
	std::cout << std::endl;

	
}

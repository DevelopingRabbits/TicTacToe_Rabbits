#include "GameBoard.h"
#include <iostream>

int main()
{
	GameBoard t;
	std::cout << "Welcome to the game of TicTacToe.\n\n";
	std::cout << "This is a two player game. Player 1 is 'X' and Player 2 is 'O'\n";
	//explain how turns will be made (example: spaces on the grid are represnted by numbers 1 to 9)

	t.GameBoardDisplay();

}
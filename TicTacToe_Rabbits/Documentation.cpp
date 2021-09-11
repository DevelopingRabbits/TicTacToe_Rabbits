#include "Documentation.h"
#include <iostream>

// Defining functions created in the .h file

void Documentation::MainMenu() {
};

void Documentation::Welcome() {
	cout << "Welcome to the game of TicTacToe.\n\n";
};

void Documentation::Help() {
	std::cout << "This is a two player game. Player 1 is 'X' and Player 2 is 'O'\n";
	//explain how turns will be made (example: spaces on the grid are represnted by numbers 1 to 9)
};

void Documentation::Quit() {
};
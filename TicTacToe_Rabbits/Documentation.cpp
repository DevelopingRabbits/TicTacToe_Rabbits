#include "Documentation.h"
#include "GameFunctions.h"
#include <iostream>

bool Documentation::MainMenu() {
	// int choice is declared in Header File.

	cout << "************** TIC TAC TOE **************\n" << endl;
	cout << "**************  Main Menu **************\n\n" << endl;

	/* Do While Loop that displays options to the user.
	 The code uses a switch statement that allows to user to either
	1. Start a game
	2. Display Instructions
	3. Quit and terminate the program
	*/
	do 
	{
		cout << endl   
			<< " 1 - Start the game.\n"
			<< " 2 - Instructions.\n"
			<< " 3 - Quit.\n"
			<< " Enter your choice and press return: "; // Display Options to user
		cin >> choice; // Collect User Input and compare it to the switch statement.

		switch (choice)
		{
		case 1:
			//code to start the game
			return true;
			break;
		case 2:
			Help(); // Display the instructions.
			break;
		case 3:
			cout << "Thanks for playing!\n";
			Quit(); // Terminate the program
			break;

		default:
			cout << "Not a Valid Choice. \n"  // Input Validation
				<< "Choose again.\n";         // Error Message
			break;
		}
	} while (choice != 3); //Restart the loop and display the menu to the user.
};	

/// <summary>
/// Welcome Function
/// </summary>

void Documentation::Welcome() {
	cout << "Welcome to the game of TicTacToe.\n";
	cout << "This game was developed by Developing Rabbits.\n\n";
};

/// <summary>
/// Help Function
/// </summary>

void Documentation::Help() {
	//explain how turns will be made (example: spaces on the grid are represnted by numbers 1 to 9)
	std::cout << "\n************************************************** INSTRUCTIONS START **************************************************\n";
	std::cout << "This is a two player game. Player 1 is 'X' and Player 2 is 'O'\n";
	std::cout << "In order to select a spot on the board, input a number 1-9 to correspond to the spaces on the board: " << std::endl;
	
	int gameBoardArrayHelp[9];
	
	for (int x = 0; x < 9; x++)//reset the array to blank spaces
	{
		gameBoardArrayHelp[x] = x+1;
	}

	cout << "\n\n";
	std::cout << "   ";
	for (int x = 0; x < 3; x++)//display the first row of the tictactoe gameboard
	{
		std::cout << gameBoardArrayHelp[x];
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
		std::cout << gameBoardArrayHelp[x];
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
		std::cout << gameBoardArrayHelp[x];
		if (x < 8)
		{
			cout << " | ";//print out the third two bars in the tictactoe game board
		}
	}
	std::cout << "\n************************************************** INSTRUCTIONS END **************************************************\n";
	std::cout << std::endl;
};

/// <summary>
/// Quit Function
/// </summary>
int Documentation::Quit() {
	return 0;
};
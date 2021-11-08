#include "Documentation.h"
#include "GameFunctions.h"
#include <iostream>

bool Documentation::MainMenu() {
	// int choice is declared in Header File.

	cout << "************** LIGHTS OUT **************\n" << endl;
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
			<< " 3 - Quit.\n";
			
		
		bool valid = false;
	
		do {
			cout << " Enter your choice and press return: "; // Display Options to user
			cin >> choice; // Collect User Input and compare it to the switch statement.

			if (cin.good())
			{
				//the input is a valid integer, break out of the loop.
				valid = true;
			}
			else
			{
				cin.clear(); //reset the buffer

				cin.ignore(numeric_limits<streamsize>::max(), '\n');//empty the buffer
				cout << "Invalid Input..." << endl;
			}
		} while (!valid);

		

		switch (choice)
		{
		case 1:
			//code to start the game
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			return true;
			break;
		case 2:
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			Help(); // Display the instructions.
			break;
		case 3:
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Thanks for playing!\n";
			Quit(); // Terminate the program
			break;

		default:
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
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
	cout << "Welcome to the game of Lights Out.\n";
	cout << "This game was developed by Developing Rabbits.\n\n";
};

/// <summary>
/// Help Function
/// </summary>

void Documentation::Help() {
	//explain how turns will be made (example: spaces on the grid are represnted by numbers 1 to 9)
	std::cout << "\n************************************************** INSTRUCTIONS START **************************************************\n";
	std::cout << "This is a simple game where the objective is to fill the board.\n";
	std::cout << "Select a button and it will flip the lights on that area and all that neighbor it. " << std::endl;
	
	int gameBoardArrayHelp[9];
	
	for (int x = 0; x < 9; x++)//reset the array to blank spaces
	{
		gameBoardArrayHelp[x] = x+1;
	}

	cout << "\n\n";
	std::cout << "   ";
	for (int x = 0; x < 3; x++)//display the first row of the gameboard
	{
		std::cout << gameBoardArrayHelp[x];
		if (x < 2)//print out the first two bars in the game board
		{
			cout << " | ";
		}

	}
	//formatting for the board to display correctly in the console
	std::cout << std::endl;
	std::cout << "  ";
	std::cout << "------------" << std::endl;
	std::cout << "   ";
	for (int x = 3; x < 6; x++)//display the second row of the gameboard
	{
		std::cout << gameBoardArrayHelp[x];
		if (x < 5)//print out the second two bars in the game board
		{
			cout << " | ";
		}
	}
	//formatting for the board to display correctly in the console
	std::cout << std::endl;
	std::cout << "  ";
	std::cout << "------------" << std::endl;
	std::cout << "   ";
	for (int x = 6; x < 9; x++)//display the third row of the gameboard
	{
		std::cout << gameBoardArrayHelp[x];
		if (x < 8)
		{
			cout << " | ";//print out the third two bars in the game board
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
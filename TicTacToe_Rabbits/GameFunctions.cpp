#include "GameFunctions.h"
#include <iostream>
#include <random>
#include <ctime>

GameFunctions::GameFunctions()
{

}

void GameFunctions::StartGame(bool startGame) {
	if (startGame == true) {
		startingPlayer = SelectStartingPlayer();
		if (startingPlayer == 1)
		{
			cout << "Starting player is Player 1";
		}
		else {
			cout << "Starting player is Player 2";

		}
			}
};

int GameFunctions::SelectStartingPlayer() {
	srand(time(NULL));
	int selectedPlayer = rand() % 2;
	return selectedPlayer;
};

bool GameFunctions::GameOver() {
	do
	{
		cout << endl
			<< " 1 - Rematch.\n"
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
			documentation.Help(); // Display the instructions.
			break;
		case 3:
			cout << "Thanks for playing!\n";
			documentation.Quit(); // Terminate the program
			break;

		default:
			cout << "Not a Valid Choice. \n"  // Input Validation
				<< "Choose again.\n";         // Error Message
			break;
		}
	} while (choice != 3); //Restart the loop and display the menu to the user.
};
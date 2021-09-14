#include "GameFunctions.h"
#include <iostream>
#include <limits>
#include <random>
#include <ctime>

void GameFunctions::StartGame(bool startGame) {
	do {
		if (startGame == true) {
			playerFunctions.playerFunctionsInit();
			startingPlayer = SelectStartingPlayer();
			gameBoard.GameBoardInit();

			if (startingPlayer == 1)
			{
				cout << "Starting player is Player 1";
				gameBoard.GameBoardDisplay();
				do {
					player1Choice = playerFunctions.Player1Turn();
					gameBoard.GameBoardUpdate(player1Symbol, player1Choice);
					gameBoard.GameBoardDisplay();
					int win=playerFunctions.CheckWin();
					if (win == 1)
					{
						cout << "*** Player 1 Wins! ***";
						break;
					}

					player2Choice = playerFunctions.Player2Turn();
					gameBoard.GameBoardUpdate(player2Symbol, player2Choice);
					gameBoard.GameBoardDisplay();
					win = playerFunctions.CheckWin();
					if (win == 2)
					{
						cout << "*** Player 2 Wins! ***";
						break;
					}

				} while (startGame == true);
				//gameBoard.GameBoardDisplay();
				rematch = this->GameOver();

			}
			else {
				cout << "Starting player is Player 2";
				gameBoard.GameBoardDisplay();
				do {
					player2Choice = playerFunctions.Player2Turn();
					gameBoard.GameBoardUpdate(player2Symbol, player2Choice);
					gameBoard.GameBoardDisplay();
					int win = playerFunctions.CheckWin();
					if (win == 2)
					{
						cout << "*** Player 2 Wins! ***";
						break;
					}

					player1Choice = playerFunctions.Player1Turn();
					gameBoard.GameBoardUpdate(player1Symbol, player1Choice);
					gameBoard.GameBoardDisplay();
					win = playerFunctions.CheckWin();
					if (win == 1)
					{
						cout << "*** Player 1 Wins! ***";
						break;
					}

				} while (startGame == true);

				//gameBoard.GameBoardDisplay();
				rematch = this->GameOver();
			}
		}
	} while (rematch == true);
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
			<< "\n****Game Over!!****\n\n"
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
#include "GameFunctions.h"
#include <iostream>
#include <limits>
#include <random>
#include <ctime>

void GameFunctions::StartGame(bool startGame) {

	// When the startGame function is called, the playerFunctions library will be initialize, zeroing out all arrays.
	// The program will then select a starting player at random using the SelectStartingPlayer() function.
	// The GameBoardInit() function is called to reset and clear out the gameboard. This will be important when rematch is implemented.
	do {
		if (startGame == true) {
			playerFunctions.playerFunctionsInit();
			startingPlayer = SelectStartingPlayer();
			gameBoard.GameBoardInit();


			// If Player 1 is randomly selected to go first:
			if (startingPlayer == 1)
			{
				cout << "Starting player is Player 1 (X)";
				gameBoard.GameBoardDisplay(); // Display the gameboard to the user.
				do {                          // Do while there is no winner.
					player1Choice = playerFunctions.Player1Turn(); // Allow player 1 to make a selection.
					gameBoard.GameBoardUpdate(player1Symbol, player1Choice); //Selection is made, update the board to the corresponding square.
					gameBoard.GameBoardDisplay(); //Display the board with the new move.
					int win=playerFunctions.CheckWin(); //Check if Player 1 won.
					if (win == 1)
					{
						cout << "*** Player 1 Wins! ***";
						documentation.Quit(); // Winner detected, quit game. Rematch will be implemented at a later time.
						break;
					}


					//Repeat the same steps above for Player 2
					player2Choice = playerFunctions.Player2Turn();// Allow player 2 to make a selection.
					gameBoard.GameBoardUpdate(player2Symbol, player2Choice); //Selection is made, update the board to the corresponding square.
					gameBoard.GameBoardDisplay(); // Display the gameboard to the user.
					win = playerFunctions.CheckWin();//Check if Player 2 won.
					if (win == 2)
					{
						cout << "*** Player 2 Wins! ***";
						documentation.Quit(); // Winner detected, quit game. Rematch will be implemented at a later time.
						break;
					}

				} while (startGame == true);
				//gameBoard.GameBoardDisplay(); Functions for future update. 
				//rematch = this->GameOver();   Functions for future update.

			}

			// If Player 2 is randomly selected to go first: 
			// *********************Same steps as above but in the opposite order.*********************************
			else {
				cout << "Starting player is Player 2 (O)";
				gameBoard.GameBoardDisplay();
				do {
					player2Choice = playerFunctions.Player2Turn();
					gameBoard.GameBoardUpdate(player2Symbol, player2Choice);
					gameBoard.GameBoardDisplay();
					int win = playerFunctions.CheckWin();
					if (win == 2)
					{
						cout << "*** Player 2 Wins! ***";
						documentation.Quit();
						break;
					}

					player1Choice = playerFunctions.Player1Turn();
					gameBoard.GameBoardUpdate(player1Symbol, player1Choice);
					gameBoard.GameBoardDisplay();
					win = playerFunctions.CheckWin();
					if (win == 1)
					{
						cout << "*** Player 1 Wins! ***";
						documentation.Quit();
						break;
					}

				} while (startGame == true);

				//gameBoard.GameBoardDisplay();
				//rematch = this->GameOver();
			}
		}
	} while (rematch == true);
};
 

// Randomly select a number between 1 and 2 and return it to determine who goes first in the StartGame() function/
int GameFunctions::SelectStartingPlayer() {
	srand(time(NULL));
	int selectedPlayer = rand() % 2;
	return selectedPlayer;
};



// *********************FOR FUTURE UPDATE***********************************

//bool GameFunctions::GameOver() {
//	do
//	{
//		cout << endl
//			<< "\n****Game Over!!****\n\n"
//			<< " 1 - Rematch.\n"
//			<< " 2 - Instructions.\n"
//			<< " 3 - Quit.\n"
//			<< " Enter your choice and press return: "; // Display Options to user
//		cin >> choice; // Collect User Input and compare it to the switch statement.
//
//		switch (choice)
//		{
//		case 1:
//			//code to start the game
//			gameBoard.GameBoardInit();
//			return true;
//			break;
//		case 2:
//			documentation.Help(); // Display the instructions.
//			break;
//		case 3:
//			cout << "Thanks for playing!\n";
//			documentation.Quit(); // Terminate the program
//			break;
//
//		default:
//			cout << "Not a Valid Choice. \n"  // Input Validation
//				<< "Choose again.\n";         // Error Message
//			break;
//		}
//	} while (choice != 3); //Restart the loop and display the menu to the user.
//};
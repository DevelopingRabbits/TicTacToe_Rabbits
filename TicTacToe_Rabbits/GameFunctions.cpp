#include "GameFunctions.h"
#include <iostream>
#include<limits>
#include <random>
#include <ctime>

GameFunctions::GameFunctions()
{
	playerChoice = 0;
}

void GameFunctions::StartGame() {
	SelectStartingPlayer();
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

int GameFunctions::SelectStartingPlayer() {//select if player 1 or player 2 goes first
   
    bool valid = false;
    loop:
    do
    {
        std::cout << "Which player would you like to start first, 1 or 2?: ";
        std::cin >> playerChoice;
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

    if (playerChoice!=1 && playerChoice!=2)//test to see if the input that has been validated to be a number is either 1 or 2
    {
        goto loop;//if the number is not 1 or 2, go back to attempting to get an input
    }

	return playerChoice;
int GameFunctions::SelectStartingPlayer() {
	srand(time(NULL));
	int selectedPlayer = rand() % 2;
	return selectedPlayer;
};

void GameFunctions::GameOver() {

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
#include "PlayerFunctions.h"
#include <iostream>

PlayerFunctions::PlayerFunctions() //Default Constructor
{
	for (int i = 0; i < 9; i++) {
		player1Tracker[i] = -1;
		player2Tracker[i] = -1;
		player2Choice[i] = ' ';
		player1Choice[i] = ' ';
		gameBoardArray[i] = ' ';
	}
	player1ChoiceTemp = -1;
	player2ChoiceTemp = -1;
}

// Initialize all arrays for a new game. This will be important for a rematch feature.
void PlayerFunctions::playerFunctionsInit() {
	for (int i = 0; i < 9; i++) {
		gameBoardArray[i] = ' ';
		player1Tracker[i] = -1;
		player2Tracker[i] = -1;
	}
};
int PlayerFunctions::Player1Turn() {
	bool valid = false;
	loop:
	do {

		std::cout << "\nPlayer 1 Make your move: ";
		std::cin >> player1ChoiceTemp;

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

	if (player1ChoiceTemp <= 0 || player1ChoiceTemp >= 10)//test to see if the input that has been validated to be a number is either 1 or 2
	{
		cout << "** Choice out of number range. Select a number between 1 & 9. **" << endl;
		goto loop;//if the number is not 1 or 2, go back to attempting to get an input
	}
	else if (gameBoardArray[player1ChoiceTemp - 1] == 'x' || gameBoardArray[player1ChoiceTemp - 1] == 'o')
		{
			cout << "** Space Occupied! Choose a different option **" << endl;
			goto loop;//if the number is not 1 or 2, go back to attempting to get an input
		}
	else
	{
		player1ChoiceTemp -= 1;
		gameBoardArray[player1ChoiceTemp] = 'x';
		player1Choice[player1TurnCount] = player1ChoiceTemp;
		player1TurnCount++;

		player1Tracker[player1ChoiceTemp] = 1;

		return player1Choice[player1TurnCount - 1];
	}


};

int PlayerFunctions::Player2Turn() {
	bool valid = false;
loop:
	do {

		std::cout << "\nPlayer 2 Make your move: ";
		std::cin >> player2ChoiceTemp;

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

	if (player2ChoiceTemp <= 0 || player2ChoiceTemp >= 10)//test to see if the input that has been validated to be a number is either 1 or 2
	{
		cout << "Invalid Input..." << endl;
		goto loop;//if the number is not 1 or 2, go back to attempting to get an input
	}
	else if (gameBoardArray[player2ChoiceTemp - 1] == 'x' || gameBoardArray[player2ChoiceTemp - 1] == 'o')
	{
		cout << "** Space Occupied! Choose a different option **" << endl;
		goto loop;//if the number is not 1 or 2, go back to attempting to get an input
	}
	else
	{
		player2ChoiceTemp -= 1;
		gameBoardArray[player2ChoiceTemp] = 'o';
		player2Choice[player2TurnCount] = player2ChoiceTemp;
		player2TurnCount++;

		player2Tracker[player2ChoiceTemp] = 1;

		return player2Choice[player2TurnCount - 1];
	}

	
};

int PlayerFunctions::CheckWin()
{
	/* For Debugging Purposes
	for (int i = 0; i < 8; i++) {
		cout <<this-> player1Tracker[i] << endl;
	}
	cout << endl;

	for (int i = 0; i < 8; i++) {
		cout << this-> player2Tracker[i] << endl;
	}
	For Debugging Purposes*/


	/*
		This function checks both player's arrays and determines if they have a combination that satisfies 1 of 8 different
		combinations of TicTacToe.
	*/


	// Check for winners on rows
	for (int i = 0; i < 9; i +=3)
	{
		
		if (this->player1Tracker[i] == 1 && this->player1Tracker[i + 1] == 1 && this->player1Tracker[i + 2] == 1)
		{
			
			return 1;//player 1 wins on the row
		}
		else if (this->player2Tracker[i] == 1 && this->player2Tracker[i + 1] == 1 && this->player2Tracker[i + 2] == 1)
		{
			
			return 2;//player 2 wins on the row
		}
	}

	// Check for winners on columns
	for (int i = 0; i < 3; i++)
	{
		

		//cout << "checking col...";
		if (this->player1Tracker[i] == 1 && this->player1Tracker[i + 3] == 1 && this->player1Tracker[i + 6] == 1)
		{
			
			return 1;//player 1 wins on the row
		}
		else if (this->player2Tracker[i] == 1 && this->player2Tracker[i + 3] == 1 && this->player2Tracker[i + 6] == 1)
		{
			
			return 2;//player 2 wins on the row
		}
	}

	
		if (this->player1Tracker[0] == 1 && this->player1Tracker[4] == 1 && this->player1Tracker[8] == 1)
		{
			
			return 1;//player 1 wins on the row
		}

		else if (this->player1Tracker[2] == 1 && this->player1Tracker[4] == 1 && this->player1Tracker[6] == 1)
		{

			return 1;//player 1 wins on the row
		}

		else if (this->player2Tracker[0] == 1 && this->player2Tracker[4] == 1 && this->player2Tracker[8] == 1)
		{
			
			return 2;//player 2 wins on the row
		}

		else if (this->player2Tracker[2] == 1 && this->player2Tracker[4] == 1 && this->player2Tracker[6] == 1)
		{

			return 2;//player 2 wins on the row
		}
	
	//check for winners on diagonals

}
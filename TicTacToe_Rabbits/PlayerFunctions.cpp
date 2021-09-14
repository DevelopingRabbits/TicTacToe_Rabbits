#include "PlayerFunctions.h"
#include "GameBoard.h"
#include <iostream>


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

	if (player1ChoiceTemp < 0 || player1ChoiceTemp > 10)//test to see if the input that has been validated to be a number is either 1 or 2
	{
		goto loop;//if the number is not 1 or 2, go back to attempting to get an input
	}
	else
	{
		player1ChoiceTemp -= 1;
		player1Choice[player1TurnCount] = player1ChoiceTemp;
		player1TurnCount++;
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

	if (player2ChoiceTemp < 0 || player2ChoiceTemp > 10)//test to see if the input that has been validated to be a number is either 1 or 2
	{
		goto loop;//if the number is not 1 or 2, go back to attempting to get an input
	}
	else
	{
		player2ChoiceTemp -= 1;
		player2Choice[player2TurnCount] = player2ChoiceTemp;
		player2TurnCount++;
		return player2Choice[player2TurnCount - 1];
	}
};

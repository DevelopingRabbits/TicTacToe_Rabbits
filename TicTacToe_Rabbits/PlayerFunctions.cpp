#include "PlayerFunctions.h"
#include "GameBoard.h"
#include <iostream>



int PlayerFunctions::Player1Turn() {
	if (player1TurnCount == 0) {
		cout << "\nPlayer 1 Make your move: ";
		cin >> player1ChoiceTemp;

		player1ChoiceTemp -= 1;
		player1Choice[player1TurnCount] = player1ChoiceTemp;
		return player1Choice[player1TurnCount];
	}
	else {
		player1TurnCount++;
		cout << "\nPlayer 1 Make your move: ";
		cin >> player1ChoiceTemp;

		player1ChoiceTemp -= 1;
		player1Choice[player1TurnCount] = player1ChoiceTemp;
		return player1Choice[player1TurnCount];
	}
};

int PlayerFunctions::Player2Turn() {
	if (player2TurnCount == 0) {
		cout << "\nPlayer 2 Make your move: ";
		cin >> player2ChoiceTemp;

		player2ChoiceTemp -= 1;
		player2Choice[player2TurnCount] = player2ChoiceTemp;
		return player2Choice[player2TurnCount];
	}
	else {
		player2TurnCount++;
		cout << "\nPlayer 2 Make your move: ";
		cin >> player2ChoiceTemp;

		player2ChoiceTemp -= 1;
		player2Choice[player1TurnCount] = player2ChoiceTemp;
		return player2Choice[player2TurnCount];
	}
};

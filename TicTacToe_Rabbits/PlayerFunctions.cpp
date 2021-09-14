#include "PlayerFunctions.h"
#include "GameBoard.h"
#include <iostream>



int PlayerFunctions::Player1Turn() {
	cout << "\nPlayer 1 Make your move: ";
	cin >> player1Choice[player1TurnCount];
	player1TurnCount++;
	return player1Choice[player1TurnCount];
};

int PlayerFunctions::Player2Turn() {
	cout << "\nPlayer 2 Make your move: ";
	cin >> player2Choice[player2TurnCount];
	player2TurnCount++;
	return player2Choice[player2TurnCount];
};

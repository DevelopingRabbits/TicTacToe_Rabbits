#ifndef PlayerFunctions_H
#define PlayerFunctions_H
#include<iostream>
#include <array>
#include "GameBoard.h"

using namespace std;

class PlayerFunctions {

private:
	
public:
	PlayerFunctions();
	GameBoard gameBoard;
	int player1Choice[8];
	int player1ChoiceTemp;
	int player1TurnCount = 0;
	int player2Choice[8];
	int player2TurnCount = 0;
	int player2ChoiceTemp;
	char gameBoardArray[9];


	int player1Tracker[9];
	int player2Tracker[9];


	void playerFunctionsInit();
	int Player1Turn();
	int Player2Turn();
	int CheckWin();
};
#endif


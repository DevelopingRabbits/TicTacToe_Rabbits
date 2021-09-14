#ifndef PlayerFunctions_H
#define PlayerFunctions_H
#include<iostream>
#include <array>
#include "GameBoard.h"


using namespace std;

class PlayerFunctions {

private:
	
public:
	GameBoard gameBoard;
	int player1Choice[8];
	int player1TurnCount = 0;
	int player2Choice[8];
	int player2TurnCount = 0;

	int Player1Turn();
	int Player2Turn();
};
#endif
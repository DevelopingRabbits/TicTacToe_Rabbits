#ifndef PlayerFunctions_H
#define PlayerFunctions_H
#include<iostream>
#include <array>


using namespace std;

class PlayerFunctions {

private:
	
public:
	int player1Choice[8];
	int player1ChoiceTemp;
	int player1TurnCount = 0;
	int player2Choice[8];
	int player2TurnCount = 0;
	int player2ChoiceTemp;

	int Player1Turn();
	int Player2Turn();
};
#endif
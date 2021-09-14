#ifndef GameFunctions_H
#define GameFunctions_H
#include<iostream>
#include"Documentation.h"
#include"GameBoard.h"
#include"PlayerFunctions.h"
using namespace std;


class GameFunctions {

private:

public:
	char player1Symbol = 'X';
	int player1Choice;
	char player2Symbol = 'O';
	int player2Choice;
	Documentation documentation;
	GameBoard gameBoard;
	PlayerFunctions playerFunctions;

	bool rematch;
	int startingPlayer;
	int turnCounter;
	int choice;

	void StartGame(bool startGame); //Main Function that calls functions from various classes to make the game function.
	int SelectStartingPlayer();     //A function that randomly selects either 1 or 2 to determine the starting player.
	//bool GameOver();              // FUTURE UPDATE. This will allow for rematches if Customer Requires.
};
#endif
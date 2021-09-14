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
	Documentation documentation;
	//GameBoard gameBoard;
	PlayerFunctions playerFunctions;

	bool rematch;
	int startingPlayer;
	int turnCounter;
	int choice;

	void StartGame(bool startGame);
	int SelectStartingPlayer();
	bool GameOver();
};
#endif
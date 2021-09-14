#ifndef GameFunctions_H
#define GameFunctions_H
#include<iostream>
#include"Documentation.h"

using namespace std;


class GameFunctions {

private:

public:
	Documentation documentation;
	int startingPlayer;
	int turnCounter;
	int choice;

	GameFunctions();//default constuctor
	void StartGame(bool startGame);
	int SelectStartingPlayer();
	bool GameOver();

};

#endif
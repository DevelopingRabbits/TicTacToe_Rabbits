#ifndef GameFunctions_H
#define GameFunctions_H
#include<iostream>

using namespace std;


class GameFunctions {

private:
	int playerChoice;//stores the value for which player goes first
public:
	GameFunctions();//default constuctor
	void StartGame();
	int SelectStartingPlayer();
	void GameOver();

};

#endif
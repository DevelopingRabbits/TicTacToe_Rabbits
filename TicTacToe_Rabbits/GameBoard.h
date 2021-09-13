#ifndef GameBoard_H
#define GameBoard_H
#include<iostream>
using namespace std;

class GameBoard
{
private:
	char gameBoardArray[8];
public:

	GameBoard();
	void GameBoardDisplay();
	void GameBoardUpdate();
	void GameBoardReset();
	//function that prompts players to make a move
};
#endif
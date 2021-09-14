#ifndef GameBoard_H
#define GameBoard_H
#include<iostream>
using namespace std;


class GameBoard
{
	
private:
	
	friend class PlayerFunctions;

public:
	char gameBoardArray[8];
	GameBoard();
	void GameBoardDisplay();
	void GameBoardUpdate(char input,int space);
	void GameBoardReset();
	//function that prompts players to make a move
};
#endif
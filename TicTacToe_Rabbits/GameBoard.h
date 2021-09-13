#ifndef GameBoard_H
#define GameBoard_H
#include<iostream>
using namespace std;


class GameBoard
{
	
private:
	
	friend class PlayerFunctions;
	char gameBoardArray[8];

public:
	
	GameBoard();//default constructor
	
	void GameBoardDisplay();
	void GameBoardUpdate(char input,int space);
	void GameBoardReset();
	//function that prompts players to make a move
};
#endif
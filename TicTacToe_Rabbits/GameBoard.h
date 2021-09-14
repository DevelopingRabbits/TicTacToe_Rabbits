#ifndef GameBoard_H
#define GameBoard_H
#include<iostream>
using namespace std;


class GameBoard
{
	
private:

public:
	char gameBoardArray[9];

	void GameBoardInit();
	void GameBoardDisplay();
	void GameBoardUpdate(char input,int space);
	void GameBoardReset();
	//function that prompts players to make a move
};
#endif

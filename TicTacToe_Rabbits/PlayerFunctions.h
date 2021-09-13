#ifndef PlayerFunctions_H
#define PlayerFunctions_H
#include<iostream>


using namespace std;

class GameBoard;

class PlayerFunctions {

private:
	
public:
	PlayerFunctions();//default constructor


	void Player1Turn(int input);
	void Player2Turn(int input);
	void SwitchPlayer();
};
#endif
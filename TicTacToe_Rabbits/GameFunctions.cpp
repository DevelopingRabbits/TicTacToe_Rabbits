#include "GameFunctions.h"
#include <iostream>
#include<limits>

GameFunctions::GameFunctions()
{
	playerChoice = 0;
}

void GameFunctions::StartGame() {
	SelectStartingPlayer();
};

int GameFunctions::SelectStartingPlayer() {//select if player 1 or player 2 goes first
   
    bool valid = false;
    loop:
    do
    {
        std::cout << "Which player would you like to start first, 1 or 2?: ";
        std::cin >> playerChoice;
        if (cin.good())
        {

            //the input is a valid integer, break out of the loop.
            valid = true;

        }
        else
        {
            
           
            cin.clear(); //reset the buffer
            
            cin.ignore(numeric_limits<streamsize>::max(), '\n');//empty the buffer
            cout << "Invalid Input..." << endl;
        }
    } while (!valid);

    if (playerChoice!=1 && playerChoice!=2)//test to see if the input that has been validated to be a number is either 1 or 2
    {
        goto loop;//if the number is not 1 or 2, go back to attempting to get an input
    }

	return playerChoice;
};

void GameFunctions::GameOver() {

};
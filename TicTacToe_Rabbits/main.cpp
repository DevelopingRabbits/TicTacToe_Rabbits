#include "GameBoard.h"
#include "Documentation.h"
#include "GameFunctions.h"
#include "PlayerFunctions.h"
#include <iostream>
using namespace std;

int main()
{	
	Documentation documentation;     // Create Documentation Object
	GameBoard gameBoard;             // Create Game Board Object
	GameFunctions gameFunctions;     // Create Game Functions Object
	PlayerFunctions playerFunctions; // Create Player Functions Object

	gameBoard.GameBoardDisplay();
	gameBoard.GameBoardReset();
	documentation.Welcome();     // Display Welcome Message To User
	documentation.MainMenu();    // Display MainMenu to User

	return 0;
}
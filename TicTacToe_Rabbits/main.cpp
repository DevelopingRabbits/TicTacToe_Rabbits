#include "GameBoard.h"
#include "Documentation.h"
#include "GameFunctions.h"
#include "PlayerFunctions.h"
#include <iostream>
using namespace std;

int main()
{	
	
	Documentation documentation;     // Create Documentation Object
	GameFunctions gameFunctions;     // Create Game Functions Object
	PlayerFunctions playerFunctions; // Create Player Functions Object


	bool startGame = false;
	documentation.Welcome();     // Display Welcome Message To User
	gameFunctions.StartGame(documentation.MainMenu());    // Display MainMenu to User
	return 0;
}
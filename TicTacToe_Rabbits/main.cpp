#include "GameBoard.h"
#include "Documentation.h"
#include "GameFunctions.h"
#include "PlayerFunctions.h"
#include <iostream>
using namespace std;

int main()
{	
	Documentation d;
	GameBoard g;

	d.Welcome();
	g.GameBoardDisplay();

	//test
	return 0;
}
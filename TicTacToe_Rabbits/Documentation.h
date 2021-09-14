#ifndef Documentation_H
#define Documentation_H
#include<iostream>

using namespace std;


class Documentation
{
private:


public:
	// Variables
	int choice;

	// Functions
	bool MainMenu();    // A switch statement that allows the user to select Start Game, Instructions or Quit.
	void Welcome();     // Welcome Message at beginning of program start.
	void Help();        // Instruction Documentation at customer's request.
	int Quit();         // Quit the program.
};

#endif

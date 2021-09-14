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
	void MainMenu(); // Displays the Main Menu
	void Welcome();
	void Help();
	int Quit();
};

#endif

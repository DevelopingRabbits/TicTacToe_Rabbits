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
	Documentation();//default contructor
	bool MainMenu();
	void Welcome();
	void Help();
	int Quit();
};

#endif

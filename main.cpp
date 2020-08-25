/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Main implementation file for the Save Your Family Train Game -
**			  Final project - CS 162.  This program create a doubly-linked list 
**			  data structure consisting of Space objects.  The space class is an
**			  abstract parent class.  Room classes and functions are derived from
**			  the space class.  The program allows
**			  the user to play a game where they move through spaces and collect
**			  people class objects, in an attempt to make it to the last space with
**			  the key objects.
*******************************************************************************/

// Headers

#include "Menu.hpp"
#include "Simulation.hpp"
#include<iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
using std::cout;
using std::cin;
using std::endl;

// main function header


int main() {


	// seed the time for the random number generator to be used in engineers room functions

	srand(static_cast<unsigned int>(time(NULL)));

	// Intro

	cout << "*******************************************************************\n"
	<< "**** \t Welcome to the Save Your Family Train Game \t****\n"
	<< "*******************************************************************\n\n";

	// instantiate object for start menu

	Menu start1;

	// menu function at program start - menu class
	// 1. to play
	// 2. to quit

	int mainChoice = start1.mainMenu();
	while (mainChoice == 1) {

		// run simulation function
		simulation();

		// run start menu again
		mainChoice = start1.mainMenu();
	}

	cout << "\nThe program will now quit.\n\n";
	return 0;

}

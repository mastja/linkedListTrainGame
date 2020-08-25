/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Source file for Caboose class - Save Your Family Train Game
**			  Final project - CS 162.  This class has the roomFunction, which
**			  runs the room simulation in this room.  This is a derived class.
**			  Parent class is Space class.
*******************************************************************************/
//caboose.cpp


#include "Caboose.hpp"
#include "Menu.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;
using std::string;


/*******************************************************************************
** caboose room function - passed values for steps, limit, people, and limit
	for max people.  Calls room menu function.  Completes designated user action
	Loops and keeps calling menu function until user decides to quit or move to
	next linked space (next traincar).  See engineersRoom.cpp for line by line
	comments on a similar funtion.
*******************************************************************************/


int Caboose::roomFunction(int steps, int limit, int people, int peopleLimit){
    
	Menu choice;

	int menuChoice;
	bool cabooseFlag1 = true;

	while (steps < 21) {

		menuChoice = choice.cabooseMenu();

		if (menuChoice == 1) {

			if (winFlag1 == true) {

				cout << "\nYou jump from the car with wife and kid in hand!\n\n"
					<< "You win the game!\n\n"
					<< "Great job playing!  You rock!\n\n";
				return 1;
			}
			else {
				cout << "You jump from the car but without your wife and kids!\n\n"
					<< "You lose the game!\n\n"
					<< "Better luck next time!\n\n";
				return 0;
			}
		}

		if (menuChoice == 2) {

			cout << "Okay, do what you have to do.\n\n"
				<< "You lose the game.\n\n";
			return 0;
		}

		if (menuChoice == 3) {
			cout << "\n\nTake your time.... :(\n\n"
				<< "\nCry it out... \n\n";
			steps++;
			cout << "Now what? [Step " << steps << "]\n";
		}

		if (menuChoice == 4) {
			cout << "\nThe program will now quit.\n\n";
			exitFlag1 = true;
			return 0;
		}
	}

	return steps;
}

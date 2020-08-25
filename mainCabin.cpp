/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Source file for mainCabin class - Save Your Family Train Game
**			  Final project - CS 162.  This class has the roomFunction, which
**			  runs the room simulation in this room.  This is a derived class.
**			  Parent class is Space class.
*******************************************************************************/
//mainCabin.cpp


#include "MainCabin.hpp"
#include "Menu.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;
using std::string;


/*******************************************************************************
** mainCabin room function - passed values for steps, limit, people, and limit
	for max people.  Calls room menu function.  Completes designated user action
	Loops and keeps calling menu function until user decides to quit or move to
	next linked space (next traincar).  See engineersRoom.cpp for line by line
	comments on a similar funtion.
*******************************************************************************/


int MainCabin::roomFunction(int steps, int limit, int people, int peopleLimit){
    
	// declare object to call menu function

	Menu choice;

	// variables for use below
	int menuChoice;
	bool mainFlag1 = true;
	bool mainFlag2 = true;

	// while user has not gone past step max

	while (steps < limit) {

		// call main cabin menu function - response returned as int

		menuChoice = choice.mainCabinMenu();

		// response is to save small group

		if (menuChoice == 1) {

			// if not already saved 

			if (mainFlag1 == true) {

				cout << "You attempt to help save 2 people.  A man and woman.\n\n";

				// add two people to people count.  Also set add man and addwoman variables to be returned to simulation
				// function to inform creation of people objects

				if ((people + 2) < (peopleLimit+1)) {
					cout << "You pick up and carry the people with you, losing 2 of your 10 carry spot allowances\n\n";
					cout << "You have " << (peopleLimit - (people + 2)) << " carry spots left.\n\n";
					addMan += 1;
					addWoman += 1;
					people += 2;
				}

				// if there are not enough carry spots in carry allowance

				else {
					cout << "Sorry you do not have enough space to carry this group.  You have to leave them.\n";
					cout << "You only have " << (peopleLimit - people) << " carry spots left.\n\n";
				}

				// increment turn step

				steps++;

				// set flag, we have already tried to save these people

				mainFlag1 = false;
				cout << "Now what? [Step " << steps << "]\n";

			}

			// if we already tried this option

			else if (mainFlag1 == false) {
				cout << "You already helped this group!  You lose a step for reapeating an action\n\n";
				steps++;
				cout << "Now what? [Step " << steps << "]\n";
			}
		}

		// if user chose to help large group

		if (menuChoice == 2) {

			//if not already tried this option

			if (mainFlag2 == true) {

				cout << "You attempt to help save 5 people.  A man, a woman, and 3 children.\n\n";

				// add five to people count and set class variables for return to simulation with getters
				// people objects will be created in simulation

				if ((people + 5) < (peopleLimit+1)) {
					cout << "You pick up and carry the people with you, losing 5 of your 10 carry spot allowances\n\n";
					cout << "You have " << (peopleLimit - (people + 5)) << " carry spots left.\n\n";
					addMan += 1;
					addWoman += 1;
					addChild = 3;
					people += 5;
				}

				// people container does not have the five spots

				else {
					cout << "Sorry you do not have enough space to carry this group.  You have to leave them.\n";
					cout << "You only have " << (peopleLimit - people) << " carry spots left.\n\n";
				}

				// increment step count

				steps++;

				// flag this option has been tried

				mainFlag2 = false;

				// update user on new step before loop again to run menu

				cout << "Now what? [Step " << steps << "]\n";

			}

			// if this option was already tried

			else if (mainFlag2 == false) {
				cout << "You already helped this group!  You lose a step for reapeating an action\n\n";
				steps++;
				cout << "Now what? [Step " << steps << "]\n";
			}
		}

		// if user chooses to move to next cabin

		if (menuChoice == 3) {

			// if neither of the save people flags were set

			if ((mainFlag1 == true) && (mainFlag2 == true)) {
				cout << "\n\nDang...  That's cold\n\n";
			}

			// message, increment steps, and return from function

			cout << "\nOkay on to the next traincar\n\n";
			steps++;
			return steps;
		}

		// user can waste a step by crying

		if (menuChoice == 4) {
			cout << "\n\nTake your time.... :(\n"
				<< "\nCry it out... \n\n";
			steps++;
			cout << "Now what? [Step " << steps << "]\n";
		}

		// user chooses to quit.  Exit flag will exit simulation in simulation function

		if (menuChoice == 5) {
			cout << "\nThe program will now quit.\n\n";
			exitFlag1 = true;
			return 0;
		}
	}

	// int function returns steps which is reset in simulation function when this function runs
	return steps;
}

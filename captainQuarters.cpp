/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Source file for CaptainQuarters class - Save Your Family Train Game
**			  Final project - CS 162.  This class has the roomFunction, which
**			  runs the room simulation in this room.  This is a derived class.
**			  Parent class is Space class.
*******************************************************************************/
//captainQuarters.cpp


#include "CaptainQuarters.hpp"
#include "Menu.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;
using std::string;


/*******************************************************************************
** captainQuarters room function - passed values for steps, limit, people, and limit
	for max people.  Calls room menu function.  Completes designated user action
	Loops and keeps calling menu function until user decides to quit or move to
	next linked space (next traincar).  See engineersRoom.cpp for line by line
	comments on a similar funtion.
*******************************************************************************/


int CaptainQuarters::roomFunction(int steps, int limit, int people, int peopleLimit){
    
	Menu choice;

	int menuChoice;
	
	menuChoice = choice.captainMenu();

	bool captainFlag1 = true;


	while (steps < limit) {
		if (menuChoice == 1) {

			if (captainFlag1 == true) {
				cout << "You tap the unconciouss person and they wake up right away and run\n"
					<< "screaming towards the back of the train.  Nice!  One less person to\n"
					<< "carry.\n\n";

				steps++;
				cout << "Now what? [Step " << steps << "]\n";
				captainFlag1 = false;
			}
			else if (captainFlag1 == false) {
				cout << "You already checked on that person!  You lose a step for reapeating an action\n\n";
				steps++;
				cout << "Now what? [Step " << steps << "]\n";
			}
			// if (room not already searched)
			// print message
			// add items to container ( a second doubly linked list)
			// if wife and kids, set flag
			// else if (the room was searched)
			// print message
			// increment steps
			// ask if prev or next car
		}

		else if (menuChoice == 2) {

			if (captainFlag1 == true) {
				
				cout << "You check on the person\n\n";

				if (people < peopleLimit) {
					cout << "You pick up and carry the person with you, losing 1 of your 10 carry spot allowances\n\n";
					cout << "You have " << (peopleLimit - (people + 1)) << " carry spots left.\n\n";
					addMan = 1;
				}
				else {
					cout << "Sorry you do not have enough space to carry this person or group.  You have to leave them.\n";
				}
				// add person to container
				// container counter

				steps++;
				cout << "Now what? [Step " << steps << "]\n";
				captainFlag1 = false;
			}
			else if (captainFlag1 == false) {
				cout << "You already checked on that person!  You lose a step for reapeating an action\n\n";
				steps++;
				cout << "Now what? [Step " << steps << "]\n";
			}
		}

		else if (menuChoice == 3) {
			if (captainFlag1 == true) {
				cout << "\n\nRuthless.\n\n";
			}
			cout << "Okay on to the next cabin\n\n";
			steps++;
			return steps;
		}
		else if (menuChoice == 4) {
			cout << "\n\nTake your time.... :(\n\n"
				<< "\nCry it out... \n\n";
			steps++;
			cout << "Now what? [Step " << steps << "]\n";
		}

		else if (menuChoice == 5) {
			cout << "\nThe program will now quit.\n\n";
			exitFlag1 = true;
			return 0;
		}

		menuChoice = choice.captainMenu();
	}

	return steps;
}

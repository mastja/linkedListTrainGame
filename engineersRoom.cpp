/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Source file for EngineersRoom class - Save Your Family Train Game
**			  Final project - CS 162.  This class has the roomFunction, which
**			  runs the room simulation in this room.  This is a derived class.
**			  Parent class is Space class.
*******************************************************************************/
//engineersRoom.cpp


#include "EngineersRoom.hpp"
#include "Menu.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;
using std::string;


// default constructor sets shift in limit to 0

EngineersRoom::EngineersRoom() {
	limitShift = 0;
}

/*******************************************************************************
** engineersroom room function - passed values for steps, limit, people, and limit
	for max people.  Calls room menu function.  Completes designated user action
	Loops and keeps calling menu function until user decides to quit or move to
	next linked space (next traincar).  
*******************************************************************************/


int EngineersRoom::roomFunction(int steps, int limit, int people, int peopleLimit){
    
	// object to run menu class function
	Menu choice;

	// declare variables

	int menuChoice;
	bool engineerFlag1 = true;

	// generate a random number for use below

	int temp = rand() % 100 + 1;
	
	// if we have not reached the max steps

	while (steps < limit) {

		// call menu function

		menuChoice = choice.engineerMenu();

		// if user chooses menu response 1

		if (menuChoice == 1) {

			// if user has not already completed similar action
			if (engineerFlag1 == true) {

				// random value <=90 is 90% probable

				if (temp <= 90) {
					cout << "Your computer hacking genius pays off!\n"
						<< "The train slows.  You gain 5 steps.\n\n";

					// increase steps and limit
					steps++;
					limit += 5;

					// set limitshift for return to simulation
					limitShift = 5;

					// set flag so user doesn't complete this action again
					engineerFlag1 = false;
					cout << "Now what? [Step " << steps << "]\n";

				}

				// probability < 10%

				else {
					cout << "Uh Oh... You made problems worse! \nThe train is speeding up\n"
						<< "You just lost 5 steps\n\n";

					// increase step count and decrease max steps in limit

					steps++;
					limit -= 5;
					limitShift =  -5;
					engineerFlag1 = false;
					cout << "Now what? [Step " << steps << "]\n";
				}

			}

			// if user already attempted to slow train
			else if (engineerFlag1 == false) {
				cout << "You already tried to slow the train!  You lose a step for reapeating an action\n\n";
				steps++;
				cout << "Now what? [Step " << steps << "]\n";
			}
		}

		// if user chooses action choice 2

		if (menuChoice == 2) {

			if (engineerFlag1 == true) {

				if (temp <= 10) {
					cout << "Your random actions pay off!\n"
						<< "The train slows.  You gain 5 steps.\n\n";
					steps++;
					limit += 5;
					limitShift = 5;
					engineerFlag1 = false;
					cout << "Now what? [Step " << steps << "]\n";

				}
				else {
					cout << "Uh Oh... You made problems worse! \nThe train is speeding up\n"
						<< "You just lost 5 steps\n\n";
					steps++;
					limit -= 5;
					limitShift = -5;
					engineerFlag1 =+ false;
					cout << "Now what? [Step " << steps << "]\n";
				}

			}
			else if (engineerFlag1 == false) {
				cout << "You already tried to slow the train!  You lose a step for reapeating an action\n\n";
				steps++;
				cout << "Now what? [Step " << steps << "]\n";
			}
		}

		// if user chooses action choice 3
		if (menuChoice == 3) {
			cout << "Okay on to the next cabin\n\n";
			steps++;

			// return from function
			return steps;
		}

		// action choice 4 is essentially just a waste of a step
		if (menuChoice == 4) {
			cout << "\n\nTake your time.... :(\n\n"
				<< "\nCry it out... \n\n";
			steps++;
			cout << "Now what? [Step " << steps << "]\n";
		}

		//user chooses to quit with choice 5
		if (menuChoice == 5) {
			cout << "\nThe program will now quit.\n\n";
			exitFlag1 = true;
			return 0;
		}
	}

	return steps;
}

// get limit shift function is called in the simulation after the user leaves this room to determine
// and apply any change in step count max limit

int EngineersRoom::getLimitShift() {

	if (limitShift != 0) {
		cout << "Your limit has changed by " << limitShift << endl;
	}
	return limitShift;
}
/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Source file for mainCabin_3 class - Save Your Family Train Game
**			  Final project - CS 162.  This class has the roomFunction, which
**			  runs the room simulation in this room.  This is a derived class.
**			  Parent class is Space class.
*******************************************************************************/
//mainCabin_3.cpp


#include "MainCabin_3.hpp"
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


int MainCabin_3::roomFunction(int steps, int limit, int people, int peopleLimit){
    
	Menu choice;

	int menuChoice;
	bool mainFlag1 = true;
	bool mainFlag2 = true;


	while (steps < limit) {

		menuChoice = choice.mainCabinMenu();


		if (menuChoice == 1) {

			if (mainFlag1 == true) {

				cout << "You attempt to help save 2 people.\n\nIt's your wife and baby!!!\n\n";

				// add two to carry container	
				if ((people + 2) < (peopleLimit + 1)) {
					cout << "You pick up and carry the people with you, losing 2 of your 10 carry spot allowances\n\n";
					cout << "You have " << (peopleLimit - (people + 2)) << " carry spots left.\n\n";
					addMan += 1;
					addWoman += 1;
					people += 2;
					winFlag1 = 1;
				}
				else {
					cout << "Sorry you do not have enough space to carry this group.  You have to leave them.\n";
					cout << "You only have " << (peopleLimit - people) << " carry spots left.\n\n";
				}
				steps++;
				mainFlag1 = false;
				cout << "Now what? [Step " << steps << "]\n";

			}
			else if (mainFlag1 == false) {
				cout << "You already helped this group!  You lose a step for reapeating an action\n\n";
				steps++;
				cout << "Now what? [Step " << steps << "]\n";
			}
		}

		if (menuChoice == 2) {

			if (mainFlag2 == true) {

				cout << "You attempt to help save 5 people.  A man, a woman, and 3 children.\n\n";

				// add five to carry container	

				if ((people + 5) < (peopleLimit + 1)) {
					cout << "You pick up and carry the people with you, losing 5 of your 10 carry spot allowances\n\n";
					cout << "You have " << (peopleLimit - (people + 5)) << " carry spots left.\n\n";
					addMan += 1;
					addWoman += 1;
					addChild = 3;
					people += 5;
				}
				else {
					cout << "Sorry you do not have enough space to carry this group.  You have to leave them.\n";
					cout << "You only have " << (peopleLimit - people) << " carry spots left.\n";
				}

				steps++;
				mainFlag2 = false;
				cout << "Now what? [Step " << steps << "]\n";

			}
			else if (mainFlag2 == false) {
				cout << "You already helped this group!  You lose a step for reapeating an action\n\n";
				steps++;
				cout << "Now what? [Step " << steps << "]\n";
			}
		}

		if (menuChoice == 3) {
			if ((mainFlag1 == true) && (mainFlag2 == true)) {
				cout << "\n\nDang...  That's cold\n\n";
			}
			cout << "Okay on to the next traincar\n\n";
			steps++;
			return steps;
		}
		if (menuChoice == 4) {
			cout << "\n\nTake your time.... :(\n"
				<< "\nCry it out... \n\n";
			steps++;
			cout << "Now what? [Step " << steps << "]\n";
		}

		if (menuChoice == 5) {
			cout << "\nThe program will now quit.\n\n";
			exitFlag1 = true;
			return 0;
		}
	}
	
	return steps;

}

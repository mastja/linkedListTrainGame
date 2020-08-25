/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Simulation class source file for the Save Your Family Train Game -
**			  Final project - CS 162.  This program create a doubly-linked list
**			  data structure consisting of Space objects.  The space class is an
**			  abstract parent class.  Room classes and functions are derived from
**			  the space class.  The program allows
**			  the user to play a game where they move through spaces and collect
**			  people class objects, in an attempt to make it to the last space with
**			  the key objects.  This class holds the simulation function which
**			  runs the game simulation.
*******************************************************************************/
// simulation.cpp
// Headers

#include"Space.hpp"
#include"DoublyLinkedList.hpp"
#include "Menu.hpp"
#include "CaptainQuarters.hpp"
#include "Caboose.hpp"
#include "EngineersRoom.hpp"
#include "MainCabin.hpp"
#include "MainCabin_3.hpp"
#include "People.hpp"
#include "PeopleCarry.hpp"
#include "Man.hpp"
#include "Woman.hpp"
#include "Child.hpp"
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using std::cout;
using std::cin;
using std::endl;

// simulation function runs the entire game simulation


void simulation() {


	// object for train cars and people carry container

	DoublyLinkedList list1;
	PeopleCarry carryAllow;


	// declare variables

	int steps = 1;
	int limit = 21;
	int numPeople = 0;
	int peopleCarryLimit = 10;

	//initialize space head pointer
	// additional space pointer for use below
	Space* head = NULL;
	Space* sptr;

	// declare room objects
	CaptainQuarters obj1;
	EngineersRoom obj2;
	MainCabin obj3;
	MainCabin obj4;
	MainCabin_3 obj5;
	Caboose obj6;

	bool exitFlag = false;
	bool winFlag = false;

	// print background info

	cout << "*******************************************************************\n"
		<< "**** \t\t Background Info/Instructions \t\t****\n"
		<< "*******************************************************************\n\n"
		<< "You're in a train with six cars.\n It is on a bridge and the tracks ahead were"
		<< " blown up in an explosion.\nYour only hope is to jump off the last car, 6 cars back\n\n"
		<< "You must traverse from the head car to the last to jump of and save your life\n\n"
		<< "But your wife and baby are somewhere on the train, and you don't know where.\n"
		<< "As you travel back through each car, you must check to see if your wife and baby are\n"
		<< "there.  You can pick up and save other passengers along the way, but if you pick up\n"
		<< "too many passengers, or take too long by looking in too many spots, you will die and \n"
		<< "lose the game.  If you don't find your wife and baby you will also lose.\n"
		<< "*******************************************************************\n\n";

	// add's first Space and room where user is

	list1.addNodeHead(&head, "Captain's Quarters");
	int numCars = 1;


	// game time count limited by steps

	while ((steps < limit) && (exitFlag == false) && (numCars < 7)) {

		cout << "*******************************************************************\n"
			<< "**** \t\t\t Game Step " << steps << "\t\t\t****\n"
			<< "*******************************************************************\n\n";

		// if first step the print statements are long, so this line lets use know they
		// can scroll up for more info on the game

		if (steps == 1) {
			cout << "\t[*** BACKGROUND INFO ABOVE ^^ ***]\n" << endl;
		}

		// info about current step

		cout << "You have " << limit - steps - 1 << " steps left\n" << endl
			<< "Your limit is " << limit - 1 << " steps\n" << endl;


		// prints train list of rooms, non-accessed rooms are not visible

		list1.traverseList(head);

		// print title for each room with some info, based on room user is in

		if (numCars == 1) {

			cout << "\n*******************************************************************\n"
				<< "**** \t\t Welcome to the Captain's Quarters \t\t****\n"
				<< "*******************************************************************\n\n"
				<< "This is the first car in the six car train.\n"
				<< "There appears to be someone who is unconciouss and alone\n\n";

		}
		else if (numCars == 2) {

			cout << "\n*******************************************************************\n"
				<< "**** \t\t Welcome to the Engineer's Room \t\t****\n"
				<< "*******************************************************************\n\n"
				<< "This is the second car in the six car train.\n"
				<< "No people...\n\n"
				<< "But.. there's lots of shiny things and buttons and knobs and flashing lights and COMPUTERS!\n\n";

		}
		else if (numCars == 3) {
			cout << "\n*******************************************************************\n"
				<< "**** \t\t Welcome to the First Main Cabin \t\t****\n"
				<< "*******************************************************************\n\n" 
				<< "There looks like there are two groups of people you can help\n"
				<< "One larger group and one smaller group\n\n";
		}
		else if (numCars == 4) {
			cout << "\n*******************************************************************\n"
				<< "**** \t\t Welcome to the Second Main Cabin \t\t****\n"
				<< "*******************************************************************\n\n" 
				<< "There looks like there are two groups of people you can help\n"
				<< "One larger group and one smaller group\n\n";
		}
		else if (numCars == 5) {
			cout << "\n*******************************************************************\n"
				<< "**** \t\t Welcome to the Third and Last Main Cabin \t\t****\n"
				<< "*******************************************************************\n\n" 
				<< "There looks like there are two groups of people you can help\n"
				<< "One larger group and one smaller group\n\n";
		}
		else if (numCars == 6) {
			cout << "\n*******************************************************************\n"
				<< "**** \t\t Welcome to the Caboose - the last train car \t\t****\n"
				<< "*******************************************************************\n\n"
				<< "It looks like you can jump from the back of the train and live\n"
				<< "No one is saying you won't get hurt, but at least you won't die\n"
				<< "But if you didn't save your wife and kid then you lose the game\n\n";
		}

		// call room functions and other functions necessary for simulation, based on room user is in

		if ((numCars == 1) && (steps < limit)) {

			// call function to complete code below... from DLL class but virtual in Space class
			// function completes actions in room, and returns value for movement (next or prev car)
			// maybe pass steps by reference to increment if need be, and bool flag for finding wife and kids in rooms below
			// menu for room 1, option to point to next or prev or look for kids

			// based on menu choice

			// initialize Space pointer to point to captain quarters room object

			sptr = &obj1;

			// call room function for captain quarters
			// room is passed current step, step limit, current people, and people carry limit
			// function returns current step after moves in room

			steps = sptr->roomFunction(steps, limit, numPeople, peopleCarryLimit);

			// add a space/node for next room

			list1.addNodeTail_1(&head, "Engineer's Room");

			// change cars count

			numCars = 2;

			// get the exit flag from the object, which is set with the menu in the room function

			exitFlag = obj1.getExitFlag();

			// depending on the return from the following function, we must set up an object in our carry Allowance
			// to carry a man

			if (obj1.getAddMan() == 1) {
				Man man1("Captain");
				carryAllow.addMan(man1);
				numPeople += 1;
			}
		}

		// if user is in second car

		else if ((numCars ==2) && (steps < limit)) {
			
			//initialize space pointer

			sptr = &obj2;

			// run room function, returns steps

			steps = sptr->roomFunction(steps, limit, numPeople, peopleCarryLimit);

			// add next room

			list1.addNodeTail_2(&head, "Main Cabin 1");
			numCars = 3;

			// get exit flag

			exitFlag = obj2.getExitFlag();

			// adjust step count limit based on interactions in room

			limit += obj2.getLimitShift();

		}

		// if user is in third car
		else if ((numCars == 3) && (steps < limit)) {
			
			// initialize space pointer
			sptr = &obj3;

			// run room funciton, returns steps

			steps = sptr->roomFunction(steps, limit, numPeople, peopleCarryLimit);
			
			// add next space 
			list1.addNodeTail_2(&head, "Main Cabin 2");
			numCars = 4;

			// get exit flag

			exitFlag = obj3.getExitFlag();
			
			//returns from following functions indicate how many people objects to add
			// to people carry

			if ((obj3.getAddMan() == 1)&& (obj3.getAddChild() == 0)) {
				Man man2("James");
				carryAllow.addMan(man2);
				Woman woman1("Sarah");
				carryAllow.addWoman(woman1);
				numPeople += 2;
			}
			else if (obj3.getAddMan() == 2) {
				Man man2("James");
				carryAllow.addMan(man2);
				Man man3("Samuel");
				carryAllow.addMan(man3);
				Woman woman1("Sarah");
				carryAllow.addWoman(woman1);
				Woman woman2("Ellen");
				carryAllow.addWoman(woman2);
				Child child1("Mikey");
				carryAllow.addChild(child1);
				Child child2("Laura");
				carryAllow.addChild(child2);
				Child child3("Andy");
				carryAllow.addChild(child3);
				numPeople += 7;
			}
			else if ((obj3.getAddMan() == 1) && (obj3.getAddChild() == 3)) {
				Man man2("James");
				carryAllow.addMan(man2);
				Woman woman1("Sarah");
				carryAllow.addWoman(woman1);
				Child child1("Mikey");
				carryAllow.addChild(child1);
				Child child2("Laura");
				carryAllow.addChild(child2);
				Child child3("Andy");
				carryAllow.addChild(child3);
				numPeople += 5;
			}
		}

		// room 4 is a main cabin repeat, code in this if loop is identical to above
		else if ((numCars == 4) && (steps < limit)) {

			sptr = &obj4;
			steps = sptr->roomFunction(steps, limit, numPeople, peopleCarryLimit);
			list1.addNodeTail_3(&head, "Main Cabin 3");
			numCars = 5;
			exitFlag = obj4.getExitFlag();
			if ((obj4.getAddMan() == 1) && (obj4.getAddChild() == 0)) {
				Man man4("Kenny");
				carryAllow.addMan(man4);
				Woman woman3("Erin");
				carryAllow.addWoman(woman3);
				numPeople += 2;
			}
			else if ((obj4.getAddMan() == 1) && (obj4.getAddChild() == 3)) {
				Man man4("Kenny");
				carryAllow.addMan(man4);
				Woman woman3("Britney");
				carryAllow.addWoman(woman3);
				Child child4("Tom");
				carryAllow.addChild(child4);
				Child child5("Jen");
				carryAllow.addChild(child5);
				Child child6("Kip");
				carryAllow.addChild(child6);
				numPeople += 5;
			}
			else if (obj4.getAddMan() == 2) {
				Man man4("Kenny");
				carryAllow.addMan(man4);
				Woman woman3("Erin");
				carryAllow.addWoman(woman3);
				Man man5("Johnny");
				carryAllow.addMan(man5);
				Woman woman4("Peggy");
				carryAllow.addWoman(woman4);
				Child child4("Tom");
				carryAllow.addChild(child4);
				Child child5("Jen");
				carryAllow.addChild(child5);
				Child child6("Kip");
				carryAllow.addChild(child6);
				numPeople += 7;
			}

		}

		// room 5 is a main cabin again, code is almost identical to above except
		// wife and baby are in this cabin, so user win or loss depends on action
		// in this room
		else if ((numCars == 5) && (steps < limit)) {
			//menu for room 1, option to keep moving or look for kids

			sptr = &obj5;
			steps = sptr->roomFunction(steps, limit, numPeople, peopleCarryLimit);
			list1.addNodeTail_4(&head, "Caboose");
			numCars = 6;
			exitFlag = obj5.getExitFlag();

			// win flag is set in the mainCabin_3 class room function if the wife and baby are found
			// and there is space in the people container.

			winFlag = obj5.getWinFlag();
			if ((obj5.getAddChild() == 1)) {
				Child child7("Baby");
				carryAllow.addChild(child7);
				Woman woman5("Leah/Wife");
				carryAllow.addWoman(woman5);
				numPeople += 2;
			}
			else if ((obj5.getAddMan() == 1) && (obj5.getAddChild() == 3)) {
				Man man6("Chris");
				carryAllow.addMan(man6);
				Woman woman5("Carol");
				carryAllow.addWoman(woman5);
				Child child7("Tim");
				carryAllow.addChild(child7);
				Child child8("Jesse");
				carryAllow.addChild(child8);
				Child child9("Kyle");
				carryAllow.addChild(child9);
				numPeople += 5;
			}
			else if (obj5.getAddWoan() == 2) {
				Man man6("Chris");
				carryAllow.addMan(man6);
				Woman woman5("Carol");
				carryAllow.addWoman(woman5);
				Child child10("Baby");
				carryAllow.addChild(child10);
				Woman woman6("Leah");
				carryAllow.addWoman(woman6);
				Child child7("Tim");
				carryAllow.addChild(child7);
				Child child8("Jesse");
				carryAllow.addChild(child8);
				Child child9("Kyle");
				carryAllow.addChild(child9);
				numPeople += 7;



			}

		}

		// last car - caboose
		else if ((numCars == 6) && (steps < limit)) {

			// for testing		cout << "win flag is " << winFlag << endl;
			sptr = &obj6;

			// set win flag in caboose class obj6 for caboose room function reference
			obj6.setWinFlag(winFlag);

			// run room function
			steps = sptr->roomFunction(steps, limit, numPeople, peopleCarryLimit);

			// check exit flag
			exitFlag = sptr->getExitFlag();

			// set numCars to stop loop from repeating
			numCars = 7;
		}
	}

	if (steps >= limit) {
		cout << "\nYou have taken the maximum number of steps and have not jumped from the train.\n\n"
			<< "You lose the game!  Better luck next time!!\n" << endl;
	}

	if (exitFlag == true) {
		return;
	}

	else {
		cout << "Now that the game is ended..." << endl;
	}

	if (numCars > 7) {
		cout << "Last car msg";
	}
	return;
}

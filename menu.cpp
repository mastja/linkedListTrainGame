/******************************************************************************* 
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Source file for Menu class - Save Your Family Train Game -
**			  Final project - CS 162.  This class has the main menu for the program.
**			  This class also has the menu functions for each of the rooms in the program
*******************************************************************************/ 
//menu.cpp


#include "Menu.hpp"
#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

  
/*******************************************************************************
** Start menu function, presents the menu options and takes user input.
	Validates user input and returns menu choice as an integer.
*******************************************************************************/

int Menu::mainMenu(){


// prompt user for input

	cout << "What would you like to do?.\n"
	<< "Enter 1 to play the game.\n"
	<< "Enter 2 to quit.\n";



//validate user input, must be a 1 or 2
// declare variables for validation function

	string choice;
	const string choice1 = "1", choice2 = "2";
	int returnChoice = 0;

// function verifies input is exactly 1 or 2 else asks for user
// to re-enter

	cin >> choice;
	while (cin.fail() || (choice != choice1 &&
		choice != choice2)) {
		cout << "\nNot a valid choice.  Please enter an integer in range.\n\n"
			<< "Enter 1 to play the game.\n"
			<< "Enter 2 to quit.\n";
		cin.clear();
		cin.ignore(180, '\n');
		cin >> choice;
	};

// return user input as integer start menu choice

	if (choice == choice1) {
		returnChoice = 1;
	};

	if (choice == choice2) {
		returnChoice = 2;
	};

	cout << endl;

	return returnChoice;

}

/*******************************************************************************
** captain menu function, presents the menu options when in the Captain's Traincar.
	Validates user input and returns menu choice as an integer.
*******************************************************************************/

int Menu::captainMenu() {


	// prompt user for input

	cout << "What would you like to do?.\n"
		<< "Enter 1 Attempt to wake the person (lose 1 step)\n"
		<< "Enter 2 Carry the person off the train (lose 1 spot in carry allowance; lose 1 step)\n"
		<< "Enter 3 Move to the next traincar\n"
		<< "Enter 4 Take a moment to cry (lose 1 step)\n"
		<< "Enter 5 to quit.\n\n"
		<< "***FYI: If you have already chosen 1 or 2 in this car, choosing either option again will only waste time\n\n"
		<< "What will you do?\n"
		<< ">";



	//validate user input, must be a 1 or 2
	// declare variables for validation function

	string choice;
	const string choice1 = "1", choice2 = "2",
		choice3 = "3", choice4 = "4",
		choice5 = "5";
	int returnChoice = 0;

	// function verifies input is exactly 1, 2, 3, or 4 else asks for user
	// to re-enter

	cin >> choice;
	while (cin.fail() || (choice != choice1 &&
		choice != choice2 &&
		choice != choice3 &&
		choice != choice4 &&
		choice != choice5
		)) {
		cout << "\nNot a valid choice.  Please enter an integer in range.\n\n"
			<< "Enter 1 Attempt to wake the unconciouss person (lose 1 step)\n"
			<< "Enter 2 Carry the unconciouss person off the train (lose 1 spot in carry allowance; lose 1 step)\n"
			<< "Enter 3 Move to the next traincar\n"
			<< "Enter 4 Take a moment to cry (lose 1 step)\n"
			<< "Enter 5 to quit.\n\n"
			<< "***FYI: If you have already chosen 1 or 2 in this car, choosing either option again will only waste time\n\n"
			<< ">";
		cin.clear();
		cin.ignore(180, '\n');
		cin >> choice;
	};

	// return user input as integer start menu choice

	if (choice == choice1) {
		returnChoice = 1;
	};

	if (choice == choice2) {
		returnChoice = 2;
	};

	if (choice == choice3) {
		returnChoice = 3;
	};

	if (choice == choice4) {
		returnChoice = 4;
	};

	if (choice == choice5) {
		returnChoice = 5;
	};

	cout << endl;

	return returnChoice;

}

/*******************************************************************************
** engineer menu function, presents the menu options when in the Engineer's Car.
	Validates user input and returns menu choice as an integer.
*******************************************************************************/

int Menu::engineerMenu() {


	// prompt user for input

	cout << "What would you like to do?.\n"
		<< "Enter 1 Attempt to hack the computer to slow the train (lose 1 step)\n"
		<< "Enter 2 Take a stick and start smashing things in hopes of slowing the train (lose 1 step)\n"
		<< "Enter 3 Move to the next traincar\n"
		<< "Enter 4 Take a moment to cry (lose 1 step)\n"
		<< "Enter 5 to quit.\n"
		<< "\n*** FYI: If you have already chosen 1 or 2 in this car, choosing either option again will only waste time\n\n"
		<< "What will you do?\n"
		<< ">";



	//validate user input, must be a 1 or 2
	// declare variables for validation function

	string choice;
	const string choice1 = "1", choice2 = "2",
		choice3 = "3", choice4 = "4",
		choice5 = "5";
	int returnChoice = 0;

	// function verifies input is exactly 1, 2, 3, or 4 else asks for user
	// to re-enter

	cin >> choice;
	while (cin.fail() || (choice != choice1 &&
		choice != choice2 &&
		choice != choice3 &&
		choice != choice4 &&
		choice != choice5
		)) {
		cout << "\nNot a valid choice.  Please enter an integer in range.\n\n"
			<< "Enter 1 Attempt to hack the computer to slow the train (lose 1 step)\n"
			<< "Enter 2 Take a stick and start smashing things in hopes of slowing the train (lose 1 step)\n"
			<< "Enter 3 Move to the next traincar\n"
			<< "Enter 4 Take a moment to cry (lose 1 step)\n"
			<< "Enter 5 to quit.\n\n"
			<< "*** FYI: If you have already chosen 1 or 2 in this car, choosing either option again will only waste time\n\n"
			<< ">";
		cin.clear();
		cin.ignore(180, '\n');
		cin >> choice;
	};

	// return user input as integer start menu choice

	if (choice == choice1) {
		returnChoice = 1;
	};

	if (choice == choice2) {
		returnChoice = 2;
	};

	if (choice == choice3) {
		returnChoice = 3;
	};

	if (choice == choice4) {
		returnChoice = 4;
	};

	if (choice == choice5) {
		returnChoice = 5;
	};

	cout << endl;

	return returnChoice;

}

/*******************************************************************************
** main cabin menu function, presents the menu options when in the Main Cabin.
	Validates user input and returns menu choice as an integer.
*******************************************************************************/

int Menu::mainCabinMenu() {

	// prompt user for input

	cout << "What would you like to do?.\n"
		<< "Enter 1 Help the small group, and carry anybody they need help with (lose 2 spots in carry allowance; lose 1 step)\n"
		<< "Enter 2 Help the larger group, and carry anybody they need help with(lose 5 spots in carry allowance; lose 1 step)\n"
		<< "Enter 3 Move to the next traincar\n"
		<< "Enter 4 Take a moment to cry (lose 1 step)\n"
		<< "Enter 5 to quit.\n\n"
		<< "***FYI: If you have already chosen 1 or 2 in this car, choosing the same respective option again will only waste time\n\n"
		<< "What will you do?\n"
		<< ">";



	//validate user input, must be a 1 or 2
	// declare variables for validation function

	string choice;
	const string choice1 = "1", choice2 = "2",
		choice3 = "3", choice4 = "4",
		choice5 = "5";
	int returnChoice = 0;

	// function verifies input is exactly 1, 2, 3, or 4 else asks for user
	// to re-enter

	cin >> choice;
	while (cin.fail() || (choice != choice1 &&
		choice != choice2 &&
		choice != choice3 &&
		choice != choice4 &&
		choice != choice5
		)) {
		cout << "\nNot a valid choice.  Please enter an integer in range.\n\n"
			<< "Enter 1 Help the small group, and carry anybody they need help with (lose 2 spots in carry allowance; lose 1 step)\n"
			<< "Enter 2 Help the larger group, and carry anybody they need help with (lose 5 spots in carry allowance; lose 1 step)\n"
			<< "Enter 3 Move to the next traincar\n"
			<< "Enter 4 Take a moment to cry (lose 1 step)\n"
			<< "Enter 5 to quit.\n\n"
			<< "*** FYI : If you have already chosen 1 or 2 in this car, choosing the same respective option again will only waste time\n\n"
			<< ">";
		cin.clear();
		cin.ignore(180, '\n');
		cin >> choice;
	};

	// return user input as integer start menu choice

	if (choice == choice1) {
		returnChoice = 1;
	};

	if (choice == choice2) {
		returnChoice = 2;
	};

	if (choice == choice3) {
		returnChoice = 3;
	};

	if (choice == choice4) {
		returnChoice = 4;
	};

	if (choice == choice5) {
		returnChoice = 5;
	};

	cout << endl;

	return returnChoice;

}

/*******************************************************************************
** caboose menu function, presents the menu options when in the caboose.
	Validates user input and returns menu choice as an integer.
*******************************************************************************/

int Menu::cabooseMenu() {


	// prompt user for input

	cout << "What would you like to do?.\n"
		<< "Enter 1 Jump from the back of the train\n"
		<< "Enter 2 Stay and go down with the ship\n"
		<< "Enter 3 Take a moment to cry (lose 1 step)\n"
		<< "Enter 4 to quit.\n"
		<< "What will you do?\n"
		<< ">";



	//validate user input, must be a 1 or 2
	// declare variables for validation function

	string choice;
	const string choice1 = "1", choice2 = "2",
		choice3 = "3", choice4 = "4";
	int returnChoice = 0;

	// function verifies input is exactly 1, 2, 3, or 4 else asks for user
	// to re-enter

	cin >> choice;
	while (cin.fail() || (choice != choice1 &&
		choice != choice2 &&
		choice != choice3 &&
		choice != choice4
		)) {
		cout << "\nNot a valid choice.  Please enter an integer in range.\n\n"
			<< "Enter 1 Jump from the back of the train\n"
			<< "Enter 2 Stay and go down with the ship\n"
			<< "Enter 3 Take a moment to cry (and lose a step)\n"
			<< "Enter 4 to quit.\n"
			<< ">";
		cin.clear();
		cin.ignore(180, '\n');
		cin >> choice;
	};

	// return user input as integer start menu choice

	if (choice == choice1) {
		returnChoice = 1;
	};

	if (choice == choice2) {
		returnChoice = 2;
	};

	if (choice == choice3) {
		returnChoice = 3;
	};

	if (choice == choice4) {
		returnChoice = 4;
	};

	cout << endl;

	return returnChoice;

}
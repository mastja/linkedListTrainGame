/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Source file for Child class - Save Your Family Train Game -
**			  Final project - CS 162. This class contains the functions to add
**			  people to the arrays that hold them.
*******************************************************************************/

//peopleCarry.cpp

#include"PeopleCarry.hpp"
#include<iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits>
using std::cout;
using std::cin;
using std::endl;
using std::string;
  
// default constructor for PeopleCarry class

PeopleCarry::PeopleCarry(){
	manMax = 10;
	childMax = 10;
	womanMax = 10;

	manArray = new Man[manMax];
	childArray = new Child[childMax];
	womanArray = new Woman[womanMax];

	manCount = 0;
	childCount = 0;
	womanCount = 0;
}


// add Mans function
void PeopleCarry::addMan(Man plusMan){

	// check if Mans are at array capacity
	if (manCount == manMax){
		cout << "You are at carry capacity for men.  You cannot pickup this man";
	}

	else {
		// add one new man
		manArray[manCount] = plusMan;
		manCount++;
//		cout << "Adding a Man\n";
	}


}

// add Childs function

void PeopleCarry::addChild(Child plusChild){
	if (childCount == childMax){
		cout << "You are at carry capacity for children.  You cannot pickup this child";
	}
	else {
		childArray[childCount] = plusChild;
		childCount++;
//		cout << "Adding a Child.\n";
	}

}

// add Womans function

void PeopleCarry::addWoman(Woman plusWoman){
	if (womanCount == womanMax){
		cout << "You are at carry capacity for women.  You cannot pickup this woman";
	}
	else {
		womanArray[womanCount] = plusWoman;
		womanCount++;
//		cout << "Adding a Woman.\n";
	}

}

// get Mans array function

Man *PeopleCarry::getMans(){
	return manArray;
}

// get Childs array function

Child *PeopleCarry::getChilds(){
	return childArray;
}

// get Womans array function

Woman *PeopleCarry::getWomans(){
	return womanArray;
}


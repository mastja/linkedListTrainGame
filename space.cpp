/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Source file for Space class for the Save Your Family Train Game -
**			  Final project - CS 162.  This class has the Space class pointers and pure virtual
**			  function for roomFunction, which runs the room simulation in each
**			  of the derived room classes.  There are also helpers.
*******************************************************************************/

//space.cpp

#include"Space.hpp"
#include <iostream>
#include<string>


bool Space::getExitFlag() {
	return exitFlag1;
}

bool Space::getWinFlag() {
	return winFlag1;
}

void Space::setWinFlag(bool flag) {
	winFlag1 = flag;
}

int Space::getAddMan() {
	return addMan;
}

int Space::getAddWoan() {
	return addWoman;
}

int Space::getAddChild() {
	return addChild;
}
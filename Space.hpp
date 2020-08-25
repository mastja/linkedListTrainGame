/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Header file for Space class for the Save Your Family Train Game -
**			  Final project - CS 162.  This class has the Space class pointers and pure virtual
**			  function for roomFunction, which runs the room simulation in each
**			  of the derived room classes.  There are also helpers.
*******************************************************************************/

//Space.hpp
//Header file for Space class

#ifndef SPACE_HPP
#define SPACE_HPP
#include<string>

struct Space {
		std::string val;
		struct Space* right;
		struct Space* left;
		struct Space* bottom;
		struct Space* top;
		virtual int roomFunction(int steps, int limit, int people, int peopleLimit) = 0;
		bool winFlag1 = false;
		bool exitFlag1 = false;
		int addMan = 0;
		int addWoman = 0;
		int addChild = 0;
		bool getExitFlag();
		bool getWinFlag();
		void setWinFlag(bool flag);
		int getAddMan();
		int getAddWoan();
		int getAddChild();
};

#endif
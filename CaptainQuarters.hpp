/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Source file for CaptainQuarters class - Save Your Family Train Game
**			  Final project - CS 162.  This class has the roomFunction, which
**			  runs the room simulation in this room.  This is a derived class.
**			  Parent class is Space class.
*******************************************************************************/
//CaptainQuarters.hpp

#ifndef CAPTAINQUARTERS_HPP
#define CAPTAINQUARTERS_HPP
#include"Space.hpp"

class CaptainQuarters : public Space {


public:
	int roomFunction(int steps, int limit, int people, int peopleLimit);
};

#endif

/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Header file for Caboose class - Save Your Family Train Game
**			  Final project - CS 162.  This class has the roomFunction, which
**			  runs the room simulation in this room.  This is a derived class.
**			  Parent class is Space class.
*******************************************************************************/
//Caboose.hpp

#ifndef CABOOSE_HPP
#define CABOOSE_HPP
#include"Space.hpp"

class Caboose : public Space {

private:
	bool winFlag2;

public:
	int roomFunction(int steps, int limit, int people, int peopleLimit);
};

#endif

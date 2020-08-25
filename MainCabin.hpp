/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Header file for mainCabin class - Save Your Family Train Game
**			  Final project - CS 162.  This class has the roomFunction, which
**			  runs the room simulation in this room.  This is a derived class.
**			  Parent class is Space class.
*******************************************************************************/
//MainCabin.hpp

#ifndef MAINCABIN_HPP
#define MAINCABIN_HPP
#include"Space.hpp"

class MainCabin : public Space {

public:
	int roomFunction(int steps, int limit, int people, int peopleLimit);
};

#endif

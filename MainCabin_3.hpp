/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Header file for mainCabin_3 class - Save Your Family Train Game
**			  Final project - CS 162.  This class has the roomFunction, which
**			  runs the room simulation in this room.  This is a derived class.
**			  Parent class is Space class.
*******************************************************************************/
//MainCabin_3.hpp

#ifndef MAINCABIN_3_HPP
#define MAINCABIN_3_HPP
#include"Space.hpp"

class MainCabin_3 : public Space {

public:
	int roomFunction(int steps, int limit, int people, int peopleLimit);
};

#endif

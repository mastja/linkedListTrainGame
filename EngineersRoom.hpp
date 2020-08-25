/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Header file for EngineersRoom class - Save Your Family Train Game
**			  Final project - CS 162.  This class has the roomFunction, which
**			  runs the room simulation in this room.  This is a derived class.
**			  Parent class is Space class.
*******************************************************************************/

//EngineersRoom.hpp

#ifndef ENGINEERSROOM_HPP
#define ENGINEERSROOM_HPP
#include"Space.hpp"

class EngineersRoom : public Space {

private:

	int limitShift;

public:
	EngineersRoom();
	int roomFunction(int steps, int limit, int people, int peopleLimit);
	int getLimitShift();
};

#endif

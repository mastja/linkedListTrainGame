/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  People class source file for the Save Your Family Train Game -
**			  Final project - CS 162.  This program create a doubly-linked list
**			  data structure consisting of Space objects.  The people class is a
**			  parent class for the derived man, woman, and child class.
**			  Constructors and protected variables are included.
*******************************************************************************/
//People.cpp

#include"People.hpp"
#include<string>

// People default constructor

People::People(){
	name = " ";
}   

// constructor to set a name for a person

People::People(std::string nameIn) {
	name = nameIn;
}

// returns person name

std::string People::getPeopleName()
{
	return name;
}
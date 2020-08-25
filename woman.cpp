/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Source file for Woman class - Save Your Family Train Game -
**			  Final project - CS 162. This class contains the constructors for the
**			  Woman Class objects
**			  Child of the People parent class.
*******************************************************************************/
//woman.cpp

#include"Woman.hpp"
#include <string>
using std::string;


// Woman default constructor

Woman::Woman():People() {
}

// Woman constructor accepting input 

Woman::Woman(string nameIn) :	People(nameIn) {
	name = nameIn;
}


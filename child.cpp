/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Source file for Child class - Save Your Family Train Game -
**			  Final project - CS 162. This class contains the constructors for the
**			  Child Class objects
**			  Child of the People parent class.
*******************************************************************************/
//child.cpp

#include"Child.hpp"
#include <string>
using std::string;


// Child default constructor

Child::Child():People() {
}

// Child constructor accepting input 

Child::Child(string nameIn) : People(nameIn) {
	name = nameIn;
}
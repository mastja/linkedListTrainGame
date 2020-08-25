/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Header file for Child class - Save Your Family Train Game -
**			  Final project - CS 162. This class contains the constructors for the
**			  Child Class objects
**			  Child of the People parent class.
*******************************************************************************/

//Child.hpp
//Header file for Child class

#ifndef CHILD_HPP
#define CHILD_HPP
#include"People.hpp"
#include<string>

class Child : public People{

public:
	Child();
	Child(std::string nameIn);
};

#endif
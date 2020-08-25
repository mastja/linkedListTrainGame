/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Header file for Woman class - Save Your Family Train Game -
**			  Final project - CS 162. This class contains the constructors for the 
**			  Woman Class objects
**			  Child of the People parent class.
*******************************************************************************/

//Woman.hpp
//Header file for Woman class

#ifndef WOMAN_HPP
#define WOMAN_HPP
#include"People.hpp"
#include<string>

class Woman : public People{

public:
	Woman();
	Woman(std::string nameIn);
};

#endif
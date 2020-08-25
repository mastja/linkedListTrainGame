/******************************************************************************* 
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Header file for Man class - Save Your Family Train Game -
**			  Final project - CS 162. This class contains the constructors for the Man
**			  Class objects
**			  Child of the People parent class.
*******************************************************************************/

//Man.hpp
//Header file for Man class

#ifndef MAN_HPP
#define MAN_HPP
#include"People.hpp"
#include<string>

class Man : public People{

	public:
		Man();
		Man(std::string nameIn);
};

#endif
/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Source file for Man class - Save Your Family Train Game -
**			  Final project - CS 162. This class contains the constructors for the Man
**			  Class objects
**			  Child of the People parent class.
*******************************************************************************/
//Man.cpp

#include"Man.hpp"
#include<string>
using std::string;
  

// Man default constructor

Man::Man():People() {
}

// Man constructor accepting input 

Man::Man(string nameIn) : People(nameIn) {
	name = nameIn;
}

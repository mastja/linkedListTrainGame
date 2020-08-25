/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  People class header file for the Save Your Family Train Game -
**			  Final project - CS 162.  This program create a doubly-linked list
**			  data structure consisting of Space objects.  The people class is a
**			  parent class for the derived man, woman, and child class.
**			  Constructors and protected variables are included.
*******************************************************************************/

//People.hpp
//Header file for People class

#ifndef People_HPP
#define People_HPP
#include<string>


class People
{

protected:
	std::string name;
	int personCount;
	int personMax;

public:
	People();
	People(std::string nameIn);
	std::string getPeopleName();

};
#endif

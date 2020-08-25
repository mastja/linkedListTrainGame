/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Header file for Child class - Save Your Family Train Game -
**			  Final project - CS 162. This class contains the functions to add
**			  people to the arrays that hold them.
*******************************************************************************/


//PeopleCarry.hpp
//Header file for PeopleCarry class

#ifndef PEOPLECARRY_HPP
#define PEOPLECARRY_HPP

#include"People.hpp"
#include"Man.hpp"
#include"Woman.hpp"
#include"Child.hpp"
#include<string>
#include<vector>
#include<iostream>
using std::vector;
using std::string;

class PeopleCarry
	{
	private:
		Man *manArray;
		Child *childArray;
		Woman *womanArray;
		int manMax;
		int childMax;
		int womanMax;
		int manCount;
		int childCount;
		int womanCount;

	public:

		// default constructor
		PeopleCarry();

		// add animal functions
		void addMan(Man newMan);
		void addChild(Child newChild);
		void addWoman(Woman newWoman);

		// get animal array functions
		Man* getMans();
		Child* getChilds();
		Woman* getWomans();
		
};

#endif
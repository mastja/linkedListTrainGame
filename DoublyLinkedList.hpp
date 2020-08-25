/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Header file for Doubly Linked List class - Doubly Linked List -
**			  Lab 6 - CS 162.  This class has the functions which carry out
**			  the addition of linked space and printing of map.  More info on 
**			  each function is in the source file.
*******************************************************************************/

//DoublyLinkedList.hpp
//Header file for DoublyLinkedList class

#ifndef DOUBLYLINKEDLIST_HPP
#define DOUBLYLINKEDLIST_HPP
#include"Space.hpp"
#include <string>
using std::string;

class DoublyLinkedList{

	public:
		Space* head, * tail;
		void addNodeHead (struct Space** headRef, string stringInput);
		void addNodeTail_1(struct Space** headRef, string stringInput);
		void addNodeTail_2(struct Space** headRef, string stringInput);
		void addNodeTail_3(struct Space** headRef, string stringInput);
		void addNodeTail_4(struct Space** headRef, string stringInput);
		void traverseList(Space* Node);
		void printTailValue(Space* Node);
};

#endif
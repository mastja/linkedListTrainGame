/*******************************************************************************
** Author:       Jack Mast
** Date:         August 13, 2019
** Description:  Source file for Doubly Linked List class - Save Your Family Train Game 
**			  Final project - CS 162. This class has the functions which carry out
**			  the adding and initializing new linked space, as well as printing
**			  the map of the existing linked space
*******************************************************************************/

//DoublyLinkedList.hpp

#include"DoublyLinkedList.hpp"
#include "Space.hpp"
#include "MainCabin.hpp"
#include "MainCabin_3.hpp"
#include "CaptainQuarters.hpp"
#include "EngineersRoom.hpp"
#include "Caboose.hpp"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
using std::cout;
using std::string;


/*******************************************************************************
** Add node to head function, this function takes the user entered value and.
	allocates and sets a node to that value.  Then the new node is added to the
	list at the head of the list.
*******************************************************************************/


void DoublyLinkedList::addNodeHead(struct Space** headRef, string stringInput) {

	// allocate a new node
	Space* newNode = new CaptainQuarters();

	// store the value entered by the user in the new node
	newNode->val = stringInput;

	//Mark the next newNode as head
	newNode->right = (*headRef);

	// Mark the previous newNode as NULL
	newNode->left = NULL;

	//

	newNode->top = NULL;
	newNode->bottom = NULL;


	// set previous of head node to newNode unless head node is NULL,
	// indicating list is empty
	if ((*headRef) != NULL) {
		(*headRef)->left = newNode;
	}

	// head reference pointer points to newNode
	(*headRef) = newNode;
}

/*******************************************************************************
** Add node to tail function, this function takes the user entered value and.
	allocates and sets a node to that value.  Then the new node is added to the
	list at the tail of the list.  Instantiates a EngineersRoom object in new node
*******************************************************************************/

void DoublyLinkedList::addNodeTail_1(struct Space** headRef, string stringInput) {

	// allocate a new node
	Space* newNode = new EngineersRoom();

	// set last node point to head pointer
	Space* last = *headRef;

	// store the value entered by the user in the new node
	newNode->val = stringInput;

	// make next node after newNode NULL (node after last)
	newNode->right = NULL;

	// if head node is NULL, list is empty
	if (*headRef == NULL) {

		// set node previous to newNode to NULL
		newNode->left = NULL;

		// set head node to newNode
		*headRef = newNode;

		// break from function, don't continue further
		return;

	}

	// traverse list in reverse
	while (last->right != NULL)

		last = last->right;

	// set last node as newNode
	last->right = newNode;

	// set the previous node to newNode as the last node
	newNode->left = last;

	return;
}

/*******************************************************************************
** Add node to tail function, this function takes the user entered value and.
	allocates and sets a node to that value.  Then the new node is added to the
	list at the tail of the list.  Allocates a main cabin object in new node.
*******************************************************************************/

void DoublyLinkedList::addNodeTail_2(struct Space** headRef, string stringInput) {

	// allocate a new node
	Space* newNode = new MainCabin();

	// set last node point to head pointer
	Space* last = *headRef;

	// store the value entered by the user in the new node
	newNode->val = stringInput;

	// make next node after newNode NULL (node after last)
	newNode->right = NULL;

	// if head node is NULL, list is empty
	if (*headRef == NULL) {

		// set node previous to newNode to NULL
		newNode->left = NULL;

		// set head node to newNode
		*headRef = newNode;

		// break from function, don't continue further
		return;

	}

	// traverse list in reverse
	while (last->right != NULL)

		last = last->right;

	// set last node as newNode
	last->right = newNode;

	// set the previous node to newNode as the last node
	newNode->left = last;

	return;
}

/*******************************************************************************
** Add node to tail function, this function takes the user entered value and.
	allocates and sets a node to that value.  Then the new node is added to the
	list at the tail of the list. Instantiates a main cabin_3 object in new node
*******************************************************************************/

void DoublyLinkedList::addNodeTail_3(struct Space** headRef, string stringInput) {

	// allocate a new node
	Space* newNode = new MainCabin_3();

	// set last node point to head pointer
	Space* last = *headRef;

	// store the value entered by the user in the new node
	newNode->val = stringInput;

	// make next node after newNode NULL (node after last)
	newNode->right = NULL;

	// if head node is NULL, list is empty
	if (*headRef == NULL) {

		// set node previous to newNode to NULL
		newNode->left = NULL;

		// set head node to newNode
		*headRef = newNode;

		// break from function, don't continue further
		return;

	}

	// traverse list in reverse
	while (last->right != NULL)

		last = last->right;

	// set last node as newNode
	last->right = newNode;

	// set the previous node to newNode as the last node
	newNode->left = last;

	return;
}

/*******************************************************************************
** Add node to tail function, this function takes the user entered value and.
	allocates and sets a node to that value.  Then the new node is added to the
	list at the tail of the list. Instantiates a caboos object in new node
*******************************************************************************/

void DoublyLinkedList::addNodeTail_4(struct Space** headRef, string stringInput) {

	// allocate a new node
	Space* newNode = new Caboose();

	// set last node point to head pointer
	Space* last = *headRef;

	// store the value entered by the user in the new node
	newNode->val = stringInput;

	// make next node after newNode NULL (node after last)
	newNode->right = NULL;

	// if head node is NULL, list is empty
	if (*headRef == NULL) {

		// set node previous to newNode to NULL
		newNode->left = NULL;

		// set head node to newNode
		*headRef = newNode;

		// break from function, don't continue further
		return;

	}

	// traverse list in reverse
	while (last->right != NULL)

		last = last->right;

	// set last node as newNode
	last->right = newNode;

	// set the previous node to newNode as the last node
	newNode->left = last;

	return;
}

/*******************************************************************************
** Traverse List function, this function traverses the list of nodes
	and prints the integer values stored.
*******************************************************************************/

void DoublyLinkedList::traverseList(Space* node) {
	Space* last;

	cout << "Here is a visual of the six train cars.  The first car printed represents the leftmost/head\n"
		<< "of the train and the last car printed is the rightmost and tail of the train.\n"
		<< "Your goal is to reach the 6th car, the caboose.  Your position is the farthest\n"
		<< "printed car to the right.  You must keep going to the right to see more cars";
	cout << "\n\n";

	while (node != NULL) {
		cout << "-[" << node->val << "]-";
		last = node;
		node = node->right;
	}

	cout << "\n";
}



/*******************************************************************************
** print tail Value function, this function prints the value of the tail node.
*******************************************************************************/

void DoublyLinkedList::printTailValue(Space* node) {

	//point to last node{}
	Space* last = tail;

	// Traverse list in reverse
	while (node != NULL) {
		last = node;
		node = node->right;
	}

	cout << "\n\nPrinting Value of the Tail Node\n\n";

	// Print last value
	if (last != NULL) {
		cout << last->val << "  ";
	}
}
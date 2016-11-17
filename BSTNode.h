/*******************************************************************************
* Programmer: Ash Mahein                                                      *
* Class: CptS 122; Lab Section 1                                              *
* Programming Assignment: 6                                                   *
* Date: 7/13/16                                                               *
*                                                                             *
* Description: This program reads in a file with english characters and morse *
*              code characters into a BST. It then reads in a file with       *
*              english characters and converts it to morse code using a look  *
*              function.                                                      *
*                                                                             *
* Relevant Formulas: NONE									                  *
* Collaboration: Andy O'Fallon, Rahul Singal.                                 *
* Websites used: Stackoverflow                                                *
******************************************************************************/
#pragma once

#include <iostream> //needed for cout and cin.
#include <string> //needed to use strings.
#include <sstream>
#include <cstdlib> //needed to pause program.
#include <fstream> //needed to read files.
#include <ostream> //needed to write to files.
#include <ios> //needed to input/output.

using namespace::std;


class BSTNode
{
public:
	//constructor
	BSTNode(const char &newText, const string &newCode);

	//destructor
	~BSTNode();

	//setters
	void setNewText(const char &newText);
	void setNewCode(const string &newCode);
	void setPLeft(BSTNode * const &newPLeft);
	void setPRight(BSTNode * const &newPRight);

	//getters
	char getNewText() const;
	string getNewCode() const;
	BSTNode *& getRight()
	{
		return this->pRight;
	}
	BSTNode *& getLeft()
	{
		return this->pLeft;
	}//The & is actually accessing the node and the pointer is actually allowing us to get the address of the pointer pLeft.

private:
	//private data members.
	char englishText;
	string morseCode;
	BSTNode *pLeft;
	BSTNode *pRight;
};

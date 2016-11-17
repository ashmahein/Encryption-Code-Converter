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

#include "BSTNode.h"

class BST
{
public:
	//constructor
	BST();

	//destructor
	~BST();

	//helper function
	void insert(const char &newText, const string &newCode)
	{
		insert(this->pRoot, newText, newCode);
	}

	//helper function
	void inOrderTraversal()
	{
		inOrderTraversal(*&pRoot);
	}

	//helper function. Opens file and reads it into search function.
	void searchTree()
	{
		if (!readInfile.is_open())
		{
			readInfile.open("Convert.txt", ios::in);
			char line, line_s;
			while (!readInfile.eof())
			{
				line = readInfile.get();
				line_s = toupper(line);
				searchTree(this->pRoot, line_s);
			}
		}
		readInfile.close();
	}

private:
	//private data memebers
	fstream readInfile;
	fstream codeInfile;
	BSTNode *pRoot;

	void insert(BSTNode *&pTree, const char &newText, const string &newCode);
	void inOrderTraversal(BSTNode *&pTree);
	void searchTree(BSTNode *&pTree, char upperLine);
};